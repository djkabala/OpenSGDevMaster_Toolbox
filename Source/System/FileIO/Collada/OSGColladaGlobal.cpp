/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                Copyright (C) 2009 by the OpenSG Forum                     *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic ignored "-Wold-style-cast"
#endif

#include "OSGColladaGlobal.h"

#if defined(OSG_WITH_COLLADA) || defined(OSG_DO_DOC)

#include "OSGColladaLog.h"
#include "OSGColladaCOLLADA.h"
#include "OSGColladaElementFactory.h"
#include "OSGColladaOptions.h"
#include "OSGColladaAnimation.h"
#include "OSGNode.h"
#include "OSGFileIOUtils.h"

#include <dom/domInstance_controller.h>
#include <dom/domNode.h>

/*! \class OSG::ColladaGlobal
    This is the entry point for the Collada loader from which the loading
    process is started.
    You can think of it as representing the &lt;COLLADA&gt; tag in a document.
 */

OSG_BEGIN_NAMESPACE

StatElemDesc<StatIntElem> ColladaGlobal::statNGeometryCreated(
    "Collada::NGeometryCreated",
    "Number of OpenSG geometries created by the collada loader",
    StatElemDescBase::RESET_ALWAYS);
StatElemDesc<StatIntElem> ColladaGlobal::statNGeometryUsed(
    "Collada::NGeometryUsed",
    "Number of OpenSG geometries in the scene created by the collada loader",
    StatElemDescBase::RESET_ALWAYS);
StatElemDesc<StatIntElem> ColladaGlobal::statNMaterialCreated(
    "Collada::NMaterialCreated",
    "Number of OpenSG materials created by the collada loader",
    StatElemDescBase::RESET_ALWAYS);
StatElemDesc<StatIntElem> ColladaGlobal::statNMaterialUsed(
    "Collada::NMaterialUsed",
    "Number of OpenSG materials in the scene created by the collada loader",
    StatElemDescBase::RESET_ALWAYS);
StatElemDesc<StatIntElem> ColladaGlobal::statNLightCreated(
    "Collada::NLightCreated",
    "Number of OpenSG materials created by the collada loader",
    StatElemDescBase::RESET_ALWAYS);
StatElemDesc<StatIntElem> ColladaGlobal::statNLightUsed(
    "Collada::NLightUsed",
    "Number of OpenSG materials in the scene created by the collada loader",
    StatElemDescBase::RESET_ALWAYS);
StatElemDesc<StatIntElem> ColladaGlobal::statNTextureCreated(
    "Collada::NTextureCreated",
    "Number of OpenSG textures created by the collada loader",
    StatElemDescBase::RESET_ALWAYS);
StatElemDesc<StatIntElem> ColladaGlobal::statNTextureUsed(
    "Collada::NTextureUsed",
    "Number of OpenSG textures in the scene created by the collada loader",
    StatElemDescBase::RESET_ALWAYS);

StatCollector *
ColladaGlobal::getStatCollector(void)
{
    return _statColl;
}

void
ColladaGlobal::setStatCollector(StatCollector *statColl)
{
    _statColl = statColl;
}

ColladaGlobalTransitPtr
ColladaGlobal::create(void)
{
    return ColladaGlobalTransitPtr(new Self);
}

/*! Read the file \a fileName using a new DAE database.
 */
NodeTransitPtr
ColladaGlobal::read(std::istream &is, const std::string &fileName)
{
    NodeTransitPtr rootN;

    _pathHandler.clearPathList();
    _pathHandler.clearBaseFile();

    _pathHandler.push_frontCurrentDir(                );
    _pathHandler.setBaseFile         (fileName.c_str());

    _docPath = fileName;

    _dae = new DAE;
    _dae->open(fileName.c_str());

    rootN = doRead();

    _docPath. clear();
    _dae    ->clear();
    delete _dae;
    _dae = NULL;

    return rootN;
}

/*! Read the file \a fileName from the existing DAE database \a dae.
    The given \a fileName must already be loaded into the DAE.

    Useful if multiple documents are stored in one DAE database or
    if an application needs to access the DAE itself to extract
    data that is not processed by the loader.
 */
NodeTransitPtr
ColladaGlobal::read(DAE *dae, const std::string &fileName)
{
    NodeTransitPtr rootN(NULL);

    _pathHandler.clearPathList();
    _pathHandler.clearBaseFile();

    _pathHandler.push_frontCurrentDir(                );
    _pathHandler.setBaseFile         (fileName.c_str());

    _docPath = fileName;
    _dae     = dae;

    rootN = doRead();

    _docPath.clear();
    _dae = NULL;

    return rootN;
}

/*! Read the file \a fileName using a new DAE database. This
	method differs from the other read method in that it will 
	also read in other elements not directly associated with 
	the scene heirarchy (e.g. <library_animations>, etc.)
	based on the options set.

    Useful if multiple documents are stored in one DAE database or
    if an application needs to access the DAE itself to extract
    data that is not processed by the loader.
 */
ColladaGlobal::FCPtrStore 
ColladaGlobal::readAll( std::istream &is, const std::string &fileName)
{
	NodeTransitPtr rootN;
	getOptions()->setCreateNameAttachments(true);
	getOptions()->setFlattenNodeXForms(true);
    _pathHandler.clearPathList();
    _pathHandler.clearBaseFile();

    _pathHandler.push_frontCurrentDir(                );
    _pathHandler.setBaseFile         (fileName.c_str());

    _docPath = fileName;

    _dae = new DAE;
    _dae->open(fileName.c_str());

    rootN = doRead();
	_FCStore.insert(rootN);

	if(getOptions()->getReadAnimations())
	{ // read animations here
		FCPtrStore animations = readAnimations();
		_FCStore.insert(animations.begin(), animations.end());
	}

	// now handle controllers...
	for(UInt32 i(0); i < _controllers.size(); i++)
	{
	    handleController(_controllers[i]);
	}

    _docPath. clear();
    _dae    ->clear();
    delete _dae;
    _dae = NULL;

    return _FCStore;

}

void
ColladaGlobal::addElement(ColladaElement *elem)
{
    _elemStore.push_back(elem);
}

ColladaGlobal::ColladaGlobal(void)
    : Inherited   ()
    , _elemStore  ()
    , _options    ()
    , _statColl   (NULL)
    , _pathHandler()
    , _docPath    ()
    , _dae        (NULL)
    , _rootN      (NULL)
{
}

ColladaGlobal::~ColladaGlobal(void)
{
    delete _dae;
    _dae = NULL;
}

/*! Read the file stored in _docPath from the DAE _dae.
 */
NodeTransitPtr
ColladaGlobal::doRead(void)
{
    NodeTransitPtr rootN(NULL);

    if(_statColl == NULL)
        _statColl = new StatCollector;

    // force creation of the statistic elements
    _statColl->getElem(statNGeometryCreated, true);
    _statColl->getElem(statNGeometryUsed,    true);
    _statColl->getElem(statNMaterialCreated, true);
    _statColl->getElem(statNMaterialUsed,    true);
    _statColl->getElem(statNLightCreated, true);
    _statColl->getElem(statNLightUsed,    true);
    _statColl->getElem(statNTextureCreated,  true);
    _statColl->getElem(statNTextureUsed,     true);

    _statColl->reset  (StatElemDescBase::RESET_ALWAYS);

    domCOLLADARef docRoot = _dae->getRoot(_docPath);

    if(docRoot != NULL)
    {
        ColladaCOLLADARefPtr colCOL = dynamic_pointer_cast<ColladaCOLLADA>(
            ColladaElementFactory::the()->create(docRoot, this));

        colCOL->read();
    }
    else
    {
        SWARNING << "ColladaGlobal::read: collada-dom failed to obtain "
                 << "document root for file [" << _docPath << "]."
                 << std::endl;
    }
    
    rootN = _rootN;

    _elemStore.clear();

#ifndef OSG_COLLADA_SILENT
    std::string statString;
    _statColl->putToString(statString);

    OSG_COLLADA_LOG(("ColladaGlobal:read: Statistics\n%s\n",
                     statString.c_str()));
#endif // OSG_COLLADA_SILENT

    return rootN;
}

ColladaGlobal::FCPtrStore ColladaGlobal::readAnimations(void)
{
	FCPtrStore animations;
	
	domCOLLADARef docRoot = _dae->getRoot(_docPath);

    if(docRoot != NULL)
    {
		domLibrary_animations_Array libAnims = docRoot->getLibrary_animations_array();
		for(UInt32 i(0); i < libAnims.getCount(); i++)
		{
			domAnimation_Array anims = libAnims[i]->getAnimation_array();
			for(UInt32 j(0); j < anims.getCount(); j++)
			{

				ColladaAnimationRefPtr colAnim = dynamic_pointer_cast<ColladaAnimation>(
								ColladaElementFactory::the()->create(anims[j], this));
				
				colAnim->read();
			}
		}
    }
	return animations;
}
void ColladaGlobal::handleController(ControllerPair controller)
{
	/*FileIONodeFinder finder;
	//already has material initialized, now worry about the skeleton
	SkeletonUnrecPtr theSkeleton = Skeleton::create();
	domInstance_controllerRef instCtrl = controller.first;
	domInstance_controller::domSkeleton_Array skels = instCtrl->getSkeleton_array();
	for(UInt32 i(0); i < skels.getCount(); i++)
	{	// for now, just building the skeleton
		domNodeRef skelNode = daeSafeCast<domNode>(skels[i]->getValue().getElement());

		if(skelNode->getType() == NODETYPE_JOINT)
		{
			std::string skelNodeName = skelNode->getName();
			finder.setSearchName(skelNodeName);
			finder.traverse(_rootN);
			const std::vector<Node *> skelNodes = finder.getFoundNamedNodes();
			if(skelNodes.size() > 0)
			{
				JointUnrecPtr rootJoint = Joint::create();
				Matrixr currentXform = skelNodes[0]->getToWorld();
				rootJoint->setRelativeTransformation(currentXform);
				rootJoint->setBindRelativeTransformation(currentXform);
				NodeUnrecPtr currentNode = skelNodes[0];
				for(UInt32 i(0); i < currentNode->getNChildren(); i++)
				{
					createJointsRec(rootJoint,currentNode->getChild(i));
				}

				theSkeleton->pushToRootJoints(rootJoint);

			}
		}
	}

	controller.second->setSkeleton(theSkeleton);
	*/
	return;
}

void ColladaGlobal::createJointsRec(JointUnrecPtr parentJoint, NodeUnrecPtr childNode)
{
	// create a child joint
	/*JointUnrecPtr childJoint = Joint::create();
	Matrixr curInv;
	parentJoint->getBindRelativeTransformation().inverse(curInv);
	curInv.mult(childNode->getToWorld());
	
	childJoint->setRelativeTransformation(curInv);
	childJoint->setBindRelativeTransformation(curInv);
	parentJoint->pushToChildJoints(childJoint);
		// create joints for all the children nodes
	for(UInt32 i(0); i < childNode->getNChildren(); i++)
	{
		createJointsRec(childJoint, childNode->getChild(i));
	}*/
}

void ColladaGlobal::addController(ControllerPair controller)
{
	_controllers.push_back(controller);
}

OSG_END_NAMESPACE

#endif // OSG_WITH_COLLADA

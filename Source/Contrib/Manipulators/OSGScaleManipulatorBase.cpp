/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class ScaleManipulator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGGeometry.h"                // UniformGeometries Class
#include "OSGNode.h"                    // TransUniformNode Class
#include "OSGMaterial.h"                // MaterialUniform Class

#include "OSGScaleManipulatorBase.h"
#include "OSGScaleManipulator.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ScaleManipulator
    The ScaleHandle is used for scaling objects. It consist of three axis which can be picked and scaled and one center box to scale freely in 3D.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            ScaleManipulatorBase::_sfUniform
    Uniform/Non-uniform scaling.
*/

/*! \var Geometry *      ScaleManipulatorBase::_mfUniformGeometries
    
*/

/*! \var Node *          ScaleManipulatorBase::_sfTransUniformNode
    The node for the uniform-handle transform
*/

/*! \var Material *      ScaleManipulatorBase::_sfMaterialUniform
    material for the uniform-axis geometry
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ScaleManipulator *>::_type("ScaleManipulatorPtr", "ManipulatorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ScaleManipulator *)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ScaleManipulatorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "uniform",
        "Uniform/Non-uniform scaling.\n",
        UniformFieldId, UniformFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScaleManipulator::editHandleUniform),
        static_cast<FieldGetMethodSig >(&ScaleManipulator::getHandleUniform));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecGeometryPtr::Description(
        MFUnrecGeometryPtr::getClassType(),
        "uniformGeometries",
        "",
        UniformGeometriesFieldId, UniformGeometriesFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScaleManipulator::editHandleUniformGeometries),
        static_cast<FieldGetMethodSig >(&ScaleManipulator::getHandleUniformGeometries));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecNodePtr::Description(
        SFUnrecNodePtr::getClassType(),
        "transUniformNode",
        "The node for the uniform-handle transform\n",
        TransUniformNodeFieldId, TransUniformNodeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScaleManipulator::editHandleTransUniformNode),
        static_cast<FieldGetMethodSig >(&ScaleManipulator::getHandleTransUniformNode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecMaterialPtr::Description(
        SFUnrecMaterialPtr::getClassType(),
        "materialUniform",
        "material for the uniform-axis geometry\n",
        MaterialUniformFieldId, MaterialUniformFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScaleManipulator::editHandleMaterialUniform),
        static_cast<FieldGetMethodSig >(&ScaleManipulator::getHandleMaterialUniform));

    oType.addInitialDesc(pDesc);
}


ScaleManipulatorBase::TypeObject ScaleManipulatorBase::_type(
    ScaleManipulatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ScaleManipulatorBase::createEmptyLocal),
    ScaleManipulator::initMethod,
    ScaleManipulator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ScaleManipulator::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ScaleManipulator\"\n"
    "\tparent=\"Manipulator\"\n"
    "\tlibrary=\"ContribGUI\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"true\"\n"
    ">\n"
    "The ScaleHandle is used for scaling objects. It consist of three axis which can be picked and scaled and one center box to scale freely in 3D.\n"
    "    <Field\n"
    "       name=\"uniform\"\n"
    "       type=\"bool\"\n"
    "       category=\"data\"\n"
    "       cardinality=\"single\"\n"
    "       visibility=\"external\"\n"
    "       access=\"public\"\n"
    "       defaultValue=\"false\"\n"
    "       >\n"
    "      Uniform/Non-uniform scaling.\n"
    "    </Field>\n"
    "\t<Field\n"
    "\t\tname=\"uniformGeometries\"\n"
    "\t\ttype=\"Geometry\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"transUniformNode\"\n"
    "\t\ttype=\"Node\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe node for the uniform-handle transform\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"materialUniform\"\n"
    "\t\ttype=\"Material\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tmaterial for the uniform-axis geometry\n"
    "\t</Field>\n"
    "</FieldContainer>\n"
    "\n",
    "The ScaleHandle is used for scaling objects. It consist of three axis which can be picked and scaled and one center box to scale freely in 3D.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ScaleManipulatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &ScaleManipulatorBase::getType(void) const
{
    return _type;
}

UInt32 ScaleManipulatorBase::getContainerSize(void) const
{
    return sizeof(ScaleManipulator);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ScaleManipulatorBase::editSFUniform(void)
{
    editSField(UniformFieldMask);

    return &_sfUniform;
}

const SFBool *ScaleManipulatorBase::getSFUniform(void) const
{
    return &_sfUniform;
}


//! Get the ScaleManipulator::_mfUniformGeometries field.
const MFUnrecGeometryPtr *ScaleManipulatorBase::getMFUniformGeometries(void) const
{
    return &_mfUniformGeometries;
}

MFUnrecGeometryPtr  *ScaleManipulatorBase::editMFUniformGeometries(void)
{
    editMField(UniformGeometriesFieldMask, _mfUniformGeometries);

    return &_mfUniformGeometries;
}

//! Get the ScaleManipulator::_sfTransUniformNode field.
const SFUnrecNodePtr *ScaleManipulatorBase::getSFTransUniformNode(void) const
{
    return &_sfTransUniformNode;
}

SFUnrecNodePtr      *ScaleManipulatorBase::editSFTransUniformNode(void)
{
    editSField(TransUniformNodeFieldMask);

    return &_sfTransUniformNode;
}

//! Get the ScaleManipulator::_sfMaterialUniform field.
const SFUnrecMaterialPtr *ScaleManipulatorBase::getSFMaterialUniform(void) const
{
    return &_sfMaterialUniform;
}

SFUnrecMaterialPtr  *ScaleManipulatorBase::editSFMaterialUniform(void)
{
    editSField(MaterialUniformFieldMask);

    return &_sfMaterialUniform;
}



void ScaleManipulatorBase::pushToUniformGeometries(Geometry * const value)
{
    editMField(UniformGeometriesFieldMask, _mfUniformGeometries);

    _mfUniformGeometries.push_back(value);
}

void ScaleManipulatorBase::assignUniformGeometries(const MFUnrecGeometryPtr &value)
{
    MFUnrecGeometryPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecGeometryPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<ScaleManipulator *>(this)->clearUniformGeometries();

    while(elemIt != elemEnd)
    {
        this->pushToUniformGeometries(*elemIt);

        ++elemIt;
    }
}

void ScaleManipulatorBase::removeFromUniformGeometries(UInt32 uiIndex)
{
    if(uiIndex < _mfUniformGeometries.size())
    {
        editMField(UniformGeometriesFieldMask, _mfUniformGeometries);

        _mfUniformGeometries.erase(uiIndex);
    }
}

void ScaleManipulatorBase::removeObjFromUniformGeometries(Geometry * const value)
{
    Int32 iElemIdx = _mfUniformGeometries.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(UniformGeometriesFieldMask, _mfUniformGeometries);

        _mfUniformGeometries.erase(iElemIdx);
    }
}
void ScaleManipulatorBase::clearUniformGeometries(void)
{
    editMField(UniformGeometriesFieldMask, _mfUniformGeometries);


    _mfUniformGeometries.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 ScaleManipulatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (UniformFieldMask & whichField))
    {
        returnValue += _sfUniform.getBinSize();
    }
    if(FieldBits::NoField != (UniformGeometriesFieldMask & whichField))
    {
        returnValue += _mfUniformGeometries.getBinSize();
    }
    if(FieldBits::NoField != (TransUniformNodeFieldMask & whichField))
    {
        returnValue += _sfTransUniformNode.getBinSize();
    }
    if(FieldBits::NoField != (MaterialUniformFieldMask & whichField))
    {
        returnValue += _sfMaterialUniform.getBinSize();
    }

    return returnValue;
}

void ScaleManipulatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (UniformFieldMask & whichField))
    {
        _sfUniform.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UniformGeometriesFieldMask & whichField))
    {
        _mfUniformGeometries.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TransUniformNodeFieldMask & whichField))
    {
        _sfTransUniformNode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaterialUniformFieldMask & whichField))
    {
        _sfMaterialUniform.copyToBin(pMem);
    }
}

void ScaleManipulatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (UniformFieldMask & whichField))
    {
        editSField(UniformFieldMask);
        _sfUniform.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UniformGeometriesFieldMask & whichField))
    {
        editMField(UniformGeometriesFieldMask, _mfUniformGeometries);
        _mfUniformGeometries.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TransUniformNodeFieldMask & whichField))
    {
        editSField(TransUniformNodeFieldMask);
        _sfTransUniformNode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaterialUniformFieldMask & whichField))
    {
        editSField(MaterialUniformFieldMask);
        _sfMaterialUniform.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ScaleManipulatorTransitPtr ScaleManipulatorBase::createLocal(BitVector bFlags)
{
    ScaleManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ScaleManipulator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ScaleManipulatorTransitPtr ScaleManipulatorBase::createDependent(BitVector bFlags)
{
    ScaleManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ScaleManipulator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ScaleManipulatorTransitPtr ScaleManipulatorBase::create(void)
{
    ScaleManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ScaleManipulator>(tmpPtr);
    }

    return fc;
}

ScaleManipulator *ScaleManipulatorBase::createEmptyLocal(BitVector bFlags)
{
    ScaleManipulator *returnValue;

    newPtr<ScaleManipulator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ScaleManipulator *ScaleManipulatorBase::createEmpty(void)
{
    ScaleManipulator *returnValue;

    newPtr<ScaleManipulator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr ScaleManipulatorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ScaleManipulator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ScaleManipulator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ScaleManipulatorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ScaleManipulator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ScaleManipulator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ScaleManipulatorBase::shallowCopy(void) const
{
    ScaleManipulator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ScaleManipulator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ScaleManipulatorBase::ScaleManipulatorBase(void) :
    Inherited(),
    _sfUniform                (bool(false)),
    _mfUniformGeometries      (),
    _sfTransUniformNode       (NULL),
    _sfMaterialUniform        (NULL)
{
}

ScaleManipulatorBase::ScaleManipulatorBase(const ScaleManipulatorBase &source) :
    Inherited(source),
    _sfUniform                (source._sfUniform                ),
    _mfUniformGeometries      (),
    _sfTransUniformNode       (NULL),
    _sfMaterialUniform        (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

ScaleManipulatorBase::~ScaleManipulatorBase(void)
{
}

void ScaleManipulatorBase::onCreate(const ScaleManipulator *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ScaleManipulator *pThis = static_cast<ScaleManipulator *>(this);

        MFUnrecGeometryPtr::const_iterator UniformGeometriesIt  =
            source->_mfUniformGeometries.begin();
        MFUnrecGeometryPtr::const_iterator UniformGeometriesEnd =
            source->_mfUniformGeometries.end  ();

        while(UniformGeometriesIt != UniformGeometriesEnd)
        {
            pThis->pushToUniformGeometries(*UniformGeometriesIt);

            ++UniformGeometriesIt;
        }

        pThis->setTransUniformNode(source->getTransUniformNode());

        pThis->setMaterialUniform(source->getMaterialUniform());
    }
}

GetFieldHandlePtr ScaleManipulatorBase::getHandleUniform         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfUniform,
             this->getType().getFieldDesc(UniformFieldId),
             const_cast<ScaleManipulatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScaleManipulatorBase::editHandleUniform        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfUniform,
             this->getType().getFieldDesc(UniformFieldId),
             this));


    editSField(UniformFieldMask);

    return returnValue;
}

GetFieldHandlePtr ScaleManipulatorBase::getHandleUniformGeometries (void) const
{
    MFUnrecGeometryPtr::GetHandlePtr returnValue(
        new  MFUnrecGeometryPtr::GetHandle(
             &_mfUniformGeometries,
             this->getType().getFieldDesc(UniformGeometriesFieldId),
             const_cast<ScaleManipulatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScaleManipulatorBase::editHandleUniformGeometries(void)
{
    MFUnrecGeometryPtr::EditHandlePtr returnValue(
        new  MFUnrecGeometryPtr::EditHandle(
             &_mfUniformGeometries,
             this->getType().getFieldDesc(UniformGeometriesFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&ScaleManipulator::pushToUniformGeometries,
                    static_cast<ScaleManipulator *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&ScaleManipulator::removeFromUniformGeometries,
                    static_cast<ScaleManipulator *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&ScaleManipulator::removeObjFromUniformGeometries,
                    static_cast<ScaleManipulator *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&ScaleManipulator::clearUniformGeometries,
                    static_cast<ScaleManipulator *>(this)));

    editMField(UniformGeometriesFieldMask, _mfUniformGeometries);

    return returnValue;
}

GetFieldHandlePtr ScaleManipulatorBase::getHandleTransUniformNode (void) const
{
    SFUnrecNodePtr::GetHandlePtr returnValue(
        new  SFUnrecNodePtr::GetHandle(
             &_sfTransUniformNode,
             this->getType().getFieldDesc(TransUniformNodeFieldId),
             const_cast<ScaleManipulatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScaleManipulatorBase::editHandleTransUniformNode(void)
{
    SFUnrecNodePtr::EditHandlePtr returnValue(
        new  SFUnrecNodePtr::EditHandle(
             &_sfTransUniformNode,
             this->getType().getFieldDesc(TransUniformNodeFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ScaleManipulator::setTransUniformNode,
                    static_cast<ScaleManipulator *>(this), _1));

    editSField(TransUniformNodeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ScaleManipulatorBase::getHandleMaterialUniform (void) const
{
    SFUnrecMaterialPtr::GetHandlePtr returnValue(
        new  SFUnrecMaterialPtr::GetHandle(
             &_sfMaterialUniform,
             this->getType().getFieldDesc(MaterialUniformFieldId),
             const_cast<ScaleManipulatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScaleManipulatorBase::editHandleMaterialUniform(void)
{
    SFUnrecMaterialPtr::EditHandlePtr returnValue(
        new  SFUnrecMaterialPtr::EditHandle(
             &_sfMaterialUniform,
             this->getType().getFieldDesc(MaterialUniformFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ScaleManipulator::setMaterialUniform,
                    static_cast<ScaleManipulator *>(this), _1));

    editSField(MaterialUniformFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void ScaleManipulatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ScaleManipulator *pThis = static_cast<ScaleManipulator *>(this);

    pThis->execSync(static_cast<ScaleManipulator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ScaleManipulatorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ScaleManipulator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ScaleManipulator *>(pRefAspect),
                  dynamic_cast<const ScaleManipulator *>(this));

    return returnValue;
}
#endif

void ScaleManipulatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ScaleManipulator *>(this)->clearUniformGeometries();

    static_cast<ScaleManipulator *>(this)->setTransUniformNode(NULL);

    static_cast<ScaleManipulator *>(this)->setMaterialUniform(NULL);


}


OSG_END_NAMESPACE

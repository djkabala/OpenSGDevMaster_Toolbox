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

#ifndef _OSGCOLLADAINSTANCECONTROLLER_H_
#define _OSGCOLLADAINSTANCECONTROLLER_H_

#include "OSGConfig.h"

#ifdef OSG_WITH_COLLADA

#include "OSGColladaInstanceElement.h"
#include "OSGColladaController.h"
#include "OSGColladaInstanceMaterial.h"
#include "OSGColladaElementFactoryHelper.h"

#include <dom/domController.h>

OSG_BEGIN_NAMESPACE

class OSG_FILEIO_DLLMAPPING ColladaInstanceController
    : public ColladaInstanceElement
{
    /*==========================  PUBLIC  =================================*/
  public:
    /*---------------------------------------------------------------------*/
    /*! \name Types                                                        */
    /*! \{                                                                 */

    typedef ColladaInstanceElement  Inherited;
    typedef ColladaInstanceController Self;

    OSG_GEN_INTERNAL_MEMOBJPTR(ColladaInstanceController);

	// map material symbol to material instance
    typedef std::map<std::string,
                     ColladaInstanceMaterialRefPtr>  MaterialMap;
    typedef MaterialMap::iterator                    MaterialMapIt;
    typedef MaterialMap::const_iterator              MaterialMapConstIt;

	typedef domInstance_controller::domSkeleton_Array Skeleton;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Create                                                       */
    /*! \{                                                                 */

    static ColladaElementTransitPtr
        create(daeElement *elem, ColladaGlobal *global); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Reading                                                      */
    /*! \{                                                                 */

    virtual void  read   (void                  );
    virtual Node *process(ColladaElement *parent);

	const MaterialMap       &getMaterialMap  (void) const;
	const Skeleton			&getSkeleton	 (void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Access                                                       */
    /*! \{                                                                 */

    virtual ColladaController *getTargetElem   (void) const;
    virtual daeElement      *getTargetDOMElem(void) const;



    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:
    /*---------------------------------------------------------------------*/
    /*! \name Constructors/Destructor                                      */
    /*! \{                                                                 */
    
             ColladaInstanceController(daeElement *elem, ColladaGlobal *global);
    virtual ~ColladaInstanceController(void                                   );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/

    static ColladaElementRegistrationHelper _regHelper;

	MaterialMap _matMap;
	Skeleton _skeleton;

};

OSG_GEN_MEMOBJPTR(ColladaInstanceController);

OSG_END_NAMESPACE

// #include "OSGColladaInstanceController.inl"

#endif // OSG_WITH_COLLADA

#endif // _OSGCOLLADAINSTANCECONTROLLER_H_
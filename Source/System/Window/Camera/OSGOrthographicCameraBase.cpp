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
 **     class OrthographicCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEORTHOGRAPHICCAMERAINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGOrthographicCameraBase.h"
#include "OSGOrthographicCamera.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::OrthographicCamera
    A perspective camera with a symmetric frustum.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          OrthographicCameraBase::_sfVerticalSize
    The vertical size of the camera box, in world units.
*/

/*! \var Real32          OrthographicCameraBase::_sfAspect
    The aspect ratio (i.e. width / height) of a pixel.
*/


void OrthographicCameraBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "verticalSize",
        "The vertical size of the camera box, in world units.\n",
        VerticalSizeFieldId, VerticalSizeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&OrthographicCameraBase::editHandleVerticalSize),
        reinterpret_cast<FieldGetMethodSig >(&OrthographicCameraBase::getHandleVerticalSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "aspect",
        "The aspect ratio (i.e. width / height) of a pixel.\n",
        AspectFieldId, AspectFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&OrthographicCameraBase::editHandleAspect),
        reinterpret_cast<FieldGetMethodSig >(&OrthographicCameraBase::getHandleAspect));

    oType.addInitialDesc(pDesc);
}


OrthographicCameraBase::TypeObject OrthographicCameraBase::_type(
    OrthographicCameraBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &OrthographicCameraBase::createEmpty,
    OrthographicCamera::initMethod,
    (InitalInsertDescFunc) &OrthographicCameraBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"OrthographicCamera\"\n"
    "\tparent=\"Camera\"\n"
    "\tlibrary=\"Window\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "A perspective camera with a symmetric frustum.\n"
    "\t<Field\n"
    "\t\tname=\"verticalSize\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe vertical size of the camera box, in world units.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"aspect\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "                defaultValue=\"1\"\n"
    "\t>\n"
    "\tThe aspect ratio (i.e. width / height) of a pixel.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A perspective camera with a symmetric frustum.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &OrthographicCameraBase::getType(void)
{
    return _type;
}

const FieldContainerType &OrthographicCameraBase::getType(void) const
{
    return _type;
}

UInt32 OrthographicCameraBase::getContainerSize(void) const
{
    return sizeof(OrthographicCamera);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *OrthographicCameraBase::editSFVerticalSize(void)
{
    editSField(VerticalSizeFieldMask);

    return &_sfVerticalSize;
}

const SFReal32 *OrthographicCameraBase::getSFVerticalSize(void) const
{
    return &_sfVerticalSize;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *OrthographicCameraBase::getSFVerticalSize   (void)
{
    return this->editSFVerticalSize   ();
}
#endif

SFReal32 *OrthographicCameraBase::editSFAspect(void)
{
    editSField(AspectFieldMask);

    return &_sfAspect;
}

const SFReal32 *OrthographicCameraBase::getSFAspect(void) const
{
    return &_sfAspect;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *OrthographicCameraBase::getSFAspect         (void)
{
    return this->editSFAspect         ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 OrthographicCameraBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VerticalSizeFieldMask & whichField))
    {
        returnValue += _sfVerticalSize.getBinSize();
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        returnValue += _sfAspect.getBinSize();
    }

    return returnValue;
}

void OrthographicCameraBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VerticalSizeFieldMask & whichField))
    {
        _sfVerticalSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        _sfAspect.copyToBin(pMem);
    }
}

void OrthographicCameraBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VerticalSizeFieldMask & whichField))
    {
        _sfVerticalSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        _sfAspect.copyFromBin(pMem);
    }
}

//! create a new instance of the class
OrthographicCameraPtr OrthographicCameraBase::create(void)
{
    OrthographicCameraPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<OrthographicCamera::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
OrthographicCameraPtr OrthographicCameraBase::createEmpty(void)
{
    OrthographicCameraPtr returnValue;

    newPtr<OrthographicCamera>(returnValue);

    return returnValue;
}

FieldContainerPtr OrthographicCameraBase::shallowCopy(void) const
{
    OrthographicCameraPtr returnValue;

    newPtr(returnValue, dynamic_cast<const OrthographicCamera *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

OrthographicCameraBase::OrthographicCameraBase(void) :
    Inherited(),
    _sfVerticalSize           (),
    _sfAspect                 (Real32(1))
{
}

OrthographicCameraBase::OrthographicCameraBase(const OrthographicCameraBase &source) :
    Inherited(source),
    _sfVerticalSize           (source._sfVerticalSize           ),
    _sfAspect                 (source._sfAspect                 )
{
}


/*-------------------------- destructors ----------------------------------*/

OrthographicCameraBase::~OrthographicCameraBase(void)
{
}


SFReal32::GetHandlePtr OrthographicCameraBase::getHandleVerticalSize    (void)
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfVerticalSize, 
             this->getType().getFieldDesc(VerticalSizeFieldId)));

    return returnValue;
}

SFReal32::EditHandlePtr OrthographicCameraBase::editHandleVerticalSize   (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfVerticalSize, 
             this->getType().getFieldDesc(VerticalSizeFieldId)));

    editSField(VerticalSizeFieldMask);

    return returnValue;
}

SFReal32::GetHandlePtr OrthographicCameraBase::getHandleAspect          (void)
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfAspect, 
             this->getType().getFieldDesc(AspectFieldId)));

    return returnValue;
}

SFReal32::EditHandlePtr OrthographicCameraBase::editHandleAspect         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfAspect, 
             this->getType().getFieldDesc(AspectFieldId)));

    editSField(AspectFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void OrthographicCameraBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<OrthographicCameraBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr OrthographicCameraBase::createAspectCopy(void) const
{
    OrthographicCameraPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const OrthographicCamera *>(this));

    return returnValue;
}
#endif

void OrthographicCameraBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<OrthographicCameraPtr>::_type("OrthographicCameraPtr", "CameraPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(OrthographicCameraPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, OrthographicCameraPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, OrthographicCameraPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
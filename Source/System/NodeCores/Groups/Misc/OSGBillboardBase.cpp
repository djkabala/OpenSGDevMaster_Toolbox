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
 **     class Billboard!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBILLBOARDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGBillboardBase.h"
#include "OSGBillboard.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Billboard
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec3f           BillboardBase::_sfAxisOfRotation
    
*/

/*! \var bool            BillboardBase::_sfFocusOnCamera
    
*/

/*! \var bool            BillboardBase::_sfAlignToScreen
    
*/

/*! \var Real32          BillboardBase::_sfMinAngle
    
*/

/*! \var Real32          BillboardBase::_sfMaxAngle
    
*/


void BillboardBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "axisOfRotation",
        "",
        AxisOfRotationFieldId, AxisOfRotationFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BillboardBase::editHandleAxisOfRotation),
        static_cast<FieldGetMethodSig >(&BillboardBase::getHandleAxisOfRotation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "focusOnCamera",
        "",
        FocusOnCameraFieldId, FocusOnCameraFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BillboardBase::editHandleFocusOnCamera),
        static_cast<FieldGetMethodSig >(&BillboardBase::getHandleFocusOnCamera));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "alignToScreen",
        "",
        AlignToScreenFieldId, AlignToScreenFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BillboardBase::editHandleAlignToScreen),
        static_cast<FieldGetMethodSig >(&BillboardBase::getHandleAlignToScreen));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "minAngle",
        "",
        MinAngleFieldId, MinAngleFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BillboardBase::editHandleMinAngle),
        static_cast<FieldGetMethodSig >(&BillboardBase::getHandleMinAngle));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "maxAngle",
        "",
        MaxAngleFieldId, MaxAngleFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BillboardBase::editHandleMaxAngle),
        static_cast<FieldGetMethodSig >(&BillboardBase::getHandleMaxAngle));

    oType.addInitialDesc(pDesc);
}


BillboardBase::TypeObject BillboardBase::_type(
    BillboardBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &BillboardBase::createEmpty,
    Billboard::initMethod,
    Billboard::exitMethod,
    (InitalInsertDescFunc) &BillboardBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Billboard\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"axisOfRotation\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0.f, 1.f, 0.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"focusOnCamera\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"alignToScreen\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"minAngle\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0.0f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"maxAngle\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"-1.0f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BillboardBase::getType(void)
{
    return _type;
}

const FieldContainerType &BillboardBase::getType(void) const
{
    return _type;
}

UInt32 BillboardBase::getContainerSize(void) const
{
    return sizeof(Billboard);
}

/*------------------------- decorator get ------------------------------*/


SFVec3f *BillboardBase::editSFAxisOfRotation(void)
{
    editSField(AxisOfRotationFieldMask);

    return &_sfAxisOfRotation;
}

const SFVec3f *BillboardBase::getSFAxisOfRotation(void) const
{
    return &_sfAxisOfRotation;
}

#ifdef OSG_1_GET_COMPAT
SFVec3f             *BillboardBase::getSFAxisOfRotation (void)
{
    return this->editSFAxisOfRotation ();
}
#endif

SFBool *BillboardBase::editSFFocusOnCamera(void)
{
    editSField(FocusOnCameraFieldMask);

    return &_sfFocusOnCamera;
}

const SFBool *BillboardBase::getSFFocusOnCamera(void) const
{
    return &_sfFocusOnCamera;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BillboardBase::getSFFocusOnCamera  (void)
{
    return this->editSFFocusOnCamera  ();
}
#endif

SFBool *BillboardBase::editSFAlignToScreen(void)
{
    editSField(AlignToScreenFieldMask);

    return &_sfAlignToScreen;
}

const SFBool *BillboardBase::getSFAlignToScreen(void) const
{
    return &_sfAlignToScreen;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BillboardBase::getSFAlignToScreen  (void)
{
    return this->editSFAlignToScreen  ();
}
#endif

SFReal32 *BillboardBase::editSFMinAngle(void)
{
    editSField(MinAngleFieldMask);

    return &_sfMinAngle;
}

const SFReal32 *BillboardBase::getSFMinAngle(void) const
{
    return &_sfMinAngle;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *BillboardBase::getSFMinAngle       (void)
{
    return this->editSFMinAngle       ();
}
#endif

SFReal32 *BillboardBase::editSFMaxAngle(void)
{
    editSField(MaxAngleFieldMask);

    return &_sfMaxAngle;
}

const SFReal32 *BillboardBase::getSFMaxAngle(void) const
{
    return &_sfMaxAngle;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *BillboardBase::getSFMaxAngle       (void)
{
    return this->editSFMaxAngle       ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 BillboardBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AxisOfRotationFieldMask & whichField))
    {
        returnValue += _sfAxisOfRotation.getBinSize();
    }
    if(FieldBits::NoField != (FocusOnCameraFieldMask & whichField))
    {
        returnValue += _sfFocusOnCamera.getBinSize();
    }
    if(FieldBits::NoField != (AlignToScreenFieldMask & whichField))
    {
        returnValue += _sfAlignToScreen.getBinSize();
    }
    if(FieldBits::NoField != (MinAngleFieldMask & whichField))
    {
        returnValue += _sfMinAngle.getBinSize();
    }
    if(FieldBits::NoField != (MaxAngleFieldMask & whichField))
    {
        returnValue += _sfMaxAngle.getBinSize();
    }

    return returnValue;
}

void BillboardBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AxisOfRotationFieldMask & whichField))
    {
        _sfAxisOfRotation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FocusOnCameraFieldMask & whichField))
    {
        _sfFocusOnCamera.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlignToScreenFieldMask & whichField))
    {
        _sfAlignToScreen.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MinAngleFieldMask & whichField))
    {
        _sfMinAngle.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaxAngleFieldMask & whichField))
    {
        _sfMaxAngle.copyToBin(pMem);
    }
}

void BillboardBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AxisOfRotationFieldMask & whichField))
    {
        _sfAxisOfRotation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FocusOnCameraFieldMask & whichField))
    {
        _sfFocusOnCamera.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlignToScreenFieldMask & whichField))
    {
        _sfAlignToScreen.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MinAngleFieldMask & whichField))
    {
        _sfMinAngle.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaxAngleFieldMask & whichField))
    {
        _sfMaxAngle.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BillboardTransitPtr BillboardBase::create(void)
{
    BillboardTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<Billboard>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
BillboardPtr BillboardBase::createEmpty(void)
{
    BillboardPtr returnValue;

    newPtr<Billboard>(returnValue);

    return returnValue;
}

FieldContainerTransitPtr BillboardBase::shallowCopy(void) const
{
    BillboardPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Billboard *>(this));

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

BillboardBase::BillboardBase(void) :
    Inherited(),
    _sfAxisOfRotation         (Vec3f(0.f, 1.f, 0.f)),
    _sfFocusOnCamera          (bool(true)),
    _sfAlignToScreen          (bool(false)),
    _sfMinAngle               (Real32(0.0f)),
    _sfMaxAngle               (Real32(-1.0f))
{
}

BillboardBase::BillboardBase(const BillboardBase &source) :
    Inherited(source),
    _sfAxisOfRotation         (source._sfAxisOfRotation         ),
    _sfFocusOnCamera          (source._sfFocusOnCamera          ),
    _sfAlignToScreen          (source._sfAlignToScreen          ),
    _sfMinAngle               (source._sfMinAngle               ),
    _sfMaxAngle               (source._sfMaxAngle               )
{
}


/*-------------------------- destructors ----------------------------------*/

BillboardBase::~BillboardBase(void)
{
}


GetFieldHandlePtr BillboardBase::getHandleAxisOfRotation  (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfAxisOfRotation, 
             this->getType().getFieldDesc(AxisOfRotationFieldId)));

    return returnValue;
}

EditFieldHandlePtr BillboardBase::editHandleAxisOfRotation (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfAxisOfRotation, 
             this->getType().getFieldDesc(AxisOfRotationFieldId)));

    editSField(AxisOfRotationFieldMask);

    return returnValue;
}

GetFieldHandlePtr BillboardBase::getHandleFocusOnCamera   (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfFocusOnCamera, 
             this->getType().getFieldDesc(FocusOnCameraFieldId)));

    return returnValue;
}

EditFieldHandlePtr BillboardBase::editHandleFocusOnCamera  (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfFocusOnCamera, 
             this->getType().getFieldDesc(FocusOnCameraFieldId)));

    editSField(FocusOnCameraFieldMask);

    return returnValue;
}

GetFieldHandlePtr BillboardBase::getHandleAlignToScreen   (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfAlignToScreen, 
             this->getType().getFieldDesc(AlignToScreenFieldId)));

    return returnValue;
}

EditFieldHandlePtr BillboardBase::editHandleAlignToScreen  (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfAlignToScreen, 
             this->getType().getFieldDesc(AlignToScreenFieldId)));

    editSField(AlignToScreenFieldMask);

    return returnValue;
}

GetFieldHandlePtr BillboardBase::getHandleMinAngle        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMinAngle, 
             this->getType().getFieldDesc(MinAngleFieldId)));

    return returnValue;
}

EditFieldHandlePtr BillboardBase::editHandleMinAngle       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMinAngle, 
             this->getType().getFieldDesc(MinAngleFieldId)));

    editSField(MinAngleFieldMask);

    return returnValue;
}

GetFieldHandlePtr BillboardBase::getHandleMaxAngle        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMaxAngle, 
             this->getType().getFieldDesc(MaxAngleFieldId)));

    return returnValue;
}

EditFieldHandlePtr BillboardBase::editHandleMaxAngle       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMaxAngle, 
             this->getType().getFieldDesc(MaxAngleFieldId)));

    editSField(MaxAngleFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void BillboardBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<BillboardBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr BillboardBase::createAspectCopy(void) const
{
    BillboardPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Billboard *>(this));

    return returnValue;
}
#endif

void BillboardBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BillboardPtr>::_type("BillboardPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(BillboardPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, 
                    BillboardPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrSField, 
                         BillboardPtr, 
                         RecordedRefCounts,
                         0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, 
                    BillboardPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrMField, 
                         BillboardPtr, 
                         RecordedRefCounts,
                         0);

OSG_END_NAMESPACE

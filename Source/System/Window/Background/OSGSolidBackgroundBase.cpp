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
 **     class SolidBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGSolidBackgroundBase.h"
#include "OSGSolidBackground.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SolidBackground
    \ingroup GrpSystemWindowBackgrounds

    A single colored background, see \ref PageSystemWindowBackgroundSolid for a
    description.

    The color of the background is given by the _sfColor field.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Color3r         SolidBackgroundBase::_sfColor
    The background color.
*/

/*! \var Real32          SolidBackgroundBase::_sfAlpha
    Alpha value (to allow transparent clears).
*/


void SolidBackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFColor3r::Description(
        SFColor3r::getClassType(),
        "color",
        "The background color.\n",
        ColorFieldId, ColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SolidBackground::editHandleColor),
        static_cast<FieldGetMethodSig >(&SolidBackground::getHandleColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "alpha",
        "Alpha value (to allow transparent clears).\n",
        AlphaFieldId, AlphaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SolidBackground::editHandleAlpha),
        static_cast<FieldGetMethodSig >(&SolidBackground::getHandleAlpha));

    oType.addInitialDesc(pDesc);
}


SolidBackgroundBase::TypeObject SolidBackgroundBase::_type(
    SolidBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SolidBackgroundBase::createEmptyLocal),
    SolidBackground::initMethod,
    SolidBackground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SolidBackgroundBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SolidBackground\"\n"
    "\tparent=\"Background\"\n"
    "\tlibrary=\"Window\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A single colored background, see \\ref PageSystemWindowBackgroundSolid for a\n"
    "description.\n"
    "\n"
    "The color of the background is given by the _sfColor field.\n"
    "\t<Field\n"
    "\t\tname=\"color\"\n"
    "\t\ttype=\"Color3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe background color.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"alpha\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tAlpha value (to allow transparent clears).\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A single colored background, see \\ref PageSystemWindowBackgroundSolid for a\n"
    "description.\n"
    "\n"
    "The color of the background is given by the _sfColor field.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SolidBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &SolidBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 SolidBackgroundBase::getContainerSize(void) const
{
    return sizeof(SolidBackground);
}

/*------------------------- decorator get ------------------------------*/


SFColor3r *SolidBackgroundBase::editSFColor(void)
{
    editSField(ColorFieldMask);

    return &_sfColor;
}

const SFColor3r *SolidBackgroundBase::getSFColor(void) const
{
    return &_sfColor;
}


SFReal32 *SolidBackgroundBase::editSFAlpha(void)
{
    editSField(AlphaFieldMask);

    return &_sfAlpha;
}

const SFReal32 *SolidBackgroundBase::getSFAlpha(void) const
{
    return &_sfAlpha;
}






/*------------------------------ access -----------------------------------*/

UInt32 SolidBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        returnValue += _sfAlpha.getBinSize();
    }

    return returnValue;
}

void SolidBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyToBin(pMem);
    }
}

void SolidBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SolidBackgroundTransitPtr SolidBackgroundBase::createLocal(BitVector bFlags)
{
    SolidBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SolidBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SolidBackgroundTransitPtr SolidBackgroundBase::create(void)
{
    SolidBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SolidBackground>(tmpPtr);
    }

    return fc;
}

SolidBackground *SolidBackgroundBase::createEmptyLocal(BitVector bFlags)
{
    SolidBackground *returnValue;

    newPtr<SolidBackground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SolidBackground *SolidBackgroundBase::createEmpty(void)
{
    SolidBackground *returnValue;

    newPtr<SolidBackground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SolidBackgroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SolidBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SolidBackground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SolidBackgroundBase::shallowCopy(void) const
{
    SolidBackground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SolidBackground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SolidBackgroundBase::SolidBackgroundBase(void) :
    Inherited(),
    _sfColor                  (),
    _sfAlpha                  (Real32(1.f))
{
}

SolidBackgroundBase::SolidBackgroundBase(const SolidBackgroundBase &source) :
    Inherited(source),
    _sfColor                  (source._sfColor                  ),
    _sfAlpha                  (source._sfAlpha                  )
{
}


/*-------------------------- destructors ----------------------------------*/

SolidBackgroundBase::~SolidBackgroundBase(void)
{
}


GetFieldHandlePtr SolidBackgroundBase::getHandleColor           (void) const
{
    SFColor3r::GetHandlePtr returnValue(
        new  SFColor3r::GetHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr SolidBackgroundBase::editHandleColor          (void)
{
    SFColor3r::EditHandlePtr returnValue(
        new  SFColor3r::EditHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId)));


    editSField(ColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr SolidBackgroundBase::getHandleAlpha           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfAlpha,
             this->getType().getFieldDesc(AlphaFieldId)));

    return returnValue;
}

EditFieldHandlePtr SolidBackgroundBase::editHandleAlpha          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfAlpha,
             this->getType().getFieldDesc(AlphaFieldId)));


    editSField(AlphaFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SolidBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SolidBackground *pThis = static_cast<SolidBackground *>(this);

    pThis->execSync(static_cast<SolidBackground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SolidBackgroundBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SolidBackground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SolidBackground *>(pRefAspect),
                  dynamic_cast<const SolidBackground *>(this));

    return returnValue;
}
#endif

void SolidBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SolidBackground *>::_type("SolidBackgroundPtr", "BackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SolidBackground *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SolidBackground *,
                           0);


OSG_END_NAMESPACE

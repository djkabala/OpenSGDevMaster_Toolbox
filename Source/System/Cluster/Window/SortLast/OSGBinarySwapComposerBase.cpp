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
 **     class BinarySwapComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBINARYSWAPCOMPOSERINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGBinarySwapComposerBase.h"
#include "OSGBinarySwapComposer.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BinarySwapComposer
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            BinarySwapComposerBase::_sfShort
    
*/

/*! \var bool            BinarySwapComposerBase::_sfAlpha
    
*/

/*! \var UInt32          BinarySwapComposerBase::_sfTileSize
    
*/


void BinarySwapComposerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "short",
        "",
        ShortFieldId, ShortFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BinarySwapComposerBase::editHandleShort),
        static_cast<FieldGetMethodSig >(&BinarySwapComposerBase::getHandleShort));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "alpha",
        "",
        AlphaFieldId, AlphaFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BinarySwapComposerBase::editHandleAlpha),
        static_cast<FieldGetMethodSig >(&BinarySwapComposerBase::getHandleAlpha));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "tileSize",
        "",
        TileSizeFieldId, TileSizeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BinarySwapComposerBase::editHandleTileSize),
        static_cast<FieldGetMethodSig >(&BinarySwapComposerBase::getHandleTileSize));

    oType.addInitialDesc(pDesc);
}


BinarySwapComposerBase::TypeObject BinarySwapComposerBase::_type(
    BinarySwapComposerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &BinarySwapComposerBase::createEmpty,
    BinarySwapComposer::initMethod,
    BinarySwapComposer::exitMethod,
    (InitalInsertDescFunc) &BinarySwapComposerBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"BinarySwapComposer\"\n"
    "\tparent=\"ImageComposer\"\n"
    "\tlibrary=\"Cluster\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"short\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"alpha\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"tileSize\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"44\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BinarySwapComposerBase::getType(void)
{
    return _type;
}

const FieldContainerType &BinarySwapComposerBase::getType(void) const
{
    return _type;
}

UInt32 BinarySwapComposerBase::getContainerSize(void) const
{
    return sizeof(BinarySwapComposer);
}

/*------------------------- decorator get ------------------------------*/


SFBool *BinarySwapComposerBase::editSFShort(void)
{
    editSField(ShortFieldMask);

    return &_sfShort;
}

const SFBool *BinarySwapComposerBase::getSFShort(void) const
{
    return &_sfShort;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BinarySwapComposerBase::getSFShort          (void)
{
    return this->editSFShort          ();
}
#endif

SFBool *BinarySwapComposerBase::editSFAlpha(void)
{
    editSField(AlphaFieldMask);

    return &_sfAlpha;
}

const SFBool *BinarySwapComposerBase::getSFAlpha(void) const
{
    return &_sfAlpha;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BinarySwapComposerBase::getSFAlpha          (void)
{
    return this->editSFAlpha          ();
}
#endif

SFUInt32 *BinarySwapComposerBase::editSFTileSize(void)
{
    editSField(TileSizeFieldMask);

    return &_sfTileSize;
}

const SFUInt32 *BinarySwapComposerBase::getSFTileSize(void) const
{
    return &_sfTileSize;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *BinarySwapComposerBase::getSFTileSize       (void)
{
    return this->editSFTileSize       ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 BinarySwapComposerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        returnValue += _sfShort.getBinSize();
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        returnValue += _sfAlpha.getBinSize();
    }
    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        returnValue += _sfTileSize.getBinSize();
    }

    return returnValue;
}

void BinarySwapComposerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        _sfTileSize.copyToBin(pMem);
    }
}

void BinarySwapComposerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        _sfTileSize.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BinarySwapComposerTransitPtr BinarySwapComposerBase::create(void)
{
    BinarySwapComposerTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<BinarySwapComposer>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
BinarySwapComposerPtr BinarySwapComposerBase::createEmpty(void)
{
    BinarySwapComposerPtr returnValue;

    newPtr<BinarySwapComposer>(returnValue);

    return returnValue;
}

FieldContainerTransitPtr BinarySwapComposerBase::shallowCopy(void) const
{
    BinarySwapComposerPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BinarySwapComposer *>(this));

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

BinarySwapComposerBase::BinarySwapComposerBase(void) :
    Inherited(),
    _sfShort                  (bool(true)),
    _sfAlpha                  (bool(false)),
    _sfTileSize               (UInt32(44))
{
}

BinarySwapComposerBase::BinarySwapComposerBase(const BinarySwapComposerBase &source) :
    Inherited(source),
    _sfShort                  (source._sfShort                  ),
    _sfAlpha                  (source._sfAlpha                  ),
    _sfTileSize               (source._sfTileSize               )
{
}


/*-------------------------- destructors ----------------------------------*/

BinarySwapComposerBase::~BinarySwapComposerBase(void)
{
}


GetFieldHandlePtr BinarySwapComposerBase::getHandleShort           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfShort, 
             this->getType().getFieldDesc(ShortFieldId)));

    return returnValue;
}

EditFieldHandlePtr BinarySwapComposerBase::editHandleShort          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfShort, 
             this->getType().getFieldDesc(ShortFieldId)));

    editSField(ShortFieldMask);

    return returnValue;
}

GetFieldHandlePtr BinarySwapComposerBase::getHandleAlpha           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfAlpha, 
             this->getType().getFieldDesc(AlphaFieldId)));

    return returnValue;
}

EditFieldHandlePtr BinarySwapComposerBase::editHandleAlpha          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfAlpha, 
             this->getType().getFieldDesc(AlphaFieldId)));

    editSField(AlphaFieldMask);

    return returnValue;
}

GetFieldHandlePtr BinarySwapComposerBase::getHandleTileSize        (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfTileSize, 
             this->getType().getFieldDesc(TileSizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr BinarySwapComposerBase::editHandleTileSize       (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfTileSize, 
             this->getType().getFieldDesc(TileSizeFieldId)));

    editSField(TileSizeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void BinarySwapComposerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<BinarySwapComposerBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr BinarySwapComposerBase::createAspectCopy(void) const
{
    BinarySwapComposerPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const BinarySwapComposer *>(this));

    return returnValue;
}
#endif

void BinarySwapComposerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BinarySwapComposerPtr>::_type("BinarySwapComposerPtr", "ImageComposerPtr");
#endif


OSG_END_NAMESPACE

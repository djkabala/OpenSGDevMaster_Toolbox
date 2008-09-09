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
 **     class TileCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGTileCameraDecoratorBase.h"
#include "OSGTileCameraDecorator.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TileCameraDecorator
    \ingroup GrpSystemWindowCameraDecorators

    The OSG::TileCameraDecorator for selecting only a part of a virtual large
    image, see \ref
    PageSystemWindowCameraDecoratorsTile for a description.

    The borders of the tile are defined by the _sfLeft, _sfRight, _sfBottom and
    _sfTop Fields. The size of the full image is defined by the _sfFullWidth and
    _sfFullHeight Fields.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          TileCameraDecoratorBase::_sfLeft
    The left border of the selected tile.
*/

/*! \var Real32          TileCameraDecoratorBase::_sfRight
    The right border of the selected tile.
*/

/*! \var Real32          TileCameraDecoratorBase::_sfBottom
    The bottom border of the selected tile.
*/

/*! \var Real32          TileCameraDecoratorBase::_sfTop
    The top border of the selected tile.
*/

/*! \var UInt32          TileCameraDecoratorBase::_sfFullWidth
    The width of the full image this is a tile of.
*/

/*! \var UInt32          TileCameraDecoratorBase::_sfFullHeight
    The height of the full image this is a tile of.
*/


void TileCameraDecoratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "left",
        "The left border of the selected tile.\n",
        LeftFieldId, LeftFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TileCameraDecorator::editHandleLeft),
        static_cast<FieldGetMethodSig >(&TileCameraDecorator::getHandleLeft));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "right",
        "The right border of the selected tile.\n",
        RightFieldId, RightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TileCameraDecorator::editHandleRight),
        static_cast<FieldGetMethodSig >(&TileCameraDecorator::getHandleRight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "bottom",
        "The bottom border of the selected tile.\n",
        BottomFieldId, BottomFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TileCameraDecorator::editHandleBottom),
        static_cast<FieldGetMethodSig >(&TileCameraDecorator::getHandleBottom));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "top",
        "The top border of the selected tile.\n",
        TopFieldId, TopFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TileCameraDecorator::editHandleTop),
        static_cast<FieldGetMethodSig >(&TileCameraDecorator::getHandleTop));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "fullWidth",
        "The width of the full image this is a tile of.\n",
        FullWidthFieldId, FullWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TileCameraDecorator::editHandleFullWidth),
        static_cast<FieldGetMethodSig >(&TileCameraDecorator::getHandleFullWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "fullHeight",
        "The height of the full image this is a tile of.\n",
        FullHeightFieldId, FullHeightFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TileCameraDecorator::editHandleFullHeight),
        static_cast<FieldGetMethodSig >(&TileCameraDecorator::getHandleFullHeight));

    oType.addInitialDesc(pDesc);
}


TileCameraDecoratorBase::TypeObject TileCameraDecoratorBase::_type(
    TileCameraDecoratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TileCameraDecoratorBase::createEmptyLocal),
    TileCameraDecorator::initMethod,
    TileCameraDecorator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TileCameraDecoratorBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TileCameraDecorator\"\n"
    "\tparent=\"CameraDecorator\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowCameraDecorators\n"
    "\n"
    "The OSG::TileCameraDecorator for selecting only a part of a virtual large\n"
    "image, see \\ref\n"
    "PageSystemWindowCameraDecoratorsTile for a description.\n"
    "\n"
    "The borders of the tile are defined by the _sfLeft, _sfRight, _sfBottom and\n"
    "_sfTop Fields. The size of the full image is defined by the _sfFullWidth and\n"
    "_sfFullHeight Fields.\n"
    "\t<Field\n"
    "\t\tname=\"left\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe left border of the selected tile.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"right\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe right border of the selected tile.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"bottom\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe bottom border of the selected tile.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"top\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe top border of the selected tile.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"fullWidth\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe width of the full image this is a tile of.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"fullHeight\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe height of the full image this is a tile of.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowCameraDecorators\n"
    "\n"
    "The OSG::TileCameraDecorator for selecting only a part of a virtual large\n"
    "image, see \\ref\n"
    "PageSystemWindowCameraDecoratorsTile for a description.\n"
    "\n"
    "The borders of the tile are defined by the _sfLeft, _sfRight, _sfBottom and\n"
    "_sfTop Fields. The size of the full image is defined by the _sfFullWidth and\n"
    "_sfFullHeight Fields.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TileCameraDecoratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &TileCameraDecoratorBase::getType(void) const
{
    return _type;
}

UInt32 TileCameraDecoratorBase::getContainerSize(void) const
{
    return sizeof(TileCameraDecorator);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *TileCameraDecoratorBase::editSFLeft(void)
{
    editSField(LeftFieldMask);

    return &_sfLeft;
}

const SFReal32 *TileCameraDecoratorBase::getSFLeft(void) const
{
    return &_sfLeft;
}


SFReal32 *TileCameraDecoratorBase::editSFRight(void)
{
    editSField(RightFieldMask);

    return &_sfRight;
}

const SFReal32 *TileCameraDecoratorBase::getSFRight(void) const
{
    return &_sfRight;
}


SFReal32 *TileCameraDecoratorBase::editSFBottom(void)
{
    editSField(BottomFieldMask);

    return &_sfBottom;
}

const SFReal32 *TileCameraDecoratorBase::getSFBottom(void) const
{
    return &_sfBottom;
}


SFReal32 *TileCameraDecoratorBase::editSFTop(void)
{
    editSField(TopFieldMask);

    return &_sfTop;
}

const SFReal32 *TileCameraDecoratorBase::getSFTop(void) const
{
    return &_sfTop;
}


SFUInt32 *TileCameraDecoratorBase::editSFFullWidth(void)
{
    editSField(FullWidthFieldMask);

    return &_sfFullWidth;
}

const SFUInt32 *TileCameraDecoratorBase::getSFFullWidth(void) const
{
    return &_sfFullWidth;
}


SFUInt32 *TileCameraDecoratorBase::editSFFullHeight(void)
{
    editSField(FullHeightFieldMask);

    return &_sfFullHeight;
}

const SFUInt32 *TileCameraDecoratorBase::getSFFullHeight(void) const
{
    return &_sfFullHeight;
}






/*------------------------------ access -----------------------------------*/

UInt32 TileCameraDecoratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        returnValue += _sfLeft.getBinSize();
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        returnValue += _sfRight.getBinSize();
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        returnValue += _sfBottom.getBinSize();
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        returnValue += _sfTop.getBinSize();
    }
    if(FieldBits::NoField != (FullWidthFieldMask & whichField))
    {
        returnValue += _sfFullWidth.getBinSize();
    }
    if(FieldBits::NoField != (FullHeightFieldMask & whichField))
    {
        returnValue += _sfFullHeight.getBinSize();
    }

    return returnValue;
}

void TileCameraDecoratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FullWidthFieldMask & whichField))
    {
        _sfFullWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FullHeightFieldMask & whichField))
    {
        _sfFullHeight.copyToBin(pMem);
    }
}

void TileCameraDecoratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FullWidthFieldMask & whichField))
    {
        _sfFullWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FullHeightFieldMask & whichField))
    {
        _sfFullHeight.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TileCameraDecoratorTransitPtr TileCameraDecoratorBase::createLocal(BitVector bFlags)
{
    TileCameraDecoratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TileCameraDecorator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TileCameraDecoratorTransitPtr TileCameraDecoratorBase::create(void)
{
    TileCameraDecoratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TileCameraDecorator>(tmpPtr);
    }

    return fc;
}

TileCameraDecorator *TileCameraDecoratorBase::createEmptyLocal(BitVector bFlags)
{
    TileCameraDecorator *returnValue;

    newPtr<TileCameraDecorator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TileCameraDecorator *TileCameraDecoratorBase::createEmpty(void)
{
    TileCameraDecorator *returnValue;

    newPtr<TileCameraDecorator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TileCameraDecoratorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TileCameraDecorator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TileCameraDecorator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TileCameraDecoratorBase::shallowCopy(void) const
{
    TileCameraDecorator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TileCameraDecorator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TileCameraDecoratorBase::TileCameraDecoratorBase(void) :
    Inherited(),
    _sfLeft                   (Real32(0)),
    _sfRight                  (Real32(1)),
    _sfBottom                 (Real32(0)),
    _sfTop                    (Real32(1)),
    _sfFullWidth              (UInt32(0)),
    _sfFullHeight             (UInt32(0))
{
}

TileCameraDecoratorBase::TileCameraDecoratorBase(const TileCameraDecoratorBase &source) :
    Inherited(source),
    _sfLeft                   (source._sfLeft                   ),
    _sfRight                  (source._sfRight                  ),
    _sfBottom                 (source._sfBottom                 ),
    _sfTop                    (source._sfTop                    ),
    _sfFullWidth              (source._sfFullWidth              ),
    _sfFullHeight             (source._sfFullHeight             )
{
}


/*-------------------------- destructors ----------------------------------*/

TileCameraDecoratorBase::~TileCameraDecoratorBase(void)
{
}


GetFieldHandlePtr TileCameraDecoratorBase::getHandleLeft            (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfLeft,
             this->getType().getFieldDesc(LeftFieldId)));

    return returnValue;
}

EditFieldHandlePtr TileCameraDecoratorBase::editHandleLeft           (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfLeft,
             this->getType().getFieldDesc(LeftFieldId)));


    editSField(LeftFieldMask);

    return returnValue;
}

GetFieldHandlePtr TileCameraDecoratorBase::getHandleRight           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfRight,
             this->getType().getFieldDesc(RightFieldId)));

    return returnValue;
}

EditFieldHandlePtr TileCameraDecoratorBase::editHandleRight          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfRight,
             this->getType().getFieldDesc(RightFieldId)));


    editSField(RightFieldMask);

    return returnValue;
}

GetFieldHandlePtr TileCameraDecoratorBase::getHandleBottom          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfBottom,
             this->getType().getFieldDesc(BottomFieldId)));

    return returnValue;
}

EditFieldHandlePtr TileCameraDecoratorBase::editHandleBottom         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfBottom,
             this->getType().getFieldDesc(BottomFieldId)));


    editSField(BottomFieldMask);

    return returnValue;
}

GetFieldHandlePtr TileCameraDecoratorBase::getHandleTop             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfTop,
             this->getType().getFieldDesc(TopFieldId)));

    return returnValue;
}

EditFieldHandlePtr TileCameraDecoratorBase::editHandleTop            (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfTop,
             this->getType().getFieldDesc(TopFieldId)));


    editSField(TopFieldMask);

    return returnValue;
}

GetFieldHandlePtr TileCameraDecoratorBase::getHandleFullWidth       (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfFullWidth,
             this->getType().getFieldDesc(FullWidthFieldId)));

    return returnValue;
}

EditFieldHandlePtr TileCameraDecoratorBase::editHandleFullWidth      (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfFullWidth,
             this->getType().getFieldDesc(FullWidthFieldId)));


    editSField(FullWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr TileCameraDecoratorBase::getHandleFullHeight      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfFullHeight,
             this->getType().getFieldDesc(FullHeightFieldId)));

    return returnValue;
}

EditFieldHandlePtr TileCameraDecoratorBase::editHandleFullHeight     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfFullHeight,
             this->getType().getFieldDesc(FullHeightFieldId)));


    editSField(FullHeightFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TileCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TileCameraDecorator *pThis = static_cast<TileCameraDecorator *>(this);

    pThis->execSync(static_cast<TileCameraDecorator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TileCameraDecoratorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TileCameraDecorator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TileCameraDecorator *>(pRefAspect),
                  dynamic_cast<const TileCameraDecorator *>(this));

    return returnValue;
}
#endif

void TileCameraDecoratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TileCameraDecorator *>::_type("TileCameraDecoratorPtr", "CameraDecoratorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TileCameraDecorator *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TileCameraDecorator *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TileCameraDecorator *,
                           0);

OSG_END_NAMESPACE

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
 **     class ResolutionDisplayFilter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGResolutionDisplayFilterBase.h"
#include "OSGResolutionDisplayFilter.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ResolutionDisplayFilter
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          ResolutionDisplayFilterBase::_sfDownScale
    
*/


void ResolutionDisplayFilterBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "downScale",
        "",
        DownScaleFieldId, DownScaleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ResolutionDisplayFilter::editHandleDownScale),
        static_cast<FieldGetMethodSig >(&ResolutionDisplayFilter::getHandleDownScale));

    oType.addInitialDesc(pDesc);
}


ResolutionDisplayFilterBase::TypeObject ResolutionDisplayFilterBase::_type(
    ResolutionDisplayFilterBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ResolutionDisplayFilterBase::createEmptyLocal),
    ResolutionDisplayFilter::initMethod,
    ResolutionDisplayFilter::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ResolutionDisplayFilterBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ResolutionDisplayFilter\"\n"
    "   parent=\"DisplayFilter\"\n"
    "   library=\"EffectGroups\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   >   \n"
    "  <Field\n"
    "\t name=\"downScale\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ResolutionDisplayFilterBase::getType(void)
{
    return _type;
}

const FieldContainerType &ResolutionDisplayFilterBase::getType(void) const
{
    return _type;
}

UInt32 ResolutionDisplayFilterBase::getContainerSize(void) const
{
    return sizeof(ResolutionDisplayFilter);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *ResolutionDisplayFilterBase::editSFDownScale(void)
{
    editSField(DownScaleFieldMask);

    return &_sfDownScale;
}

const SFReal32 *ResolutionDisplayFilterBase::getSFDownScale(void) const
{
    return &_sfDownScale;
}






/*------------------------------ access -----------------------------------*/

UInt32 ResolutionDisplayFilterBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DownScaleFieldMask & whichField))
    {
        returnValue += _sfDownScale.getBinSize();
    }

    return returnValue;
}

void ResolutionDisplayFilterBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DownScaleFieldMask & whichField))
    {
        _sfDownScale.copyToBin(pMem);
    }
}

void ResolutionDisplayFilterBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DownScaleFieldMask & whichField))
    {
        _sfDownScale.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ResolutionDisplayFilterTransitPtr ResolutionDisplayFilterBase::createLocal(BitVector bFlags)
{
    ResolutionDisplayFilterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ResolutionDisplayFilter>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ResolutionDisplayFilterTransitPtr ResolutionDisplayFilterBase::create(void)
{
    ResolutionDisplayFilterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ResolutionDisplayFilter>(tmpPtr);
    }

    return fc;
}

ResolutionDisplayFilter *ResolutionDisplayFilterBase::createEmptyLocal(BitVector bFlags)
{
    ResolutionDisplayFilter *returnValue;

    newPtr<ResolutionDisplayFilter>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ResolutionDisplayFilter *ResolutionDisplayFilterBase::createEmpty(void)
{
    ResolutionDisplayFilter *returnValue;

    newPtr<ResolutionDisplayFilter>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ResolutionDisplayFilterBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ResolutionDisplayFilter *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ResolutionDisplayFilter *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ResolutionDisplayFilterBase::shallowCopy(void) const
{
    ResolutionDisplayFilter *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ResolutionDisplayFilter *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ResolutionDisplayFilterBase::ResolutionDisplayFilterBase(void) :
    Inherited(),
    _sfDownScale              ()
{
}

ResolutionDisplayFilterBase::ResolutionDisplayFilterBase(const ResolutionDisplayFilterBase &source) :
    Inherited(source),
    _sfDownScale              (source._sfDownScale              )
{
}


/*-------------------------- destructors ----------------------------------*/

ResolutionDisplayFilterBase::~ResolutionDisplayFilterBase(void)
{
}


GetFieldHandlePtr ResolutionDisplayFilterBase::getHandleDownScale       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfDownScale,
             this->getType().getFieldDesc(DownScaleFieldId)));

    return returnValue;
}

EditFieldHandlePtr ResolutionDisplayFilterBase::editHandleDownScale      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfDownScale,
             this->getType().getFieldDesc(DownScaleFieldId)));


    editSField(DownScaleFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ResolutionDisplayFilterBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ResolutionDisplayFilter *pThis = static_cast<ResolutionDisplayFilter *>(this);

    pThis->execSync(static_cast<ResolutionDisplayFilter *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ResolutionDisplayFilterBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ResolutionDisplayFilter *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ResolutionDisplayFilter *>(pRefAspect),
                  dynamic_cast<const ResolutionDisplayFilter *>(this));

    return returnValue;
}
#endif

void ResolutionDisplayFilterBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ResolutionDisplayFilter *>::_type("ResolutionDisplayFilterPtr", "DisplayFilterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ResolutionDisplayFilter *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ResolutionDisplayFilter *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ResolutionDisplayFilter *,
                           0);

OSG_END_NAMESPACE
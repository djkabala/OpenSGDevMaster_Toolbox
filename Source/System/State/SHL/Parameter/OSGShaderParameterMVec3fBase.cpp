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
 **     class ShaderParameterMVec3f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERMVEC3FINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterMVec3fBase.h"
#include "OSGShaderParameterMVec3f.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterMVec3f
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec3f           ShaderParameterMVec3fBase::_mfValue
    parameter value
*/


void ShaderParameterMVec3fBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShaderParameterMVec3fBase::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderParameterMVec3fBase::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderParameterMVec3fBase::TypeObject ShaderParameterMVec3fBase::_type(
    ShaderParameterMVec3fBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ShaderParameterMVec3fBase::createEmpty,
    ShaderParameterMVec3f::initMethod,
    ShaderParameterMVec3f::exitMethod,
    (InitalInsertDescFunc) &ShaderParameterMVec3fBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterMVec3f\"\n"
    "\tparent=\"ShaderParameter\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterMVec3fBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterMVec3fBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterMVec3fBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterMVec3f);
}

/*------------------------- decorator get ------------------------------*/


MFVec3f *ShaderParameterMVec3fBase::editMFValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return &_mfValue;
}

const MFVec3f *ShaderParameterMVec3fBase::getMFValue(void) const
{
    return &_mfValue;
}

#ifdef OSG_1_GET_COMPAT
MFVec3f             *ShaderParameterMVec3fBase::getMFValue          (void)
{
    return this->editMFValue          ();
}
#endif



/*********************************** Non-ptr code ********************************/
void ShaderParameterMVec3fBase::pushToValue(const Vec3f& value)
{
    editMField(ValueFieldMask, _mfValue);
    _mfValue.push_back(value);
}

void ShaderParameterMVec3fBase::insertIntoValue(UInt32                uiIndex,
                                                   const Vec3f& value   )
{
    editMField(ValueFieldMask, _mfValue);

    MFVec3f::iterator fieldIt = _mfValue.begin();

    fieldIt += uiIndex;

    _mfValue.insert(fieldIt, value);
}

void ShaderParameterMVec3fBase::replaceInValue(UInt32                uiIndex,
                                                       const Vec3f& value   )
{
    if(uiIndex >= _mfValue.size())
        return;

    editMField(ValueFieldMask, _mfValue);

    _mfValue[uiIndex] = value;
}

void ShaderParameterMVec3fBase::replaceInValue(const Vec3f& pOldElem,
                                                        const Vec3f& pNewElem)
{
    Int32  elemIdx = _mfValue.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ValueFieldMask, _mfValue);

        MFVec3f::iterator fieldIt = _mfValue.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ShaderParameterMVec3fBase::removeFromValue(UInt32 uiIndex)
{
    if(uiIndex < _mfValue.size())
    {
        editMField(ValueFieldMask, _mfValue);

        MFVec3f::iterator fieldIt = _mfValue.begin();

        fieldIt += uiIndex;
        _mfValue.erase(fieldIt);
    }
}

void ShaderParameterMVec3fBase::removeFromValue(const Vec3f& value)
{
    Int32 iElemIdx = _mfValue.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ValueFieldMask, _mfValue);

        MFVec3f::iterator fieldIt = _mfValue.begin();

        fieldIt += iElemIdx;

        _mfValue.erase(fieldIt);
    }
}

void ShaderParameterMVec3fBase::clearValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    _mfValue.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterMVec3fBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _mfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterMVec3fBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyToBin(pMem);
    }
}

void ShaderParameterMVec3fBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderParameterMVec3fTransitPtr ShaderParameterMVec3fBase::create(void)
{
    ShaderParameterMVec3fTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderParameterMVec3f>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterMVec3fPtr ShaderParameterMVec3fBase::createEmpty(void)
{
    ShaderParameterMVec3fPtr returnValue;

    newPtr<ShaderParameterMVec3f>(returnValue);

    return returnValue;
}

FieldContainerTransitPtr ShaderParameterMVec3fBase::shallowCopy(void) const
{
    ShaderParameterMVec3fPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderParameterMVec3f *>(this));

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ShaderParameterMVec3fBase::ShaderParameterMVec3fBase(void) :
    Inherited(),
    _mfValue                  ()
{
}

ShaderParameterMVec3fBase::ShaderParameterMVec3fBase(const ShaderParameterMVec3fBase &source) :
    Inherited(source),
    _mfValue                  (source._mfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderParameterMVec3fBase::~ShaderParameterMVec3fBase(void)
{
}


GetFieldHandlePtr ShaderParameterMVec3fBase::getHandleValue           (void) const
{
    MFVec3f::GetHandlePtr returnValue(
        new  MFVec3f::GetHandle(
             &_mfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderParameterMVec3fBase::editHandleValue          (void)
{
    MFVec3f::EditHandlePtr returnValue(
        new  MFVec3f::EditHandle(
             &_mfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    editMField(ValueFieldMask, _mfValue);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterMVec3fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterMVec3fBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ShaderParameterMVec3fBase::createAspectCopy(void) const
{
    ShaderParameterMVec3fPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterMVec3f *>(this));

    return returnValue;
}
#endif

void ShaderParameterMVec3fBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfValue.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterMVec3fPtr>::_type("ShaderParameterMVec3fPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterMVec3fPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, 
                    ShaderParameterMVec3fPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrSField, 
                         ShaderParameterMVec3fPtr, 
                         RecordedRefCounts,
                         0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, 
                    ShaderParameterMVec3fPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrMField, 
                         ShaderParameterMVec3fPtr, 
                         RecordedRefCounts,
                         0);

OSG_END_NAMESPACE

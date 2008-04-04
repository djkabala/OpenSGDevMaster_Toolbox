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
 **     class ShaderParameterPnt3f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERPNT3FINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterPnt3fBase.h"
#include "OSGShaderParameterPnt3f.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterPnt3f
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Pnt3f           ShaderParameterPnt3fBase::_sfValue
    parameter value
*/


void ShaderParameterPnt3fBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShaderParameterPnt3fBase::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderParameterPnt3fBase::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderParameterPnt3fBase::TypeObject ShaderParameterPnt3fBase::_type(
    ShaderParameterPnt3fBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ShaderParameterPnt3fBase::createEmpty,
    ShaderParameterPnt3f::initMethod,
    ShaderParameterPnt3f::exitMethod,
    (InitalInsertDescFunc) &ShaderParameterPnt3fBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterPnt3f\"\n"
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
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterPnt3fBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterPnt3fBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterPnt3fBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterPnt3f);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3f *ShaderParameterPnt3fBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFPnt3f *ShaderParameterPnt3fBase::getSFValue(void) const
{
    return &_sfValue;
}

#ifdef OSG_1_GET_COMPAT
SFPnt3f             *ShaderParameterPnt3fBase::getSFValue          (void)
{
    return this->editSFValue          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterPnt3fBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterPnt3fBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void ShaderParameterPnt3fBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderParameterPnt3fTransitPtr ShaderParameterPnt3fBase::create(void)
{
    ShaderParameterPnt3fTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderParameterPnt3f>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterPnt3fPtr ShaderParameterPnt3fBase::createEmpty(void)
{
    ShaderParameterPnt3fPtr returnValue;

    newPtr<ShaderParameterPnt3f>(returnValue);

    return returnValue;
}

FieldContainerTransitPtr ShaderParameterPnt3fBase::shallowCopy(void) const
{
    ShaderParameterPnt3fPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderParameterPnt3f *>(this));

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ShaderParameterPnt3fBase::ShaderParameterPnt3fBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

ShaderParameterPnt3fBase::ShaderParameterPnt3fBase(const ShaderParameterPnt3fBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderParameterPnt3fBase::~ShaderParameterPnt3fBase(void)
{
}


GetFieldHandlePtr ShaderParameterPnt3fBase::getHandleValue           (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderParameterPnt3fBase::editHandleValue          (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    editSField(ValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterPnt3fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterPnt3fBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ShaderParameterPnt3fBase::createAspectCopy(void) const
{
    ShaderParameterPnt3fPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterPnt3f *>(this));

    return returnValue;
}
#endif

void ShaderParameterPnt3fBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterPnt3fPtr>::_type("ShaderParameterPnt3fPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterPnt3fPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, 
                    ShaderParameterPnt3fPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrSField, 
                         ShaderParameterPnt3fPtr, 
                         RecordedRefCounts,
                         0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, 
                    ShaderParameterPnt3fPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrMField, 
                         ShaderParameterPnt3fPtr, 
                         RecordedRefCounts,
                         0);

OSG_END_NAMESPACE

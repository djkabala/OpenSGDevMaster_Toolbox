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
 **     class CgFXVariableTexObj!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGCgFXVariableTexObjBase.h"
#include "OSGCgFXVariableTexObj.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CgFXVariableTexObj
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Int32           CgFXVariableTexObjBase::_sfValue
    parameter value
*/

/*! \var std::string     CgFXVariableTexObjBase::_sfFilePath
    filepath of this texture
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CgFXVariableTexObj *>::_type("CgFXVariableTexObjPtr", "ShaderValueVariablePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CgFXVariableTexObj *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CgFXVariableTexObj *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CgFXVariableTexObj *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CgFXVariableTexObjBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CgFXVariableTexObj::editHandleValue),
        static_cast<FieldGetMethodSig >(&CgFXVariableTexObj::getHandleValue));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "filePath",
        "filepath of this texture\n",
        FilePathFieldId, FilePathFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CgFXVariableTexObj::editHandleFilePath),
        static_cast<FieldGetMethodSig >(&CgFXVariableTexObj::getHandleFilePath));

    oType.addInitialDesc(pDesc);
}


CgFXVariableTexObjBase::TypeObject CgFXVariableTexObjBase::_type(
    CgFXVariableTexObjBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CgFXVariableTexObjBase::createEmptyLocal),
    CgFXVariableTexObj::initMethod,
    CgFXVariableTexObj::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CgFXVariableTexObj::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"CgFXVariableTexObj\"\n"
    "   parent=\"ShaderValueVariable\"\n"
    "   library=\"ContribCgFX\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"value\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tparameter value\n"
    "  </Field>\n"
    "   <Field\n"
    "\t name=\"filePath\"\n"
    "\t type=\"std::string\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tfilepath of this texture\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CgFXVariableTexObjBase::getType(void)
{
    return _type;
}

const FieldContainerType &CgFXVariableTexObjBase::getType(void) const
{
    return _type;
}

UInt32 CgFXVariableTexObjBase::getContainerSize(void) const
{
    return sizeof(CgFXVariableTexObj);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *CgFXVariableTexObjBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFInt32 *CgFXVariableTexObjBase::getSFValue(void) const
{
    return &_sfValue;
}


SFString *CgFXVariableTexObjBase::editSFFilePath(void)
{
    editSField(FilePathFieldMask);

    return &_sfFilePath;
}

const SFString *CgFXVariableTexObjBase::getSFFilePath(void) const
{
    return &_sfFilePath;
}






/*------------------------------ access -----------------------------------*/

UInt32 CgFXVariableTexObjBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }
    if(FieldBits::NoField != (FilePathFieldMask & whichField))
    {
        returnValue += _sfFilePath.getBinSize();
    }

    return returnValue;
}

void CgFXVariableTexObjBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FilePathFieldMask & whichField))
    {
        _sfFilePath.copyToBin(pMem);
    }
}

void CgFXVariableTexObjBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FilePathFieldMask & whichField))
    {
        _sfFilePath.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CgFXVariableTexObjTransitPtr CgFXVariableTexObjBase::createLocal(BitVector bFlags)
{
    CgFXVariableTexObjTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CgFXVariableTexObj>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CgFXVariableTexObjTransitPtr CgFXVariableTexObjBase::createDependent(BitVector bFlags)
{
    CgFXVariableTexObjTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CgFXVariableTexObj>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CgFXVariableTexObjTransitPtr CgFXVariableTexObjBase::create(void)
{
    CgFXVariableTexObjTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CgFXVariableTexObj>(tmpPtr);
    }

    return fc;
}

CgFXVariableTexObj *CgFXVariableTexObjBase::createEmptyLocal(BitVector bFlags)
{
    CgFXVariableTexObj *returnValue;

    newPtr<CgFXVariableTexObj>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CgFXVariableTexObj *CgFXVariableTexObjBase::createEmpty(void)
{
    CgFXVariableTexObj *returnValue;

    newPtr<CgFXVariableTexObj>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CgFXVariableTexObjBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CgFXVariableTexObj *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CgFXVariableTexObj *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CgFXVariableTexObjBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CgFXVariableTexObj *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CgFXVariableTexObj *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CgFXVariableTexObjBase::shallowCopy(void) const
{
    CgFXVariableTexObj *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CgFXVariableTexObj *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CgFXVariableTexObjBase::CgFXVariableTexObjBase(void) :
    Inherited(),
    _sfValue                  (),
    _sfFilePath               ()
{
}

CgFXVariableTexObjBase::CgFXVariableTexObjBase(const CgFXVariableTexObjBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  ),
    _sfFilePath               (source._sfFilePath               )
{
}


/*-------------------------- destructors ----------------------------------*/

CgFXVariableTexObjBase::~CgFXVariableTexObjBase(void)
{
}


GetFieldHandlePtr CgFXVariableTexObjBase::getHandleValue           (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             const_cast<CgFXVariableTexObjBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CgFXVariableTexObjBase::editHandleValue          (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             this));


    editSField(ValueFieldMask);

    return returnValue;
}

GetFieldHandlePtr CgFXVariableTexObjBase::getHandleFilePath        (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfFilePath,
             this->getType().getFieldDesc(FilePathFieldId),
             const_cast<CgFXVariableTexObjBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CgFXVariableTexObjBase::editHandleFilePath       (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfFilePath,
             this->getType().getFieldDesc(FilePathFieldId),
             this));


    editSField(FilePathFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CgFXVariableTexObjBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CgFXVariableTexObj *pThis = static_cast<CgFXVariableTexObj *>(this);

    pThis->execSync(static_cast<CgFXVariableTexObj *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CgFXVariableTexObjBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CgFXVariableTexObj *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CgFXVariableTexObj *>(pRefAspect),
                  dynamic_cast<const CgFXVariableTexObj *>(this));

    return returnValue;
}
#endif

void CgFXVariableTexObjBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

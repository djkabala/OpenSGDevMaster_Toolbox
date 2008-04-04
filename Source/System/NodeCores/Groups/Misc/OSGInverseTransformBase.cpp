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
 **     class InverseTransform!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEINVERSETRANSFORMINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGInverseTransformBase.h"
#include "OSGInverseTransform.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::InverseTransform
    
 */


InverseTransformBase::TypeObject InverseTransformBase::_type(
    InverseTransformBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &InverseTransformBase::createEmpty,
    InverseTransform::initMethod,
    InverseTransform::exitMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"InverseTransform\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &InverseTransformBase::getType(void)
{
    return _type;
}

const FieldContainerType &InverseTransformBase::getType(void) const
{
    return _type;
}

UInt32 InverseTransformBase::getContainerSize(void) const
{
    return sizeof(InverseTransform);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 InverseTransformBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void InverseTransformBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void InverseTransformBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
InverseTransformTransitPtr InverseTransformBase::create(void)
{
    InverseTransformTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<InverseTransform>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
InverseTransformPtr InverseTransformBase::createEmpty(void)
{
    InverseTransformPtr returnValue;

    newPtr<InverseTransform>(returnValue);

    return returnValue;
}

FieldContainerTransitPtr InverseTransformBase::shallowCopy(void) const
{
    InverseTransformPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const InverseTransform *>(this));

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

InverseTransformBase::InverseTransformBase(void) :
    Inherited()
{
}

InverseTransformBase::InverseTransformBase(const InverseTransformBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

InverseTransformBase::~InverseTransformBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void InverseTransformBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<InverseTransformBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr InverseTransformBase::createAspectCopy(void) const
{
    InverseTransformPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const InverseTransform *>(this));

    return returnValue;
}
#endif

void InverseTransformBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<InverseTransformPtr>::_type("InverseTransformPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(InverseTransformPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, 
                    InverseTransformPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrSField, 
                         InverseTransformPtr, 
                         RecordedRefCounts,
                         0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, 
                    InverseTransformPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrMField, 
                         InverseTransformPtr, 
                         RecordedRefCounts,
                         0);

OSG_END_NAMESPACE

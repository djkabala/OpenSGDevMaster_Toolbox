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
 **     class TestMultiPartitionStage
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTESTMULTIPARTITIONSTAGEBASE_H_
#define _OSGTESTMULTIPARTITIONSTAGEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGBaseTypes.h"

#include "OSGStage.h" // Parent

#include "OSGStringFields.h" // Message type
#include "OSGInt32Fields.h" // NumPartitions type
#include "OSGInt32Fields.h" // Order type
#include "OSGBoolFields.h" // UseGroup type

#include "OSGTestMultiPartitionStageFields.h"

OSG_BEGIN_NAMESPACE

class TestMultiPartitionStage;

//! \brief TestMultiPartitionStage Base Class.

class OSG_GROUP_DLLMAPPING TestMultiPartitionStageBase : public Stage
{
  public:

    typedef Stage Inherited;
    typedef Stage ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TestMultiPartitionStage);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        MessageFieldId = Inherited::NextFieldId,
        NumPartitionsFieldId = MessageFieldId + 1,
        OrderFieldId = NumPartitionsFieldId + 1,
        UseGroupFieldId = OrderFieldId + 1,
        NextFieldId = UseGroupFieldId + 1
    };

    static const OSG::BitVector MessageFieldMask =
        (TypeTraits<BitVector>::One << MessageFieldId);
    static const OSG::BitVector NumPartitionsFieldMask =
        (TypeTraits<BitVector>::One << NumPartitionsFieldId);
    static const OSG::BitVector OrderFieldMask =
        (TypeTraits<BitVector>::One << OrderFieldId);
    static const OSG::BitVector UseGroupFieldMask =
        (TypeTraits<BitVector>::One << UseGroupFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFMessage         (void);
#endif
                  SFString            *editSFMessage        (void);
            const SFString            *getSFMessage         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFNumPartitions   (void);
#endif
                  SFInt32             *editSFNumPartitions  (void);
            const SFInt32             *getSFNumPartitions   (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFInt32             *getMFOrder           (void);
#endif
                  MFInt32             *editMFOrder          (void);
            const MFInt32             *getMFOrder           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFUseGroup        (void);
#endif
                  SFBool              *editSFUseGroup       (void);
            const SFBool              *getSFUseGroup        (void) const;


#ifdef OSG_1_GET_COMPAT
                  std::string         &getMessage         (void);
#endif
                  std::string         &editMessage        (void);
            const std::string         &getMessage         (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getNumPartitions   (void);
#endif
                  Int32               &editNumPartitions  (void);
            const Int32               &getNumPartitions   (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getOrder           (const UInt32 index);
                  MFInt32             &getOrder          (void);
#endif
                  Int32               &editOrder          (const UInt32 index);
            const Int32               &getOrder           (const UInt32 index) const;
                  MFInt32             &editOrder          (void);
            const MFInt32             &getOrder          (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getUseGroup        (void);
#endif
                  bool                &editUseGroup       (void);
            const bool                &getUseGroup        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setMessage        (const std::string &value);
            void setNumPartitions  (const Int32 &value);
            void setUseGroup       (const bool &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */


    void pushToOrder                       (const Int32     &value   );
    void insertIntoOrder                   (      UInt32     uiIndex,
                                            const Int32     &value   );
    void replaceInOrder                    (      UInt32     uiIndex,
                                            const Int32     &value   );
    void replaceInOrder                    (const Int32     &pOldElem,
                                            const Int32     &pNewElem);
    void removeFromOrder                   (      UInt32     uiIndex );
    void removeFromOrder                   (const Int32     &value   );
    void clearOrder                        (      void               );


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TestMultiPartitionStagePtr create     (void);
    static  TestMultiPartitionStagePtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFString          _sfMessage;
    SFInt32           _sfNumPartitions;
    MFInt32           _mfOrder;
    SFBool            _sfUseGroup;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TestMultiPartitionStageBase(void);
    TestMultiPartitionStageBase(const TestMultiPartitionStageBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TestMultiPartitionStageBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      TestMultiPartitionStageBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TestMultiPartitionStageBase &source);
};

typedef TestMultiPartitionStageBase *TestMultiPartitionStageBaseP;

/** Type specific RefPtr type for TestMultiPartitionStage. */
typedef RefPtr<TestMultiPartitionStagePtr> TestMultiPartitionStageRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<TestMultiPartitionStageBase::isNodeCore>,
    CoredNodePtr<TestMultiPartitionStage>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        TestMultiPartitionStageNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGTESTMULTIPARTITIONSTAGEBASE_H_ */

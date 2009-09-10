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
 **     class FrameHandler
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGFRAMEHANDLERBASE_H_
#define _OSGFRAMEHANDLERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGSysFields.h"               // FrameCount type
#include "OSGBaseFields.h"              // StartTime type

#include "OSGFrameHandlerFields.h"

OSG_BEGIN_NAMESPACE

class FrameHandler;

//! \brief FrameHandler Base Class.

class OSG_DYNAMICS_DLLMAPPING FrameHandlerBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(FrameHandler);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        FrameCountFieldId = Inherited::NextFieldId,
        StartTimeFieldId = FrameCountFieldId + 1,
        LastTimeFieldId = StartTimeFieldId + 1,
        CurrTimeFieldId = LastTimeFieldId + 1,
        TimeStampFieldId = CurrTimeFieldId + 1,
        TimeScaleFieldId = TimeStampFieldId + 1,
        ConstantTimeStepFieldId = TimeScaleFieldId + 1,
        ConstantTimeFieldId = ConstantTimeStepFieldId + 1,
        PausedFieldId = ConstantTimeFieldId + 1,
        NextFieldId = PausedFieldId + 1
    };

    static const OSG::BitVector FrameCountFieldMask =
        (TypeTraits<BitVector>::One << FrameCountFieldId);
    static const OSG::BitVector StartTimeFieldMask =
        (TypeTraits<BitVector>::One << StartTimeFieldId);
    static const OSG::BitVector LastTimeFieldMask =
        (TypeTraits<BitVector>::One << LastTimeFieldId);
    static const OSG::BitVector CurrTimeFieldMask =
        (TypeTraits<BitVector>::One << CurrTimeFieldId);
    static const OSG::BitVector TimeStampFieldMask =
        (TypeTraits<BitVector>::One << TimeStampFieldId);
    static const OSG::BitVector TimeScaleFieldMask =
        (TypeTraits<BitVector>::One << TimeScaleFieldId);
    static const OSG::BitVector ConstantTimeStepFieldMask =
        (TypeTraits<BitVector>::One << ConstantTimeStepFieldId);
    static const OSG::BitVector ConstantTimeFieldMask =
        (TypeTraits<BitVector>::One << ConstantTimeFieldId);
    static const OSG::BitVector PausedFieldMask =
        (TypeTraits<BitVector>::One << PausedFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt64          SFFrameCountType;
    typedef SFTime            SFStartTimeType;
    typedef SFTime            SFLastTimeType;
    typedef SFTime            SFCurrTimeType;
    typedef SFTime            SFTimeStampType;
    typedef SFTime            SFTimeScaleType;
    typedef SFTime            SFConstantTimeStepType;
    typedef SFBool            SFConstantTimeType;
    typedef SFBool            SFPausedType;

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


                  SFUInt64            *editSFFrameCount     (void);
            const SFUInt64            *getSFFrameCount      (void) const;

                  SFTime              *editSFStartTime      (void);
            const SFTime              *getSFStartTime       (void) const;

                  SFTime              *editSFLastTime       (void);
            const SFTime              *getSFLastTime        (void) const;

                  SFTime              *editSFCurrTime       (void);
            const SFTime              *getSFCurrTime        (void) const;

                  SFTime              *editSFTimeStamp      (void);
            const SFTime              *getSFTimeStamp       (void) const;

                  SFTime              *editSFTimeScale      (void);
            const SFTime              *getSFTimeScale       (void) const;

                  SFTime              *editSFConstantTimeStep(void);
            const SFTime              *getSFConstantTimeStep (void) const;

                  SFBool              *editSFConstantTime   (void);
            const SFBool              *getSFConstantTime    (void) const;

                  SFBool              *editSFPaused         (void);
            const SFBool              *getSFPaused          (void) const;


                  UInt64              &editFrameCount     (void);
                  UInt64               getFrameCount      (void) const;

                  Time                &editStartTime      (void);
            const Time                &getStartTime       (void) const;

                  Time                &editLastTime       (void);
            const Time                &getLastTime        (void) const;

                  Time                &editCurrTime       (void);
            const Time                &getCurrTime        (void) const;

                  Time                &editTimeStamp      (void);
            const Time                &getTimeStamp       (void) const;

                  Time                &editTimeScale      (void);
            const Time                &getTimeScale       (void) const;

                  Time                &editConstantTimeStep(void);
            const Time                &getConstantTimeStep (void) const;

                  bool                &editConstantTime   (void);
                  bool                 getConstantTime    (void) const;

                  bool                &editPaused         (void);
                  bool                 getPaused          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setFrameCount     (const UInt64 value);
            void setStartTime      (const Time &value);
            void setLastTime       (const Time &value);
            void setCurrTime       (const Time &value);
            void setTimeStamp      (const Time &value);
            void setTimeScale      (const Time &value);
            void setConstantTimeStep(const Time &value);
            void setConstantTime   (const bool value);
            void setPaused         (const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

    static  FrameHandlerTransitPtr  create          (void);
    static  FrameHandler           *createEmpty     (void);

    static  FrameHandlerTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  FrameHandler            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  FrameHandlerTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt64          _sfFrameCount;
    SFTime            _sfStartTime;
    SFTime            _sfLastTime;
    SFTime            _sfCurrTime;
    SFTime            _sfTimeStamp;
    SFTime            _sfTimeScale;
    SFTime            _sfConstantTimeStep;
    SFBool            _sfConstantTime;
    SFBool            _sfPaused;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    FrameHandlerBase(void);
    FrameHandlerBase(const FrameHandlerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~FrameHandlerBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleFrameCount      (void) const;
    EditFieldHandlePtr editHandleFrameCount     (void);
    GetFieldHandlePtr  getHandleStartTime       (void) const;
    EditFieldHandlePtr editHandleStartTime      (void);
    GetFieldHandlePtr  getHandleLastTime        (void) const;
    EditFieldHandlePtr editHandleLastTime       (void);
    GetFieldHandlePtr  getHandleCurrTime        (void) const;
    EditFieldHandlePtr editHandleCurrTime       (void);
    GetFieldHandlePtr  getHandleTimeStamp       (void) const;
    EditFieldHandlePtr editHandleTimeStamp      (void);
    GetFieldHandlePtr  getHandleTimeScale       (void) const;
    EditFieldHandlePtr editHandleTimeScale      (void);
    GetFieldHandlePtr  getHandleConstantTimeStep (void) const;
    EditFieldHandlePtr editHandleConstantTimeStep(void);
    GetFieldHandlePtr  getHandleConstantTime    (void) const;
    EditFieldHandlePtr editHandleConstantTime   (void);
    GetFieldHandlePtr  getHandlePaused          (void) const;
    EditFieldHandlePtr editHandlePaused         (void);

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

            void execSync (      FrameHandlerBase *pFrom,
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
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
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
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const FrameHandlerBase &source);
};

typedef FrameHandlerBase *FrameHandlerBaseP;

OSG_END_NAMESPACE

#endif /* _OSGFRAMEHANDLERBASE_H_ */
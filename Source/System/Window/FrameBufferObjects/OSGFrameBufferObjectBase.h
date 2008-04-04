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
 **     class FrameBufferObject
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGFRAMEBUFFEROBJECTBASE_H_
#define _OSGFRAMEBUFFEROBJECTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGGLenumFields.h" // GLId type
#include "OSGFrameBufferAttachmentFields.h" // ColorAttachments type
#include "OSGGLenumFields.h" // DrawBuffers type
#include "OSGFrameBufferAttachmentFields.h" // DepthAttachment type
#include "OSGFrameBufferAttachmentFields.h" // StencilAttachment type
#include "OSGUInt16Fields.h" // Width type
#include "OSGUInt16Fields.h" // Height type

#include "OSGFrameBufferObjectFields.h"

OSG_BEGIN_NAMESPACE

class FrameBufferObject;

//! \brief FrameBufferObject Base Class.

class OSG_SYSTEM_DLLMAPPING FrameBufferObjectBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(FrameBufferObject);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        GLIdFieldId = Inherited::NextFieldId,
        ColorAttachmentsFieldId = GLIdFieldId + 1,
        DrawBuffersFieldId = ColorAttachmentsFieldId + 1,
        DepthAttachmentFieldId = DrawBuffersFieldId + 1,
        StencilAttachmentFieldId = DepthAttachmentFieldId + 1,
        WidthFieldId = StencilAttachmentFieldId + 1,
        HeightFieldId = WidthFieldId + 1,
        NextFieldId = HeightFieldId + 1
    };

    static const OSG::BitVector GLIdFieldMask =
        (TypeTraits<BitVector>::One << GLIdFieldId);
    static const OSG::BitVector ColorAttachmentsFieldMask =
        (TypeTraits<BitVector>::One << ColorAttachmentsFieldId);
    static const OSG::BitVector DrawBuffersFieldMask =
        (TypeTraits<BitVector>::One << DrawBuffersFieldId);
    static const OSG::BitVector DepthAttachmentFieldMask =
        (TypeTraits<BitVector>::One << DepthAttachmentFieldId);
    static const OSG::BitVector StencilAttachmentFieldMask =
        (TypeTraits<BitVector>::One << StencilAttachmentFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
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
                  SFGLenum            *getSFGLId            (void);
#endif
                  SFGLenum            *editSFGLId           (void);
            const SFGLenum            *getSFGLId            (void) const;
            const MFFrameBufferAttachmentPtr *getMFColorAttachments (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFGLenum            *getMFDrawBuffers     (void);
#endif
                  MFGLenum            *editMFDrawBuffers    (void);
            const MFGLenum            *getMFDrawBuffers     (void) const;
            const SFFrameBufferAttachmentPtr *getSFDepthAttachment (void) const;
            const SFFrameBufferAttachmentPtr *getSFStencilAttachment (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt16            *getSFWidth           (void);
#endif
                  SFUInt16            *editSFWidth          (void);
            const SFUInt16            *getSFWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt16            *getSFHeight          (void);
#endif
                  SFUInt16            *editSFHeight         (void);
            const SFUInt16            *getSFHeight          (void) const;


#ifdef OSG_1_GET_COMPAT
                  GLenum              &getGLId            (void);
#endif
                  GLenum              &editGLId           (void);
            const GLenum              &getGLId            (void) const;

                  FrameBufferAttachmentPtrConst getColorAttachments(const UInt32 index) const;
            const MFFrameBufferAttachmentPtr &getColorAttachments(void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getDrawBuffers     (const UInt32 index);
                  MFGLenum            &getDrawBuffers    (void);
#endif
                  GLenum              &editDrawBuffers    (const UInt32 index);
            const GLenum              &getDrawBuffers     (const UInt32 index) const;
                  MFGLenum            &editDrawBuffers    (void);
            const MFGLenum            &getDrawBuffers    (void) const;

                  FrameBufferAttachmentPtrConst getDepthAttachment(void) const;

                  FrameBufferAttachmentPtrConst getStencilAttachment(void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt16              &getWidth           (void);
#endif
                  UInt16              &editWidth          (void);
            const UInt16              &getWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt16              &getHeight          (void);
#endif
                  UInt16              &editHeight         (void);
            const UInt16              &getHeight          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setGLId           (const GLenum &value);
            void setDepthAttachment(FrameBufferAttachmentPtrConstArg value);
            void setStencilAttachment(FrameBufferAttachmentPtrConstArg value);
            void setWidth          (const UInt16 &value);
            void setHeight         (const UInt16 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToColorAttachments           (FrameBufferAttachmentPtrConstArg value   );
    void assignColorAttachments           (const MFFrameBufferAttachmentPtr &value);
    void insertIntoColorAttachments      (UInt32                uiIndex,
                                             FrameBufferAttachmentPtrConstArg value   );
    void replaceInColorAttachments  (UInt32                uiIndex,
                                             FrameBufferAttachmentPtrConstArg value   );
    void replaceInColorAttachments (FrameBufferAttachmentPtrConstArg pOldElem,
                                             FrameBufferAttachmentPtrConstArg pNewElem);
    void removeFromColorAttachments (UInt32                uiIndex );
    void removeFromColorAttachments(FrameBufferAttachmentPtrConstArg value   );
    void clearColorAttachments            (void                          );



    void pushToDrawBuffers                 (const GLenum    &value   );
    void insertIntoDrawBuffers             (      UInt32     uiIndex,
                                            const GLenum    &value   );
    void replaceInDrawBuffers              (      UInt32     uiIndex,
                                            const GLenum    &value   );
    void replaceInDrawBuffers              (const GLenum    &pOldElem,
                                            const GLenum    &pNewElem);
    void removeFromDrawBuffers             (      UInt32     uiIndex );
    void removeFromDrawBuffers             (const GLenum    &value   );
    void clearDrawBuffers                  (      void               );


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

    static  FrameBufferObjectTransitPtr create     (void);
    static  FrameBufferObjectPtr        createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFGLenum          _sfGLId;
    MFFrameBufferAttachmentPtr _mfColorAttachments;
    MFGLenum          _mfDrawBuffers;
    SFFrameBufferAttachmentPtr _sfDepthAttachment;
    SFFrameBufferAttachmentPtr _sfStencilAttachment;
    SFUInt16          _sfWidth;
    SFUInt16          _sfHeight;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    FrameBufferObjectBase(void);
    FrameBufferObjectBase(const FrameBufferObjectBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~FrameBufferObjectBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const FrameBufferObject *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleGLId            (void) const;
    EditFieldHandlePtr editHandleGLId           (void);
    GetFieldHandlePtr  getHandleColorAttachments (void) const;
    EditFieldHandlePtr editHandleColorAttachments(void);
    GetFieldHandlePtr  getHandleDrawBuffers     (void) const;
    EditFieldHandlePtr editHandleDrawBuffers    (void);
    GetFieldHandlePtr  getHandleDepthAttachment (void) const;
    EditFieldHandlePtr editHandleDepthAttachment(void);
    GetFieldHandlePtr  getHandleStencilAttachment (void) const;
    EditFieldHandlePtr editHandleStencilAttachment(void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleHeight          (void) const;
    EditFieldHandlePtr editHandleHeight         (void);

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

            void execSync (      FrameBufferObjectBase *pFrom,
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
    void operator =(const FrameBufferObjectBase &source);
};

typedef FrameBufferObjectBase *FrameBufferObjectBaseP;

OSG_END_NAMESPACE

#endif /* _OSGFRAMEBUFFEROBJECTBASE_H_ */

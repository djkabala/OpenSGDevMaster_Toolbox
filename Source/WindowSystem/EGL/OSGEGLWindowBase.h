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
 **     class EGLWindow
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGEGLWINDOWBASE_H_
#define _OSGEGLWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowEGLDef.h"

#include "OSGBaseTypes.h"

#include "OSGWindow.h" // Parent

#include "OSGEGLWindowDataFields.h" // Display type
#include "OSGEGLWindowDataFields.h" // Window type
#include "OSGEGLWindowDataFields.h" // Context type

#include "OSGEGLWindowFields.h"

OSG_BEGIN_NAMESPACE

class EGLWindow;

//! \brief EGLWindow Base Class.

class OSG_WINDOWEGL_DLLMAPPING EGLWindowBase : public Window
{
  public:

    typedef Window Inherited;
    typedef Window ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(EGLWindow);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DisplayFieldId = Inherited::NextFieldId,
        WindowFieldId = DisplayFieldId + 1,
        ContextFieldId = WindowFieldId + 1,
        NextFieldId = ContextFieldId + 1
    };

    static const OSG::BitVector DisplayFieldMask =
        (TypeTraits<BitVector>::One << DisplayFieldId);
    static const OSG::BitVector WindowFieldMask =
        (TypeTraits<BitVector>::One << WindowFieldId);
    static const OSG::BitVector ContextFieldMask =
        (TypeTraits<BitVector>::One << ContextFieldId);
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
                  SFEGLDisplay        *getSFDisplay         (void);
#endif
                  SFEGLDisplay        *editSFDisplay        (void);
            const SFEGLDisplay        *getSFDisplay         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFEGLSurface        *getSFWindow          (void);
#endif
                  SFEGLSurface        *editSFWindow         (void);
            const SFEGLSurface        *getSFWindow          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFEGLContext        *getSFContext         (void);
#endif
                  SFEGLContext        *editSFContext        (void);
            const SFEGLContext        *getSFContext         (void) const;


#ifdef OSG_1_GET_COMPAT
                  EGLDisplay          &getDisplay         (void);
#endif
                  EGLDisplay          &editDisplay        (void);
            const EGLDisplay          &getDisplay         (void) const;

#ifdef OSG_1_GET_COMPAT
                  EGLSurface          &getWindow          (void);
#endif
                  EGLSurface          &editWindow         (void);
            const EGLSurface          &getWindow          (void) const;

#ifdef OSG_1_GET_COMPAT
                  EGLContext          &getContext         (void);
#endif
                  EGLContext          &editContext        (void);
            const EGLContext          &getContext         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDisplay        (const EGLDisplay &value);
            void setWindow         (const EGLSurface &value);
            void setContext        (const EGLContext &value);

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

    static  EGLWindowTransitPtr create     (void);
    static  EGLWindowPtr        createEmpty(void);

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

    SFEGLDisplay      _sfDisplay;
    SFEGLSurface      _sfWindow;
    SFEGLContext      _sfContext;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    EGLWindowBase(void);
    EGLWindowBase(const EGLWindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~EGLWindowBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleDisplay         (void) const;
    EditFieldHandlePtr editHandleDisplay        (void);
    GetFieldHandlePtr  getHandleWindow          (void) const;
    EditFieldHandlePtr editHandleWindow         (void);
    GetFieldHandlePtr  getHandleContext         (void) const;
    EditFieldHandlePtr editHandleContext        (void);

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

            void execSync (      EGLWindowBase *pFrom,
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
    void operator =(const EGLWindowBase &source);
};

typedef EGLWindowBase *EGLWindowBaseP;

OSG_END_NAMESPACE

#endif /* _OSGEGLWINDOWBASE_H_ */

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
 **     class BinarySwapComposer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBINARYSWAPCOMPOSERBASE_H_
#define _OSGBINARYSWAPCOMPOSERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGClusterDef.h"

#include "OSGBaseTypes.h"

#include "OSGImageComposer.h" // Parent

#include "OSGBoolFields.h" // Short type
#include "OSGBoolFields.h" // Alpha type
#include "OSGUInt32Fields.h" // TileSize type

#include "OSGBinarySwapComposerFields.h"

OSG_BEGIN_NAMESPACE

class BinarySwapComposer;

//! \brief BinarySwapComposer Base Class.

class OSG_CLUSTER_DLLMAPPING BinarySwapComposerBase : public ImageComposer
{
  public:

    typedef ImageComposer Inherited;
    typedef ImageComposer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(BinarySwapComposer);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ShortFieldId = Inherited::NextFieldId,
        AlphaFieldId = ShortFieldId + 1,
        TileSizeFieldId = AlphaFieldId + 1,
        NextFieldId = TileSizeFieldId + 1
    };

    static const OSG::BitVector ShortFieldMask =
        (TypeTraits<BitVector>::One << ShortFieldId);
    static const OSG::BitVector AlphaFieldMask =
        (TypeTraits<BitVector>::One << AlphaFieldId);
    static const OSG::BitVector TileSizeFieldMask =
        (TypeTraits<BitVector>::One << TileSizeFieldId);
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
                  SFBool              *getSFShort           (void);
#endif
                  SFBool              *editSFShort          (void);
            const SFBool              *getSFShort           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFAlpha           (void);
#endif
                  SFBool              *editSFAlpha          (void);
            const SFBool              *getSFAlpha           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFTileSize        (void);
#endif
                  SFUInt32            *editSFTileSize       (void);
            const SFUInt32            *getSFTileSize        (void) const;


#ifdef OSG_1_GET_COMPAT
                  bool                &getShort           (void);
#endif
                  bool                &editShort          (void);
            const bool                &getShort           (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getAlpha           (void);
#endif
                  bool                &editAlpha          (void);
            const bool                &getAlpha           (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getTileSize        (void);
#endif
                  UInt32              &editTileSize       (void);
            const UInt32              &getTileSize        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setShort          (const bool &value);
            void setAlpha          (const bool &value);
            void setTileSize       (const UInt32 &value);

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

    static  BinarySwapComposerTransitPtr create     (void);
    static  BinarySwapComposerPtr        createEmpty(void);

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

    SFBool            _sfShort;
    SFBool            _sfAlpha;
    SFUInt32          _sfTileSize;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BinarySwapComposerBase(void);
    BinarySwapComposerBase(const BinarySwapComposerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BinarySwapComposerBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleShort           (void) const;
    EditFieldHandlePtr editHandleShort          (void);
    GetFieldHandlePtr  getHandleAlpha           (void) const;
    EditFieldHandlePtr editHandleAlpha          (void);
    GetFieldHandlePtr  getHandleTileSize        (void) const;
    EditFieldHandlePtr editHandleTileSize       (void);

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

            void execSync (      BinarySwapComposerBase *pFrom,
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
    void operator =(const BinarySwapComposerBase &source);
};

typedef BinarySwapComposerBase *BinarySwapComposerBaseP;

OSG_END_NAMESPACE

#endif /* _OSGBINARYSWAPCOMPOSERBASE_H_ */

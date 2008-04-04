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
 **     class Particles
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPARTICLESBASE_H_
#define _OSGPARTICLESBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGBaseTypes.h"

#include "OSGMaterialDrawable.h" // Parent

#include "OSGUInt32Fields.h" // Mode type
#include "OSGGeoVectorPropertyFields.h" // Positions type
#include "OSGVec3fFields.h" // Sizes type
#include "OSGGeoVectorPropertyFields.h" // SecPositions type
#include "OSGGeoVectorPropertyFields.h" // Colors type
#include "OSGGeoVectorPropertyFields.h" // Normals type
#include "OSGInt32Fields.h" // Indices type
#include "OSGReal32Fields.h" // TextureZs type
#include "OSGUInt32Fields.h" // DrawOrder type
#include "OSGBoolFields.h" // Dynamic type
#include "OSGUInt32Fields.h" // Pump type
#include "OSGParticleBSP.h" // Bsp type
#include "OSGInt32Fields.h" // NumParticles type

#include "OSGParticlesFields.h"

OSG_BEGIN_NAMESPACE

class Particles;

//! \brief Particles Base Class.

class OSG_DRAWABLE_DLLMAPPING ParticlesBase : public MaterialDrawable
{
  public:

    typedef MaterialDrawable Inherited;
    typedef MaterialDrawable ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Particles);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ModeFieldId = Inherited::NextFieldId,
        PositionsFieldId = ModeFieldId + 1,
        SizesFieldId = PositionsFieldId + 1,
        SecPositionsFieldId = SizesFieldId + 1,
        ColorsFieldId = SecPositionsFieldId + 1,
        NormalsFieldId = ColorsFieldId + 1,
        IndicesFieldId = NormalsFieldId + 1,
        TextureZsFieldId = IndicesFieldId + 1,
        DrawOrderFieldId = TextureZsFieldId + 1,
        DynamicFieldId = DrawOrderFieldId + 1,
        PumpFieldId = DynamicFieldId + 1,
        BspFieldId = PumpFieldId + 1,
        NumParticlesFieldId = BspFieldId + 1,
        NextFieldId = NumParticlesFieldId + 1
    };

    static const OSG::BitVector ModeFieldMask =
        (TypeTraits<BitVector>::One << ModeFieldId);
    static const OSG::BitVector PositionsFieldMask =
        (TypeTraits<BitVector>::One << PositionsFieldId);
    static const OSG::BitVector SizesFieldMask =
        (TypeTraits<BitVector>::One << SizesFieldId);
    static const OSG::BitVector SecPositionsFieldMask =
        (TypeTraits<BitVector>::One << SecPositionsFieldId);
    static const OSG::BitVector ColorsFieldMask =
        (TypeTraits<BitVector>::One << ColorsFieldId);
    static const OSG::BitVector NormalsFieldMask =
        (TypeTraits<BitVector>::One << NormalsFieldId);
    static const OSG::BitVector IndicesFieldMask =
        (TypeTraits<BitVector>::One << IndicesFieldId);
    static const OSG::BitVector TextureZsFieldMask =
        (TypeTraits<BitVector>::One << TextureZsFieldId);
    static const OSG::BitVector DrawOrderFieldMask =
        (TypeTraits<BitVector>::One << DrawOrderFieldId);
    static const OSG::BitVector DynamicFieldMask =
        (TypeTraits<BitVector>::One << DynamicFieldId);
    static const OSG::BitVector PumpFieldMask =
        (TypeTraits<BitVector>::One << PumpFieldId);
    static const OSG::BitVector BspFieldMask =
        (TypeTraits<BitVector>::One << BspFieldId);
    static const OSG::BitVector NumParticlesFieldMask =
        (TypeTraits<BitVector>::One << NumParticlesFieldId);
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
                  SFUInt32            *getSFMode            (void);
#endif
                  SFUInt32            *editSFMode           (void);
            const SFUInt32            *getSFMode            (void) const;
            const SFGeoVectorPropertyPtr *getSFPositions       (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFVec3f             *getMFSizes           (void);
#endif
                  MFVec3f             *editMFSizes          (void);
            const MFVec3f             *getMFSizes           (void) const;
            const SFGeoVectorPropertyPtr *getSFSecPositions    (void) const;
            const SFGeoVectorPropertyPtr *getSFColors          (void) const;
            const SFGeoVectorPropertyPtr *getSFNormals         (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFInt32             *getMFIndices         (void);
#endif
                  MFInt32             *editMFIndices        (void);
            const MFInt32             *getMFIndices         (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFReal32            *getMFTextureZs       (void);
#endif
                  MFReal32            *editMFTextureZs      (void);
            const MFReal32            *getMFTextureZs       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFDrawOrder       (void);
#endif
                  SFUInt32            *editSFDrawOrder      (void);
            const SFUInt32            *getSFDrawOrder       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFDynamic         (void);
#endif
                  SFBool              *editSFDynamic        (void);
            const SFBool              *getSFDynamic         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFParticleBSPTree   *getSFBsp             (void);
#endif
                  SFParticleBSPTree   *editSFBsp            (void);
            const SFParticleBSPTree   *getSFBsp             (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFNumParticles    (void);
#endif
                  SFInt32             *editSFNumParticles   (void);
            const SFInt32             *getSFNumParticles    (void) const;


#ifdef OSG_1_GET_COMPAT
                  UInt32              &getMode            (void);
#endif
                  UInt32              &editMode           (void);
            const UInt32              &getMode            (void) const;

                  GeoVectorPropertyPtrConst getPositions      (void) const;

#ifdef OSG_1_GET_COMPAT
                  Vec3f               &getSizes           (const UInt32 index);
                  MFVec3f             &getSizes          (void);
#endif
                  Vec3f               &editSizes          (const UInt32 index);
            const Vec3f               &getSizes           (const UInt32 index) const;
                  MFVec3f             &editSizes          (void);
            const MFVec3f             &getSizes          (void) const;

                  GeoVectorPropertyPtrConst getSecPositions   (void) const;

                  GeoVectorPropertyPtrConst getColors         (void) const;

                  GeoVectorPropertyPtrConst getNormals        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getIndices         (const UInt32 index);
                  MFInt32             &getIndices        (void);
#endif
                  Int32               &editIndices        (const UInt32 index);
            const Int32               &getIndices         (const UInt32 index) const;
                  MFInt32             &editIndices        (void);
            const MFInt32             &getIndices        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getTextureZs       (const UInt32 index);
                  MFReal32            &getTextureZs      (void);
#endif
                  Real32              &editTextureZs      (const UInt32 index);
            const Real32              &getTextureZs       (const UInt32 index) const;
                  MFReal32            &editTextureZs      (void);
            const MFReal32            &getTextureZs      (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getDrawOrder       (void);
#endif
                  UInt32              &editDrawOrder      (void);
            const UInt32              &getDrawOrder       (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getDynamic         (void);
#endif
                  bool                &editDynamic        (void);
            const bool                &getDynamic         (void) const;

#ifdef OSG_1_GET_COMPAT
                  ParticleBSPTree     &getBsp             (void);
#endif
                  ParticleBSPTree     &editBsp            (void);
            const ParticleBSPTree     &getBsp             (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getNumParticles    (void);
#endif
                  Int32               &editNumParticles   (void);
            const Int32               &getNumParticles    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setMode           (const UInt32 &value);
            void setPositions      (GeoVectorPropertyPtrConstArg value);
            void setSecPositions   (GeoVectorPropertyPtrConstArg value);
            void setColors         (GeoVectorPropertyPtrConstArg value);
            void setNormals        (GeoVectorPropertyPtrConstArg value);
            void setDrawOrder      (const UInt32 &value);
            void setDynamic        (const bool &value);
            void setBsp            (const ParticleBSPTree &value);
            void setNumParticles   (const Int32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */


    void pushToSizes                       (const Vec3f     &value   );
    void insertIntoSizes                   (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInSizes                    (      UInt32     uiIndex,
                                            const Vec3f     &value   );
    void replaceInSizes                    (const Vec3f     &pOldElem,
                                            const Vec3f     &pNewElem);
    void removeFromSizes                   (      UInt32     uiIndex );
    void removeFromSizes                   (const Vec3f     &value   );
    void clearSizes                        (      void               );



    void pushToIndices                     (const Int32     &value   );
    void insertIntoIndices                 (      UInt32     uiIndex,
                                            const Int32     &value   );
    void replaceInIndices                  (      UInt32     uiIndex,
                                            const Int32     &value   );
    void replaceInIndices                  (const Int32     &pOldElem,
                                            const Int32     &pNewElem);
    void removeFromIndices                 (      UInt32     uiIndex );
    void removeFromIndices                 (const Int32     &value   );
    void clearIndices                      (      void               );



    void pushToTextureZs                   (const Real32    &value   );
    void insertIntoTextureZs               (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInTextureZs                (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInTextureZs                (const Real32    &pOldElem,
                                            const Real32    &pNewElem);
    void removeFromTextureZs               (      UInt32     uiIndex );
    void removeFromTextureZs               (const Real32    &value   );
    void clearTextureZs                    (      void               );


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

    static  ParticlesTransitPtr create     (void);
    static  ParticlesPtr        createEmpty(void);

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

    SFUInt32          _sfMode;
    SFGeoVectorPropertyPtr _sfPositions;
    MFVec3f           _mfSizes;
    SFGeoVectorPropertyPtr _sfSecPositions;
    SFGeoVectorPropertyPtr _sfColors;
    SFGeoVectorPropertyPtr _sfNormals;
    MFInt32           _mfIndices;
    MFReal32          _mfTextureZs;
    SFUInt32          _sfDrawOrder;
    SFBool            _sfDynamic;
    SFParticleBSPTree _sfBsp;
    SFInt32           _sfNumParticles;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ParticlesBase(void);
    ParticlesBase(const ParticlesBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ParticlesBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Particles *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleMode            (void) const;
    EditFieldHandlePtr editHandleMode           (void);
    GetFieldHandlePtr  getHandlePositions       (void) const;
    EditFieldHandlePtr editHandlePositions      (void);
    GetFieldHandlePtr  getHandleSizes           (void) const;
    EditFieldHandlePtr editHandleSizes          (void);
    GetFieldHandlePtr  getHandleSecPositions    (void) const;
    EditFieldHandlePtr editHandleSecPositions   (void);
    GetFieldHandlePtr  getHandleColors          (void) const;
    EditFieldHandlePtr editHandleColors         (void);
    GetFieldHandlePtr  getHandleNormals         (void) const;
    EditFieldHandlePtr editHandleNormals        (void);
    GetFieldHandlePtr  getHandleIndices         (void) const;
    EditFieldHandlePtr editHandleIndices        (void);
    GetFieldHandlePtr  getHandleTextureZs       (void) const;
    EditFieldHandlePtr editHandleTextureZs      (void);
    GetFieldHandlePtr  getHandleDrawOrder       (void) const;
    EditFieldHandlePtr editHandleDrawOrder      (void);
    GetFieldHandlePtr  getHandleDynamic         (void) const;
    EditFieldHandlePtr editHandleDynamic        (void);
    GetFieldHandlePtr  getHandlePump            (void) const;
    EditFieldHandlePtr editHandlePump           (void);
    GetFieldHandlePtr  getHandleBsp             (void) const;
    EditFieldHandlePtr editHandleBsp            (void);
    GetFieldHandlePtr  getHandleNumParticles    (void) const;
    EditFieldHandlePtr editHandleNumParticles   (void);

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

            void execSync (      ParticlesBase *pFrom,
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

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt32          _sfPump;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFPump            (void);
#endif
                  SFUInt32            *editSFPump           (void);
            const SFUInt32            *getSFPump            (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getPump           (void);
#endif
                  UInt32              &editPump           (void);
            const UInt32              &getPump           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setPump           (const UInt32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */





    /*! \}                                                                 */

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ParticlesBase &source);
};

typedef ParticlesBase *ParticlesBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPARTICLESBASE_H_ */

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
 **     class RenderOptions
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGRENDEROPTIONSBASE_H_
#define _OSGRENDEROPTIONSBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGFieldContainerAttachment.h" // Parent

#include "OSGBoolFields.h" // Statistic type
#include "OSGGLenumFields.h" // PolygonMode type
#include "OSGBoolFields.h" // TwoSidedLighting type
#include "OSGBoolFields.h" // SpecTexLighting type
#include "OSGBoolFields.h" // SortTrans type
#include "OSGBoolFields.h" // ZWriteTrans type
#include "OSGBoolFields.h" // LocalLights type
#include "OSGBoolFields.h" // CorrectTwoSidedLighting type
#include "OSGBoolFields.h" // OcclusionCulling type
#include "OSGInt32Fields.h" // OcclusionCullingMode type
#include "OSGUInt32Fields.h" // OcclusionCullingPixels type
#include "OSGBoolFields.h" // Antialiasing type
#include "OSGReal32Fields.h" // AntialiasingDistance type
#include "OSGReal32Fields.h" // AntialiasingScale type
#include "OSGUInt32Fields.h" // AntialiasingTrigger type
#include "OSGBoolFields.h" // FrustumCulling type
#include "OSGBoolFields.h" // BackfaceCulling type
#include "OSGBoolFields.h" // SmallFeatureCulling type
#include "OSGReal32Fields.h" // SmallFeaturePixels type
#include "OSGUInt32Fields.h" // SmallFeatureThreshold type
#include "OSGBoolFields.h" // FirstFrame type

#include "OSGRenderOptionsFields.h"

OSG_BEGIN_NAMESPACE

class RenderOptions;

//! \brief RenderOptions Base Class.

class OSG_SYSTEM_DLLMAPPING RenderOptionsBase : public FieldContainerAttachment
{
  public:

    typedef FieldContainerAttachment Inherited;
    typedef FieldContainerAttachment ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(RenderOptions);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        StatisticFieldId = Inherited::NextFieldId,
        PolygonModeFieldId = StatisticFieldId + 1,
        TwoSidedLightingFieldId = PolygonModeFieldId + 1,
        SpecTexLightingFieldId = TwoSidedLightingFieldId + 1,
        SortTransFieldId = SpecTexLightingFieldId + 1,
        ZWriteTransFieldId = SortTransFieldId + 1,
        LocalLightsFieldId = ZWriteTransFieldId + 1,
        CorrectTwoSidedLightingFieldId = LocalLightsFieldId + 1,
        OcclusionCullingFieldId = CorrectTwoSidedLightingFieldId + 1,
        OcclusionCullingModeFieldId = OcclusionCullingFieldId + 1,
        OcclusionCullingPixelsFieldId = OcclusionCullingModeFieldId + 1,
        AntialiasingFieldId = OcclusionCullingPixelsFieldId + 1,
        AntialiasingDistanceFieldId = AntialiasingFieldId + 1,
        AntialiasingScaleFieldId = AntialiasingDistanceFieldId + 1,
        AntialiasingTriggerFieldId = AntialiasingScaleFieldId + 1,
        FrustumCullingFieldId = AntialiasingTriggerFieldId + 1,
        BackfaceCullingFieldId = FrustumCullingFieldId + 1,
        SmallFeatureCullingFieldId = BackfaceCullingFieldId + 1,
        SmallFeaturePixelsFieldId = SmallFeatureCullingFieldId + 1,
        SmallFeatureThresholdFieldId = SmallFeaturePixelsFieldId + 1,
        FirstFrameFieldId = SmallFeatureThresholdFieldId + 1,
        NextFieldId = FirstFrameFieldId + 1
    };

    static const OSG::BitVector StatisticFieldMask =
        (TypeTraits<BitVector>::One << StatisticFieldId);
    static const OSG::BitVector PolygonModeFieldMask =
        (TypeTraits<BitVector>::One << PolygonModeFieldId);
    static const OSG::BitVector TwoSidedLightingFieldMask =
        (TypeTraits<BitVector>::One << TwoSidedLightingFieldId);
    static const OSG::BitVector SpecTexLightingFieldMask =
        (TypeTraits<BitVector>::One << SpecTexLightingFieldId);
    static const OSG::BitVector SortTransFieldMask =
        (TypeTraits<BitVector>::One << SortTransFieldId);
    static const OSG::BitVector ZWriteTransFieldMask =
        (TypeTraits<BitVector>::One << ZWriteTransFieldId);
    static const OSG::BitVector LocalLightsFieldMask =
        (TypeTraits<BitVector>::One << LocalLightsFieldId);
    static const OSG::BitVector CorrectTwoSidedLightingFieldMask =
        (TypeTraits<BitVector>::One << CorrectTwoSidedLightingFieldId);
    static const OSG::BitVector OcclusionCullingFieldMask =
        (TypeTraits<BitVector>::One << OcclusionCullingFieldId);
    static const OSG::BitVector OcclusionCullingModeFieldMask =
        (TypeTraits<BitVector>::One << OcclusionCullingModeFieldId);
    static const OSG::BitVector OcclusionCullingPixelsFieldMask =
        (TypeTraits<BitVector>::One << OcclusionCullingPixelsFieldId);
    static const OSG::BitVector AntialiasingFieldMask =
        (TypeTraits<BitVector>::One << AntialiasingFieldId);
    static const OSG::BitVector AntialiasingDistanceFieldMask =
        (TypeTraits<BitVector>::One << AntialiasingDistanceFieldId);
    static const OSG::BitVector AntialiasingScaleFieldMask =
        (TypeTraits<BitVector>::One << AntialiasingScaleFieldId);
    static const OSG::BitVector AntialiasingTriggerFieldMask =
        (TypeTraits<BitVector>::One << AntialiasingTriggerFieldId);
    static const OSG::BitVector FrustumCullingFieldMask =
        (TypeTraits<BitVector>::One << FrustumCullingFieldId);
    static const OSG::BitVector BackfaceCullingFieldMask =
        (TypeTraits<BitVector>::One << BackfaceCullingFieldId);
    static const OSG::BitVector SmallFeatureCullingFieldMask =
        (TypeTraits<BitVector>::One << SmallFeatureCullingFieldId);
    static const OSG::BitVector SmallFeaturePixelsFieldMask =
        (TypeTraits<BitVector>::One << SmallFeaturePixelsFieldId);
    static const OSG::BitVector SmallFeatureThresholdFieldMask =
        (TypeTraits<BitVector>::One << SmallFeatureThresholdFieldId);
    static const OSG::BitVector FirstFrameFieldMask =
        (TypeTraits<BitVector>::One << FirstFrameFieldId);
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
                  SFBool              *getSFStatistic       (void);
#endif
                  SFBool              *editSFStatistic      (void);
            const SFBool              *getSFStatistic       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFPolygonMode     (void);
#endif
                  SFGLenum            *editSFPolygonMode    (void);
            const SFGLenum            *getSFPolygonMode     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFTwoSidedLighting (void);
#endif
                  SFBool              *editSFTwoSidedLighting(void);
            const SFBool              *getSFTwoSidedLighting (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFSpecTexLighting (void);
#endif
                  SFBool              *editSFSpecTexLighting(void);
            const SFBool              *getSFSpecTexLighting (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFSortTrans       (void);
#endif
                  SFBool              *editSFSortTrans      (void);
            const SFBool              *getSFSortTrans       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFZWriteTrans     (void);
#endif
                  SFBool              *editSFZWriteTrans    (void);
            const SFBool              *getSFZWriteTrans     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFLocalLights     (void);
#endif
                  SFBool              *editSFLocalLights    (void);
            const SFBool              *getSFLocalLights     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFCorrectTwoSidedLighting (void);
#endif
                  SFBool              *editSFCorrectTwoSidedLighting(void);
            const SFBool              *getSFCorrectTwoSidedLighting (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFOcclusionCulling (void);
#endif
                  SFBool              *editSFOcclusionCulling(void);
            const SFBool              *getSFOcclusionCulling (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFOcclusionCullingMode (void);
#endif
                  SFInt32             *editSFOcclusionCullingMode(void);
            const SFInt32             *getSFOcclusionCullingMode (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFOcclusionCullingPixels (void);
#endif
                  SFUInt32            *editSFOcclusionCullingPixels(void);
            const SFUInt32            *getSFOcclusionCullingPixels (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFAntialiasing    (void);
#endif
                  SFBool              *editSFAntialiasing   (void);
            const SFBool              *getSFAntialiasing    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFAntialiasingDistance (void);
#endif
                  SFReal32            *editSFAntialiasingDistance(void);
            const SFReal32            *getSFAntialiasingDistance (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFAntialiasingScale (void);
#endif
                  SFReal32            *editSFAntialiasingScale(void);
            const SFReal32            *getSFAntialiasingScale (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFAntialiasingTrigger (void);
#endif
                  SFUInt32            *editSFAntialiasingTrigger(void);
            const SFUInt32            *getSFAntialiasingTrigger (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFFrustumCulling  (void);
#endif
                  SFBool              *editSFFrustumCulling (void);
            const SFBool              *getSFFrustumCulling  (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFBackfaceCulling (void);
#endif
                  SFBool              *editSFBackfaceCulling(void);
            const SFBool              *getSFBackfaceCulling (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFSmallFeatureCulling (void);
#endif
                  SFBool              *editSFSmallFeatureCulling(void);
            const SFBool              *getSFSmallFeatureCulling (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFSmallFeaturePixels (void);
#endif
                  SFReal32            *editSFSmallFeaturePixels(void);
            const SFReal32            *getSFSmallFeaturePixels (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFSmallFeatureThreshold (void);
#endif
                  SFUInt32            *editSFSmallFeatureThreshold(void);
            const SFUInt32            *getSFSmallFeatureThreshold (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFFirstFrame      (void);
#endif
                  SFBool              *editSFFirstFrame     (void);
            const SFBool              *getSFFirstFrame      (void) const;


#ifdef OSG_1_GET_COMPAT
                  bool                &getStatistic       (void);
#endif
                  bool                &editStatistic      (void);
            const bool                &getStatistic       (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getPolygonMode     (void);
#endif
                  GLenum              &editPolygonMode    (void);
            const GLenum              &getPolygonMode     (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getTwoSidedLighting (void);
#endif
                  bool                &editTwoSidedLighting(void);
            const bool                &getTwoSidedLighting (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getSpecTexLighting (void);
#endif
                  bool                &editSpecTexLighting(void);
            const bool                &getSpecTexLighting (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getSortTrans       (void);
#endif
                  bool                &editSortTrans      (void);
            const bool                &getSortTrans       (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getZWriteTrans     (void);
#endif
                  bool                &editZWriteTrans    (void);
            const bool                &getZWriteTrans     (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getLocalLights     (void);
#endif
                  bool                &editLocalLights    (void);
            const bool                &getLocalLights     (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getCorrectTwoSidedLighting (void);
#endif
                  bool                &editCorrectTwoSidedLighting(void);
            const bool                &getCorrectTwoSidedLighting (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getOcclusionCulling (void);
#endif
                  bool                &editOcclusionCulling(void);
            const bool                &getOcclusionCulling (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getOcclusionCullingMode (void);
#endif
                  Int32               &editOcclusionCullingMode(void);
            const Int32               &getOcclusionCullingMode (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getOcclusionCullingPixels (void);
#endif
                  UInt32              &editOcclusionCullingPixels(void);
            const UInt32              &getOcclusionCullingPixels (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getAntialiasing    (void);
#endif
                  bool                &editAntialiasing   (void);
            const bool                &getAntialiasing    (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getAntialiasingDistance (void);
#endif
                  Real32              &editAntialiasingDistance(void);
            const Real32              &getAntialiasingDistance (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getAntialiasingScale (void);
#endif
                  Real32              &editAntialiasingScale(void);
            const Real32              &getAntialiasingScale (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getAntialiasingTrigger (void);
#endif
                  UInt32              &editAntialiasingTrigger(void);
            const UInt32              &getAntialiasingTrigger (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getFrustumCulling  (void);
#endif
                  bool                &editFrustumCulling (void);
            const bool                &getFrustumCulling  (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getBackfaceCulling (void);
#endif
                  bool                &editBackfaceCulling(void);
            const bool                &getBackfaceCulling (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getSmallFeatureCulling (void);
#endif
                  bool                &editSmallFeatureCulling(void);
            const bool                &getSmallFeatureCulling (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getSmallFeaturePixels (void);
#endif
                  Real32              &editSmallFeaturePixels(void);
            const Real32              &getSmallFeaturePixels (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getSmallFeatureThreshold (void);
#endif
                  UInt32              &editSmallFeatureThreshold(void);
            const UInt32              &getSmallFeatureThreshold (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getFirstFrame      (void);
#endif
                  bool                &editFirstFrame     (void);
            const bool                &getFirstFrame      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setStatistic      (const bool &value);
            void setPolygonMode    (const GLenum &value);
            void setTwoSidedLighting(const bool &value);
            void setSpecTexLighting(const bool &value);
            void setSortTrans      (const bool &value);
            void setZWriteTrans    (const bool &value);
            void setLocalLights    (const bool &value);
            void setCorrectTwoSidedLighting(const bool &value);
            void setOcclusionCulling(const bool &value);
            void setOcclusionCullingMode(const Int32 &value);
            void setOcclusionCullingPixels(const UInt32 &value);
            void setAntialiasing   (const bool &value);
            void setAntialiasingDistance(const Real32 &value);
            void setAntialiasingScale(const Real32 &value);
            void setAntialiasingTrigger(const UInt32 &value);
            void setFrustumCulling (const bool &value);
            void setBackfaceCulling(const bool &value);
            void setSmallFeatureCulling(const bool &value);
            void setSmallFeaturePixels(const Real32 &value);
            void setSmallFeatureThreshold(const UInt32 &value);
            void setFirstFrame     (const bool &value);

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

    static  RenderOptionsTransitPtr create     (void);
    static  RenderOptionsPtr        createEmpty(void);

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

    SFBool            _sfStatistic;
    SFGLenum          _sfPolygonMode;
    SFBool            _sfTwoSidedLighting;
    SFBool            _sfSpecTexLighting;
    SFBool            _sfSortTrans;
    SFBool            _sfZWriteTrans;
    SFBool            _sfLocalLights;
    SFBool            _sfCorrectTwoSidedLighting;
    SFBool            _sfOcclusionCulling;
    SFInt32           _sfOcclusionCullingMode;
    SFUInt32          _sfOcclusionCullingPixels;
    SFBool            _sfAntialiasing;
    SFReal32          _sfAntialiasingDistance;
    SFReal32          _sfAntialiasingScale;
    SFUInt32          _sfAntialiasingTrigger;
    SFBool            _sfFrustumCulling;
    SFBool            _sfBackfaceCulling;
    SFBool            _sfSmallFeatureCulling;
    SFReal32          _sfSmallFeaturePixels;
    SFUInt32          _sfSmallFeatureThreshold;
    SFBool            _sfFirstFrame;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    RenderOptionsBase(void);
    RenderOptionsBase(const RenderOptionsBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~RenderOptionsBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleStatistic       (void) const;
    EditFieldHandlePtr editHandleStatistic      (void);
    GetFieldHandlePtr  getHandlePolygonMode     (void) const;
    EditFieldHandlePtr editHandlePolygonMode    (void);
    GetFieldHandlePtr  getHandleTwoSidedLighting (void) const;
    EditFieldHandlePtr editHandleTwoSidedLighting(void);
    GetFieldHandlePtr  getHandleSpecTexLighting (void) const;
    EditFieldHandlePtr editHandleSpecTexLighting(void);
    GetFieldHandlePtr  getHandleSortTrans       (void) const;
    EditFieldHandlePtr editHandleSortTrans      (void);
    GetFieldHandlePtr  getHandleZWriteTrans     (void) const;
    EditFieldHandlePtr editHandleZWriteTrans    (void);
    GetFieldHandlePtr  getHandleLocalLights     (void) const;
    EditFieldHandlePtr editHandleLocalLights    (void);
    GetFieldHandlePtr  getHandleCorrectTwoSidedLighting (void) const;
    EditFieldHandlePtr editHandleCorrectTwoSidedLighting(void);
    GetFieldHandlePtr  getHandleOcclusionCulling (void) const;
    EditFieldHandlePtr editHandleOcclusionCulling(void);
    GetFieldHandlePtr  getHandleOcclusionCullingMode (void) const;
    EditFieldHandlePtr editHandleOcclusionCullingMode(void);
    GetFieldHandlePtr  getHandleOcclusionCullingPixels (void) const;
    EditFieldHandlePtr editHandleOcclusionCullingPixels(void);
    GetFieldHandlePtr  getHandleAntialiasing    (void) const;
    EditFieldHandlePtr editHandleAntialiasing   (void);
    GetFieldHandlePtr  getHandleAntialiasingDistance (void) const;
    EditFieldHandlePtr editHandleAntialiasingDistance(void);
    GetFieldHandlePtr  getHandleAntialiasingScale (void) const;
    EditFieldHandlePtr editHandleAntialiasingScale(void);
    GetFieldHandlePtr  getHandleAntialiasingTrigger (void) const;
    EditFieldHandlePtr editHandleAntialiasingTrigger(void);
    GetFieldHandlePtr  getHandleFrustumCulling  (void) const;
    EditFieldHandlePtr editHandleFrustumCulling (void);
    GetFieldHandlePtr  getHandleBackfaceCulling (void) const;
    EditFieldHandlePtr editHandleBackfaceCulling(void);
    GetFieldHandlePtr  getHandleSmallFeatureCulling (void) const;
    EditFieldHandlePtr editHandleSmallFeatureCulling(void);
    GetFieldHandlePtr  getHandleSmallFeaturePixels (void) const;
    EditFieldHandlePtr editHandleSmallFeaturePixels(void);
    GetFieldHandlePtr  getHandleSmallFeatureThreshold (void) const;
    EditFieldHandlePtr editHandleSmallFeatureThreshold(void);
    GetFieldHandlePtr  getHandleFirstFrame      (void) const;
    EditFieldHandlePtr editHandleFirstFrame     (void);

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

            void execSync (      RenderOptionsBase *pFrom,
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
    void operator =(const RenderOptionsBase &source);
};

typedef RenderOptionsBase *RenderOptionsBaseP;

OSG_END_NAMESPACE

#endif /* _OSGRENDEROPTIONSBASE_H_ */

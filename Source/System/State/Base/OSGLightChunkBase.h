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
 **     class LightChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLIGHTCHUNKBASE_H_
#define _OSGLIGHTCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGColor4rFields.h" // Diffuse type
#include "OSGColor4rFields.h" // Ambient type
#include "OSGColor4rFields.h" // Specular type
#include "OSGVec4rFields.h" // Position type
#include "OSGVec3rFields.h" // Direction type
#include "OSGRealFields.h" // Exponent type
#include "OSGRealFields.h" // Cutoff type
#include "OSGRealFields.h" // ConstantAttenuation type
#include "OSGRealFields.h" // LinearAttenuation type
#include "OSGRealFields.h" // QuadraticAttenuation type
#include "OSGNodeFields.h" // Beacon type

#include "OSGLightChunkFields.h"

OSG_BEGIN_NAMESPACE

class LightChunk;

//! \brief LightChunk Base Class.

class OSG_SYSTEM_DLLMAPPING LightChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(LightChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DiffuseFieldId = Inherited::NextFieldId,
        AmbientFieldId = DiffuseFieldId + 1,
        SpecularFieldId = AmbientFieldId + 1,
        PositionFieldId = SpecularFieldId + 1,
        DirectionFieldId = PositionFieldId + 1,
        ExponentFieldId = DirectionFieldId + 1,
        CutoffFieldId = ExponentFieldId + 1,
        ConstantAttenuationFieldId = CutoffFieldId + 1,
        LinearAttenuationFieldId = ConstantAttenuationFieldId + 1,
        QuadraticAttenuationFieldId = LinearAttenuationFieldId + 1,
        BeaconFieldId = QuadraticAttenuationFieldId + 1,
        NextFieldId = BeaconFieldId + 1
    };

    static const OSG::BitVector DiffuseFieldMask =
        (TypeTraits<BitVector>::One << DiffuseFieldId);
    static const OSG::BitVector AmbientFieldMask =
        (TypeTraits<BitVector>::One << AmbientFieldId);
    static const OSG::BitVector SpecularFieldMask =
        (TypeTraits<BitVector>::One << SpecularFieldId);
    static const OSG::BitVector PositionFieldMask =
        (TypeTraits<BitVector>::One << PositionFieldId);
    static const OSG::BitVector DirectionFieldMask =
        (TypeTraits<BitVector>::One << DirectionFieldId);
    static const OSG::BitVector ExponentFieldMask =
        (TypeTraits<BitVector>::One << ExponentFieldId);
    static const OSG::BitVector CutoffFieldMask =
        (TypeTraits<BitVector>::One << CutoffFieldId);
    static const OSG::BitVector ConstantAttenuationFieldMask =
        (TypeTraits<BitVector>::One << ConstantAttenuationFieldId);
    static const OSG::BitVector LinearAttenuationFieldMask =
        (TypeTraits<BitVector>::One << LinearAttenuationFieldId);
    static const OSG::BitVector QuadraticAttenuationFieldMask =
        (TypeTraits<BitVector>::One << QuadraticAttenuationFieldId);
    static const OSG::BitVector BeaconFieldMask =
        (TypeTraits<BitVector>::One << BeaconFieldId);
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
                  SFColor4r           *getSFDiffuse         (void);
#endif
                  SFColor4r           *editSFDiffuse        (void);
            const SFColor4r           *getSFDiffuse         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4r           *getSFAmbient         (void);
#endif
                  SFColor4r           *editSFAmbient        (void);
            const SFColor4r           *getSFAmbient         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4r           *getSFSpecular        (void);
#endif
                  SFColor4r           *editSFSpecular       (void);
            const SFColor4r           *getSFSpecular        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFVec4r             *getSFPosition        (void);
#endif
                  SFVec4r             *editSFPosition       (void);
            const SFVec4r             *getSFPosition        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFVec3r             *getSFDirection       (void);
#endif
                  SFVec3r             *editSFDirection      (void);
            const SFVec3r             *getSFDirection       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal              *getSFExponent        (void);
#endif
                  SFReal              *editSFExponent       (void);
            const SFReal              *getSFExponent        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal              *getSFCutoff          (void);
#endif
                  SFReal              *editSFCutoff         (void);
            const SFReal              *getSFCutoff          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal              *getSFConstantAttenuation (void);
#endif
                  SFReal              *editSFConstantAttenuation(void);
            const SFReal              *getSFConstantAttenuation (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal              *getSFLinearAttenuation (void);
#endif
                  SFReal              *editSFLinearAttenuation(void);
            const SFReal              *getSFLinearAttenuation (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal              *getSFQuadraticAttenuation (void);
#endif
                  SFReal              *editSFQuadraticAttenuation(void);
            const SFReal              *getSFQuadraticAttenuation (void) const;
            const SFWeakNodePtr       *getSFBeacon          (void) const;


#ifdef OSG_1_GET_COMPAT
                  Color4r             &getDiffuse         (void);
#endif
                  Color4r             &editDiffuse        (void);
            const Color4r             &getDiffuse         (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4r             &getAmbient         (void);
#endif
                  Color4r             &editAmbient        (void);
            const Color4r             &getAmbient         (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4r             &getSpecular        (void);
#endif
                  Color4r             &editSpecular       (void);
            const Color4r             &getSpecular        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Vec4r               &getPosition        (void);
#endif
                  Vec4r               &editPosition       (void);
            const Vec4r               &getPosition        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Vec3r               &getDirection       (void);
#endif
                  Vec3r               &editDirection      (void);
            const Vec3r               &getDirection       (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real                &getExponent        (void);
#endif
                  Real                &editExponent       (void);
            const Real                &getExponent        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real                &getCutoff          (void);
#endif
                  Real                &editCutoff         (void);
            const Real                &getCutoff          (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real                &getConstantAttenuation (void);
#endif
                  Real                &editConstantAttenuation(void);
            const Real                &getConstantAttenuation (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real                &getLinearAttenuation (void);
#endif
                  Real                &editLinearAttenuation(void);
            const Real                &getLinearAttenuation (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real                &getQuadraticAttenuation (void);
#endif
                  Real                &editQuadraticAttenuation(void);
            const Real                &getQuadraticAttenuation (void) const;

                  NodePtrConst getBeacon         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDiffuse        (const Color4r &value);
            void setAmbient        (const Color4r &value);
            void setSpecular       (const Color4r &value);
            void setPosition       (const Vec4r &value);
            void setDirection      (const Vec3r &value);
            void setExponent       (const Real &value);
            void setCutoff         (const Real &value);
            void setConstantAttenuation(const Real &value);
            void setLinearAttenuation(const Real &value);
            void setQuadraticAttenuation(const Real &value);
            void setBeacon         (NodePtrConstArg value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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

    static  LightChunkTransitPtr create     (void);
    static  LightChunkPtr        createEmpty(void);

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

    SFColor4r         _sfDiffuse;
    SFColor4r         _sfAmbient;
    SFColor4r         _sfSpecular;
    SFVec4r           _sfPosition;
    SFVec3r           _sfDirection;
    SFReal            _sfExponent;
    SFReal            _sfCutoff;
    SFReal            _sfConstantAttenuation;
    SFReal            _sfLinearAttenuation;
    SFReal            _sfQuadraticAttenuation;
    SFWeakNodePtr     _sfBeacon;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LightChunkBase(void);
    LightChunkBase(const LightChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LightChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const LightChunk *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleDiffuse         (void) const;
    EditFieldHandlePtr editHandleDiffuse        (void);
    GetFieldHandlePtr  getHandleAmbient         (void) const;
    EditFieldHandlePtr editHandleAmbient        (void);
    GetFieldHandlePtr  getHandleSpecular        (void) const;
    EditFieldHandlePtr editHandleSpecular       (void);
    GetFieldHandlePtr  getHandlePosition        (void) const;
    EditFieldHandlePtr editHandlePosition       (void);
    GetFieldHandlePtr  getHandleDirection       (void) const;
    EditFieldHandlePtr editHandleDirection      (void);
    GetFieldHandlePtr  getHandleExponent        (void) const;
    EditFieldHandlePtr editHandleExponent       (void);
    GetFieldHandlePtr  getHandleCutoff          (void) const;
    EditFieldHandlePtr editHandleCutoff         (void);
    GetFieldHandlePtr  getHandleConstantAttenuation (void) const;
    EditFieldHandlePtr editHandleConstantAttenuation(void);
    GetFieldHandlePtr  getHandleLinearAttenuation (void) const;
    EditFieldHandlePtr editHandleLinearAttenuation(void);
    GetFieldHandlePtr  getHandleQuadraticAttenuation (void) const;
    EditFieldHandlePtr editHandleQuadraticAttenuation(void);
    GetFieldHandlePtr  getHandleBeacon          (void) const;
    EditFieldHandlePtr editHandleBeacon         (void);

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

            void execSync (      LightChunkBase *pFrom,
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
    void operator =(const LightChunkBase &source);
};

typedef LightChunkBase *LightChunkBaseP;

OSG_END_NAMESPACE

#endif /* _OSGLIGHTCHUNKBASE_H_ */

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
 **     class RegisterCombinersChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGREGISTERCOMBINERSCHUNKBASE_H_
#define _OSGREGISTERCOMBINERSCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGColor4fFields.h" // Color0 type
#include "OSGColor4fFields.h" // Color1 type
#include "OSGBoolFields.h" // ColorSumClamp type
#include "OSGGLenumFields.h" // VariableArgb type
#include "OSGGLenumFields.h" // VariableBrgb type
#include "OSGGLenumFields.h" // VariableCrgb type
#include "OSGGLenumFields.h" // VariableDrgb type
#include "OSGGLenumFields.h" // VariableAalpha type
#include "OSGGLenumFields.h" // VariableBalpha type
#include "OSGGLenumFields.h" // VariableCalpha type
#include "OSGGLenumFields.h" // VariableDalpha type
#include "OSGGLenumFields.h" // OutputABrgb type
#include "OSGGLenumFields.h" // OutputCDrgb type
#include "OSGGLenumFields.h" // OutputSumrgb type
#include "OSGGLenumFields.h" // Scalergb type
#include "OSGGLenumFields.h" // Biasrgb type
#include "OSGGLenumFields.h" // OutputABalpha type
#include "OSGGLenumFields.h" // OutputCDalpha type
#include "OSGGLenumFields.h" // OutputSumalpha type
#include "OSGUInt8Fields.h" // DotABrgb type
#include "OSGUInt8Fields.h" // DotCDrgb type
#include "OSGUInt8Fields.h" // MuxSumrgb type
#include "OSGGLenumFields.h" // Scalealpha type
#include "OSGGLenumFields.h" // Biasalpha type
#include "OSGUInt8Fields.h" // MuxSumalpha type
#include "OSGGLenumFields.h" // VariableE type
#include "OSGGLenumFields.h" // VariableF type
#include "OSGGLenumFields.h" // VariableG type
#include "OSGColor4fFields.h" // CombinerColor0 type
#include "OSGColor4fFields.h" // CombinerColor1 type
#include "OSGUInt8Fields.h" // PerStageConstants type

#include "OSGRegisterCombinersChunkFields.h"

OSG_BEGIN_NAMESPACE

class RegisterCombinersChunk;

//! \brief RegisterCombinersChunk Base Class.

class OSG_STATE_DLLMAPPING RegisterCombinersChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(RegisterCombinersChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        Color0FieldId = Inherited::NextFieldId,
        Color1FieldId = Color0FieldId + 1,
        ColorSumClampFieldId = Color1FieldId + 1,
        VariableArgbFieldId = ColorSumClampFieldId + 1,
        VariableBrgbFieldId = VariableArgbFieldId + 1,
        VariableCrgbFieldId = VariableBrgbFieldId + 1,
        VariableDrgbFieldId = VariableCrgbFieldId + 1,
        VariableAalphaFieldId = VariableDrgbFieldId + 1,
        VariableBalphaFieldId = VariableAalphaFieldId + 1,
        VariableCalphaFieldId = VariableBalphaFieldId + 1,
        VariableDalphaFieldId = VariableCalphaFieldId + 1,
        OutputABrgbFieldId = VariableDalphaFieldId + 1,
        OutputCDrgbFieldId = OutputABrgbFieldId + 1,
        OutputSumrgbFieldId = OutputCDrgbFieldId + 1,
        ScalergbFieldId = OutputSumrgbFieldId + 1,
        BiasrgbFieldId = ScalergbFieldId + 1,
        OutputABalphaFieldId = BiasrgbFieldId + 1,
        OutputCDalphaFieldId = OutputABalphaFieldId + 1,
        OutputSumalphaFieldId = OutputCDalphaFieldId + 1,
        DotABrgbFieldId = OutputSumalphaFieldId + 1,
        DotCDrgbFieldId = DotABrgbFieldId + 1,
        MuxSumrgbFieldId = DotCDrgbFieldId + 1,
        ScalealphaFieldId = MuxSumrgbFieldId + 1,
        BiasalphaFieldId = ScalealphaFieldId + 1,
        MuxSumalphaFieldId = BiasalphaFieldId + 1,
        VariableEFieldId = MuxSumalphaFieldId + 1,
        VariableFFieldId = VariableEFieldId + 1,
        VariableGFieldId = VariableFFieldId + 1,
        CombinerColor0FieldId = VariableGFieldId + 1,
        CombinerColor1FieldId = CombinerColor0FieldId + 1,
        PerStageConstantsFieldId = CombinerColor1FieldId + 1,
        NextFieldId = PerStageConstantsFieldId + 1
    };

    static const OSG::BitVector Color0FieldMask =
        (TypeTraits<BitVector>::One << Color0FieldId);
    static const OSG::BitVector Color1FieldMask =
        (TypeTraits<BitVector>::One << Color1FieldId);
    static const OSG::BitVector ColorSumClampFieldMask =
        (TypeTraits<BitVector>::One << ColorSumClampFieldId);
    static const OSG::BitVector VariableArgbFieldMask =
        (TypeTraits<BitVector>::One << VariableArgbFieldId);
    static const OSG::BitVector VariableBrgbFieldMask =
        (TypeTraits<BitVector>::One << VariableBrgbFieldId);
    static const OSG::BitVector VariableCrgbFieldMask =
        (TypeTraits<BitVector>::One << VariableCrgbFieldId);
    static const OSG::BitVector VariableDrgbFieldMask =
        (TypeTraits<BitVector>::One << VariableDrgbFieldId);
    static const OSG::BitVector VariableAalphaFieldMask =
        (TypeTraits<BitVector>::One << VariableAalphaFieldId);
    static const OSG::BitVector VariableBalphaFieldMask =
        (TypeTraits<BitVector>::One << VariableBalphaFieldId);
    static const OSG::BitVector VariableCalphaFieldMask =
        (TypeTraits<BitVector>::One << VariableCalphaFieldId);
    static const OSG::BitVector VariableDalphaFieldMask =
        (TypeTraits<BitVector>::One << VariableDalphaFieldId);
    static const OSG::BitVector OutputABrgbFieldMask =
        (TypeTraits<BitVector>::One << OutputABrgbFieldId);
    static const OSG::BitVector OutputCDrgbFieldMask =
        (TypeTraits<BitVector>::One << OutputCDrgbFieldId);
    static const OSG::BitVector OutputSumrgbFieldMask =
        (TypeTraits<BitVector>::One << OutputSumrgbFieldId);
    static const OSG::BitVector ScalergbFieldMask =
        (TypeTraits<BitVector>::One << ScalergbFieldId);
    static const OSG::BitVector BiasrgbFieldMask =
        (TypeTraits<BitVector>::One << BiasrgbFieldId);
    static const OSG::BitVector OutputABalphaFieldMask =
        (TypeTraits<BitVector>::One << OutputABalphaFieldId);
    static const OSG::BitVector OutputCDalphaFieldMask =
        (TypeTraits<BitVector>::One << OutputCDalphaFieldId);
    static const OSG::BitVector OutputSumalphaFieldMask =
        (TypeTraits<BitVector>::One << OutputSumalphaFieldId);
    static const OSG::BitVector DotABrgbFieldMask =
        (TypeTraits<BitVector>::One << DotABrgbFieldId);
    static const OSG::BitVector DotCDrgbFieldMask =
        (TypeTraits<BitVector>::One << DotCDrgbFieldId);
    static const OSG::BitVector MuxSumrgbFieldMask =
        (TypeTraits<BitVector>::One << MuxSumrgbFieldId);
    static const OSG::BitVector ScalealphaFieldMask =
        (TypeTraits<BitVector>::One << ScalealphaFieldId);
    static const OSG::BitVector BiasalphaFieldMask =
        (TypeTraits<BitVector>::One << BiasalphaFieldId);
    static const OSG::BitVector MuxSumalphaFieldMask =
        (TypeTraits<BitVector>::One << MuxSumalphaFieldId);
    static const OSG::BitVector VariableEFieldMask =
        (TypeTraits<BitVector>::One << VariableEFieldId);
    static const OSG::BitVector VariableFFieldMask =
        (TypeTraits<BitVector>::One << VariableFFieldId);
    static const OSG::BitVector VariableGFieldMask =
        (TypeTraits<BitVector>::One << VariableGFieldId);
    static const OSG::BitVector CombinerColor0FieldMask =
        (TypeTraits<BitVector>::One << CombinerColor0FieldId);
    static const OSG::BitVector CombinerColor1FieldMask =
        (TypeTraits<BitVector>::One << CombinerColor1FieldId);
    static const OSG::BitVector PerStageConstantsFieldMask =
        (TypeTraits<BitVector>::One << PerStageConstantsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFColor4f         SFColor0Type;
    typedef SFColor4f         SFColor1Type;
    typedef SFBool            SFColorSumClampType;
    typedef MFGLenum          MFVariableArgbType;
    typedef MFGLenum          MFVariableBrgbType;
    typedef MFGLenum          MFVariableCrgbType;
    typedef MFGLenum          MFVariableDrgbType;
    typedef MFGLenum          MFVariableAalphaType;
    typedef MFGLenum          MFVariableBalphaType;
    typedef MFGLenum          MFVariableCalphaType;
    typedef MFGLenum          MFVariableDalphaType;
    typedef MFGLenum          MFOutputABrgbType;
    typedef MFGLenum          MFOutputCDrgbType;
    typedef MFGLenum          MFOutputSumrgbType;
    typedef MFGLenum          MFScalergbType;
    typedef MFGLenum          MFBiasrgbType;
    typedef MFGLenum          MFOutputABalphaType;
    typedef MFGLenum          MFOutputCDalphaType;
    typedef MFGLenum          MFOutputSumalphaType;
    typedef MFUInt8           MFDotABrgbType;
    typedef MFUInt8           MFDotCDrgbType;
    typedef MFUInt8           MFMuxSumrgbType;
    typedef MFGLenum          MFScalealphaType;
    typedef MFGLenum          MFBiasalphaType;
    typedef MFUInt8           MFMuxSumalphaType;
    typedef MFGLenum          MFVariableEType;
    typedef MFGLenum          MFVariableFType;
    typedef MFGLenum          MFVariableGType;
    typedef MFColor4f         MFCombinerColor0Type;
    typedef MFColor4f         MFCombinerColor1Type;
    typedef SFUInt8           SFPerStageConstantsType;

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


                  SFColor4f           *editSFColor0         (void);
            const SFColor4f           *getSFColor0          (void) const;

                  SFColor4f           *editSFColor1         (void);
            const SFColor4f           *getSFColor1          (void) const;

                  SFBool              *editSFColorSumClamp  (void);
            const SFBool              *getSFColorSumClamp   (void) const;

                  MFGLenum            *editMFVariableArgb   (void);
            const MFGLenum            *getMFVariableArgb    (void) const;

                  MFGLenum            *editMFVariableBrgb   (void);
            const MFGLenum            *getMFVariableBrgb    (void) const;

                  MFGLenum            *editMFVariableCrgb   (void);
            const MFGLenum            *getMFVariableCrgb    (void) const;

                  MFGLenum            *editMFVariableDrgb   (void);
            const MFGLenum            *getMFVariableDrgb    (void) const;

                  MFGLenum            *editMFVariableAalpha (void);
            const MFGLenum            *getMFVariableAalpha  (void) const;

                  MFGLenum            *editMFVariableBalpha (void);
            const MFGLenum            *getMFVariableBalpha  (void) const;

                  MFGLenum            *editMFVariableCalpha (void);
            const MFGLenum            *getMFVariableCalpha  (void) const;

                  MFGLenum            *editMFVariableDalpha (void);
            const MFGLenum            *getMFVariableDalpha  (void) const;

                  MFGLenum            *editMFOutputABrgb    (void);
            const MFGLenum            *getMFOutputABrgb     (void) const;

                  MFGLenum            *editMFOutputCDrgb    (void);
            const MFGLenum            *getMFOutputCDrgb     (void) const;

                  MFGLenum            *editMFOutputSumrgb   (void);
            const MFGLenum            *getMFOutputSumrgb    (void) const;

                  MFGLenum            *editMFScalergb       (void);
            const MFGLenum            *getMFScalergb        (void) const;

                  MFGLenum            *editMFBiasrgb        (void);
            const MFGLenum            *getMFBiasrgb         (void) const;

                  MFGLenum            *editMFOutputABalpha  (void);
            const MFGLenum            *getMFOutputABalpha   (void) const;

                  MFGLenum            *editMFOutputCDalpha  (void);
            const MFGLenum            *getMFOutputCDalpha   (void) const;

                  MFGLenum            *editMFOutputSumalpha (void);
            const MFGLenum            *getMFOutputSumalpha  (void) const;

                  MFUInt8             *editMFDotABrgb       (void);
            const MFUInt8             *getMFDotABrgb        (void) const;

                  MFUInt8             *editMFDotCDrgb       (void);
            const MFUInt8             *getMFDotCDrgb        (void) const;

                  MFUInt8             *editMFMuxSumrgb      (void);
            const MFUInt8             *getMFMuxSumrgb       (void) const;

                  MFGLenum            *editMFScalealpha     (void);
            const MFGLenum            *getMFScalealpha      (void) const;

                  MFGLenum            *editMFBiasalpha      (void);
            const MFGLenum            *getMFBiasalpha       (void) const;

                  MFUInt8             *editMFMuxSumalpha    (void);
            const MFUInt8             *getMFMuxSumalpha     (void) const;

                  MFGLenum            *editMFVariableE      (void);
            const MFGLenum            *getMFVariableE       (void) const;

                  MFGLenum            *editMFVariableF      (void);
            const MFGLenum            *getMFVariableF       (void) const;

                  MFGLenum            *editMFVariableG      (void);
            const MFGLenum            *getMFVariableG       (void) const;

                  MFColor4f           *editMFCombinerColor0 (void);
            const MFColor4f           *getMFCombinerColor0  (void) const;

                  MFColor4f           *editMFCombinerColor1 (void);
            const MFColor4f           *getMFCombinerColor1  (void) const;

                  SFUInt8             *editSFPerStageConstants(void);
            const SFUInt8             *getSFPerStageConstants (void) const;


                  Color4f             &editColor0         (void);
            const Color4f             &getColor0          (void) const;

                  Color4f             &editColor1         (void);
            const Color4f             &getColor1          (void) const;

                  bool                &editColorSumClamp  (void);
                  bool                 getColorSumClamp   (void) const;

                  GLenum              &editVariableArgb   (const UInt32 index);
            const GLenum              &getVariableArgb    (const UInt32 index) const;

                  GLenum              &editVariableBrgb   (const UInt32 index);
            const GLenum              &getVariableBrgb    (const UInt32 index) const;

                  GLenum              &editVariableCrgb   (const UInt32 index);
            const GLenum              &getVariableCrgb    (const UInt32 index) const;

                  GLenum              &editVariableDrgb   (const UInt32 index);
            const GLenum              &getVariableDrgb    (const UInt32 index) const;

                  GLenum              &editVariableAalpha (const UInt32 index);
            const GLenum              &getVariableAalpha  (const UInt32 index) const;

                  GLenum              &editVariableBalpha (const UInt32 index);
            const GLenum              &getVariableBalpha  (const UInt32 index) const;

                  GLenum              &editVariableCalpha (const UInt32 index);
            const GLenum              &getVariableCalpha  (const UInt32 index) const;

                  GLenum              &editVariableDalpha (const UInt32 index);
            const GLenum              &getVariableDalpha  (const UInt32 index) const;

                  GLenum              &editOutputABrgb    (const UInt32 index);
            const GLenum              &getOutputABrgb     (const UInt32 index) const;

                  GLenum              &editOutputCDrgb    (const UInt32 index);
            const GLenum              &getOutputCDrgb     (const UInt32 index) const;

                  GLenum              &editOutputSumrgb   (const UInt32 index);
            const GLenum              &getOutputSumrgb    (const UInt32 index) const;

                  GLenum              &editScalergb       (const UInt32 index);
            const GLenum              &getScalergb        (const UInt32 index) const;

                  GLenum              &editBiasrgb        (const UInt32 index);
            const GLenum              &getBiasrgb         (const UInt32 index) const;

                  GLenum              &editOutputABalpha  (const UInt32 index);
            const GLenum              &getOutputABalpha   (const UInt32 index) const;

                  GLenum              &editOutputCDalpha  (const UInt32 index);
            const GLenum              &getOutputCDalpha   (const UInt32 index) const;

                  GLenum              &editOutputSumalpha (const UInt32 index);
            const GLenum              &getOutputSumalpha  (const UInt32 index) const;

                  UInt8               &editDotABrgb       (const UInt32 index);
                  UInt8                getDotABrgb        (const UInt32 index) const;

                  UInt8               &editDotCDrgb       (const UInt32 index);
                  UInt8                getDotCDrgb        (const UInt32 index) const;

                  UInt8               &editMuxSumrgb      (const UInt32 index);
                  UInt8                getMuxSumrgb       (const UInt32 index) const;

                  GLenum              &editScalealpha     (const UInt32 index);
            const GLenum              &getScalealpha      (const UInt32 index) const;

                  GLenum              &editBiasalpha      (const UInt32 index);
            const GLenum              &getBiasalpha       (const UInt32 index) const;

                  UInt8               &editMuxSumalpha    (const UInt32 index);
                  UInt8                getMuxSumalpha     (const UInt32 index) const;

                  GLenum              &editVariableE      (const UInt32 index);
            const GLenum              &getVariableE       (const UInt32 index) const;

                  GLenum              &editVariableF      (const UInt32 index);
            const GLenum              &getVariableF       (const UInt32 index) const;

                  GLenum              &editVariableG      (const UInt32 index);
            const GLenum              &getVariableG       (const UInt32 index) const;

                  Color4f             &editCombinerColor0 (const UInt32 index);
            const Color4f             &getCombinerColor0  (const UInt32 index) const;

                  Color4f             &editCombinerColor1 (const UInt32 index);
            const Color4f             &getCombinerColor1  (const UInt32 index) const;

                  UInt8               &editPerStageConstants(void);
                  UInt8                getPerStageConstants (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setColor0         (const Color4f &value);
            void setColor1         (const Color4f &value);
            void setColorSumClamp  (const bool value);
            void setPerStageConstants(const UInt8 value);

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

    static  RegisterCombinersChunkTransitPtr  create          (void);
    static  RegisterCombinersChunk           *createEmpty     (void);

    static  RegisterCombinersChunkTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  RegisterCombinersChunk            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFColor4f         _sfColor0;
    SFColor4f         _sfColor1;
    SFBool            _sfColorSumClamp;
    MFGLenum          _mfVariableArgb;
    MFGLenum          _mfVariableBrgb;
    MFGLenum          _mfVariableCrgb;
    MFGLenum          _mfVariableDrgb;
    MFGLenum          _mfVariableAalpha;
    MFGLenum          _mfVariableBalpha;
    MFGLenum          _mfVariableCalpha;
    MFGLenum          _mfVariableDalpha;
    MFGLenum          _mfOutputABrgb;
    MFGLenum          _mfOutputCDrgb;
    MFGLenum          _mfOutputSumrgb;
    MFGLenum          _mfScalergb;
    MFGLenum          _mfBiasrgb;
    MFGLenum          _mfOutputABalpha;
    MFGLenum          _mfOutputCDalpha;
    MFGLenum          _mfOutputSumalpha;
    MFUInt8           _mfDotABrgb;
    MFUInt8           _mfDotCDrgb;
    MFUInt8           _mfMuxSumrgb;
    MFGLenum          _mfScalealpha;
    MFGLenum          _mfBiasalpha;
    MFUInt8           _mfMuxSumalpha;
    MFGLenum          _mfVariableE;
    MFGLenum          _mfVariableF;
    MFGLenum          _mfVariableG;
    MFColor4f         _mfCombinerColor0;
    MFColor4f         _mfCombinerColor1;
    SFUInt8           _sfPerStageConstants;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    RegisterCombinersChunkBase(void);
    RegisterCombinersChunkBase(const RegisterCombinersChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~RegisterCombinersChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleColor0          (void) const;
    EditFieldHandlePtr editHandleColor0         (void);
    GetFieldHandlePtr  getHandleColor1          (void) const;
    EditFieldHandlePtr editHandleColor1         (void);
    GetFieldHandlePtr  getHandleColorSumClamp   (void) const;
    EditFieldHandlePtr editHandleColorSumClamp  (void);
    GetFieldHandlePtr  getHandleVariableArgb    (void) const;
    EditFieldHandlePtr editHandleVariableArgb   (void);
    GetFieldHandlePtr  getHandleVariableBrgb    (void) const;
    EditFieldHandlePtr editHandleVariableBrgb   (void);
    GetFieldHandlePtr  getHandleVariableCrgb    (void) const;
    EditFieldHandlePtr editHandleVariableCrgb   (void);
    GetFieldHandlePtr  getHandleVariableDrgb    (void) const;
    EditFieldHandlePtr editHandleVariableDrgb   (void);
    GetFieldHandlePtr  getHandleVariableAalpha  (void) const;
    EditFieldHandlePtr editHandleVariableAalpha (void);
    GetFieldHandlePtr  getHandleVariableBalpha  (void) const;
    EditFieldHandlePtr editHandleVariableBalpha (void);
    GetFieldHandlePtr  getHandleVariableCalpha  (void) const;
    EditFieldHandlePtr editHandleVariableCalpha (void);
    GetFieldHandlePtr  getHandleVariableDalpha  (void) const;
    EditFieldHandlePtr editHandleVariableDalpha (void);
    GetFieldHandlePtr  getHandleOutputABrgb     (void) const;
    EditFieldHandlePtr editHandleOutputABrgb    (void);
    GetFieldHandlePtr  getHandleOutputCDrgb     (void) const;
    EditFieldHandlePtr editHandleOutputCDrgb    (void);
    GetFieldHandlePtr  getHandleOutputSumrgb    (void) const;
    EditFieldHandlePtr editHandleOutputSumrgb   (void);
    GetFieldHandlePtr  getHandleScalergb        (void) const;
    EditFieldHandlePtr editHandleScalergb       (void);
    GetFieldHandlePtr  getHandleBiasrgb         (void) const;
    EditFieldHandlePtr editHandleBiasrgb        (void);
    GetFieldHandlePtr  getHandleOutputABalpha   (void) const;
    EditFieldHandlePtr editHandleOutputABalpha  (void);
    GetFieldHandlePtr  getHandleOutputCDalpha   (void) const;
    EditFieldHandlePtr editHandleOutputCDalpha  (void);
    GetFieldHandlePtr  getHandleOutputSumalpha  (void) const;
    EditFieldHandlePtr editHandleOutputSumalpha (void);
    GetFieldHandlePtr  getHandleDotABrgb        (void) const;
    EditFieldHandlePtr editHandleDotABrgb       (void);
    GetFieldHandlePtr  getHandleDotCDrgb        (void) const;
    EditFieldHandlePtr editHandleDotCDrgb       (void);
    GetFieldHandlePtr  getHandleMuxSumrgb       (void) const;
    EditFieldHandlePtr editHandleMuxSumrgb      (void);
    GetFieldHandlePtr  getHandleScalealpha      (void) const;
    EditFieldHandlePtr editHandleScalealpha     (void);
    GetFieldHandlePtr  getHandleBiasalpha       (void) const;
    EditFieldHandlePtr editHandleBiasalpha      (void);
    GetFieldHandlePtr  getHandleMuxSumalpha     (void) const;
    EditFieldHandlePtr editHandleMuxSumalpha    (void);
    GetFieldHandlePtr  getHandleVariableE       (void) const;
    EditFieldHandlePtr editHandleVariableE      (void);
    GetFieldHandlePtr  getHandleVariableF       (void) const;
    EditFieldHandlePtr editHandleVariableF      (void);
    GetFieldHandlePtr  getHandleVariableG       (void) const;
    EditFieldHandlePtr editHandleVariableG      (void);
    GetFieldHandlePtr  getHandleCombinerColor0  (void) const;
    EditFieldHandlePtr editHandleCombinerColor0 (void);
    GetFieldHandlePtr  getHandleCombinerColor1  (void) const;
    EditFieldHandlePtr editHandleCombinerColor1 (void);
    GetFieldHandlePtr  getHandlePerStageConstants (void) const;
    EditFieldHandlePtr editHandlePerStageConstants(void);

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

            void execSync (      RegisterCombinersChunkBase *pFrom,
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
    void operator =(const RegisterCombinersChunkBase &source);
};

typedef RegisterCombinersChunkBase *RegisterCombinersChunkBaseP;

OSG_END_NAMESPACE

#endif /* _OSGREGISTERCOMBINERSCHUNKBASE_H_ */

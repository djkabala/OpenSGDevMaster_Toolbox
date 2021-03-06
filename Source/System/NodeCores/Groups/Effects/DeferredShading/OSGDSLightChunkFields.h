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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDSLIGHTCHUNKFIELDS_H_
#define _OSGDSLIGHTCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DSLightChunk;

OSG_GEN_CONTAINERPTR(DSLightChunk);

/*! \ingroup GrpEffectsGroupsDeferredShadingFieldTraits
    \ingroup GrpLibOSGEffectGroups
 */
template <>
struct FieldTraits<DSLightChunk *> :
    public FieldTraitsFCPtrBase<DSLightChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DSLightChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_EFFECTGROUPS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDSLightChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDSLightChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<DSLightChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDSLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<DSLightChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDSLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<DSLightChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDSLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<DSLightChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDSLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<DSLightChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDSLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<DSLightChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDSLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<DSLightChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDSLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<DSLightChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDSLightChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields */
typedef PointerSField<DSLightChunk *,
                      RecordedRefCountPolicy  > SFRecDSLightChunkPtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields */
typedef PointerSField<DSLightChunk *,
                      UnrecordedRefCountPolicy> SFUnrecDSLightChunkPtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields */
typedef PointerSField<DSLightChunk *,
                      WeakRefCountPolicy      > SFWeakDSLightChunkPtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields */
typedef PointerSField<DSLightChunk *,
                      NoRefCountPolicy        > SFUncountedDSLightChunkPtr;


/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields */
typedef PointerMField<DSLightChunk *,
                      RecordedRefCountPolicy  > MFRecDSLightChunkPtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields */
typedef PointerMField<DSLightChunk *,
                      UnrecordedRefCountPolicy> MFUnrecDSLightChunkPtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields */
typedef PointerMField<DSLightChunk *,
                      WeakRefCountPolicy      > MFWeakDSLightChunkPtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields */
typedef PointerMField<DSLightChunk *,
                      NoRefCountPolicy        > MFUncountedDSLightChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFRecDSLightChunkPtr : 
    public PointerSField<DSLightChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFUnrecDSLightChunkPtr : 
    public PointerSField<DSLightChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFWeakDSLightChunkPtr :
    public PointerSField<DSLightChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFUncountedDSLightChunkPtr :
    public PointerSField<DSLightChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFRecDSLightChunkPtr :
    public PointerMField<DSLightChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFUnrecDSLightChunkPtr :
    public PointerMField<DSLightChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFWeakDSLightChunkPtr :
    public PointerMField<DSLightChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFUncountedDSLightChunkPtr :
    public PointerMField<DSLightChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDSLIGHTCHUNKFIELDS_H_ */

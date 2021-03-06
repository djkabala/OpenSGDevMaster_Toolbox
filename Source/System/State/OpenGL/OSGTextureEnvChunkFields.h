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


#ifndef _OSGTEXTUREENVCHUNKFIELDS_H_
#define _OSGTEXTUREENVCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TextureEnvChunk;

OSG_GEN_CONTAINERPTR(TextureEnvChunk);

/*! \ingroup GrpStateOpenGLFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<TextureEnvChunk *> :
    public FieldTraitsFCPtrBase<TextureEnvChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TextureEnvChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTextureEnvChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTextureEnvChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<TextureEnvChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTextureEnvChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureEnvChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTextureEnvChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<TextureEnvChunk *,
                      RecordedRefCountPolicy  > SFRecTextureEnvChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<TextureEnvChunk *,
                      UnrecordedRefCountPolicy> SFUnrecTextureEnvChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<TextureEnvChunk *,
                      WeakRefCountPolicy      > SFWeakTextureEnvChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<TextureEnvChunk *,
                      NoRefCountPolicy        > SFUncountedTextureEnvChunkPtr;


/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<TextureEnvChunk *,
                      RecordedRefCountPolicy  > MFRecTextureEnvChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<TextureEnvChunk *,
                      UnrecordedRefCountPolicy> MFUnrecTextureEnvChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<TextureEnvChunk *,
                      WeakRefCountPolicy      > MFWeakTextureEnvChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<TextureEnvChunk *,
                      NoRefCountPolicy        > MFUncountedTextureEnvChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFRecTextureEnvChunkPtr : 
    public PointerSField<TextureEnvChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecTextureEnvChunkPtr : 
    public PointerSField<TextureEnvChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFWeakTextureEnvChunkPtr :
    public PointerSField<TextureEnvChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedTextureEnvChunkPtr :
    public PointerSField<TextureEnvChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFRecTextureEnvChunkPtr :
    public PointerMField<TextureEnvChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecTextureEnvChunkPtr :
    public PointerMField<TextureEnvChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFWeakTextureEnvChunkPtr :
    public PointerMField<TextureEnvChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedTextureEnvChunkPtr :
    public PointerMField<TextureEnvChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTEXTUREENVCHUNKFIELDS_H_ */

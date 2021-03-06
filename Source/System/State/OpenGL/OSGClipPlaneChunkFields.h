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


#ifndef _OSGCLIPPLANECHUNKFIELDS_H_
#define _OSGCLIPPLANECHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ClipPlaneChunk;

OSG_GEN_CONTAINERPTR(ClipPlaneChunk);

/*! \ingroup GrpStateOpenGLFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<ClipPlaneChunk *> :
    public FieldTraitsFCPtrBase<ClipPlaneChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ClipPlaneChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFClipPlaneChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFClipPlaneChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<ClipPlaneChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecClipPlaneChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClipPlaneChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecClipPlaneChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClipPlaneChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakClipPlaneChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClipPlaneChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdClipPlaneChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClipPlaneChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecClipPlaneChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClipPlaneChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecClipPlaneChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClipPlaneChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakClipPlaneChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClipPlaneChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdClipPlaneChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<ClipPlaneChunk *,
                      RecordedRefCountPolicy  > SFRecClipPlaneChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<ClipPlaneChunk *,
                      UnrecordedRefCountPolicy> SFUnrecClipPlaneChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<ClipPlaneChunk *,
                      WeakRefCountPolicy      > SFWeakClipPlaneChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<ClipPlaneChunk *,
                      NoRefCountPolicy        > SFUncountedClipPlaneChunkPtr;


/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<ClipPlaneChunk *,
                      RecordedRefCountPolicy  > MFRecClipPlaneChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<ClipPlaneChunk *,
                      UnrecordedRefCountPolicy> MFUnrecClipPlaneChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<ClipPlaneChunk *,
                      WeakRefCountPolicy      > MFWeakClipPlaneChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<ClipPlaneChunk *,
                      NoRefCountPolicy        > MFUncountedClipPlaneChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFRecClipPlaneChunkPtr : 
    public PointerSField<ClipPlaneChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecClipPlaneChunkPtr : 
    public PointerSField<ClipPlaneChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFWeakClipPlaneChunkPtr :
    public PointerSField<ClipPlaneChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedClipPlaneChunkPtr :
    public PointerSField<ClipPlaneChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFRecClipPlaneChunkPtr :
    public PointerMField<ClipPlaneChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecClipPlaneChunkPtr :
    public PointerMField<ClipPlaneChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFWeakClipPlaneChunkPtr :
    public PointerMField<ClipPlaneChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedClipPlaneChunkPtr :
    public PointerMField<ClipPlaneChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCLIPPLANECHUNKFIELDS_H_ */

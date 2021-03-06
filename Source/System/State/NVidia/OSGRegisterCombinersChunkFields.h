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


#ifndef _OSGREGISTERCOMBINERSCHUNKFIELDS_H_
#define _OSGREGISTERCOMBINERSCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class RegisterCombinersChunk;

OSG_GEN_CONTAINERPTR(RegisterCombinersChunk);

/*! \ingroup GrpStateNVidiaFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<RegisterCombinersChunk *> :
    public FieldTraitsFCPtrBase<RegisterCombinersChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<RegisterCombinersChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFRegisterCombinersChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFRegisterCombinersChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<RegisterCombinersChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecRegisterCombinersChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<RegisterCombinersChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecRegisterCombinersChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<RegisterCombinersChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakRegisterCombinersChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<RegisterCombinersChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdRegisterCombinersChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<RegisterCombinersChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecRegisterCombinersChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<RegisterCombinersChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecRegisterCombinersChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<RegisterCombinersChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakRegisterCombinersChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<RegisterCombinersChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdRegisterCombinersChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateNVidiaFieldSFields */
typedef PointerSField<RegisterCombinersChunk *,
                      RecordedRefCountPolicy  > SFRecRegisterCombinersChunkPtr;
/*! \ingroup GrpStateNVidiaFieldSFields */
typedef PointerSField<RegisterCombinersChunk *,
                      UnrecordedRefCountPolicy> SFUnrecRegisterCombinersChunkPtr;
/*! \ingroup GrpStateNVidiaFieldSFields */
typedef PointerSField<RegisterCombinersChunk *,
                      WeakRefCountPolicy      > SFWeakRegisterCombinersChunkPtr;
/*! \ingroup GrpStateNVidiaFieldSFields */
typedef PointerSField<RegisterCombinersChunk *,
                      NoRefCountPolicy        > SFUncountedRegisterCombinersChunkPtr;


/*! \ingroup GrpStateNVidiaFieldMFields */
typedef PointerMField<RegisterCombinersChunk *,
                      RecordedRefCountPolicy  > MFRecRegisterCombinersChunkPtr;
/*! \ingroup GrpStateNVidiaFieldMFields */
typedef PointerMField<RegisterCombinersChunk *,
                      UnrecordedRefCountPolicy> MFUnrecRegisterCombinersChunkPtr;
/*! \ingroup GrpStateNVidiaFieldMFields */
typedef PointerMField<RegisterCombinersChunk *,
                      WeakRefCountPolicy      > MFWeakRegisterCombinersChunkPtr;
/*! \ingroup GrpStateNVidiaFieldMFields */
typedef PointerMField<RegisterCombinersChunk *,
                      NoRefCountPolicy        > MFUncountedRegisterCombinersChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateNVidiaFieldSFields \ingroup GrpLibOSGState */
struct SFRecRegisterCombinersChunkPtr : 
    public PointerSField<RegisterCombinersChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateNVidiaFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecRegisterCombinersChunkPtr : 
    public PointerSField<RegisterCombinersChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateNVidiaFieldSFields \ingroup GrpLibOSGState */
struct SFWeakRegisterCombinersChunkPtr :
    public PointerSField<RegisterCombinersChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateNVidiaFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedRegisterCombinersChunkPtr :
    public PointerSField<RegisterCombinersChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateNVidiaFieldMFields \ingroup GrpLibOSGState */
struct MFRecRegisterCombinersChunkPtr :
    public PointerMField<RegisterCombinersChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateNVidiaFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecRegisterCombinersChunkPtr :
    public PointerMField<RegisterCombinersChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateNVidiaFieldMFields \ingroup GrpLibOSGState */
struct MFWeakRegisterCombinersChunkPtr :
    public PointerMField<RegisterCombinersChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateNVidiaFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedRegisterCombinersChunkPtr :
    public PointerMField<RegisterCombinersChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGREGISTERCOMBINERSCHUNKFIELDS_H_ */

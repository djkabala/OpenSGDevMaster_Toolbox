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


#ifndef _OSGCUBESFIELDS_H_
#define _OSGCUBESFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OpenSG/OSGConfig.h"
#include "OSGCubesLibDef.h"

#include "OpenSG/OSGFieldContainerFields.h"
#include "OpenSG/OSGPointerSField.h"
#include "OpenSG/OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Cubes;

OSG_GEN_CONTAINERPTR(Cubes);

/*! \ingroup GrpCubesLibFieldTraits
    \ingroup GrpLibOSGCubesLib
 */
template <>
struct FieldTraits<Cubes *> :
    public FieldTraitsFCPtrBase<Cubes *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Cubes *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CUBESLIB_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCubesPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCubesPtr"; }
};

template<> inline
const Char8 *FieldTraits<Cubes *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCubesPtr"; 
}

template<> inline
const Char8 *FieldTraits<Cubes *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCubesPtr"; 
}

template<> inline
const Char8 *FieldTraits<Cubes *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCubesPtr"; 
}

template<> inline
const Char8 *FieldTraits<Cubes *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCubesPtr"; 
}

template<> inline
const Char8 *FieldTraits<Cubes *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCubesPtr"; 
}

template<> inline
const Char8 *FieldTraits<Cubes *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCubesPtr"; 
}

template<> inline
const Char8 *FieldTraits<Cubes *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCubesPtr"; 
}

template<> inline
const Char8 *FieldTraits<Cubes *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCubesPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpCubesLibFieldSFields */
typedef PointerSField<Cubes *,
                      RecordedRefCountPolicy  > SFRecCubesPtr;
/*! \ingroup GrpCubesLibFieldSFields */
typedef PointerSField<Cubes *,
                      UnrecordedRefCountPolicy> SFUnrecCubesPtr;
/*! \ingroup GrpCubesLibFieldSFields */
typedef PointerSField<Cubes *,
                      WeakRefCountPolicy      > SFWeakCubesPtr;
/*! \ingroup GrpCubesLibFieldSFields */
typedef PointerSField<Cubes *,
                      NoRefCountPolicy        > SFUncountedCubesPtr;


/*! \ingroup GrpCubesLibFieldMFields */
typedef PointerMField<Cubes *,
                      RecordedRefCountPolicy  > MFRecCubesPtr;
/*! \ingroup GrpCubesLibFieldMFields */
typedef PointerMField<Cubes *,
                      UnrecordedRefCountPolicy> MFUnrecCubesPtr;
/*! \ingroup GrpCubesLibFieldMFields */
typedef PointerMField<Cubes *,
                      WeakRefCountPolicy      > MFWeakCubesPtr;
/*! \ingroup GrpCubesLibFieldMFields */
typedef PointerMField<Cubes *,
                      NoRefCountPolicy        > MFUncountedCubesPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpCubesLibFieldSFields \ingroup GrpLibOSGCubesLib */
struct SFRecCubesPtr : 
    public PointerSField<Cubes *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpCubesLibFieldSFields \ingroup GrpLibOSGCubesLib */
struct SFUnrecCubesPtr : 
    public PointerSField<Cubes *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpCubesLibFieldSFields \ingroup GrpLibOSGCubesLib */
struct SFWeakCubesPtr :
    public PointerSField<Cubes *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpCubesLibFieldSFields \ingroup GrpLibOSGCubesLib */
struct SFUncountedCubesPtr :
    public PointerSField<Cubes *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpCubesLibFieldMFields \ingroup GrpLibOSGCubesLib */
struct MFRecCubesPtr :
    public PointerMField<Cubes *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpCubesLibFieldMFields \ingroup GrpLibOSGCubesLib */
struct MFUnrecCubesPtr :
    public PointerMField<Cubes *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpCubesLibFieldMFields \ingroup GrpLibOSGCubesLib */
struct MFWeakCubesPtr :
    public PointerMField<Cubes *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpCubesLibFieldMFields \ingroup GrpLibOSGCubesLib */
struct MFUncountedCubesPtr :
    public PointerMField<Cubes *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCUBESFIELDS_H_ */

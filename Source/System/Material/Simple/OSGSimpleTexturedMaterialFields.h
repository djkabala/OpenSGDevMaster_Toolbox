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


#ifndef _OSGSIMPLETEXTUREDMATERIALFIELDS_H_
#define _OSGSIMPLETEXTUREDMATERIALFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SimpleTexturedMaterial;

OSG_GEN_CONTAINERPTR(SimpleTexturedMaterial);

/*! \ingroup GrpDrawablesMaterialFieldTraits
    \ingroup GrpLibOSGDrawable
 */
template <>
struct FieldTraits<SimpleTexturedMaterial *> :
    public FieldTraitsFCPtrBase<SimpleTexturedMaterial *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SimpleTexturedMaterial *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSimpleTexturedMaterialPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSimpleTexturedMaterialPtr"; }
};

template<> inline
const Char8 *FieldTraits<SimpleTexturedMaterial *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSimpleTexturedMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleTexturedMaterial *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSimpleTexturedMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleTexturedMaterial *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSimpleTexturedMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleTexturedMaterial *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSimpleTexturedMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleTexturedMaterial *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSimpleTexturedMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleTexturedMaterial *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSimpleTexturedMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleTexturedMaterial *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSimpleTexturedMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleTexturedMaterial *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSimpleTexturedMaterialPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDrawablesMaterialFieldSFields */
typedef PointerSField<SimpleTexturedMaterial *,
                      RecordedRefCountPolicy  > SFRecSimpleTexturedMaterialPtr;
/*! \ingroup GrpDrawablesMaterialFieldSFields */
typedef PointerSField<SimpleTexturedMaterial *,
                      UnrecordedRefCountPolicy> SFUnrecSimpleTexturedMaterialPtr;
/*! \ingroup GrpDrawablesMaterialFieldSFields */
typedef PointerSField<SimpleTexturedMaterial *,
                      WeakRefCountPolicy      > SFWeakSimpleTexturedMaterialPtr;
/*! \ingroup GrpDrawablesMaterialFieldSFields */
typedef PointerSField<SimpleTexturedMaterial *,
                      NoRefCountPolicy        > SFUncountedSimpleTexturedMaterialPtr;


/*! \ingroup GrpDrawablesMaterialFieldMFields */
typedef PointerMField<SimpleTexturedMaterial *,
                      RecordedRefCountPolicy  > MFRecSimpleTexturedMaterialPtr;
/*! \ingroup GrpDrawablesMaterialFieldMFields */
typedef PointerMField<SimpleTexturedMaterial *,
                      UnrecordedRefCountPolicy> MFUnrecSimpleTexturedMaterialPtr;
/*! \ingroup GrpDrawablesMaterialFieldMFields */
typedef PointerMField<SimpleTexturedMaterial *,
                      WeakRefCountPolicy      > MFWeakSimpleTexturedMaterialPtr;
/*! \ingroup GrpDrawablesMaterialFieldMFields */
typedef PointerMField<SimpleTexturedMaterial *,
                      NoRefCountPolicy        > MFUncountedSimpleTexturedMaterialPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDrawablesMaterialFieldSFields \ingroup GrpLibOSGDrawable */
struct SFRecSimpleTexturedMaterialPtr : 
    public PointerSField<SimpleTexturedMaterial *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesMaterialFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecSimpleTexturedMaterialPtr : 
    public PointerSField<SimpleTexturedMaterial *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesMaterialFieldSFields \ingroup GrpLibOSGDrawable */
struct SFWeakSimpleTexturedMaterialPtr :
    public PointerSField<SimpleTexturedMaterial *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDrawablesMaterialFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUncountedSimpleTexturedMaterialPtr :
    public PointerSField<SimpleTexturedMaterial *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDrawablesMaterialFieldMFields \ingroup GrpLibOSGDrawable */
struct MFRecSimpleTexturedMaterialPtr :
    public PointerMField<SimpleTexturedMaterial *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDrawablesMaterialFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecSimpleTexturedMaterialPtr :
    public PointerMField<SimpleTexturedMaterial *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesMaterialFieldMFields \ingroup GrpLibOSGDrawable */
struct MFWeakSimpleTexturedMaterialPtr :
    public PointerMField<SimpleTexturedMaterial *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDrawablesMaterialFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUncountedSimpleTexturedMaterialPtr :
    public PointerMField<SimpleTexturedMaterial *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSIMPLETEXTUREDMATERIALFIELDS_H_ */

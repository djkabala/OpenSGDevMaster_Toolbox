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


#ifndef _OSGPROJECTIONCAMERADECORATORFIELDS_H_
#define _OSGPROJECTIONCAMERADECORATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ProjectionCameraDecorator;

OSG_GEN_CONTAINERPTR(ProjectionCameraDecorator);

/*! \ingroup GrpWindowCameraFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<ProjectionCameraDecorator *> :
    public FieldTraitsFCPtrBase<ProjectionCameraDecorator *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ProjectionCameraDecorator *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFProjectionCameraDecoratorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFProjectionCameraDecoratorPtr"; }
};

template<> inline
const Char8 *FieldTraits<ProjectionCameraDecorator *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecProjectionCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProjectionCameraDecorator *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecProjectionCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProjectionCameraDecorator *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakProjectionCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProjectionCameraDecorator *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdProjectionCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProjectionCameraDecorator *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecProjectionCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProjectionCameraDecorator *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecProjectionCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProjectionCameraDecorator *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakProjectionCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProjectionCameraDecorator *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdProjectionCameraDecoratorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<ProjectionCameraDecorator *,
                      RecordedRefCountPolicy  > SFRecProjectionCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<ProjectionCameraDecorator *,
                      UnrecordedRefCountPolicy> SFUnrecProjectionCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<ProjectionCameraDecorator *,
                      WeakRefCountPolicy      > SFWeakProjectionCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<ProjectionCameraDecorator *,
                      NoRefCountPolicy        > SFUncountedProjectionCameraDecoratorPtr;


/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<ProjectionCameraDecorator *,
                      RecordedRefCountPolicy  > MFRecProjectionCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<ProjectionCameraDecorator *,
                      UnrecordedRefCountPolicy> MFUnrecProjectionCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<ProjectionCameraDecorator *,
                      WeakRefCountPolicy      > MFWeakProjectionCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<ProjectionCameraDecorator *,
                      NoRefCountPolicy        > MFUncountedProjectionCameraDecoratorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecProjectionCameraDecoratorPtr : 
    public PointerSField<ProjectionCameraDecorator *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecProjectionCameraDecoratorPtr : 
    public PointerSField<ProjectionCameraDecorator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakProjectionCameraDecoratorPtr :
    public PointerSField<ProjectionCameraDecorator *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedProjectionCameraDecoratorPtr :
    public PointerSField<ProjectionCameraDecorator *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecProjectionCameraDecoratorPtr :
    public PointerMField<ProjectionCameraDecorator *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecProjectionCameraDecoratorPtr :
    public PointerMField<ProjectionCameraDecorator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakProjectionCameraDecoratorPtr :
    public PointerMField<ProjectionCameraDecorator *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedProjectionCameraDecoratorPtr :
    public PointerMField<ProjectionCameraDecorator *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPROJECTIONCAMERADECORATORFIELDS_H_ */

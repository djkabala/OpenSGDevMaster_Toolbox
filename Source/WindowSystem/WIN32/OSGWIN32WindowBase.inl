/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class WIN32Window!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &WIN32WindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 WIN32WindowBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 WIN32WindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the WIN32Window::_sfHwnd field.

inline
HWND &WIN32WindowBase::editHwnd(void)
{
    editSField(HwndFieldMask);

    return _sfHwnd.getValue();
}

//! Get the value of the WIN32Window::_sfHwnd field.
inline
const HWND &WIN32WindowBase::getHwnd(void) const
{
    return _sfHwnd.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
HWND                &WIN32WindowBase::getHwnd           (void)
{
    return this->editHwnd           ();
}
#endif

//! Set the value of the WIN32Window::_sfHwnd field.
inline
void WIN32WindowBase::setHwnd(const HWND &value)
{
    editSField(HwndFieldMask);

    _sfHwnd.setValue(value);
}
//! Get the value of the WIN32Window::_sfHdc field.

inline
HDC &WIN32WindowBase::editHdc(void)
{
    editSField(HdcFieldMask);

    return _sfHdc.getValue();
}

//! Get the value of the WIN32Window::_sfHdc field.
inline
const HDC &WIN32WindowBase::getHdc(void) const
{
    return _sfHdc.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
HDC                 &WIN32WindowBase::getHdc            (void)
{
    return this->editHdc            ();
}
#endif

//! Set the value of the WIN32Window::_sfHdc field.
inline
void WIN32WindowBase::setHdc(const HDC &value)
{
    editSField(HdcFieldMask);

    _sfHdc.setValue(value);
}
//! Get the value of the WIN32Window::_sfHglrc field.

inline
HGLRC &WIN32WindowBase::editHglrc(void)
{
    editSField(HglrcFieldMask);

    return _sfHglrc.getValue();
}

//! Get the value of the WIN32Window::_sfHglrc field.
inline
const HGLRC &WIN32WindowBase::getHglrc(void) const
{
    return _sfHglrc.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
HGLRC               &WIN32WindowBase::getHglrc          (void)
{
    return this->editHglrc          ();
}
#endif

//! Set the value of the WIN32Window::_sfHglrc field.
inline
void WIN32WindowBase::setHglrc(const HGLRC &value)
{
    editSField(HglrcFieldMask);

    _sfHglrc.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void WIN32WindowBase::execSync (      WIN32WindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
        _sfHwnd.syncWith(pFrom->_sfHwnd);

    if(FieldBits::NoField != (HdcFieldMask & whichField))
        _sfHdc.syncWith(pFrom->_sfHdc);

    if(FieldBits::NoField != (HglrcFieldMask & whichField))
        _sfHglrc.syncWith(pFrom->_sfHglrc);
}
#endif


inline
Char8 *WIN32WindowBase::getClassname(void)
{
    return "WIN32Window";
}
OSG_GEN_CONTAINERPTR(WIN32Window);

OSG_END_NAMESPACE


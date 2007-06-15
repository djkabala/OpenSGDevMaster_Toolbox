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
 **     class GLUTWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GLUTWindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 GLUTWindowBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 GLUTWindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the GLUTWindow::_sfId field.

inline
Int32 &GLUTWindowBase::editId(void)
{
    editSField(IdFieldMask);

    return _sfId.getValue();
}

//! Get the value of the GLUTWindow::_sfId field.
inline
const Int32 &GLUTWindowBase::getId(void) const
{
    return _sfId.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Int32               &GLUTWindowBase::getId             (void)
{
    return this->editId             ();
}
#endif

//! Set the value of the GLUTWindow::_sfId field.
inline
void GLUTWindowBase::setId(const Int32 &value)
{
    editSField(IdFieldMask);

    _sfId.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void GLUTWindowBase::execSync (      GLUTWindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (IdFieldMask & whichField))
        _sfId.syncWith(pFrom->_sfId);
}
#endif


inline
Char8 *GLUTWindowBase::getClassname(void)
{
    return "GLUTWindow";
}
OSG_GEN_CONTAINERPTR(GLUTWindow);

OSG_END_NAMESPACE


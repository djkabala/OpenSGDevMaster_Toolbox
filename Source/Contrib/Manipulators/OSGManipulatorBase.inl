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
 **     class Manipulator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ManipulatorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ManipulatorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ManipulatorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the Manipulator::_sfTarget field.
inline
Node * ManipulatorBase::getTarget(void) const
{
    return _sfTarget.getValue();
}

//! Set the value of the Manipulator::_sfTarget field.
inline
void ManipulatorBase::setTarget(Node * const value)
{
    editSField(TargetFieldMask);

    _sfTarget.setValue(value);
}
//! Get the value of the Manipulator::_sfActiveHandle field.

inline
UInt16 &ManipulatorBase::editActiveHandle(void)
{
    editSField(ActiveHandleFieldMask);

    return _sfActiveHandle.getValue();
}

//! Get the value of the Manipulator::_sfActiveHandle field.
inline
      UInt16  ManipulatorBase::getActiveHandle(void) const
{
    return _sfActiveHandle.getValue();
}

//! Set the value of the Manipulator::_sfActiveHandle field.
inline
void ManipulatorBase::setActiveHandle(const UInt16 value)
{
    editSField(ActiveHandleFieldMask);

    _sfActiveHandle.setValue(value);
}
//! Get the value of the Manipulator::_sfRolloverHandle field.

inline
UInt16 &ManipulatorBase::editRolloverHandle(void)
{
    editSField(RolloverHandleFieldMask);

    return _sfRolloverHandle.getValue();
}

//! Get the value of the Manipulator::_sfRolloverHandle field.
inline
      UInt16  ManipulatorBase::getRolloverHandle(void) const
{
    return _sfRolloverHandle.getValue();
}

//! Set the value of the Manipulator::_sfRolloverHandle field.
inline
void ManipulatorBase::setRolloverHandle(const UInt16 value)
{
    editSField(RolloverHandleFieldMask);

    _sfRolloverHandle.setValue(value);
}
//! Get the value of the Manipulator::_sfStartMousePos field.

inline
Pnt2f &ManipulatorBase::editStartMousePos(void)
{
    editSField(StartMousePosFieldMask);

    return _sfStartMousePos.getValue();
}

//! Get the value of the Manipulator::_sfStartMousePos field.
inline
const Pnt2f &ManipulatorBase::getStartMousePos(void) const
{
    return _sfStartMousePos.getValue();
}

//! Set the value of the Manipulator::_sfStartMousePos field.
inline
void ManipulatorBase::setStartMousePos(const Pnt2f &value)
{
    editSField(StartMousePosFieldMask);

    _sfStartMousePos.setValue(value);
}

//! Get the value of the Manipulator::_sfViewport field.
inline
Viewport * ManipulatorBase::getViewport(void) const
{
    return _sfViewport.getValue();
}

//! Set the value of the Manipulator::_sfViewport field.
inline
void ManipulatorBase::setViewport(Viewport * const value)
{
    editSField(ViewportFieldMask);

    _sfViewport.setValue(value);
}
//! Get the value of the Manipulator::_sfMaintainScreenSize field.

inline
bool &ManipulatorBase::editMaintainScreenSize(void)
{
    editSField(MaintainScreenSizeFieldMask);

    return _sfMaintainScreenSize.getValue();
}

//! Get the value of the Manipulator::_sfMaintainScreenSize field.
inline
      bool  ManipulatorBase::getMaintainScreenSize(void) const
{
    return _sfMaintainScreenSize.getValue();
}

//! Set the value of the Manipulator::_sfMaintainScreenSize field.
inline
void ManipulatorBase::setMaintainScreenSize(const bool value)
{
    editSField(MaintainScreenSizeFieldMask);

    _sfMaintainScreenSize.setValue(value);
}
//! Get the value of the Manipulator::_sfManipulatorScreenDepth field.

inline
Real32 &ManipulatorBase::editManipulatorScreenDepth(void)
{
    editSField(ManipulatorScreenDepthFieldMask);

    return _sfManipulatorScreenDepth.getValue();
}

//! Get the value of the Manipulator::_sfManipulatorScreenDepth field.
inline
      Real32  ManipulatorBase::getManipulatorScreenDepth(void) const
{
    return _sfManipulatorScreenDepth.getValue();
}

//! Set the value of the Manipulator::_sfManipulatorScreenDepth field.
inline
void ManipulatorBase::setManipulatorScreenDepth(const Real32 value)
{
    editSField(ManipulatorScreenDepthFieldMask);

    _sfManipulatorScreenDepth.setValue(value);
}
//! Get the value of the Manipulator::_sfLength field.

inline
Vec3f &ManipulatorBase::editLength(void)
{
    editSField(LengthFieldMask);

    return _sfLength.getValue();
}

//! Get the value of the Manipulator::_sfLength field.
inline
const Vec3f &ManipulatorBase::getLength(void) const
{
    return _sfLength.getValue();
}

//! Set the value of the Manipulator::_sfLength field.
inline
void ManipulatorBase::setLength(const Vec3f &value)
{
    editSField(LengthFieldMask);

    _sfLength.setValue(value);
}
//! Get the value of the Manipulator::_sfWidth field.

inline
Vec3f &ManipulatorBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the Manipulator::_sfWidth field.
inline
const Vec3f &ManipulatorBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the Manipulator::_sfWidth field.
inline
void ManipulatorBase::setWidth(const Vec3f &value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}

//! Get the value of the Manipulator::_sfMaterialX field.
inline
Material * ManipulatorBase::getMaterialX(void) const
{
    return _sfMaterialX.getValue();
}

//! Set the value of the Manipulator::_sfMaterialX field.
inline
void ManipulatorBase::setMaterialX(Material * const value)
{
    editSField(MaterialXFieldMask);

    _sfMaterialX.setValue(value);
}

//! Get the value of the Manipulator::_sfMaterialY field.
inline
Material * ManipulatorBase::getMaterialY(void) const
{
    return _sfMaterialY.getValue();
}

//! Set the value of the Manipulator::_sfMaterialY field.
inline
void ManipulatorBase::setMaterialY(Material * const value)
{
    editSField(MaterialYFieldMask);

    _sfMaterialY.setValue(value);
}

//! Get the value of the Manipulator::_sfMaterialZ field.
inline
Material * ManipulatorBase::getMaterialZ(void) const
{
    return _sfMaterialZ.getValue();
}

//! Set the value of the Manipulator::_sfMaterialZ field.
inline
void ManipulatorBase::setMaterialZ(Material * const value)
{
    editSField(MaterialZFieldMask);

    _sfMaterialZ.setValue(value);
}

//! Get the value of the Manipulator::_sfMaterialSelected field.
inline
Material * ManipulatorBase::getMaterialSelected(void) const
{
    return _sfMaterialSelected.getValue();
}

//! Set the value of the Manipulator::_sfMaterialSelected field.
inline
void ManipulatorBase::setMaterialSelected(Material * const value)
{
    editSField(MaterialSelectedFieldMask);

    _sfMaterialSelected.setValue(value);
}

//! Get the value of the Manipulator::_sfMaterialRollover field.
inline
Material * ManipulatorBase::getMaterialRollover(void) const
{
    return _sfMaterialRollover.getValue();
}

//! Set the value of the Manipulator::_sfMaterialRollover field.
inline
void ManipulatorBase::setMaterialRollover(Material * const value)
{
    editSField(MaterialRolloverFieldMask);

    _sfMaterialRollover.setValue(value);
}

//! Get the value of the \a index element the Manipulator::_mfXGeometries field.
inline
Geometry * ManipulatorBase::getXGeometries(const UInt32 index) const
{
    return _mfXGeometries[index];
}

//! Get the value of the \a index element the Manipulator::_mfYGeometries field.
inline
Geometry * ManipulatorBase::getYGeometries(const UInt32 index) const
{
    return _mfYGeometries[index];
}

//! Get the value of the \a index element the Manipulator::_mfZGeometries field.
inline
Geometry * ManipulatorBase::getZGeometries(const UInt32 index) const
{
    return _mfZGeometries[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ManipulatorBase::execSync (      ManipulatorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
        _sfTarget.syncWith(pFrom->_sfTarget);

    if(FieldBits::NoField != (ActiveHandleFieldMask & whichField))
        _sfActiveHandle.syncWith(pFrom->_sfActiveHandle);

    if(FieldBits::NoField != (RolloverHandleFieldMask & whichField))
        _sfRolloverHandle.syncWith(pFrom->_sfRolloverHandle);

    if(FieldBits::NoField != (StartMousePosFieldMask & whichField))
        _sfStartMousePos.syncWith(pFrom->_sfStartMousePos);

    if(FieldBits::NoField != (ViewportFieldMask & whichField))
        _sfViewport.syncWith(pFrom->_sfViewport);

    if(FieldBits::NoField != (MaintainScreenSizeFieldMask & whichField))
        _sfMaintainScreenSize.syncWith(pFrom->_sfMaintainScreenSize);

    if(FieldBits::NoField != (ManipulatorScreenDepthFieldMask & whichField))
        _sfManipulatorScreenDepth.syncWith(pFrom->_sfManipulatorScreenDepth);

    if(FieldBits::NoField != (LengthFieldMask & whichField))
        _sfLength.syncWith(pFrom->_sfLength);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (XGeometriesFieldMask & whichField))
        _mfXGeometries.syncWith(pFrom->_mfXGeometries,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (YGeometriesFieldMask & whichField))
        _mfYGeometries.syncWith(pFrom->_mfYGeometries,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ZGeometriesFieldMask & whichField))
        _mfZGeometries.syncWith(pFrom->_mfZGeometries,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (MaterialXFieldMask & whichField))
        _sfMaterialX.syncWith(pFrom->_sfMaterialX);

    if(FieldBits::NoField != (MaterialYFieldMask & whichField))
        _sfMaterialY.syncWith(pFrom->_sfMaterialY);

    if(FieldBits::NoField != (MaterialZFieldMask & whichField))
        _sfMaterialZ.syncWith(pFrom->_sfMaterialZ);

    if(FieldBits::NoField != (MaterialSelectedFieldMask & whichField))
        _sfMaterialSelected.syncWith(pFrom->_sfMaterialSelected);

    if(FieldBits::NoField != (MaterialRolloverFieldMask & whichField))
        _sfMaterialRollover.syncWith(pFrom->_sfMaterialRollover);
}
#endif


inline
const Char8 *ManipulatorBase::getClassname(void)
{
    return "Manipulator";
}
OSG_GEN_CONTAINERPTR(Manipulator);

OSG_END_NAMESPACE


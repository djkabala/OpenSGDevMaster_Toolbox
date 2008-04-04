/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003 by the OpenSG Forum                          *
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

#ifndef _OSGFIELDBUNDLEFACTORY_H_
#define _OSGFIELDBUNDLEFACTORY_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBaseTypes.h"
#include "OSGSystemDef.h"
#include "OSGSingletonHolder.h"
#include "OSGContainerForwards.h"
#include "OSGContainerFactory.h"
#include "OSGContainerIdMapper.h"

OSG_BEGIN_NAMESPACE

struct FieldBundleFactoryDesc
{
    typedef FieldBundleType ContainerType;
    typedef FieldBundleP    ContainerPtr;
    typedef FieldBundleP    ContainerTransitPtr;

    static Char8 *getContainerFactoryLockName(void)
    {
        return "BundleFactory::cflock";
    }
};

/*! \ingroup GrpSystemFieldContainer
 */

class OSG_SYSTEM_DLLMAPPING FieldBundleFactoryBase : 
    public ContainerFactory<FieldBundleFactoryDesc>
{
    /*==========================  PUBLIC  =================================*/

  public:

    typedef FieldBundleP              ContainerPtr;

    typedef std::vector<ContainerPtr> ContainerStore;
    typedef ContainerStore::iterator  ContainerStoreIt;

    /*---------------------------------------------------------------------*/
    /*! \name                      dcast                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name        General Fieldcontainer Declaration                    */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructor                                 */
    /*! \{                                                                 */

     /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Helper                                    */
    /*! \{                                                                 */

    void setMapper(ContainerIdMapper *pMapper);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Get                                     */
    /*! \{                                                                 */

    UInt32       getNumContainers   (void                ) const;
    ContainerPtr getContainer       (UInt32 uiContainerId) const;
    ContainerPtr getMappedContainer (UInt32 uiContainerId) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Set                                     */
    /*! \{                                                                 */

    UInt32 registerContainer  (const ContainerPtr &pContainer   );
    bool   deregisterContainer(const UInt32        uiContainerId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   your_category                              */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 Container Access                             */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   your_operators                             */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Assignment                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Comparison                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                        Dump                                  */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                  Type information                            */
    /*! \{                                                                 */

    template <class SingletonT>
    friend class SingletonHolder;

    friend class FactoryControllerBase;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

#ifndef OSG_WINCE
    Lock              *_pStoreLock;
#endif

    ContainerStore     _vContainerStore;

    ContainerIdMapper *_pMapper;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Member                                  */
    /*! \{                                                                 */

    FieldBundleFactoryBase(void);
    FieldBundleFactoryBase(const Char8 *szFactoryName);

    virtual ~FieldBundleFactoryBase(void);

    virtual bool initialize           (void);
    virtual bool terminate            (void);

    virtual bool initializeFactoryPost(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Changed                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   MT Destruction                             */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    typedef ContainerFactory<FieldBundleFactoryDesc> Inherited;


    /*!\brief prohibit default function (move to 'public' if needed) */
    FieldBundleFactoryBase(const FieldBundleFactoryBase &source);
    /*!\brief prohibit default function (move to 'public' if needed) */
    void operator =(const FieldBundleFactoryBase &source);
};

#if defined(WIN32)
#    if !defined(OSG_COMPILE_FIELDBUNDLEFACTORY)
OSG_SYSTEM_EXPIMP_TMPL 
template 
class OSG_SYSTEM_DLLMAPPING SingletonHolder<FieldBundleFactoryBase>;
#    endif
#endif

typedef SingletonHolder<FieldBundleFactoryBase> FieldBundleFactory;

OSG_END_NAMESPACE

#include "OSGFieldBundleFactory.inl"

#endif /* _OSGFIELDBUNDLEFACTORY_H_ */

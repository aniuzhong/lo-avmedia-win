#ifndef INCLUDED_COM_SUN_STAR_MOZILLA_XMENUPROXY_HPP
#define INCLUDED_COM_SUN_STAR_MOZILLA_XMENUPROXY_HPP

#include "sal/config.h"

#include "com/sun/star/mozilla/XMenuProxy.hdl"

#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/mozilla/XMenuProxyListener.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"

#if defined LIBO_INTERNAL_ONLY
#include <type_traits>
#endif

namespace com { namespace sun { namespace star { namespace mozilla {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::mozilla::XMenuProxy const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::lang::XComponent > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.mozilla.XMenuProxy", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::mozilla::XMenuProxy > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::mozilla::XMenuProxy > >::get();
}

::css::uno::Type const & ::css::mozilla::XMenuProxy::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::mozilla::XMenuProxy >::get();
}

#if defined LIBO_INTERNAL_ONLY
namespace cppu::detail {
template<> struct IsUnoInterfaceType<::css::mozilla::XMenuProxy>: ::std::true_type {};
}
#endif

#endif // INCLUDED_COM_SUN_STAR_MOZILLA_XMENUPROXY_HPP
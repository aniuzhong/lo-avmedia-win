#ifndef INCLUDED_COM_SUN_STAR_AWT_VCLCONTAINEREVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_VCLCONTAINEREVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/VclContainerEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline VclContainerEvent::VclContainerEvent()
    : ::css::lang::EventObject()
    , Child()
{
}

inline VclContainerEvent::VclContainerEvent(const ::css::uno::Reference< ::css::uno::XInterface >& Source_, const ::css::uno::Reference< ::css::uno::XInterface >& Child_)
    : ::css::lang::EventObject(Source_)
    , Child(Child_)
{
}


inline bool operator==(const VclContainerEvent& the_lhs, const VclContainerEvent& the_rhs)
{
    return operator==( static_cast< ::css::lang::EventObject>(the_lhs), static_cast< ::css::lang::EventObject>(the_rhs) )

        && the_lhs.Child == the_rhs.Child;
}

inline bool operator!=(const VclContainerEvent& the_lhs, const VclContainerEvent& the_rhs)
{
return !operator==(the_lhs, the_rhs);
}
} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::awt::VclContainerEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::css::uno::Reference< ::css::uno::XInterface > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.VclContainerEvent", ::cppu::UnoType< ::css::lang::EventObject >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::css::uno::Type * >(&the_type);
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::awt::VclContainerEvent const *) {
    return ::cppu::UnoType< ::css::awt::VclContainerEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_VCLCONTAINEREVENT_HPP

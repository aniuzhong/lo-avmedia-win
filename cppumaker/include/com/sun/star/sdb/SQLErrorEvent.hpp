#ifndef INCLUDED_COM_SUN_STAR_SDB_SQLERROREVENT_HPP
#define INCLUDED_COM_SUN_STAR_SDB_SQLERROREVENT_HPP

#include "sal/config.h"

#include "com/sun/star/sdb/SQLErrorEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sdb {

inline SQLErrorEvent::SQLErrorEvent()
    : ::css::lang::EventObject()
    , Reason()
{
}

inline SQLErrorEvent::SQLErrorEvent(const ::css::uno::Reference< ::css::uno::XInterface >& Source_, const ::css::uno::Any& Reason_)
    : ::css::lang::EventObject(Source_)
    , Reason(Reason_)
{
}


inline bool operator==(const SQLErrorEvent& the_lhs, const SQLErrorEvent& the_rhs)
{
    return operator==( static_cast< ::css::lang::EventObject>(the_lhs), static_cast< ::css::lang::EventObject>(the_rhs) )

        && the_lhs.Reason == the_rhs.Reason;
}

inline bool operator!=(const SQLErrorEvent& the_lhs, const SQLErrorEvent& the_rhs)
{
return !operator==(the_lhs, the_rhs);
}
} } } }

namespace com { namespace sun { namespace star { namespace sdb {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::sdb::SQLErrorEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::css::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sdb.SQLErrorEvent", ::cppu::UnoType< ::css::lang::EventObject >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::css::uno::Type * >(&the_type);
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::sdb::SQLErrorEvent const *) {
    return ::cppu::UnoType< ::css::sdb::SQLErrorEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDB_SQLERROREVENT_HPP

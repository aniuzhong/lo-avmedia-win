#ifndef INCLUDED_COM_SUN_STAR_UCB_COMMANDINFO_HPP
#define INCLUDED_COM_SUN_STAR_UCB_COMMANDINFO_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/CommandInfo.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline CommandInfo::CommandInfo()
    : Name()
    , Handle(0)
    , ArgType()
{
}

inline CommandInfo::CommandInfo(const ::rtl::OUString& Name_, const ::sal_Int32& Handle_, const ::css::uno::Type& ArgType_)
    : Name(Name_)
    , Handle(Handle_)
    , ArgType(ArgType_)
{
}


inline bool operator==(const CommandInfo& the_lhs, const CommandInfo& the_rhs)
{
    return the_lhs.Name == the_rhs.Name
        && the_lhs.Handle == the_rhs.Handle
        && the_lhs.ArgType == the_rhs.ArgType;
}

inline bool operator!=(const CommandInfo& the_lhs, const CommandInfo& the_rhs)
{
return !operator==(the_lhs, the_rhs);
}
} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::ucb::CommandInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::css::uno::Type >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.CommandInfo", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::css::uno::Type * >(&the_type);
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::ucb::CommandInfo const *) {
    return ::cppu::UnoType< ::css::ucb::CommandInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_COMMANDINFO_HPP

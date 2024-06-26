#ifndef INCLUDED_COM_SUN_STAR_RENDERING_COLORPROFILE_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_COLORPROFILE_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/ColorProfile.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline ColorProfile::ColorProfile()
    : dummy(0)
{
}

inline ColorProfile::ColorProfile(const ::sal_Int8& dummy_)
    : dummy(dummy_)
{
}


inline bool operator==(const ColorProfile& the_lhs, const ColorProfile& the_rhs)
{
    return the_lhs.dummy == the_rhs.dummy;
}

inline bool operator!=(const ColorProfile& the_lhs, const ColorProfile& the_rhs)
{
return !operator==(the_lhs, the_rhs);
}
} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::rendering::ColorProfile const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.ColorProfile", 0, 1, the_members, 0);
    }
    return *reinterpret_cast< ::css::uno::Type * >(&the_type);
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::rendering::ColorProfile const *) {
    return ::cppu::UnoType< ::css::rendering::ColorProfile >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_COLORPROFILE_HPP

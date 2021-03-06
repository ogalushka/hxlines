// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime_graphics_RenderContext
#define INCLUDED_lime_graphics_RenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS2(lime,graphics,CanvasRenderContext)
HX_DECLARE_CLASS2(lime,graphics,ConsoleRenderContext)
HX_DECLARE_CLASS2(lime,graphics,DOMRenderContext)
HX_DECLARE_CLASS2(lime,graphics,FlashRenderContext)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
namespace lime{
namespace graphics{


class RenderContext_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef RenderContext_obj OBJ_;

	public:
		RenderContext_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("lime.graphics.RenderContext","\x6f","\x38","\x5a","\x08"); }
		::String __ToString() const { return HX_HCSTRING("RenderContext.","\xf5","\x9c","\x58","\x4d") + _hx_tag; }

		static ::lime::graphics::RenderContext CAIRO( ::lime::graphics::cairo::Cairo cairo);
		static ::Dynamic CAIRO_dyn();
		static ::lime::graphics::RenderContext CANVAS( ::lime::graphics::CanvasRenderContext context);
		static ::Dynamic CANVAS_dyn();
		static ::lime::graphics::RenderContext CONSOLE( ::lime::graphics::ConsoleRenderContext context);
		static ::Dynamic CONSOLE_dyn();
		static ::lime::graphics::RenderContext CUSTOM( ::Dynamic data);
		static ::Dynamic CUSTOM_dyn();
		static ::lime::graphics::RenderContext DOM( ::lime::graphics::DOMRenderContext element);
		static ::Dynamic DOM_dyn();
		static ::lime::graphics::RenderContext FLASH( ::lime::graphics::FlashRenderContext stage);
		static ::Dynamic FLASH_dyn();
		static ::lime::graphics::RenderContext NONE;
		static inline ::lime::graphics::RenderContext NONE_dyn() { return NONE; }
		static ::lime::graphics::RenderContext OPENGL( ::lime::_backend::native::NativeGLRenderContext gl);
		static ::Dynamic OPENGL_dyn();
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_RenderContext */ 

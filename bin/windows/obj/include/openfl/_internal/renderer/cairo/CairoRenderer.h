// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#define INCLUDED_openfl__internal_renderer_cairo_CairoRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS4(openfl,_internal,renderer,cairo,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES CairoRenderer_obj : public  ::openfl::_internal::renderer::AbstractRenderer_obj
{
	public:
		typedef  ::openfl::_internal::renderer::AbstractRenderer_obj super;
		typedef CairoRenderer_obj OBJ_;
		CairoRenderer_obj();

	public:
		enum { _hx_ClassId = 0x3a6c56d2 };

		void __construct( ::openfl::display::Stage stage, ::lime::graphics::cairo::Cairo cairo);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.cairo.CairoRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.cairo.CairoRenderer"); }
		static hx::ObjectPtr< CairoRenderer_obj > __new( ::openfl::display::Stage stage, ::lime::graphics::cairo::Cairo cairo);
		static hx::ObjectPtr< CairoRenderer_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display::Stage stage, ::lime::graphics::cairo::Cairo cairo);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoRenderer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CairoRenderer","\xcb","\xc9","\x86","\xaa"); }

		 ::lime::graphics::cairo::Cairo cairo;
		void clear();

		void render();

		void renderStage3D();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

#endif /* INCLUDED_openfl__internal_renderer_cairo_CairoRenderer */ 

// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager
#define INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractBlendModeManager)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,cairo,CairoBlendModeManager)

namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES CairoBlendModeManager_obj : public  ::openfl::_internal::renderer::AbstractBlendModeManager_obj
{
	public:
		typedef  ::openfl::_internal::renderer::AbstractBlendModeManager_obj super;
		typedef CairoBlendModeManager_obj OBJ_;
		CairoBlendModeManager_obj();

	public:
		enum { _hx_ClassId = 0x0b76ed78 };

		void __construct( ::openfl::_internal::renderer::RenderSession renderSession);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.cairo.CairoBlendModeManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.cairo.CairoBlendModeManager"); }
		static hx::ObjectPtr< CairoBlendModeManager_obj > __new( ::openfl::_internal::renderer::RenderSession renderSession);
		static hx::ObjectPtr< CairoBlendModeManager_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::_internal::renderer::RenderSession renderSession);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoBlendModeManager_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CairoBlendModeManager","\x01","\x95","\x7b","\x7c"); }

		 ::Dynamic currentBlendMode;
		 ::openfl::_internal::renderer::RenderSession renderSession;
		void setBlendMode( ::Dynamic blendMode);

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

#endif /* INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager */ 
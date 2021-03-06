// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMMaskManager
#define INCLUDED_openfl__internal_renderer_dom_DOMMaskManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractMaskManager)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,dom,DOMMaskManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{


class HXCPP_CLASS_ATTRIBUTES DOMMaskManager_obj : public  ::openfl::_internal::renderer::AbstractMaskManager_obj
{
	public:
		typedef  ::openfl::_internal::renderer::AbstractMaskManager_obj super;
		typedef DOMMaskManager_obj OBJ_;
		DOMMaskManager_obj();

	public:
		enum { _hx_ClassId = 0x02dbba02 };

		void __construct( ::openfl::_internal::renderer::RenderSession renderSession);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.dom.DOMMaskManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.dom.DOMMaskManager"); }
		static hx::ObjectPtr< DOMMaskManager_obj > __new( ::openfl::_internal::renderer::RenderSession renderSession);
		static hx::ObjectPtr< DOMMaskManager_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::_internal::renderer::RenderSession renderSession);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DOMMaskManager_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DOMMaskManager","\x9f","\x1f","\xbd","\x2d"); }

		 ::openfl::geom::Rectangle currentClipRect;
		::Array< ::Dynamic> clipRects;
		int numClipRects;
		void pushMask( ::openfl::display::DisplayObject mask);

		void pushObject( ::openfl::display::DisplayObject object,hx::Null< bool >  handleScrollRect);

		void pushRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform);

		void popMask();

		void popObject( ::openfl::display::DisplayObject object,hx::Null< bool >  handleScrollRect);

		void popRect();

		void updateClip( ::openfl::display::DisplayObject displayObject);
		::Dynamic updateClip_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom

#endif /* INCLUDED_openfl__internal_renderer_dom_DOMMaskManager */ 

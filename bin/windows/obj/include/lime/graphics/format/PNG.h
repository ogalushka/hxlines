// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime_graphics_format_PNG
#define INCLUDED_lime_graphics_format_PNG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,format,PNG)

namespace lime{
namespace graphics{
namespace format{


class HXCPP_CLASS_ATTRIBUTES PNG_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef PNG_obj OBJ_;
		PNG_obj();

	public:
		enum { _hx_ClassId = 0x5332d192 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.format.PNG")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.format.PNG"); }

		hx::ObjectPtr< PNG_obj > __new() {
			hx::ObjectPtr< PNG_obj > __this = new PNG_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< PNG_obj > __alloc(hx::Ctx *_hx_ctx) {
			PNG_obj *__this = (PNG_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PNG_obj), false, "lime.graphics.format.PNG"));
			*(void **)__this = PNG_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PNG_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PNG","\x89","\xf8","\x3c","\x00"); }

		static  ::lime::graphics::Image decodeBytes( ::haxe::io::Bytes bytes,hx::Null< bool >  decodeData);
		static ::Dynamic decodeBytes_dyn();

		static  ::lime::graphics::Image decodeFile(::String path,hx::Null< bool >  decodeData);
		static ::Dynamic decodeFile_dyn();

		static  ::haxe::io::Bytes encode( ::lime::graphics::Image image);
		static ::Dynamic encode_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace format

#endif /* INCLUDED_lime_graphics_format_PNG */ 

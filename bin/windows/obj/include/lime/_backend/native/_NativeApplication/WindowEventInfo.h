// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a59bd2e504ea207a_1162_new)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,WindowEventInfo)

namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES WindowEventInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef WindowEventInfo_obj OBJ_;
		WindowEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x15251bed };

		void __construct( ::Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.WindowEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._backend.native._NativeApplication.WindowEventInfo"); }

		hx::ObjectPtr< WindowEventInfo_obj > __new( ::Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y) {
			hx::ObjectPtr< WindowEventInfo_obj > __this = new WindowEventInfo_obj();
			__this->__construct(type,__o_windowID,__o_width,__o_height,__o_x,__o_y);
			return __this;
		}

		static hx::ObjectPtr< WindowEventInfo_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y) {
			WindowEventInfo_obj *__this = (WindowEventInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(WindowEventInfo_obj), false, "lime._backend.native._NativeApplication.WindowEventInfo"));
			*(void **)__this = WindowEventInfo_obj::_hx_vtable;
{
int windowID = __o_windowID.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_a59bd2e504ea207a_1162_new)
HXLINE(1164)		( ( ::lime::_backend::native::_NativeApplication::WindowEventInfo)(__this) )->type = type;
HXLINE(1165)		( ( ::lime::_backend::native::_NativeApplication::WindowEventInfo)(__this) )->windowID = windowID;
HXLINE(1166)		( ( ::lime::_backend::native::_NativeApplication::WindowEventInfo)(__this) )->width = width;
HXLINE(1167)		( ( ::lime::_backend::native::_NativeApplication::WindowEventInfo)(__this) )->height = height;
HXLINE(1168)		( ( ::lime::_backend::native::_NativeApplication::WindowEventInfo)(__this) )->x = x;
HXLINE(1169)		( ( ::lime::_backend::native::_NativeApplication::WindowEventInfo)(__this) )->y = y;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowEventInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("WindowEventInfo","\x78","\x97","\xc0","\xfb"); }

		int height;
		int type;
		int width;
		int windowID;
		int x;
		int y;
		 ::lime::_backend::native::_NativeApplication::WindowEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo */ 

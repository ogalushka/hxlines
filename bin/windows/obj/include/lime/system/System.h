// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime_system_System
#define INCLUDED_lime_system_System

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,_hx_system,Display)
HX_DECLARE_CLASS2(lime,_hx_system,Endian)
HX_DECLARE_CLASS2(lime,_hx_system,System)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES System_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef System_obj OBJ_;
		System_obj();

	public:
		enum { _hx_ClassId = 0x36083f93 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.system.System")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.system.System"); }

		hx::ObjectPtr< System_obj > __new() {
			hx::ObjectPtr< System_obj > __this = new System_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< System_obj > __alloc(hx::Ctx *_hx_ctx) {
			System_obj *__this = (System_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(System_obj), false, "lime.system.System"));
			*(void **)__this = System_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~System_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"); }

		static void __boot();
		static ::String applicationDirectory;
		static ::String applicationStorageDirectory;
		static ::String desktopDirectory;
		static bool disableCFFI;
		static ::String documentsDirectory;
		static  ::lime::_hx_system::Endian endianness;
		static ::String fontsDirectory;
		static int numDisplays;
		static ::String userDirectory;
		static  ::haxe::ds::StringMap _hx___applicationConfig;
		static  ::haxe::ds::StringMap _hx___applicationEntryPoint;
		static  ::haxe::ds::IntMap _hx___directories;
		static void exit(int code);
		static ::Dynamic exit_dyn();

		static  ::lime::_hx_system::Display getDisplay(int id);
		static ::Dynamic getDisplay_dyn();

		static int getTimer();
		static ::Dynamic getTimer_dyn();

		static  ::Dynamic load(::String library,::String method,hx::Null< int >  args,hx::Null< bool >  lazy);
		static ::Dynamic load_dyn();

		static void openFile(::String path);
		static ::Dynamic openFile_dyn();

		static void openURL(::String url,::String target);
		static ::Dynamic openURL_dyn();

		static void _hx___copyMissingFields( ::Dynamic target, ::Dynamic source);
		static ::Dynamic _hx___copyMissingFields_dyn();

		static ::String _hx___getDirectory(int type);
		static ::Dynamic _hx___getDirectory_dyn();

		static void _hx___registerEntryPoint(::String projectName, ::Dynamic entryPoint, ::Dynamic config);
		static ::Dynamic _hx___registerEntryPoint_dyn();

		static bool get_allowScreenTimeout();
		static ::Dynamic get_allowScreenTimeout_dyn();

		static bool set_allowScreenTimeout(bool value);
		static ::Dynamic set_allowScreenTimeout_dyn();

		static ::String get_applicationDirectory();
		static ::Dynamic get_applicationDirectory_dyn();

		static ::String get_applicationStorageDirectory();
		static ::Dynamic get_applicationStorageDirectory_dyn();

		static ::String get_desktopDirectory();
		static ::Dynamic get_desktopDirectory_dyn();

		static ::String get_documentsDirectory();
		static ::Dynamic get_documentsDirectory_dyn();

		static ::String get_fontsDirectory();
		static ::Dynamic get_fontsDirectory_dyn();

		static int get_numDisplays();
		static ::Dynamic get_numDisplays_dyn();

		static ::String get_userDirectory();
		static ::Dynamic get_userDirectory_dyn();

		static  ::lime::_hx_system::Endian get_endianness();
		static ::Dynamic get_endianness_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_System */ 

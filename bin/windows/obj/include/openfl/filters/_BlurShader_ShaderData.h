// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl_filters__BlurShader_ShaderData
#define INCLUDED_openfl_filters__BlurShader_ShaderData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,ShaderData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,filters,_BlurShader_ShaderData)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES _BlurShader_ShaderData_obj : public  ::openfl::display::ShaderData_obj
{
	public:
		typedef  ::openfl::display::ShaderData_obj super;
		typedef _BlurShader_ShaderData_obj OBJ_;
		_BlurShader_ShaderData_obj();

	public:
		enum { _hx_ClassId = 0x20ad39ce };

		void __construct( ::openfl::utils::ByteArrayData byteArray);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters._BlurShader_ShaderData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.filters._BlurShader_ShaderData"); }
		static hx::ObjectPtr< _BlurShader_ShaderData_obj > __new( ::openfl::utils::ByteArrayData byteArray);
		static hx::ObjectPtr< _BlurShader_ShaderData_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData byteArray);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~_BlurShader_ShaderData_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("_BlurShader_ShaderData","\xa3","\x5c","\x3f","\x7f"); }

		 ::openfl::display::ShaderParameter_Float uRadius;
		 ::openfl::display::ShaderParameter_Float uTextureSize;
};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters__BlurShader_ShaderData */ 

// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowShader_ShaderData
#include <openfl/filters/_GlowShader_ShaderData.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e9c1e7ed9da01bc2_1_new,"openfl.filters._GlowShader_ShaderData","new",0x8be23560,"openfl.filters._GlowShader_ShaderData.new","?",1,0x0000003f)
namespace openfl{
namespace filters{

void _GlowShader_ShaderData_obj::__construct( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_e9c1e7ed9da01bc2_1_new)
HXLINE(   1)		super::__construct(byteArray);
            	}

Dynamic _GlowShader_ShaderData_obj::__CreateEmpty() { return new _GlowShader_ShaderData_obj; }

void *_GlowShader_ShaderData_obj::_hx_vtable = 0;

Dynamic _GlowShader_ShaderData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< _GlowShader_ShaderData_obj > _hx_result = new _GlowShader_ShaderData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool _GlowShader_ShaderData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2602c5dd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2602c5dd;
	} else {
		return inClassId==(int)0x56ab6b28;
	}
}


hx::ObjectPtr< _GlowShader_ShaderData_obj > _GlowShader_ShaderData_obj::__new( ::openfl::utils::ByteArrayData byteArray) {
	hx::ObjectPtr< _GlowShader_ShaderData_obj > __this = new _GlowShader_ShaderData_obj();
	__this->__construct(byteArray);
	return __this;
}

hx::ObjectPtr< _GlowShader_ShaderData_obj > _GlowShader_ShaderData_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData byteArray) {
	_GlowShader_ShaderData_obj *__this = (_GlowShader_ShaderData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(_GlowShader_ShaderData_obj), true, "openfl.filters._GlowShader_ShaderData"));
	*(void **)__this = _GlowShader_ShaderData_obj::_hx_vtable;
	__this->__construct(byteArray);
	return __this;
}

_GlowShader_ShaderData_obj::_GlowShader_ShaderData_obj()
{
}

void _GlowShader_ShaderData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(_GlowShader_ShaderData);
	HX_MARK_MEMBER_NAME(uRadius,"uRadius");
	HX_MARK_MEMBER_NAME(uTextureSize,"uTextureSize");
	HX_MARK_MEMBER_NAME(uColor,"uColor");
	 ::openfl::display::ShaderData_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void _GlowShader_ShaderData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uRadius,"uRadius");
	HX_VISIT_MEMBER_NAME(uTextureSize,"uTextureSize");
	HX_VISIT_MEMBER_NAME(uColor,"uColor");
	 ::openfl::display::ShaderData_obj::__Visit(HX_VISIT_ARG);
}

hx::Val _GlowShader_ShaderData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"uColor") ) { return hx::Val( uColor); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uRadius") ) { return hx::Val( uRadius); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uTextureSize") ) { return hx::Val( uTextureSize); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val _GlowShader_ShaderData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"uColor") ) { uColor=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uRadius") ) { uRadius=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uTextureSize") ) { uTextureSize=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void _GlowShader_ShaderData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"));
	outFields->push(HX_HCSTRING("uTextureSize","\xc7","\x50","\x82","\xf3"));
	outFields->push(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo _GlowShader_ShaderData_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(_GlowShader_ShaderData_obj,uRadius),HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(_GlowShader_ShaderData_obj,uTextureSize),HX_HCSTRING("uTextureSize","\xc7","\x50","\x82","\xf3")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(_GlowShader_ShaderData_obj,uColor),HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *_GlowShader_ShaderData_obj_sStaticStorageInfo = 0;
#endif

static ::String _GlowShader_ShaderData_obj_sMemberFields[] = {
	HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"),
	HX_HCSTRING("uTextureSize","\xc7","\x50","\x82","\xf3"),
	HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"),
	::String(null()) };

static void _GlowShader_ShaderData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_GlowShader_ShaderData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void _GlowShader_ShaderData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_GlowShader_ShaderData_obj::__mClass,"__mClass");
};

#endif

hx::Class _GlowShader_ShaderData_obj::__mClass;

void _GlowShader_ShaderData_obj::__register()
{
	hx::Object *dummy = new _GlowShader_ShaderData_obj;
	_GlowShader_ShaderData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters._GlowShader_ShaderData","\x6e","\x45","\x0c","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = _GlowShader_ShaderData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(_GlowShader_ShaderData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _GlowShader_ShaderData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = _GlowShader_ShaderData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _GlowShader_ShaderData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _GlowShader_ShaderData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters

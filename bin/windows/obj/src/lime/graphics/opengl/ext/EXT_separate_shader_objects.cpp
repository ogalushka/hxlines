// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_separate_shader_objects
#include <lime/graphics/opengl/ext/EXT_separate_shader_objects.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_daff336b6d887460_6_new,"lime.graphics.opengl.ext.EXT_separate_shader_objects","new",0xf8fc06a8,"lime.graphics.opengl.ext.EXT_separate_shader_objects.new","lime/graphics/opengl/ext/EXT_separate_shader_objects.hx",6,0x8cf1e9ea)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_separate_shader_objects_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_daff336b6d887460_6_new)
HXLINE(  14)		this->PROGRAM_PIPELINE_BINDING_EXT = (int)33370;
HXLINE(  13)		this->ACTIVE_PROGRAM_EXT = (int)33369;
HXLINE(  12)		this->PROGRAM_SEPARABLE_EXT = (int)33368;
HXLINE(  11)		this->ALL_SHADER_BITS_EXT = (int)-1;
HXLINE(  10)		this->FRAGMENT_SHADER_BIT_EXT = (int)2;
HXLINE(   9)		this->VERTEX_SHADER_BIT_EXT = (int)1;
            	}

Dynamic EXT_separate_shader_objects_obj::__CreateEmpty() { return new EXT_separate_shader_objects_obj; }

void *EXT_separate_shader_objects_obj::_hx_vtable = 0;

Dynamic EXT_separate_shader_objects_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EXT_separate_shader_objects_obj > _hx_result = new EXT_separate_shader_objects_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_separate_shader_objects_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c8bcaa6;
}


EXT_separate_shader_objects_obj::EXT_separate_shader_objects_obj()
{
}

hx::Val EXT_separate_shader_objects_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"ACTIVE_PROGRAM_EXT") ) { return hx::Val( ACTIVE_PROGRAM_EXT); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALL_SHADER_BITS_EXT") ) { return hx::Val( ALL_SHADER_BITS_EXT); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER_BIT_EXT") ) { return hx::Val( VERTEX_SHADER_BIT_EXT); }
		if (HX_FIELD_EQ(inName,"PROGRAM_SEPARABLE_EXT") ) { return hx::Val( PROGRAM_SEPARABLE_EXT); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_BIT_EXT") ) { return hx::Val( FRAGMENT_SHADER_BIT_EXT); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PROGRAM_PIPELINE_BINDING_EXT") ) { return hx::Val( PROGRAM_PIPELINE_BINDING_EXT); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EXT_separate_shader_objects_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"ACTIVE_PROGRAM_EXT") ) { ACTIVE_PROGRAM_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALL_SHADER_BITS_EXT") ) { ALL_SHADER_BITS_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER_BIT_EXT") ) { VERTEX_SHADER_BIT_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROGRAM_SEPARABLE_EXT") ) { PROGRAM_SEPARABLE_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_BIT_EXT") ) { FRAGMENT_SHADER_BIT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PROGRAM_PIPELINE_BINDING_EXT") ) { PROGRAM_PIPELINE_BINDING_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_separate_shader_objects_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("VERTEX_SHADER_BIT_EXT","\x10","\x40","\xb7","\xca"));
	outFields->push(HX_HCSTRING("FRAGMENT_SHADER_BIT_EXT","\x24","\x31","\x1d","\xc4"));
	outFields->push(HX_HCSTRING("ALL_SHADER_BITS_EXT","\xa4","\xd4","\x8b","\x99"));
	outFields->push(HX_HCSTRING("PROGRAM_SEPARABLE_EXT","\xb0","\xc0","\xbd","\x28"));
	outFields->push(HX_HCSTRING("ACTIVE_PROGRAM_EXT","\xad","\x3a","\xa9","\x18"));
	outFields->push(HX_HCSTRING("PROGRAM_PIPELINE_BINDING_EXT","\x45","\xa0","\x52","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EXT_separate_shader_objects_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,VERTEX_SHADER_BIT_EXT),HX_HCSTRING("VERTEX_SHADER_BIT_EXT","\x10","\x40","\xb7","\xca")},
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,FRAGMENT_SHADER_BIT_EXT),HX_HCSTRING("FRAGMENT_SHADER_BIT_EXT","\x24","\x31","\x1d","\xc4")},
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,ALL_SHADER_BITS_EXT),HX_HCSTRING("ALL_SHADER_BITS_EXT","\xa4","\xd4","\x8b","\x99")},
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,PROGRAM_SEPARABLE_EXT),HX_HCSTRING("PROGRAM_SEPARABLE_EXT","\xb0","\xc0","\xbd","\x28")},
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,ACTIVE_PROGRAM_EXT),HX_HCSTRING("ACTIVE_PROGRAM_EXT","\xad","\x3a","\xa9","\x18")},
	{hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,PROGRAM_PIPELINE_BINDING_EXT),HX_HCSTRING("PROGRAM_PIPELINE_BINDING_EXT","\x45","\xa0","\x52","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EXT_separate_shader_objects_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_separate_shader_objects_obj_sMemberFields[] = {
	HX_HCSTRING("VERTEX_SHADER_BIT_EXT","\x10","\x40","\xb7","\xca"),
	HX_HCSTRING("FRAGMENT_SHADER_BIT_EXT","\x24","\x31","\x1d","\xc4"),
	HX_HCSTRING("ALL_SHADER_BITS_EXT","\xa4","\xd4","\x8b","\x99"),
	HX_HCSTRING("PROGRAM_SEPARABLE_EXT","\xb0","\xc0","\xbd","\x28"),
	HX_HCSTRING("ACTIVE_PROGRAM_EXT","\xad","\x3a","\xa9","\x18"),
	HX_HCSTRING("PROGRAM_PIPELINE_BINDING_EXT","\x45","\xa0","\x52","\xd3"),
	::String(null()) };

static void EXT_separate_shader_objects_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_separate_shader_objects_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EXT_separate_shader_objects_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_separate_shader_objects_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_separate_shader_objects_obj::__mClass;

void EXT_separate_shader_objects_obj::__register()
{
	hx::Object *dummy = new EXT_separate_shader_objects_obj;
	EXT_separate_shader_objects_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_separate_shader_objects","\xb6","\xd2","\x01","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EXT_separate_shader_objects_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EXT_separate_shader_objects_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_separate_shader_objects_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EXT_separate_shader_objects_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_separate_shader_objects_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_separate_shader_objects_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

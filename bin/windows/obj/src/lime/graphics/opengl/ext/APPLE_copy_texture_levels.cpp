// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_copy_texture_levels
#include <lime/graphics/opengl/ext/APPLE_copy_texture_levels.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_361d9d8d8f9c4e77_7_new,"lime.graphics.opengl.ext.APPLE_copy_texture_levels","new",0xe1bf6b68,"lime.graphics.opengl.ext.APPLE_copy_texture_levels.new","lime/graphics/opengl/ext/APPLE_copy_texture_levels.hx",7,0xf0dcb0aa)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void APPLE_copy_texture_levels_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_361d9d8d8f9c4e77_7_new)
            	}

Dynamic APPLE_copy_texture_levels_obj::__CreateEmpty() { return new APPLE_copy_texture_levels_obj; }

void *APPLE_copy_texture_levels_obj::_hx_vtable = 0;

Dynamic APPLE_copy_texture_levels_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< APPLE_copy_texture_levels_obj > _hx_result = new APPLE_copy_texture_levels_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool APPLE_copy_texture_levels_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4c1af366;
}


APPLE_copy_texture_levels_obj::APPLE_copy_texture_levels_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *APPLE_copy_texture_levels_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *APPLE_copy_texture_levels_obj_sStaticStorageInfo = 0;
#endif

static void APPLE_copy_texture_levels_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(APPLE_copy_texture_levels_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void APPLE_copy_texture_levels_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(APPLE_copy_texture_levels_obj::__mClass,"__mClass");
};

#endif

hx::Class APPLE_copy_texture_levels_obj::__mClass;

void APPLE_copy_texture_levels_obj::__register()
{
	hx::Object *dummy = new APPLE_copy_texture_levels_obj;
	APPLE_copy_texture_levels_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.APPLE_copy_texture_levels","\x76","\xd7","\x83","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = APPLE_copy_texture_levels_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< APPLE_copy_texture_levels_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = APPLE_copy_texture_levels_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = APPLE_copy_texture_levels_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = APPLE_copy_texture_levels_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

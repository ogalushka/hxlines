// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_DMP_shader_binary
#include <lime/graphics/opengl/ext/DMP_shader_binary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_20c611465b484b2c_9_new,"lime.graphics.opengl.ext.DMP_shader_binary","new",0xc9fe28d3,"lime.graphics.opengl.ext.DMP_shader_binary.new","lime/graphics/opengl/ext/DMP_shader_binary.hx",9,0x26c2579f)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void DMP_shader_binary_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_20c611465b484b2c_9_new)
HXLINE(   9)		this->SHADER_BINARY_DMP = (int)37456;
            	}

Dynamic DMP_shader_binary_obj::__CreateEmpty() { return new DMP_shader_binary_obj; }

void *DMP_shader_binary_obj::_hx_vtable = 0;

Dynamic DMP_shader_binary_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DMP_shader_binary_obj > _hx_result = new DMP_shader_binary_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DMP_shader_binary_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25686f51;
}


DMP_shader_binary_obj::DMP_shader_binary_obj()
{
}

hx::Val DMP_shader_binary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_BINARY_DMP") ) { return hx::Val( SHADER_BINARY_DMP); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DMP_shader_binary_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_BINARY_DMP") ) { SHADER_BINARY_DMP=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DMP_shader_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("SHADER_BINARY_DMP","\x43","\x38","\x8b","\xb0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DMP_shader_binary_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DMP_shader_binary_obj,SHADER_BINARY_DMP),HX_HCSTRING("SHADER_BINARY_DMP","\x43","\x38","\x8b","\xb0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DMP_shader_binary_obj_sStaticStorageInfo = 0;
#endif

static ::String DMP_shader_binary_obj_sMemberFields[] = {
	HX_HCSTRING("SHADER_BINARY_DMP","\x43","\x38","\x8b","\xb0"),
	::String(null()) };

static void DMP_shader_binary_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DMP_shader_binary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DMP_shader_binary_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DMP_shader_binary_obj::__mClass,"__mClass");
};

#endif

hx::Class DMP_shader_binary_obj::__mClass;

void DMP_shader_binary_obj::__register()
{
	hx::Object *dummy = new DMP_shader_binary_obj;
	DMP_shader_binary_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.DMP_shader_binary","\x61","\xc3","\x46","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DMP_shader_binary_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DMP_shader_binary_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DMP_shader_binary_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DMP_shader_binary_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DMP_shader_binary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DMP_shader_binary_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_rgb_422
#include <lime/graphics/opengl/ext/APPLE_rgb_422.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7884905029fdefd8_6_new,"lime.graphics.opengl.ext.APPLE_rgb_422","new",0x2a5502cd,"lime.graphics.opengl.ext.APPLE_rgb_422.new","lime/graphics/opengl/ext/APPLE_rgb_422.hx",6,0xcbee61e5)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void APPLE_rgb_422_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7884905029fdefd8_6_new)
HXLINE(  11)		this->UNSIGNED_SHORT_8_8_REV_APPLE = (int)34235;
HXLINE(  10)		this->UNSIGNED_SHORT_8_8_APPLE = (int)34234;
HXLINE(   9)		this->RGB_422_APPLE = (int)35359;
            	}

Dynamic APPLE_rgb_422_obj::__CreateEmpty() { return new APPLE_rgb_422_obj; }

void *APPLE_rgb_422_obj::_hx_vtable = 0;

Dynamic APPLE_rgb_422_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< APPLE_rgb_422_obj > _hx_result = new APPLE_rgb_422_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool APPLE_rgb_422_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x293b7713;
}


APPLE_rgb_422_obj::APPLE_rgb_422_obj()
{
}

hx::Val APPLE_rgb_422_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"RGB_422_APPLE") ) { return hx::Val( RGB_422_APPLE); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_8_8_APPLE") ) { return hx::Val( UNSIGNED_SHORT_8_8_APPLE); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_8_8_REV_APPLE") ) { return hx::Val( UNSIGNED_SHORT_8_8_REV_APPLE); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val APPLE_rgb_422_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"RGB_422_APPLE") ) { RGB_422_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_8_8_APPLE") ) { UNSIGNED_SHORT_8_8_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_8_8_REV_APPLE") ) { UNSIGNED_SHORT_8_8_REV_APPLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void APPLE_rgb_422_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("RGB_422_APPLE","\x5d","\x91","\xdf","\xea"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT_8_8_APPLE","\xff","\x40","\x5e","\x85"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT_8_8_REV_APPLE","\x43","\x98","\x55","\x0b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo APPLE_rgb_422_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(APPLE_rgb_422_obj,RGB_422_APPLE),HX_HCSTRING("RGB_422_APPLE","\x5d","\x91","\xdf","\xea")},
	{hx::fsInt,(int)offsetof(APPLE_rgb_422_obj,UNSIGNED_SHORT_8_8_APPLE),HX_HCSTRING("UNSIGNED_SHORT_8_8_APPLE","\xff","\x40","\x5e","\x85")},
	{hx::fsInt,(int)offsetof(APPLE_rgb_422_obj,UNSIGNED_SHORT_8_8_REV_APPLE),HX_HCSTRING("UNSIGNED_SHORT_8_8_REV_APPLE","\x43","\x98","\x55","\x0b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *APPLE_rgb_422_obj_sStaticStorageInfo = 0;
#endif

static ::String APPLE_rgb_422_obj_sMemberFields[] = {
	HX_HCSTRING("RGB_422_APPLE","\x5d","\x91","\xdf","\xea"),
	HX_HCSTRING("UNSIGNED_SHORT_8_8_APPLE","\xff","\x40","\x5e","\x85"),
	HX_HCSTRING("UNSIGNED_SHORT_8_8_REV_APPLE","\x43","\x98","\x55","\x0b"),
	::String(null()) };

static void APPLE_rgb_422_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(APPLE_rgb_422_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void APPLE_rgb_422_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(APPLE_rgb_422_obj::__mClass,"__mClass");
};

#endif

hx::Class APPLE_rgb_422_obj::__mClass;

void APPLE_rgb_422_obj::__register()
{
	hx::Object *dummy = new APPLE_rgb_422_obj;
	APPLE_rgb_422_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.APPLE_rgb_422","\x5b","\x98","\xf6","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = APPLE_rgb_422_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(APPLE_rgb_422_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< APPLE_rgb_422_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = APPLE_rgb_422_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = APPLE_rgb_422_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = APPLE_rgb_422_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

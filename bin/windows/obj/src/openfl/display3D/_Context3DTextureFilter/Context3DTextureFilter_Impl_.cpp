// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DTextureFilter_Context3DTextureFilter_Impl_
#include <openfl/display3D/_Context3DTextureFilter/Context3DTextureFilter_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_16_fromString,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","fromString",0x784e3d61,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.fromString","openfl/display3D/Context3DTextureFilter.hx",16,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_32_toString,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","toString",0x747fd2b2,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.toString","openfl/display3D/Context3DTextureFilter.hx",32,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_7_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",7,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_8_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",8,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_9_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",9,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_10_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",10,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_11_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",11,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_12_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",12,0x69987bf0)
namespace openfl{
namespace display3D{
namespace _Context3DTextureFilter{

void Context3DTextureFilter_Impl__obj::__construct() { }

Dynamic Context3DTextureFilter_Impl__obj::__CreateEmpty() { return new Context3DTextureFilter_Impl__obj; }

void *Context3DTextureFilter_Impl__obj::_hx_vtable = 0;

Dynamic Context3DTextureFilter_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DTextureFilter_Impl__obj > _hx_result = new Context3DTextureFilter_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DTextureFilter_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x62511a62;
}

 ::Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC16X;

 ::Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC2X;

 ::Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC4X;

 ::Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC8X;

 ::Dynamic Context3DTextureFilter_Impl__obj::LINEAR;

 ::Dynamic Context3DTextureFilter_Impl__obj::NEAREST;

 ::Dynamic Context3DTextureFilter_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_16_fromString)
HXLINE(  16)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("anisotropic16x",62,56,64,8c)) ){
HXLINE(  16)			return (int)0;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("anisotropic2x",77,56,26,f5)) ){
HXLINE(  16)			return (int)1;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("anisotropic4x",35,58,26,f5)) ){
HXLINE(  16)			return (int)2;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("anisotropic8x",b1,5b,26,f5)) ){
HXLINE(  16)			return (int)3;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("linear",e5,51,a0,ec)) ){
HXLINE(  16)			return (int)4;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("nearest",5e,18,ca,65)) ){
HXLINE(  16)			return (int)5;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  16)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  16)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTextureFilter_Impl__obj,fromString,return )

::String Context3DTextureFilter_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_32_toString)
HXLINE(  32)		switch((int)(value)){
            			case (int)0: {
HXLINE(  32)				return HX_("anisotropic16x",62,56,64,8c);
            			}
            			break;
            			case (int)1: {
HXLINE(  32)				return HX_("anisotropic2x",77,56,26,f5);
            			}
            			break;
            			case (int)2: {
HXLINE(  32)				return HX_("anisotropic4x",35,58,26,f5);
            			}
            			break;
            			case (int)3: {
HXLINE(  32)				return HX_("anisotropic8x",b1,5b,26,f5);
            			}
            			break;
            			case (int)4: {
HXLINE(  32)				return HX_("linear",e5,51,a0,ec);
            			}
            			break;
            			case (int)5: {
HXLINE(  32)				return HX_("nearest",5e,18,ca,65);
            			}
            			break;
            			default:{
HXLINE(  32)				return null();
            			}
            		}
HXDLIN(  32)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTextureFilter_Impl__obj,toString,return )


Context3DTextureFilter_Impl__obj::Context3DTextureFilter_Impl__obj()
{
}

bool Context3DTextureFilter_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Context3DTextureFilter_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Context3DTextureFilter_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC16X,HX_HCSTRING("ANISOTROPIC16X","\x62","\xf6","\x10","\x1d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC2X,HX_HCSTRING("ANISOTROPIC2X","\x37","\x1a","\x65","\xdb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC4X,HX_HCSTRING("ANISOTROPIC4X","\xf5","\x1b","\x65","\xdb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC8X,HX_HCSTRING("ANISOTROPIC8X","\x71","\x1f","\x65","\xdb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::LINEAR,HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::NEAREST,HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Context3DTextureFilter_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::NEAREST,"NEAREST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DTextureFilter_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::NEAREST,"NEAREST");
};

#endif

hx::Class Context3DTextureFilter_Impl__obj::__mClass;

static ::String Context3DTextureFilter_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("ANISOTROPIC16X","\x62","\xf6","\x10","\x1d"),
	HX_HCSTRING("ANISOTROPIC2X","\x37","\x1a","\x65","\xdb"),
	HX_HCSTRING("ANISOTROPIC4X","\xf5","\x1b","\x65","\xdb"),
	HX_HCSTRING("ANISOTROPIC8X","\x71","\x1f","\x65","\xdb"),
	HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),
	HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Context3DTextureFilter_Impl__obj::__register()
{
	hx::Object *dummy = new Context3DTextureFilter_Impl__obj;
	Context3DTextureFilter_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","\x28","\xb7","\x43","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DTextureFilter_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DTextureFilter_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DTextureFilter_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DTextureFilter_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DTextureFilter_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DTextureFilter_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DTextureFilter_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DTextureFilter_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_7_boot)
HXLINE(   7)		ANISOTROPIC16X = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_8_boot)
HXLINE(   8)		ANISOTROPIC2X = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_9_boot)
HXLINE(   9)		ANISOTROPIC4X = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_10_boot)
HXLINE(  10)		ANISOTROPIC8X = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_11_boot)
HXLINE(  11)		LINEAR = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_12_boot)
HXLINE(  12)		NEAREST = (int)5;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DTextureFilter

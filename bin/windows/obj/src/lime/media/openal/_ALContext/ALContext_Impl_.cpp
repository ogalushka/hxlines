// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime_media_openal__ALContext_ALContext_Impl_
#include <lime/media/openal/_ALContext/ALContext_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f1d91d0137b8abbc_13__new,"lime.media.openal._ALContext.ALContext_Impl_","_new",0x7c63ff3e,"lime.media.openal._ALContext.ALContext_Impl_._new","lime/media/openal/ALContext.hx",13,0x28b7a4af)
namespace lime{
namespace media{
namespace openal{
namespace _ALContext{

void ALContext_Impl__obj::__construct() { }

Dynamic ALContext_Impl__obj::__CreateEmpty() { return new ALContext_Impl__obj; }

void *ALContext_Impl__obj::_hx_vtable = 0;

Dynamic ALContext_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ALContext_Impl__obj > _hx_result = new ALContext_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ALContext_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72af199b;
}

 ::Dynamic ALContext_Impl__obj::_new( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_f1d91d0137b8abbc_13__new)
HXLINE(  13)		 ::Dynamic this1 = handle;
HXDLIN(  13)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALContext_Impl__obj,_new,return )


ALContext_Impl__obj::ALContext_Impl__obj()
{
}

bool ALContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ALContext_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ALContext_Impl__obj_sStaticStorageInfo = 0;
#endif

static void ALContext_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALContext_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ALContext_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALContext_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ALContext_Impl__obj::__mClass;

static ::String ALContext_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null())
};

void ALContext_Impl__obj::__register()
{
	hx::Object *dummy = new ALContext_Impl__obj;
	ALContext_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.openal._ALContext.ALContext_Impl_","\xb1","\xc3","\x11","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ALContext_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ALContext_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALContext_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ALContext_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALContext_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALContext_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALContext

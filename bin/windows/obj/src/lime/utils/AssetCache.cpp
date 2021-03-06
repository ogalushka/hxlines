// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_77dd7e775494cb08_14_new,"lime.utils.AssetCache","new",0x205507da,"lime.utils.AssetCache.new","lime/utils/AssetCache.hx",14,0xcfac28d4)
HX_LOCAL_STACK_FRAME(_hx_pos_77dd7e775494cb08_34_exists,"lime.utils.AssetCache","exists",0x81df4ea2,"lime.utils.AssetCache.exists","lime/utils/AssetCache.hx",34,0xcfac28d4)
HX_LOCAL_STACK_FRAME(_hx_pos_77dd7e775494cb08_61_set,"lime.utils.AssetCache","set",0x2058d31c,"lime.utils.AssetCache.set","lime/utils/AssetCache.hx",61,0xcfac28d4)
HX_LOCAL_STACK_FRAME(_hx_pos_77dd7e775494cb08_88_clear,"lime.utils.AssetCache","clear",0x54b4fb87,"lime.utils.AssetCache.clear","lime/utils/AssetCache.hx",88,0xcfac28d4)
namespace lime{
namespace utils{

void AssetCache_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_77dd7e775494cb08_14_new)
HXLINE(  18)		this->enabled = true;
HXLINE(  26)		this->audio =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  27)		this->font =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  28)		this->image =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  29)		this->version = (int)836435;
            	}

Dynamic AssetCache_obj::__CreateEmpty() { return new AssetCache_obj; }

void *AssetCache_obj::_hx_vtable = 0;

Dynamic AssetCache_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetCache_obj > _hx_result = new AssetCache_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetCache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2dd70846;
}

bool AssetCache_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_77dd7e775494cb08_34_exists)
HXLINE(  36)		bool _hx_tmp;
HXDLIN(  36)		if ((type != HX_("IMAGE",3b,57,57,3b))) {
HXLINE(  36)			_hx_tmp = hx::IsNull( type );
            		}
            		else {
HXLINE(  36)			_hx_tmp = true;
            		}
HXDLIN(  36)		if (_hx_tmp) {
HXLINE(  38)			if (this->image->exists(id)) {
HXLINE(  38)				return true;
            			}
            		}
HXLINE(  42)		bool _hx_tmp1;
HXDLIN(  42)		if ((type != HX_("FONT",cf,25,81,2e))) {
HXLINE(  42)			_hx_tmp1 = hx::IsNull( type );
            		}
            		else {
HXLINE(  42)			_hx_tmp1 = true;
            		}
HXDLIN(  42)		if (_hx_tmp1) {
HXLINE(  44)			if (this->font->exists(id)) {
HXLINE(  44)				return true;
            			}
            		}
HXLINE(  48)		bool _hx_tmp2;
HXDLIN(  48)		bool _hx_tmp3;
HXDLIN(  48)		if ((type != HX_("SOUND",af,c4,ba,fe))) {
HXLINE(  48)			_hx_tmp3 = (type == HX_("MUSIC",85,08,49,8e));
            		}
            		else {
HXLINE(  48)			_hx_tmp3 = true;
            		}
HXDLIN(  48)		if (!(_hx_tmp3)) {
HXLINE(  48)			_hx_tmp2 = hx::IsNull( type );
            		}
            		else {
HXLINE(  48)			_hx_tmp2 = true;
            		}
HXDLIN(  48)		if (_hx_tmp2) {
HXLINE(  50)			if (this->audio->exists(id)) {
HXLINE(  50)				return true;
            			}
            		}
HXLINE(  54)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,exists,return )

void AssetCache_obj::set(::String id,::String type, ::Dynamic asset){
            	HX_STACKFRAME(&_hx_pos_77dd7e775494cb08_61_set)
HXLINE(  61)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE(  64)			::haxe::IMap_obj::set(this->font,id,asset);
HXDLIN(  64)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE(  67)			if (!(::Std_obj::is(asset,hx::ClassOf< ::lime::graphics::Image >()))) {
HXLINE(  68)				HX_STACK_DO_THROW(((HX_("Cannot cache non-Image asset: ",d6,62,c2,3a) + ::Std_obj::string(asset)) + HX_(" as Image",ad,d1,70,d4)));
            			}
HXLINE(  70)			::haxe::IMap_obj::set(this->image,id,( ( ::lime::graphics::Image)(asset) ));
HXLINE(  66)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ||  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE(  73)			if (!(::Std_obj::is(asset,hx::ClassOf< ::lime::media::AudioBuffer >()))) {
HXLINE(  74)				HX_STACK_DO_THROW(((HX_("Cannot cache non-AudioBuffer asset: ",b1,96,a5,01) + ::Std_obj::string(asset)) + HX_(" as AudioBuffer",48,2a,fe,73)));
            			}
HXLINE(  76)			::haxe::IMap_obj::set(this->audio,id,( ( ::lime::media::AudioBuffer)(asset) ));
HXLINE(  72)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  79)			HX_STACK_DO_THROW((type + HX_(" assets are not cachable",f3,2d,ee,fa)));
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC3(AssetCache_obj,set,(void))

void AssetCache_obj::clear(::String prefix){
            	HX_GC_STACKFRAME(&_hx_pos_77dd7e775494cb08_88_clear)
HXLINE(  88)		if (hx::IsNull( prefix )) {
HXLINE(  90)			this->audio =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  91)			this->font =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  92)			this->image =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE(  96)			 ::Dynamic keys = this->audio->keys();
HXLINE(  98)			{
HXLINE(  98)				 ::Dynamic key = keys;
HXDLIN(  98)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  98)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 100)					if (::StringTools_obj::startsWith(key1,prefix)) {
HXLINE( 102)						this->audio->remove(key1);
            					}
            				}
            			}
HXLINE( 108)			 ::Dynamic keys1 = this->font->keys();
HXLINE( 110)			{
HXLINE( 110)				 ::Dynamic key2 = keys1;
HXDLIN( 110)				while(( (bool)(key2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 110)					::String key3 = ( (::String)(key2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 112)					if (::StringTools_obj::startsWith(key3,prefix)) {
HXLINE( 114)						this->font->remove(key3);
            					}
            				}
            			}
HXLINE( 120)			 ::Dynamic keys2 = this->image->keys();
HXLINE( 122)			{
HXLINE( 122)				 ::Dynamic key4 = keys2;
HXDLIN( 122)				while(( (bool)(key4->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 122)					::String key5 = ( (::String)(key4->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 124)					if (::StringTools_obj::startsWith(key5,prefix)) {
HXLINE( 126)						this->image->remove(key5);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))


hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__new() {
	hx::ObjectPtr< AssetCache_obj > __this = new AssetCache_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__alloc(hx::Ctx *_hx_ctx) {
	AssetCache_obj *__this = (AssetCache_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetCache_obj), true, "lime.utils.AssetCache"));
	*(void **)__this = AssetCache_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(version,"version");
}

hx::Val AssetCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return hx::Val( font); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { return hx::Val( audio); }
		if (HX_FIELD_EQ(inName,"image") ) { return hx::Val( image); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return hx::Val( exists_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return hx::Val( enabled); }
		if (HX_FIELD_EQ(inName,"version") ) { return hx::Val( version); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AssetCache_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AssetCache_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,audio),HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsInt,(int)offsetof(AssetCache_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AssetCache_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetCache_obj_sMemberFields[] = {
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void AssetCache_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetCache_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetCache_obj::__mClass;

void AssetCache_obj::__register()
{
	hx::Object *dummy = new AssetCache_obj;
	AssetCache_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.AssetCache","\xe8","\xd2","\x51","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetCache_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AssetCache_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetCache_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetCache_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetCache_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils

// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime_media_ALAudioContext
#include <lime/media/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_ALCAudioContext
#include <lime/media/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_AudioContext
#include <lime/media/AudioContext.h>
#endif
#ifndef INCLUDED_lime_media_FlashAudioContext
#include <lime/media/FlashAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_HTML5AudioContext
#include <lime/media/HTML5AudioContext.h>
#endif
#ifndef INCLUDED_lime_media_WebAudioContext
#include <lime/media/WebAudioContext.h>
#endif
namespace lime{
namespace media{

::lime::media::AudioContext AudioContext_obj::CUSTOM( ::Dynamic data)
{
	return hx::CreateEnum< AudioContext_obj >(HX_("CUSTOM",b1,33,15,f2),4,1)->_hx_init(0,data);
}

::lime::media::AudioContext AudioContext_obj::FLASH( ::lime::media::FlashAudioContext context)
{
	return hx::CreateEnum< AudioContext_obj >(HX_("FLASH",90,6d,7a,80),3,1)->_hx_init(0,context);
}

::lime::media::AudioContext AudioContext_obj::HTML5( ::lime::media::HTML5AudioContext context)
{
	return hx::CreateEnum< AudioContext_obj >(HX_("HTML5",6a,60,9a,ac),1,1)->_hx_init(0,context);
}

::lime::media::AudioContext AudioContext_obj::OPENAL( ::lime::media::ALCAudioContext alc, ::lime::media::ALAudioContext al)
{
	return hx::CreateEnum< AudioContext_obj >(HX_("OPENAL",35,0b,17,d4),0,2)->_hx_init(0,alc)->_hx_init(1,al);
}

::lime::media::AudioContext AudioContext_obj::WEB( ::lime::media::WebAudioContext context)
{
	return hx::CreateEnum< AudioContext_obj >(HX_("WEB",74,40,42,00),2,1)->_hx_init(0,context);
}

bool AudioContext_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) { outValue = AudioContext_obj::CUSTOM_dyn(); return true; }
	if (inName==HX_("FLASH",90,6d,7a,80)) { outValue = AudioContext_obj::FLASH_dyn(); return true; }
	if (inName==HX_("HTML5",6a,60,9a,ac)) { outValue = AudioContext_obj::HTML5_dyn(); return true; }
	if (inName==HX_("OPENAL",35,0b,17,d4)) { outValue = AudioContext_obj::OPENAL_dyn(); return true; }
	if (inName==HX_("WEB",74,40,42,00)) { outValue = AudioContext_obj::WEB_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(AudioContext_obj)

int AudioContext_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 4;
	if (inName==HX_("FLASH",90,6d,7a,80)) return 3;
	if (inName==HX_("HTML5",6a,60,9a,ac)) return 1;
	if (inName==HX_("OPENAL",35,0b,17,d4)) return 0;
	if (inName==HX_("WEB",74,40,42,00)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,CUSTOM,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,FLASH,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,HTML5,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(AudioContext_obj,OPENAL,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioContext_obj,WEB,return)

int AudioContext_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 1;
	if (inName==HX_("FLASH",90,6d,7a,80)) return 1;
	if (inName==HX_("HTML5",6a,60,9a,ac)) return 1;
	if (inName==HX_("OPENAL",35,0b,17,d4)) return 2;
	if (inName==HX_("WEB",74,40,42,00)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val AudioContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return CUSTOM_dyn();
	if (inName==HX_("FLASH",90,6d,7a,80)) return FLASH_dyn();
	if (inName==HX_("HTML5",6a,60,9a,ac)) return HTML5_dyn();
	if (inName==HX_("OPENAL",35,0b,17,d4)) return OPENAL_dyn();
	if (inName==HX_("WEB",74,40,42,00)) return WEB_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String AudioContext_obj_sStaticFields[] = {
	HX_("OPENAL",35,0b,17,d4),
	HX_("HTML5",6a,60,9a,ac),
	HX_("WEB",74,40,42,00),
	HX_("FLASH",90,6d,7a,80),
	HX_("CUSTOM",b1,33,15,f2),
	::String(null())
};

static void AudioContext_obj_sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioContext_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioContext_obj::__mClass,"__mClass");
};
#endif

hx::Class AudioContext_obj::__mClass;

Dynamic __Create_AudioContext_obj() { return new AudioContext_obj; }

void AudioContext_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("lime.media.AudioContext","\x5c","\xaf","\x9d","\x2f"), hx::TCanCast< AudioContext_obj >,AudioContext_obj_sStaticFields,0,
	&__Create_AudioContext_obj, &__Create,
	&super::__SGetClass(), &CreateAudioContext_obj, AudioContext_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , AudioContext_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &AudioContext_obj::__GetStatic;
}

void AudioContext_obj::__boot()
{
}


} // end namespace lime
} // end namespace media

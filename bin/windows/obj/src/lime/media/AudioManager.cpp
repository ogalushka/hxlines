// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_lime_media_ALAudioContext
#include <lime/media/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_ALCAudioContext
#include <lime/media/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_AudioContext
#include <lime/media/AudioContext.h>
#endif
#ifndef INCLUDED_lime_media_AudioManager
#include <lime/media/AudioManager.h>
#endif
#ifndef INCLUDED_lime_media_openal_ALC
#include <lime/media/openal/ALC.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b537b97081e2aab9_27_init,"lime.media.AudioManager","init",0x83630824,"lime.media.AudioManager.init","lime/media/AudioManager.hx",27,0x63af6ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_b537b97081e2aab9_77_resume,"lime.media.AudioManager","resume",0xd988a3c1,"lime.media.AudioManager.resume","lime/media/AudioManager.hx",77,0x63af6ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_b537b97081e2aab9_104_shutdown,"lime.media.AudioManager","shutdown",0xb121e3aa,"lime.media.AudioManager.shutdown","lime/media/AudioManager.hx",104,0x63af6ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_b537b97081e2aab9_139_suspend,"lime.media.AudioManager","suspend",0x09fdc6e8,"lime.media.AudioManager.suspend","lime/media/AudioManager.hx",139,0x63af6ea2)
namespace lime{
namespace media{

void AudioManager_obj::__construct() { }

Dynamic AudioManager_obj::__CreateEmpty() { return new AudioManager_obj; }

void *AudioManager_obj::_hx_vtable = 0;

Dynamic AudioManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioManager_obj > _hx_result = new AudioManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AudioManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x67878622;
}

 ::lime::media::AudioContext AudioManager_obj::context;

void AudioManager_obj::init( ::lime::media::AudioContext context){
            	HX_GC_STACKFRAME(&_hx_pos_b537b97081e2aab9_27_init)
HXLINE(  27)		if (hx::IsNull( ::lime::media::AudioManager_obj::context )) {
HXLINE(  29)			if (hx::IsNull( context )) {
HXLINE(  55)				 ::lime::media::ALCAudioContext _hx_tmp =  ::lime::media::ALCAudioContext_obj::__alloc( HX_CTX );
HXDLIN(  55)				::lime::media::AudioManager_obj::context = ::lime::media::AudioContext_obj::OPENAL(_hx_tmp, ::lime::media::ALAudioContext_obj::__alloc( HX_CTX ));
HXLINE(  57)				 ::Dynamic device = ::lime::media::openal::ALC_obj::openDevice(null());
HXLINE(  58)				 ::Dynamic ctx = ::lime::media::openal::ALC_obj::createContext(device,null());
HXLINE(  59)				::lime::media::openal::ALC_obj::makeContextCurrent(ctx);
HXLINE(  60)				::lime::media::openal::ALC_obj::processContext(ctx);
            			}
            			else {
HXLINE(  66)				::lime::media::AudioManager_obj::context = context;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioManager_obj,init,(void))

void AudioManager_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_b537b97081e2aab9_77_resume)
HXLINE(  77)		if (hx::IsNotNull( ::lime::media::AudioManager_obj::context )) {
HXLINE(  79)			 ::lime::media::AudioContext _g = ::lime::media::AudioManager_obj::context;
HXDLIN(  79)			if ((_hx_getEnumValueIndex(_g) == (int)0)) {
HXLINE(  81)				 ::lime::media::ALAudioContext al = _g->_hx_getObject(1).StaticCast<  ::lime::media::ALAudioContext >();
HXDLIN(  81)				 ::lime::media::ALCAudioContext alc = _g->_hx_getObject(0).StaticCast<  ::lime::media::ALCAudioContext >();
HXDLIN(  81)				{
HXLINE(  83)					 ::Dynamic currentContext = alc->getCurrentContext();
HXLINE(  85)					if (hx::IsNotNull( currentContext )) {
HXLINE(  87)						 ::Dynamic device = alc->getContextsDevice(currentContext);
HXLINE(  88)						alc->resumeDevice(device);
HXLINE(  89)						alc->processContext(currentContext);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,resume,(void))

void AudioManager_obj::shutdown(){
            	HX_STACKFRAME(&_hx_pos_b537b97081e2aab9_104_shutdown)
HXLINE( 104)		if (hx::IsNotNull( ::lime::media::AudioManager_obj::context )) {
HXLINE( 106)			{
HXLINE( 106)				 ::lime::media::AudioContext _g = ::lime::media::AudioManager_obj::context;
HXDLIN( 106)				if ((_hx_getEnumValueIndex(_g) == (int)0)) {
HXLINE( 108)					 ::lime::media::ALAudioContext al = _g->_hx_getObject(1).StaticCast<  ::lime::media::ALAudioContext >();
HXDLIN( 108)					 ::lime::media::ALCAudioContext alc = _g->_hx_getObject(0).StaticCast<  ::lime::media::ALCAudioContext >();
HXDLIN( 108)					{
HXLINE( 110)						 ::Dynamic currentContext = alc->getCurrentContext();
HXLINE( 112)						if (hx::IsNotNull( currentContext )) {
HXLINE( 114)							 ::Dynamic device = alc->getContextsDevice(currentContext);
HXLINE( 115)							alc->makeContextCurrent(null());
HXLINE( 116)							alc->destroyContext(currentContext);
HXLINE( 118)							if (hx::IsNotNull( device )) {
HXLINE( 120)								alc->closeDevice(device);
            							}
            						}
            					}
            				}
            			}
HXLINE( 130)			::lime::media::AudioManager_obj::context = null();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,shutdown,(void))

void AudioManager_obj::suspend(){
            	HX_STACKFRAME(&_hx_pos_b537b97081e2aab9_139_suspend)
HXLINE( 139)		if (hx::IsNotNull( ::lime::media::AudioManager_obj::context )) {
HXLINE( 141)			 ::lime::media::AudioContext _g = ::lime::media::AudioManager_obj::context;
HXDLIN( 141)			if ((_hx_getEnumValueIndex(_g) == (int)0)) {
HXLINE( 143)				 ::lime::media::ALAudioContext al = _g->_hx_getObject(1).StaticCast<  ::lime::media::ALAudioContext >();
HXDLIN( 143)				 ::lime::media::ALCAudioContext alc = _g->_hx_getObject(0).StaticCast<  ::lime::media::ALCAudioContext >();
HXDLIN( 143)				{
HXLINE( 145)					 ::Dynamic currentContext = alc->getCurrentContext();
HXLINE( 147)					if (hx::IsNotNull( currentContext )) {
HXLINE( 149)						alc->suspendContext(currentContext);
HXLINE( 150)						 ::Dynamic device = alc->getContextsDevice(currentContext);
HXLINE( 151)						alc->pauseDevice(device);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,suspend,(void))


AudioManager_obj::AudioManager_obj()
{
}

bool AudioManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { outValue = context; return true; }
		if (HX_FIELD_EQ(inName,"suspend") ) { outValue = suspend_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true; }
	}
	return false;
}

bool AudioManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=ioValue.Cast<  ::lime::media::AudioContext >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AudioManager_obj_sMemberStorageInfo = 0;
static hx::StaticInfo AudioManager_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::media::AudioContext*/ ,(void *) &AudioManager_obj::context,HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void AudioManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioManager_obj::context,"context");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioManager_obj::context,"context");
};

#endif

hx::Class AudioManager_obj::__mClass;

static ::String AudioManager_obj_sStaticFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	::String(null())
};

void AudioManager_obj::__register()
{
	hx::Object *dummy = new AudioManager_obj;
	AudioManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.AudioManager","\xda","\xab","\xe7","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioManager_obj::__GetStatic;
	__mClass->mSetStaticField = &AudioManager_obj::__SetStatic;
	__mClass->mMarkFunc = AudioManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AudioManager_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AudioManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AudioManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media

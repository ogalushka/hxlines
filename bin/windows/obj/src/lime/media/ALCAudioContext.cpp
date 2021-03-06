// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime_media_ALCAudioContext
#include <lime/media/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_openal_ALC
#include <lime/media/openal/ALC.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_14_new,"lime.media.ALCAudioContext","new",0xe1958d20,"lime.media.ALCAudioContext.new","lime/media/ALCAudioContext.hx",14,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_49_closeDevice,"lime.media.ALCAudioContext","closeDevice",0x34347f2e,"lime.media.ALCAudioContext.closeDevice","lime/media/ALCAudioContext.hx",49,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_56_createContext,"lime.media.ALCAudioContext","createContext",0x5bcf9b13,"lime.media.ALCAudioContext.createContext","lime/media/ALCAudioContext.hx",56,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_63_destroyContext,"lime.media.ALCAudioContext","destroyContext",0xfe557f55,"lime.media.ALCAudioContext.destroyContext","lime/media/ALCAudioContext.hx",63,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_70_getContextsDevice,"lime.media.ALCAudioContext","getContextsDevice",0x539c7b50,"lime.media.ALCAudioContext.getContextsDevice","lime/media/ALCAudioContext.hx",70,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_77_getCurrentContext,"lime.media.ALCAudioContext","getCurrentContext",0x508a46ac,"lime.media.ALCAudioContext.getCurrentContext","lime/media/ALCAudioContext.hx",77,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_84_getError,"lime.media.ALCAudioContext","getError",0xa27ae692,"lime.media.ALCAudioContext.getError","lime/media/ALCAudioContext.hx",84,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_91_getErrorString,"lime.media.ALCAudioContext","getErrorString",0xffadbd03,"lime.media.ALCAudioContext.getErrorString","lime/media/ALCAudioContext.hx",91,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_98_getIntegerv,"lime.media.ALCAudioContext","getIntegerv",0x4f8a886e,"lime.media.ALCAudioContext.getIntegerv","lime/media/ALCAudioContext.hx",98,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_105_getString,"lime.media.ALCAudioContext","getString",0x48d67ec7,"lime.media.ALCAudioContext.getString","lime/media/ALCAudioContext.hx",105,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_112_makeContextCurrent,"lime.media.ALCAudioContext","makeContextCurrent",0x06ff07d8,"lime.media.ALCAudioContext.makeContextCurrent","lime/media/ALCAudioContext.hx",112,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_119_openDevice,"lime.media.ALCAudioContext","openDevice",0xe997a340,"lime.media.ALCAudioContext.openDevice","lime/media/ALCAudioContext.hx",119,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_126_pauseDevice,"lime.media.ALCAudioContext","pauseDevice",0x6df540ec,"lime.media.ALCAudioContext.pauseDevice","lime/media/ALCAudioContext.hx",126,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_133_processContext,"lime.media.ALCAudioContext","processContext",0x4447d280,"lime.media.ALCAudioContext.processContext","lime/media/ALCAudioContext.hx",133,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_140_resumeDevice,"lime.media.ALCAudioContext","resumeDevice",0xa7c76563,"lime.media.ALCAudioContext.resumeDevice","lime/media/ALCAudioContext.hx",140,0x002ac592)
HX_LOCAL_STACK_FRAME(_hx_pos_7ddeb74c457c1c3a_147_suspendContext,"lime.media.ALCAudioContext","suspendContext",0x772eb113,"lime.media.ALCAudioContext.suspendContext","lime/media/ALCAudioContext.hx",147,0x002ac592)
namespace lime{
namespace media{

void ALCAudioContext_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_14_new)
HXLINE(  37)		this->ALL_DEVICES_SPECIFIER = (int)4115;
HXLINE(  36)		this->DEFAULT_ALL_DEVICES_SPECIFIER = (int)4114;
HXLINE(  35)		this->ENUMERATE_ALL_EXT = (int)1;
HXLINE(  34)		this->EXTENSIONS = (int)4102;
HXLINE(  33)		this->DEVICE_SPECIFIER = (int)4101;
HXLINE(  32)		this->DEFAULT_DEVICE_SPECIFIER = (int)4100;
HXLINE(  31)		this->ALL_ATTRIBUTES = (int)4099;
HXLINE(  30)		this->ATTRIBUTES_SIZE = (int)4098;
HXLINE(  29)		this->OUT_OF_MEMORY = (int)40965;
HXLINE(  28)		this->INVALID_VALUE = (int)40964;
HXLINE(  27)		this->INVALID_ENUM = (int)40963;
HXLINE(  26)		this->INVALID_CONTEXT = (int)40962;
HXLINE(  25)		this->INVALID_DEVICE = (int)40961;
HXLINE(  24)		this->NO_ERROR = (int)0;
HXLINE(  23)		this->STEREO_SOURCES = (int)4113;
HXLINE(  22)		this->MONO_SOURCES = (int)4112;
HXLINE(  21)		this->SYNC = (int)4105;
HXLINE(  20)		this->REFRESH = (int)4104;
HXLINE(  19)		this->FREQUENCY = (int)4103;
HXLINE(  18)		this->TRUE = (int)1;
HXLINE(  17)		this->FALSE = (int)0;
            	}

Dynamic ALCAudioContext_obj::__CreateEmpty() { return new ALCAudioContext_obj; }

void *ALCAudioContext_obj::_hx_vtable = 0;

Dynamic ALCAudioContext_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ALCAudioContext_obj > _hx_result = new ALCAudioContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ALCAudioContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f497182;
}

bool ALCAudioContext_obj::closeDevice( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_49_closeDevice)
HXLINE(  49)		return ::lime::media::openal::ALC_obj::closeDevice(device);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,closeDevice,return )

 ::Dynamic ALCAudioContext_obj::createContext( ::Dynamic device,::Array< int > attrlist){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_56_createContext)
HXLINE(  56)		return ::lime::media::openal::ALC_obj::createContext(device,attrlist);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ALCAudioContext_obj,createContext,return )

void ALCAudioContext_obj::destroyContext( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_63_destroyContext)
HXLINE(  63)		::lime::media::openal::ALC_obj::destroyContext(context);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,destroyContext,(void))

 ::Dynamic ALCAudioContext_obj::getContextsDevice( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_70_getContextsDevice)
HXLINE(  70)		return ::lime::media::openal::ALC_obj::getContextsDevice(context);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,getContextsDevice,return )

 ::Dynamic ALCAudioContext_obj::getCurrentContext(){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_77_getCurrentContext)
HXLINE(  77)		return ::lime::media::openal::ALC_obj::getCurrentContext();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ALCAudioContext_obj,getCurrentContext,return )

int ALCAudioContext_obj::getError( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_84_getError)
HXLINE(  84)		return ::lime::media::openal::ALC_obj::getError(device);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,getError,return )

::String ALCAudioContext_obj::getErrorString( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_91_getErrorString)
HXLINE(  91)		return ::lime::media::openal::ALC_obj::getErrorString(device);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,getErrorString,return )

::Array< int > ALCAudioContext_obj::getIntegerv( ::Dynamic device,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_98_getIntegerv)
HXLINE(  98)		return ::lime::media::openal::ALC_obj::getIntegerv(device,param,count);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ALCAudioContext_obj,getIntegerv,return )

::String ALCAudioContext_obj::getString( ::Dynamic device,int param){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_105_getString)
HXLINE( 105)		return ::lime::media::openal::ALC_obj::getString(device,param);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ALCAudioContext_obj,getString,return )

bool ALCAudioContext_obj::makeContextCurrent( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_112_makeContextCurrent)
HXLINE( 112)		return ::lime::media::openal::ALC_obj::makeContextCurrent(context);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,makeContextCurrent,return )

 ::Dynamic ALCAudioContext_obj::openDevice(::String deviceName){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_119_openDevice)
HXLINE( 119)		return ::lime::media::openal::ALC_obj::openDevice(deviceName);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,openDevice,return )

void ALCAudioContext_obj::pauseDevice( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_126_pauseDevice)
HXLINE( 126)		::lime::media::openal::ALC_obj::pauseDevice(device);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,pauseDevice,(void))

void ALCAudioContext_obj::processContext( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_133_processContext)
HXLINE( 133)		::lime::media::openal::ALC_obj::processContext(context);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,processContext,(void))

void ALCAudioContext_obj::resumeDevice( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_140_resumeDevice)
HXLINE( 140)		::lime::media::openal::ALC_obj::resumeDevice(device);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,resumeDevice,(void))

void ALCAudioContext_obj::suspendContext( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_7ddeb74c457c1c3a_147_suspendContext)
HXLINE( 147)		::lime::media::openal::ALC_obj::suspendContext(context);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,suspendContext,(void))


hx::ObjectPtr< ALCAudioContext_obj > ALCAudioContext_obj::__new() {
	hx::ObjectPtr< ALCAudioContext_obj > __this = new ALCAudioContext_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ALCAudioContext_obj > ALCAudioContext_obj::__alloc(hx::Ctx *_hx_ctx) {
	ALCAudioContext_obj *__this = (ALCAudioContext_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ALCAudioContext_obj), false, "lime.media.ALCAudioContext"));
	*(void **)__this = ALCAudioContext_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ALCAudioContext_obj::ALCAudioContext_obj()
{
}

hx::Val ALCAudioContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"TRUE") ) { return hx::Val( TRUE); }
		if (HX_FIELD_EQ(inName,"SYNC") ) { return hx::Val( SYNC); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { return hx::Val( FALSE); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REFRESH") ) { return hx::Val( REFRESH); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return hx::Val( NO_ERROR); }
		if (HX_FIELD_EQ(inName,"getError") ) { return hx::Val( getError_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { return hx::Val( FREQUENCY); }
		if (HX_FIELD_EQ(inName,"getString") ) { return hx::Val( getString_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { return hx::Val( EXTENSIONS); }
		if (HX_FIELD_EQ(inName,"openDevice") ) { return hx::Val( openDevice_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeDevice") ) { return hx::Val( closeDevice_dyn()); }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { return hx::Val( getIntegerv_dyn()); }
		if (HX_FIELD_EQ(inName,"pauseDevice") ) { return hx::Val( pauseDevice_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MONO_SOURCES") ) { return hx::Val( MONO_SOURCES); }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return hx::Val( INVALID_ENUM); }
		if (HX_FIELD_EQ(inName,"resumeDevice") ) { return hx::Val( resumeDevice_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return hx::Val( INVALID_VALUE); }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return hx::Val( OUT_OF_MEMORY); }
		if (HX_FIELD_EQ(inName,"createContext") ) { return hx::Val( createContext_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STEREO_SOURCES") ) { return hx::Val( STEREO_SOURCES); }
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { return hx::Val( INVALID_DEVICE); }
		if (HX_FIELD_EQ(inName,"ALL_ATTRIBUTES") ) { return hx::Val( ALL_ATTRIBUTES); }
		if (HX_FIELD_EQ(inName,"destroyContext") ) { return hx::Val( destroyContext_dyn()); }
		if (HX_FIELD_EQ(inName,"getErrorString") ) { return hx::Val( getErrorString_dyn()); }
		if (HX_FIELD_EQ(inName,"processContext") ) { return hx::Val( processContext_dyn()); }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { return hx::Val( suspendContext_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { return hx::Val( INVALID_CONTEXT); }
		if (HX_FIELD_EQ(inName,"ATTRIBUTES_SIZE") ) { return hx::Val( ATTRIBUTES_SIZE); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEVICE_SPECIFIER") ) { return hx::Val( DEVICE_SPECIFIER); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENUMERATE_ALL_EXT") ) { return hx::Val( ENUMERATE_ALL_EXT); }
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { return hx::Val( getContextsDevice_dyn()); }
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { return hx::Val( getCurrentContext_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { return hx::Val( makeContextCurrent_dyn()); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALL_DEVICES_SPECIFIER") ) { return hx::Val( ALL_DEVICES_SPECIFIER); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEFAULT_DEVICE_SPECIFIER") ) { return hx::Val( DEFAULT_DEVICE_SPECIFIER); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEFAULT_ALL_DEVICES_SPECIFIER") ) { return hx::Val( DEFAULT_ALL_DEVICES_SPECIFIER); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ALCAudioContext_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"TRUE") ) { TRUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC") ) { SYNC=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { FALSE=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REFRESH") ) { REFRESH=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { FREQUENCY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MONO_SOURCES") ) { MONO_SOURCES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STEREO_SOURCES") ) { STEREO_SOURCES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { INVALID_DEVICE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALL_ATTRIBUTES") ) { ALL_ATTRIBUTES=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { INVALID_CONTEXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ATTRIBUTES_SIZE") ) { ATTRIBUTES_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEVICE_SPECIFIER") ) { DEVICE_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENUMERATE_ALL_EXT") ) { ENUMERATE_ALL_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALL_DEVICES_SPECIFIER") ) { ALL_DEVICES_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEFAULT_DEVICE_SPECIFIER") ) { DEFAULT_DEVICE_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEFAULT_ALL_DEVICES_SPECIFIER") ) { DEFAULT_ALL_DEVICES_SPECIFIER=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ALCAudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"));
	outFields->push(HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"));
	outFields->push(HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"));
	outFields->push(HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c"));
	outFields->push(HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37"));
	outFields->push(HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad"));
	outFields->push(HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60"));
	outFields->push(HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"));
	outFields->push(HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93"));
	outFields->push(HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf"));
	outFields->push(HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"));
	outFields->push(HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"));
	outFields->push(HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"));
	outFields->push(HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17"));
	outFields->push(HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04"));
	outFields->push(HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9"));
	outFields->push(HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21"));
	outFields->push(HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"));
	outFields->push(HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7"));
	outFields->push(HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2"));
	outFields->push(HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ALCAudioContext_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,FALSE),HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,TRUE),HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,FREQUENCY),HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,REFRESH),HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,SYNC),HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,MONO_SOURCES),HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,STEREO_SOURCES),HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,NO_ERROR),HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_DEVICE),HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_CONTEXT),HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_ENUM),HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_VALUE),HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,OUT_OF_MEMORY),HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ATTRIBUTES_SIZE),HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ALL_ATTRIBUTES),HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,DEFAULT_DEVICE_SPECIFIER),HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,DEVICE_SPECIFIER),HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,EXTENSIONS),HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ENUMERATE_ALL_EXT),HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,DEFAULT_ALL_DEVICES_SPECIFIER),HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ALL_DEVICES_SPECIFIER),HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ALCAudioContext_obj_sStaticStorageInfo = 0;
#endif

static ::String ALCAudioContext_obj_sMemberFields[] = {
	HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"),
	HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"),
	HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"),
	HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c"),
	HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37"),
	HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad"),
	HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93"),
	HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17"),
	HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04"),
	HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9"),
	HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21"),
	HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"),
	HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7"),
	HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2"),
	HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5"),
	HX_HCSTRING("closeDevice","\x6e","\x02","\xc8","\x2b"),
	HX_HCSTRING("createContext","\x53","\x6e","\xba","\x01"),
	HX_HCSTRING("destroyContext","\x15","\x84","\xe3","\x85"),
	HX_HCSTRING("getContextsDevice","\x90","\xee","\x91","\x9c"),
	HX_HCSTRING("getCurrentContext","\xec","\xb9","\x7f","\x99"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getErrorString","\xc3","\xc1","\x3b","\x87"),
	HX_HCSTRING("getIntegerv","\xae","\x0b","\x1e","\x47"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("makeContextCurrent","\x98","\x6c","\xce","\x94"),
	HX_HCSTRING("openDevice","\x00","\x48","\x14","\xbf"),
	HX_HCSTRING("pauseDevice","\x2c","\xc4","\x88","\x65"),
	HX_HCSTRING("processContext","\x40","\xd7","\xd5","\xcb"),
	HX_HCSTRING("resumeDevice","\x23","\xba","\x46","\x51"),
	HX_HCSTRING("suspendContext","\xd3","\xb5","\xbc","\xfe"),
	::String(null()) };

static void ALCAudioContext_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALCAudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ALCAudioContext_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALCAudioContext_obj::__mClass,"__mClass");
};

#endif

hx::Class ALCAudioContext_obj::__mClass;

void ALCAudioContext_obj::__register()
{
	hx::Object *dummy = new ALCAudioContext_obj;
	ALCAudioContext_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.ALCAudioContext","\x2e","\xbd","\xc8","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ALCAudioContext_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ALCAudioContext_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ALCAudioContext_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ALCAudioContext_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALCAudioContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALCAudioContext_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media

// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_String
#include <lime/net/_HTTPRequest_String.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_openfl_utils_ByteArray
#include <lime/net/_HTTPRequest_openfl_utils_ByteArray.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#include <openfl/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#include <openfl/events/SecurityErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_30_new,"openfl.net.URLLoader","new",0xb8a6da85,"openfl.net.URLLoader.new","openfl/net/URLLoader.hx",30,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_49_close,"openfl.net.URLLoader","close",0x0328b51d,"openfl.net.URLLoader.close","openfl/net/URLLoader.hx",49,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_58_load,"openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",58,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_69_load,"openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",69,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_87_load,"openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",87,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_103___dispatchStatus,"openfl.net.URLLoader","__dispatchStatus",0xadb63f67,"openfl.net.URLLoader.__dispatchStatus","openfl/net/URLLoader.hx",103,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_128___prepareRequest,"openfl.net.URLLoader","__prepareRequest",0x68321263,"openfl.net.URLLoader.__prepareRequest","openfl/net/URLLoader.hx",128,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_193_httpRequest_onError,"openfl.net.URLLoader","httpRequest_onError",0x8f111376,"openfl.net.URLLoader.httpRequest_onError","openfl/net/URLLoader.hx",193,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_214_httpRequest_onProgress,"openfl.net.URLLoader","httpRequest_onProgress",0xf5cd30bf,"openfl.net.URLLoader.httpRequest_onProgress","openfl/net/URLLoader.hx",214,0x11daec0d)
namespace openfl{
namespace net{

void URLLoader_obj::__construct( ::openfl::net::URLRequest request){
            	HX_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_30_new)
HXLINE(  32)		super::__construct(null());
HXLINE(  34)		this->bytesLoaded = (int)0;
HXLINE(  35)		this->bytesTotal = (int)0;
HXLINE(  36)		this->dataFormat = (int)1;
HXLINE(  38)		if (hx::IsNotNull( request )) {
HXLINE(  40)			this->load(request);
            		}
            	}

Dynamic URLLoader_obj::__CreateEmpty() { return new URLLoader_obj; }

void *URLLoader_obj::_hx_vtable = 0;

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< URLLoader_obj > _hx_result = new URLLoader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool URLLoader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1b123bf8;
	} else {
		return inClassId==(int)0x59fbe715;
	}
}

void URLLoader_obj::close(){
            	HX_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_49_close)
HXLINE(  49)		if (hx::IsNotNull( this->_hx___httpRequest )) {
HXLINE(  51)			::lime::net::_IHTTPRequest_obj::cancel(this->_hx___httpRequest);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

void URLLoader_obj::load( ::openfl::net::URLRequest request){
            	HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_58_load)
HXLINE(  58)		 ::openfl::net::URLLoader _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  61)		if (hx::IsEq( this->dataFormat,(int)0 )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::openfl::net::URLLoader,_gthis) HXARGC(1)
            			void _hx_run( ::openfl::utils::ByteArrayData data){
            				HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_69_load)
HXLINE(  71)				_gthis->_hx___dispatchStatus();
HXLINE(  72)				_gthis->data = data;
HXLINE(  74)				 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null());
HXLINE(  75)				_gthis->dispatchEvent(event);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  63)			 ::lime::net::_HTTPRequest_openfl_utils_ByteArray httpRequest =  ::lime::net::_HTTPRequest_openfl_utils_ByteArray_obj::__alloc( HX_CTX ,null());
HXLINE(  64)			this->_hx___prepareRequest(httpRequest,request);
HXLINE(  66)			httpRequest->load(null())->onProgress(this->httpRequest_onProgress_dyn())->onError(this->httpRequest_onError_dyn())->onComplete( ::Dynamic(new _hx_Closure_0(_gthis)));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::openfl::net::URLLoader,_gthis) HXARGC(1)
            			void _hx_run(::String data1){
            				HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_87_load)
HXLINE(  89)				_gthis->_hx___dispatchStatus();
HXLINE(  90)				_gthis->data = data1;
HXLINE(  92)				 ::openfl::events::Event event1 =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null());
HXLINE(  93)				_gthis->dispatchEvent(event1);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  81)			 ::lime::net::_HTTPRequest_String httpRequest1 =  ::lime::net::_HTTPRequest_String_obj::__alloc( HX_CTX ,null());
HXLINE(  82)			this->_hx___prepareRequest(httpRequest1,request);
HXLINE(  84)			httpRequest1->load(null())->onProgress(this->httpRequest_onProgress_dyn())->onError(this->httpRequest_onError_dyn())->onComplete( ::Dynamic(new _hx_Closure_1(_gthis)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

void URLLoader_obj::_hx___dispatchStatus(){
            	HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_103___dispatchStatus)
HXLINE( 105)		 ::openfl::events::HTTPStatusEvent event =  ::openfl::events::HTTPStatusEvent_obj::__alloc( HX_CTX ,HX_("httpStatus",da,4c,74,0a),false,false, ::Dynamic(this->_hx___httpRequest->__Field(HX_("responseStatus",93,60,a4,78),hx::paccDynamic)),null());
HXLINE( 106)		event->responseURL = ( (::String)(this->_hx___httpRequest->__Field(HX_("uri",6c,2b,59,00),hx::paccDynamic)) );
HXLINE( 108)		::Array< ::Dynamic> headers = ::Array_obj< ::Dynamic>::__new();
HXLINE( 111)		bool _hx_tmp;
HXDLIN( 111)		if (( (bool)(this->_hx___httpRequest->__Field(HX_("enableResponseHeaders",82,32,47,05),hx::paccDynamic)) )) {
HXLINE( 111)			_hx_tmp = hx::IsNotNull( ( (::Array< ::Dynamic>)(this->_hx___httpRequest->__Field(HX_("responseHeaders",c5,0d,ca,43),hx::paccDynamic)) ) );
            		}
            		else {
HXLINE( 111)			_hx_tmp = false;
            		}
HXDLIN( 111)		if (_hx_tmp) {
HXLINE( 113)			int _g = (int)0;
HXDLIN( 113)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->_hx___httpRequest->__Field(HX_("responseHeaders",c5,0d,ca,43),hx::paccDynamic)) );
HXDLIN( 113)			while((_g < _g1->length)){
HXLINE( 113)				 ::lime::net::HTTPRequestHeader header = _g1->__get(_g).StaticCast<  ::lime::net::HTTPRequestHeader >();
HXDLIN( 113)				_g = (_g + (int)1);
HXLINE( 115)				headers->push( ::openfl::net::URLRequestHeader_obj::__alloc( HX_CTX ,header->name,header->value));
            			}
            		}
HXLINE( 122)		event->responseHeaders = headers;
HXLINE( 123)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,_hx___dispatchStatus,(void))

void URLLoader_obj::_hx___prepareRequest(::Dynamic httpRequest, ::openfl::net::URLRequest request){
            	HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_128___prepareRequest)
HXLINE( 130)		this->_hx___httpRequest = httpRequest;
HXLINE( 131)		this->_hx___httpRequest->__SetField(HX_("uri",6c,2b,59,00),request->url,hx::paccDynamic);
HXLINE( 133)		::String _g = request->method;
HXDLIN( 133)		::String _hx_tmp;
HXDLIN( 133)		::String _hx_switch_0 = _g;
            		if (  (_hx_switch_0==HX_("DELETE",2b,6c,5b,1d)) ){
HXLINE( 133)			_hx_tmp = HX_("DELETE",2b,6c,5b,1d);
HXDLIN( 133)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("HEAD",20,f1,cb,2f)) ){
HXLINE( 133)			_hx_tmp = HX_("HEAD",20,f1,cb,2f);
HXDLIN( 133)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("OPTIONS",3e,07,d2,5f)) ){
HXLINE( 133)			_hx_tmp = HX_("OPTIONS",3e,07,d2,5f);
HXDLIN( 133)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("POST",60,4c,1d,35)) ){
HXLINE( 133)			_hx_tmp = HX_("POST",60,4c,1d,35);
HXDLIN( 133)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("PUT",af,fe,3c,00)) ){
HXLINE( 133)			_hx_tmp = HX_("PUT",af,fe,3c,00);
HXDLIN( 133)			goto _hx_goto_7;
            		}
            		/* default */{
HXLINE( 133)			_hx_tmp = HX_("GET",76,1c,36,00);
            		}
            		_hx_goto_7:;
HXDLIN( 133)		this->_hx___httpRequest->__SetField(HX_("method",e1,f6,5a,09),_hx_tmp,hx::paccDynamic);
HXLINE( 144)		if (hx::IsNotNull( request->data )) {
HXLINE( 146)			if (::Std_obj::is(request->data,hx::ClassOf< ::openfl::net::URLVariables >())) {
HXLINE( 148)				::Array< ::String > fields = ::Reflect_obj::fields(request->data);
HXLINE( 150)				{
HXLINE( 150)					int _g1 = (int)0;
HXDLIN( 150)					while((_g1 < fields->length)){
HXLINE( 150)						::String field = fields->__get(_g1);
HXDLIN( 150)						_g1 = (_g1 + (int)1);
HXLINE( 152)						{
HXLINE( 152)							::Dynamic this1 =  ::Dynamic(this->_hx___httpRequest->__Field(HX_("formData",8e,d5,80,56),hx::paccDynamic));
HXDLIN( 152)							( ( ::haxe::ds::StringMap)(this1) )->set(field,::Reflect_obj::field(request->data,field));
            						}
            					}
            				}
            			}
            			else {
HXLINE( 156)				if (::Std_obj::is(request->data,hx::ClassOf< ::haxe::io::Bytes >())) {
HXLINE( 158)					this->_hx___httpRequest->__SetField(HX_("data",2a,56,63,42),( ( ::haxe::io::Bytes)(request->data) ),hx::paccDynamic);
            				}
            				else {
HXLINE( 162)					::String _hx_tmp1 = ::Std_obj::string(request->data);
HXDLIN( 162)					this->_hx___httpRequest->__SetField(HX_("data",2a,56,63,42),::haxe::io::Bytes_obj::ofString(_hx_tmp1),hx::paccDynamic);
            				}
            			}
            		}
HXLINE( 168)		this->_hx___httpRequest->__SetField(HX_("contentType",93,3c,7b,2a),request->contentType,hx::paccDynamic);
HXLINE( 170)		if (hx::IsNotNull( request->requestHeaders )) {
HXLINE( 172)			int _g11 = (int)0;
HXDLIN( 172)			::Array< ::Dynamic> _g2 = request->requestHeaders;
HXDLIN( 172)			while((_g11 < _g2->length)){
HXLINE( 172)				 ::openfl::net::URLRequestHeader header = _g2->__get(_g11).StaticCast<  ::openfl::net::URLRequestHeader >();
HXDLIN( 172)				_g11 = (_g11 + (int)1);
HXLINE( 174)				::Array< ::Dynamic> _hx_tmp2 = ( (::Array< ::Dynamic>)(this->_hx___httpRequest->__Field(HX_("headers",46,52,08,63),hx::paccDynamic)) );
HXDLIN( 174)				_hx_tmp2->push( ::lime::net::HTTPRequestHeader_obj::__alloc( HX_CTX ,header->name,header->value));
            			}
            		}
HXLINE( 180)		this->_hx___httpRequest->__SetField(HX_("userAgent",7a,f0,12,c8),request->userAgent,hx::paccDynamic);
HXLINE( 181)		this->_hx___httpRequest->__SetField(HX_("enableResponseHeaders",82,32,47,05),true,hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,_hx___prepareRequest,(void))

void URLLoader_obj::httpRequest_onError( ::Dynamic error){
            	HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_193_httpRequest_onError)
HXLINE( 195)		this->_hx___dispatchStatus();
HXLINE( 197)		if (hx::IsEq( error,(int)403 )) {
HXLINE( 199)			 ::openfl::events::SecurityErrorEvent event =  ::openfl::events::SecurityErrorEvent_obj::__alloc( HX_CTX ,HX_("securityError",e8,28,7c,a2),null(),null(),null(),null());
HXLINE( 200)			event->text = ::Std_obj::string(error);
HXLINE( 201)			this->dispatchEvent(event);
            		}
            		else {
HXLINE( 205)			 ::openfl::events::IOErrorEvent event1 =  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null());
HXLINE( 206)			event1->text = ::Std_obj::string(error);
HXLINE( 207)			this->dispatchEvent(event1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,httpRequest_onError,(void))

void URLLoader_obj::httpRequest_onProgress(int bytesLoaded,int bytesTotal){
            	HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_214_httpRequest_onProgress)
HXLINE( 216)		 ::openfl::events::ProgressEvent event =  ::openfl::events::ProgressEvent_obj::__alloc( HX_CTX ,HX_("progress",ad,f7,2a,86),null(),null(),null(),null());
HXLINE( 217)		event->bytesLoaded = bytesLoaded;
HXLINE( 218)		event->bytesTotal = bytesTotal;
HXLINE( 219)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,httpRequest_onProgress,(void))


hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new( ::openfl::net::URLRequest request) {
	hx::ObjectPtr< URLLoader_obj > __this = new URLLoader_obj();
	__this->__construct(request);
	return __this;
}

hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::net::URLRequest request) {
	URLLoader_obj *__this = (URLLoader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(URLLoader_obj), true, "openfl.net.URLLoader"));
	*(void **)__this = URLLoader_obj::_hx_vtable;
	__this->__construct(request);
	return __this;
}

URLLoader_obj::URLLoader_obj()
{
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(_hx___httpRequest,"__httpRequest");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(_hx___httpRequest,"__httpRequest");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val URLLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data); }
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return hx::Val( bytesTotal); }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return hx::Val( dataFormat); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return hx::Val( bytesLoaded); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__httpRequest") ) { return hx::Val( _hx___httpRequest); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__dispatchStatus") ) { return hx::Val( _hx___dispatchStatus_dyn()); }
		if (HX_FIELD_EQ(inName,"__prepareRequest") ) { return hx::Val( _hx___prepareRequest_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"httpRequest_onError") ) { return hx::Val( httpRequest_onError_dyn()); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"httpRequest_onProgress") ) { return hx::Val( httpRequest_onProgress_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val URLLoader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { dataFormat=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__httpRequest") ) { _hx___httpRequest=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"));
	outFields->push(HX_HCSTRING("__httpRequest","\x87","\xad","\xdd","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo URLLoader_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,dataFormat),HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9")},
	{hx::fsObject /*::lime::net::_IHTTPRequest*/ ,(int)offsetof(URLLoader_obj,_hx___httpRequest),HX_HCSTRING("__httpRequest","\x87","\xad","\xdd","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *URLLoader_obj_sStaticStorageInfo = 0;
#endif

static ::String URLLoader_obj_sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"),
	HX_HCSTRING("__httpRequest","\x87","\xad","\xdd","\x71"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("__dispatchStatus","\xac","\x7c","\x9a","\x75"),
	HX_HCSTRING("__prepareRequest","\xa8","\x4f","\x16","\x30"),
	HX_HCSTRING("httpRequest_onError","\x51","\xaf","\x4c","\x4d"),
	HX_HCSTRING("httpRequest_onProgress","\xc4","\x2f","\x46","\x93"),
	::String(null()) };

static void URLLoader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void URLLoader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
};

#endif

hx::Class URLLoader_obj::__mClass;

void URLLoader_obj::__register()
{
	hx::Object *dummy = new URLLoader_obj;
	URLLoader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.URLLoader","\x13","\x34","\x24","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = URLLoader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(URLLoader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLLoader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = URLLoader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLLoader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLLoader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net

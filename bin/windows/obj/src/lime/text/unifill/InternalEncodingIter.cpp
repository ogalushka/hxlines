// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_lime_text_unifill_InternalEncodingIter
#include <lime/text/unifill/InternalEncodingIter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1cd24162fee7d64d_3_new,"lime.text.unifill.InternalEncodingIter","new",0x7b35f79d,"lime.text.unifill.InternalEncodingIter.new","lime/text/unifill/InternalEncodingIter.hx",3,0xddcd5a32)
HX_LOCAL_STACK_FRAME(_hx_pos_1cd24162fee7d64d_16_hasNext,"lime.text.unifill.InternalEncodingIter","hasNext",0x6c39af2a,"lime.text.unifill.InternalEncodingIter.hasNext","lime/text/unifill/InternalEncodingIter.hx",16,0xddcd5a32)
HX_LOCAL_STACK_FRAME(_hx_pos_1cd24162fee7d64d_20_next,"lime.text.unifill.InternalEncodingIter","next",0x5402b316,"lime.text.unifill.InternalEncodingIter.next","lime/text/unifill/InternalEncodingIter.hx",20,0xddcd5a32)
namespace lime{
namespace text{
namespace unifill{

void InternalEncodingIter_obj::__construct(::String s,int beginIndex,int endIndex){
            	HX_STACKFRAME(&_hx_pos_1cd24162fee7d64d_3_new)
HXLINE(  19)		this->i = (int)0;
HXLINE(  10)		this->string = s;
HXLINE(  11)		this->index = beginIndex;
HXLINE(  12)		this->endIndex = endIndex;
            	}

Dynamic InternalEncodingIter_obj::__CreateEmpty() { return new InternalEncodingIter_obj; }

void *InternalEncodingIter_obj::_hx_vtable = 0;

Dynamic InternalEncodingIter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InternalEncodingIter_obj > _hx_result = new InternalEncodingIter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool InternalEncodingIter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x79d47139;
}

bool InternalEncodingIter_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_1cd24162fee7d64d_16_hasNext)
HXLINE(  16)		return (this->index < this->endIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC0(InternalEncodingIter_obj,hasNext,return )

int InternalEncodingIter_obj::next(){
            	HX_STACKFRAME(&_hx_pos_1cd24162fee7d64d_20_next)
HXLINE(  21)		this->i = this->index;
HXLINE(  22)		 ::lime::text::unifill::InternalEncodingIter _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  22)		int _hx_tmp1 = _hx_tmp->index;
HXDLIN(  22)		::String this1 = this->string;
HXDLIN(  22)		::String this2 = this1;
HXDLIN(  22)		int c = this2.cca(this->index);
HXDLIN(  22)		int _hx_tmp2;
HXDLIN(  22)		if ((c < (int)192)) {
HXLINE(  22)			_hx_tmp2 = (int)1;
            		}
            		else {
HXLINE(  22)			if ((c < (int)224)) {
HXLINE(  22)				_hx_tmp2 = (int)2;
            			}
            			else {
HXLINE(  22)				if ((c < (int)240)) {
HXLINE(  22)					_hx_tmp2 = (int)3;
            				}
            				else {
HXLINE(  22)					if ((c < (int)248)) {
HXLINE(  22)						_hx_tmp2 = (int)4;
            					}
            					else {
HXLINE(  22)						_hx_tmp2 = (int)1;
            					}
            				}
            			}
            		}
HXDLIN(  22)		_hx_tmp->index = (_hx_tmp1 + _hx_tmp2);
HXLINE(  23)		return this->i;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InternalEncodingIter_obj,next,return )


InternalEncodingIter_obj::InternalEncodingIter_obj()
{
}

void InternalEncodingIter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InternalEncodingIter);
	HX_MARK_MEMBER_NAME(string,"string");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(endIndex,"endIndex");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void InternalEncodingIter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(string,"string");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(endIndex,"endIndex");
	HX_VISIT_MEMBER_NAME(i,"i");
}

hx::Val InternalEncodingIter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return hx::Val( i); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { return hx::Val( string); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hx::Val( hasNext_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { return hx::Val( endIndex); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val InternalEncodingIter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { string=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { endIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InternalEncodingIter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("string","\xd1","\x28","\x30","\x11"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc"));
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo InternalEncodingIter_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(InternalEncodingIter_obj,string),HX_HCSTRING("string","\xd1","\x28","\x30","\x11")},
	{hx::fsInt,(int)offsetof(InternalEncodingIter_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsInt,(int)offsetof(InternalEncodingIter_obj,endIndex),HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc")},
	{hx::fsInt,(int)offsetof(InternalEncodingIter_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *InternalEncodingIter_obj_sStaticStorageInfo = 0;
#endif

static ::String InternalEncodingIter_obj_sMemberFields[] = {
	HX_HCSTRING("string","\xd1","\x28","\x30","\x11"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void InternalEncodingIter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InternalEncodingIter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InternalEncodingIter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InternalEncodingIter_obj::__mClass,"__mClass");
};

#endif

hx::Class InternalEncodingIter_obj::__mClass;

void InternalEncodingIter_obj::__register()
{
	hx::Object *dummy = new InternalEncodingIter_obj;
	InternalEncodingIter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.unifill.InternalEncodingIter","\x2b","\xe5","\x68","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InternalEncodingIter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InternalEncodingIter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InternalEncodingIter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InternalEncodingIter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InternalEncodingIter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InternalEncodingIter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace unifill

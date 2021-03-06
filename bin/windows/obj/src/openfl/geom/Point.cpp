// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Point
#include <lime/utils/ObjectPool_openfl_geom_Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_24_new,"openfl.geom.Point","new",0xa6fb3c0e,"openfl.geom.Point.new","openfl/geom/Point.hx",24,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_34_add,"openfl.geom.Point","add",0xa6f15dcf,"openfl.geom.Point.add","openfl/geom/Point.hx",34,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_41_clone,"openfl.geom.Point","clone",0x787f468b,"openfl.geom.Point.clone","openfl/geom/Point.hx",41,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_46_copyFrom,"openfl.geom.Point","copyFrom",0x660e8951,"openfl.geom.Point.copyFrom","openfl/geom/Point.hx",46,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_65_equals,"openfl.geom.Point","equals",0xa8838351,"openfl.geom.Point.equals","openfl/geom/Point.hx",65,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_79_normalize,"openfl.geom.Point","normalize",0x05c199bb,"openfl.geom.Point.normalize","openfl/geom/Point.hx",79,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_94_offset,"openfl.geom.Point","offset",0x48d02ca5,"openfl.geom.Point.offset","openfl/geom/Point.hx",94,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_109_setTo,"openfl.geom.Point","setTo",0xaa4bc4eb,"openfl.geom.Point.setTo","openfl/geom/Point.hx",109,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_118_subtract,"openfl.geom.Point","subtract",0x95bef2a6,"openfl.geom.Point.subtract","openfl/geom/Point.hx",118,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_125_toString,"openfl.geom.Point","toString",0xd61c4e3e,"openfl.geom.Point.toString","openfl/geom/Point.hx",125,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_130___toLimeVector2,"openfl.geom.Point","__toLimeVector2",0x318eb74d,"openfl.geom.Point.__toLimeVector2","openfl/geom/Point.hx",130,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_153_get_length,"openfl.geom.Point","get_length",0x11c48ac1,"openfl.geom.Point.get_length","openfl/geom/Point.hx",153,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_54_distance,"openfl.geom.Point","distance",0x09a710c7,"openfl.geom.Point.distance","openfl/geom/Point.hx",54,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_72_interpolate,"openfl.geom.Point","interpolate",0x8bd29e6f,"openfl.geom.Point.interpolate","openfl/geom/Point.hx",72,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_104_polar,"openfl.geom.Point","polar",0xf6ae22ec,"openfl.geom.Point.polar","openfl/geom/Point.hx",104,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_17_boot,"openfl.geom.Point","boot",0x6cf250c4,"openfl.geom.Point.boot","openfl/geom/Point.hx",17,0x18173b82)
namespace openfl{
namespace geom{

void Point_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_24_new)
HXLINE(  26)		this->x = x;
HXLINE(  27)		this->y = y;
            	}

Dynamic Point_obj::__CreateEmpty() { return new Point_obj; }

void *Point_obj::_hx_vtable = 0;

Dynamic Point_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Point_obj > _hx_result = new Point_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Point_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2bf671e4;
}

 ::openfl::geom::Point Point_obj::add( ::openfl::geom::Point v){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_34_add)
HXLINE(  34)		Float _hx_tmp = (v->x + this->x);
HXDLIN(  34)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp,(v->y + this->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,return )

 ::openfl::geom::Point Point_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_41_clone)
HXLINE(  41)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,clone,return )

void Point_obj::copyFrom( ::openfl::geom::Point sourcePoint){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_46_copyFrom)
HXLINE(  48)		this->x = sourcePoint->x;
HXLINE(  49)		this->y = sourcePoint->y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,copyFrom,(void))

bool Point_obj::equals( ::openfl::geom::Point toCompare){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_65_equals)
HXLINE(  65)		bool _hx_tmp;
HXDLIN(  65)		if (hx::IsNotNull( toCompare )) {
HXLINE(  65)			_hx_tmp = (toCompare->x == this->x);
            		}
            		else {
HXLINE(  65)			_hx_tmp = false;
            		}
HXDLIN(  65)		if (_hx_tmp) {
HXLINE(  65)			return (toCompare->y == this->y);
            		}
            		else {
HXLINE(  65)			return false;
            		}
HXDLIN(  65)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

void Point_obj::normalize(Float thickness){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_79_normalize)
HXLINE(  79)		bool _hx_tmp;
HXDLIN(  79)		if ((this->x == (int)0)) {
HXLINE(  79)			_hx_tmp = (this->y == (int)0);
            		}
            		else {
HXLINE(  79)			_hx_tmp = false;
            		}
HXDLIN(  79)		if (_hx_tmp) {
HXLINE(  81)			return;
            		}
            		else {
HXLINE(  85)			Float norm = (this->x * this->x);
HXDLIN(  85)			Float norm1 = ((Float)thickness / (Float)::Math_obj::sqrt((norm + (this->y * this->y))));
HXLINE(  86)			 ::openfl::geom::Point _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  86)			_hx_tmp1->x = (_hx_tmp1->x * norm1);
HXLINE(  87)			 ::openfl::geom::Point _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  87)			_hx_tmp2->y = (_hx_tmp2->y * norm1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,normalize,(void))

void Point_obj::offset(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_94_offset)
HXLINE(  96)		 ::openfl::geom::Point _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  96)		_hx_tmp->x = (_hx_tmp->x + dx);
HXLINE(  97)		 ::openfl::geom::Point _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  97)		_hx_tmp1->y = (_hx_tmp1->y + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,offset,(void))

void Point_obj::setTo(Float xa,Float ya){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_109_setTo)
HXLINE( 111)		this->x = xa;
HXLINE( 112)		this->y = ya;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,setTo,(void))

 ::openfl::geom::Point Point_obj::subtract( ::openfl::geom::Point v){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_118_subtract)
HXLINE( 118)		Float _hx_tmp = (this->x - v->x);
HXDLIN( 118)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp,(this->y - v->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,subtract,return )

::String Point_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_125_toString)
HXLINE( 125)		return ((((HX_("(x=",ed,c2,1e,00) + this->x) + HX_(", y=",18,15,2e,1d)) + this->y) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toString,return )

 ::lime::math::Vector2 Point_obj::_hx___toLimeVector2(){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_130___toLimeVector2)
HXLINE( 132)		if (hx::IsNull( ::openfl::geom::Point_obj::_hx___limeVector2 )) {
HXLINE( 134)			::openfl::geom::Point_obj::_hx___limeVector2 =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 138)		{
HXLINE( 138)			 ::lime::math::Vector2 _this = ::openfl::geom::Point_obj::_hx___limeVector2;
HXDLIN( 138)			_this->x = this->x;
HXDLIN( 138)			_this->y = this->y;
            		}
HXLINE( 139)		return ::openfl::geom::Point_obj::_hx___limeVector2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,_hx___toLimeVector2,return )

Float Point_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_153_get_length)
HXLINE( 153)		Float _hx_tmp = (this->x * this->x);
HXDLIN( 153)		return ::Math_obj::sqrt((_hx_tmp + (this->y * this->y)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_length,return )

 ::lime::math::Vector2 Point_obj::_hx___limeVector2;

 ::lime::utils::ObjectPool_openfl_geom_Point Point_obj::_hx___pool;

Float Point_obj::distance( ::openfl::geom::Point pt1, ::openfl::geom::Point pt2){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_54_distance)
HXLINE(  56)		Float dx = (pt1->x - pt2->x);
HXLINE(  57)		Float dy = (pt1->y - pt2->y);
HXLINE(  58)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,distance,return )

 ::openfl::geom::Point Point_obj::interpolate( ::openfl::geom::Point pt1, ::openfl::geom::Point pt2,Float f){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_72_interpolate)
HXLINE(  72)		Float pt21 = pt2->x;
HXDLIN(  72)		Float _hx_tmp = (pt21 + (f * (pt1->x - pt2->x)));
HXDLIN(  72)		Float pt22 = pt2->y;
HXDLIN(  72)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp,(pt22 + (f * (pt1->y - pt2->y))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Point_obj,interpolate,return )

 ::openfl::geom::Point Point_obj::polar(Float len,Float angle){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_104_polar)
HXLINE( 104)		Float _hx_tmp = (len * ::Math_obj::cos(angle));
HXDLIN( 104)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp,(len * ::Math_obj::sin(angle)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,polar,return )


hx::ObjectPtr< Point_obj > Point_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y) {
	hx::ObjectPtr< Point_obj > __this = new Point_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

hx::ObjectPtr< Point_obj > Point_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y) {
	Point_obj *__this = (Point_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Point_obj), false, "openfl.geom.Point"));
	*(void **)__this = Point_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Point_obj::Point_obj()
{
}

hx::Val Point_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return hx::Val( setTo_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_length()); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn()); }
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return hx::Val( copyFrom_dyn()); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return hx::Val( subtract_dyn()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return hx::Val( normalize_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__toLimeVector2") ) { return hx::Val( _hx___toLimeVector2_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Point_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"polar") ) { outValue = polar_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = _hx___pool; return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__limeVector2") ) { outValue = _hx___limeVector2; return true; }
	}
	return false;
}

hx::Val Point_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Point_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool_openfl_geom_Point >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__limeVector2") ) { _hx___limeVector2=ioValue.Cast<  ::lime::math::Vector2 >(); return true; }
	}
	return false;
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Point_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Point_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Point_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Point_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::math::Vector2*/ ,(void *) &Point_obj::_hx___limeVector2,HX_HCSTRING("__limeVector2","\x5a","\x88","\x77","\x8e")},
	{hx::fsObject /*::lime::utils::ObjectPool_openfl_geom_Point*/ ,(void *) &Point_obj::_hx___pool,HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Point_obj_sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("__toLimeVector2","\x9f","\x7e","\x1d","\xcf"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void Point_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Point_obj::_hx___limeVector2,"__limeVector2");
	HX_MARK_MEMBER_NAME(Point_obj::_hx___pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Point_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Point_obj::_hx___limeVector2,"__limeVector2");
	HX_VISIT_MEMBER_NAME(Point_obj::_hx___pool,"__pool");
};

#endif

hx::Class Point_obj::__mClass;

static ::String Point_obj_sStaticFields[] = {
	HX_HCSTRING("__limeVector2","\x5a","\x88","\x77","\x8e"),
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("polar","\xbe","\xef","\x91","\xc6"),
	::String(null())
};

void Point_obj::__register()
{
	hx::Object *dummy = new Point_obj;
	Point_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Point","\x1c","\xdd","\xd4","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Point_obj::__GetStatic;
	__mClass->mSetStaticField = &Point_obj::__SetStatic;
	__mClass->mMarkFunc = Point_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Point_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Point_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Point_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Point_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Point_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Point_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Point_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::geom::Point _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_17_boot)
HXLINE(  17)			return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::geom::Point p){
            			HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_17_boot)
HXLINE(  17)			p->setTo((int)0,(int)0);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_17_boot)
HXLINE(  17)		_hx___pool =  ::lime::utils::ObjectPool_openfl_geom_Point_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace geom

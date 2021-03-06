// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21e31708d26ee405_23_new,"lime.math.Matrix3","new",0xb5a52a77,"lime.math.Matrix3.new","lime/math/Matrix3.hx",23,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_37_clone,"lime.math.Matrix3","clone",0xf8506134,"lime.math.Matrix3.clone","lime/math/Matrix3.hx",37,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_42_concat,"lime.math.Matrix3","concat",0x0786d75d,"lime.math.Matrix3.concat","lime/math/Matrix3.hx",42,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_63_copyColumnFrom,"lime.math.Matrix3","copyColumnFrom",0x89c156be,"lime.math.Matrix3.copyColumnFrom","lime/math/Matrix3.hx",63,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_89_copyColumnTo,"lime.math.Matrix3","copyColumnTo",0x045a59cf,"lime.math.Matrix3.copyColumnTo","lime/math/Matrix3.hx",89,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_116_copyFrom,"lime.math.Matrix3","copyFrom",0x7e1ebe48,"lime.math.Matrix3.copyFrom","lime/math/Matrix3.hx",116,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_130_copyRowFrom,"lime.math.Matrix3","copyRowFrom",0xb0770e86,"lime.math.Matrix3.copyRowFrom","lime/math/Matrix3.hx",130,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_156_copyRowTo,"lime.math.Matrix3","copyRowTo",0xc3a10f97,"lime.math.Matrix3.copyRowTo","lime/math/Matrix3.hx",156,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_181_createBox,"lime.math.Matrix3","createBox",0x9a1719c6,"lime.math.Matrix3.createBox","lime/math/Matrix3.hx",181,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_192_createGradientBox,"lime.math.Matrix3","createGradientBox",0xff9720b6,"lime.math.Matrix3.createGradientBox","lime/math/Matrix3.hx",192,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_223_equals,"lime.math.Matrix3","equals",0xffa9bc88,"lime.math.Matrix3.equals","lime/math/Matrix3.hx",223,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_230_deltaTransformVector2,"lime.math.Matrix3","deltaTransformVector2",0xf0c299f2,"lime.math.Matrix3.deltaTransformVector2","lime/math/Matrix3.hx",230,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_235_identity,"lime.math.Matrix3","identity",0x6eecf7c7,"lime.math.Matrix3.identity","lime/math/Matrix3.hx",235,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_247_invert,"lime.math.Matrix3","invert",0xdf8fb55f,"lime.math.Matrix3.invert","lime/math/Matrix3.hx",247,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_279_mult,"lime.math.Matrix3","mult",0x3a42e1f9,"lime.math.Matrix3.mult","lime/math/Matrix3.hx",279,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_288_rotate,"lime.math.Matrix3","rotate",0x0ad714a4,"lime.math.Matrix3.rotate","lime/math/Matrix3.hx",288,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_324_scale,"lime.math.Matrix3","scale",0x28bc1c61,"lime.math.Matrix3.scale","lime/math/Matrix3.hx",324,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_347_setRotation,"lime.math.Matrix3","setRotation",0xf9d2d017,"lime.math.Matrix3.setRotation","lime/math/Matrix3.hx",347,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_359_setTo,"lime.math.Matrix3","setTo",0x2a1cdf94,"lime.math.Matrix3.setTo","lime/math/Matrix3.hx",359,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_381_to3DString,"lime.math.Matrix3","to3DString",0x3565e3a6,"lime.math.Matrix3.to3DString","lime/math/Matrix3.hx",381,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_396_toMozString,"lime.math.Matrix3","toMozString",0xdc79a1e5,"lime.math.Matrix3.toMozString","lime/math/Matrix3.hx",396,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_403_toString,"lime.math.Matrix3","toString",0xee2c8335,"lime.math.Matrix3.toString","lime/math/Matrix3.hx",403,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_410_transformVector2,"lime.math.Matrix3","transformVector2",0x83039d8c,"lime.math.Matrix3.transformVector2","lime/math/Matrix3.hx",410,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_415_translate,"lime.math.Matrix3","translate",0x99be5ca5,"lime.math.Matrix3.translate","lime/math/Matrix3.hx",415,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_423___cleanValues,"lime.math.Matrix3","__cleanValues",0x3007f402,"lime.math.Matrix3.__cleanValues","lime/math/Matrix3.hx",423,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_437___transformX,"lime.math.Matrix3","__transformX",0xe12c3795,"lime.math.Matrix3.__transformX","lime/math/Matrix3.hx",437,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_444___transformY,"lime.math.Matrix3","__transformY",0xe12c3796,"lime.math.Matrix3.__transformY","lime/math/Matrix3.hx",444,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_449___translateTransformed,"lime.math.Matrix3","__translateTransformed",0x7b249386,"lime.math.Matrix3.__translateTransformed","lime/math/Matrix3.hx",449,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_20_boot,"lime.math.Matrix3","boot",0x32f8fe3b,"lime.math.Matrix3.boot","lime/math/Matrix3.hx",20,0xeabca539)
namespace lime{
namespace math{

void Matrix3_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_23_new)
HXLINE(  25)		this->a = a;
HXLINE(  26)		this->b = b;
HXLINE(  27)		this->c = c;
HXLINE(  28)		this->d = d;
HXLINE(  29)		this->tx = tx;
HXLINE(  30)		this->ty = ty;
            	}

Dynamic Matrix3_obj::__CreateEmpty() { return new Matrix3_obj; }

void *Matrix3_obj::_hx_vtable = 0;

Dynamic Matrix3_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Matrix3_obj > _hx_result = new Matrix3_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Matrix3_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20f892f5;
}

 ::lime::math::Matrix3 Matrix3_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_21e31708d26ee405_37_clone)
HXLINE(  37)		return  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,this->a,this->b,this->c,this->d,this->tx,this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,clone,return )

void Matrix3_obj::concat( ::lime::math::Matrix3 m){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_42_concat)
HXLINE(  44)		Float a1 = (this->a * m->a);
HXDLIN(  44)		Float a11 = (a1 + (this->b * m->c));
HXLINE(  45)		Float _hx_tmp = (this->a * m->b);
HXDLIN(  45)		this->b = (_hx_tmp + (this->b * m->d));
HXLINE(  46)		this->a = a11;
HXLINE(  48)		Float c1 = (this->c * m->a);
HXDLIN(  48)		Float c11 = (c1 + (this->d * m->c));
HXLINE(  49)		Float _hx_tmp1 = (this->c * m->b);
HXDLIN(  49)		this->d = (_hx_tmp1 + (this->d * m->d));
HXLINE(  50)		this->c = c11;
HXLINE(  52)		Float tx1 = (this->tx * m->a);
HXDLIN(  52)		Float tx11 = ((tx1 + (this->ty * m->c)) + m->tx);
HXLINE(  53)		Float _hx_tmp2 = (this->tx * m->b);
HXDLIN(  53)		this->ty = ((_hx_tmp2 + (this->ty * m->d)) + m->ty);
HXLINE(  54)		this->tx = tx11;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,concat,(void))

void Matrix3_obj::copyColumnFrom(int column, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_63_copyColumnFrom)
HXLINE(  63)		if ((column > (int)2)) {
HXLINE(  65)			HX_STACK_DO_THROW(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE(  67)			if ((column == (int)0)) {
HXLINE(  69)				this->a = vector4->x;
HXLINE(  70)				this->c = vector4->y;
            			}
            			else {
HXLINE(  72)				if ((column == (int)1)) {
HXLINE(  74)					this->b = vector4->x;
HXLINE(  75)					this->d = vector4->y;
            				}
            				else {
HXLINE(  79)					this->tx = vector4->x;
HXLINE(  80)					this->ty = vector4->y;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnFrom,(void))

void Matrix3_obj::copyColumnTo(int column, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_89_copyColumnTo)
HXLINE(  89)		if ((column > (int)2)) {
HXLINE(  91)			HX_STACK_DO_THROW(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE(  93)			if ((column == (int)0)) {
HXLINE(  95)				vector4->x = this->a;
HXLINE(  96)				vector4->y = this->c;
HXLINE(  97)				vector4->z = (int)0;
            			}
            			else {
HXLINE(  99)				if ((column == (int)1)) {
HXLINE( 101)					vector4->x = this->b;
HXLINE( 102)					vector4->y = this->d;
HXLINE( 103)					vector4->z = (int)0;
            				}
            				else {
HXLINE( 107)					vector4->x = this->tx;
HXLINE( 108)					vector4->y = this->ty;
HXLINE( 109)					vector4->z = (int)1;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnTo,(void))

void Matrix3_obj::copyFrom( ::lime::math::Matrix3 sourceMatrix3){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_116_copyFrom)
HXLINE( 118)		this->a = sourceMatrix3->a;
HXLINE( 119)		this->b = sourceMatrix3->b;
HXLINE( 120)		this->c = sourceMatrix3->c;
HXLINE( 121)		this->d = sourceMatrix3->d;
HXLINE( 122)		this->tx = sourceMatrix3->tx;
HXLINE( 123)		this->ty = sourceMatrix3->ty;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,copyFrom,(void))

void Matrix3_obj::copyRowFrom(int row, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_130_copyRowFrom)
HXLINE( 130)		if ((row > (int)2)) {
HXLINE( 132)			HX_STACK_DO_THROW(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE( 134)			if ((row == (int)0)) {
HXLINE( 136)				this->a = vector4->x;
HXLINE( 137)				this->c = vector4->y;
            			}
            			else {
HXLINE( 139)				if ((row == (int)1)) {
HXLINE( 141)					this->b = vector4->x;
HXLINE( 142)					this->d = vector4->y;
            				}
            				else {
HXLINE( 146)					this->tx = vector4->x;
HXLINE( 147)					this->ty = vector4->y;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowFrom,(void))

void Matrix3_obj::copyRowTo(int row, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_156_copyRowTo)
HXLINE( 156)		if ((row > (int)2)) {
HXLINE( 158)			HX_STACK_DO_THROW(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE( 160)			if ((row == (int)0)) {
HXLINE( 162)				vector4->x = this->a;
HXLINE( 163)				vector4->y = this->b;
HXLINE( 164)				vector4->z = this->tx;
            			}
            			else {
HXLINE( 166)				if ((row == (int)1)) {
HXLINE( 168)					vector4->x = this->c;
HXLINE( 169)					vector4->y = this->d;
HXLINE( 170)					vector4->z = this->ty;
            				}
            				else {
HXLINE( 174)					vector4->x = (int)0;
HXDLIN( 174)					vector4->y = (int)0;
HXDLIN( 174)					vector4->z = (int)1;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowTo,(void))

void Matrix3_obj::createBox(Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_181_createBox)
HXLINE( 183)		this->a = scaleX;
HXLINE( 184)		this->d = scaleY;
HXLINE( 185)		this->b = rotation;
HXLINE( 186)		this->tx = tx;
HXLINE( 187)		this->ty = ty;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createBox,(void))

void Matrix3_obj::createGradientBox(Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_192_createGradientBox)
HXLINE( 194)		this->a = ((Float)width / (Float)((Float)1638.4));
HXLINE( 195)		this->d = ((Float)height / (Float)((Float)1638.4));
HXLINE( 198)		if ((rotation != (int)0)) {
HXLINE( 200)			Float cos = ::Math_obj::cos(rotation);
HXLINE( 201)			Float sin = ::Math_obj::sin(rotation);
HXLINE( 203)			this->b = (sin * this->d);
HXLINE( 204)			this->c = (-(sin) * this->a);
HXLINE( 205)			 ::lime::math::Matrix3 _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)			_hx_tmp->a = (_hx_tmp->a * cos);
HXLINE( 206)			 ::lime::math::Matrix3 _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 206)			_hx_tmp1->d = (_hx_tmp1->d * cos);
            		}
            		else {
HXLINE( 210)			this->b = (int)0;
HXLINE( 211)			this->c = (int)0;
            		}
HXLINE( 215)		this->tx = (tx + ((Float)width / (Float)(int)2));
HXLINE( 216)		this->ty = (ty + ((Float)height / (Float)(int)2));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createGradientBox,(void))

bool Matrix3_obj::equals( ::Dynamic Matrix3){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_223_equals)
HXLINE( 223)		bool _hx_tmp;
HXDLIN( 223)		bool _hx_tmp1;
HXDLIN( 223)		bool _hx_tmp2;
HXDLIN( 223)		bool _hx_tmp3;
HXDLIN( 223)		bool _hx_tmp4;
HXDLIN( 223)		if (hx::IsNotNull( Matrix3 )) {
HXLINE( 223)			_hx_tmp4 = (this->tx == ( (Float)(Matrix3->__Field(HX_("tx",84,65,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 223)			_hx_tmp4 = false;
            		}
HXDLIN( 223)		if (_hx_tmp4) {
HXLINE( 223)			_hx_tmp3 = (this->ty == ( (Float)(Matrix3->__Field(HX_("ty",85,65,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 223)			_hx_tmp3 = false;
            		}
HXDLIN( 223)		if (_hx_tmp3) {
HXLINE( 223)			_hx_tmp2 = (this->a == ( (Float)(Matrix3->__Field(HX_("a",61,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 223)			_hx_tmp2 = false;
            		}
HXDLIN( 223)		if (_hx_tmp2) {
HXLINE( 223)			_hx_tmp1 = (this->b == ( (Float)(Matrix3->__Field(HX_("b",62,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 223)			_hx_tmp1 = false;
            		}
HXDLIN( 223)		if (_hx_tmp1) {
HXLINE( 223)			_hx_tmp = (this->c == ( (Float)(Matrix3->__Field(HX_("c",63,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 223)			_hx_tmp = false;
            		}
HXDLIN( 223)		if (_hx_tmp) {
HXLINE( 223)			return (this->d == ( (Float)(Matrix3->__Field(HX_("d",64,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 223)			return false;
            		}
HXDLIN( 223)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,equals,return )

 ::lime::math::Vector2 Matrix3_obj::deltaTransformVector2( ::lime::math::Vector2 Vector2){
            	HX_GC_STACKFRAME(&_hx_pos_21e31708d26ee405_230_deltaTransformVector2)
HXLINE( 230)		Float _hx_tmp = (Vector2->x * this->a);
HXDLIN( 230)		Float _hx_tmp1 = (_hx_tmp + (Vector2->y * this->c));
HXDLIN( 230)		Float _hx_tmp2 = (Vector2->x * this->b);
HXDLIN( 230)		return  ::lime::math::Vector2_obj::__alloc( HX_CTX ,_hx_tmp1,(_hx_tmp2 + (Vector2->y * this->d)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,deltaTransformVector2,return )

void Matrix3_obj::identity(){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_235_identity)
HXLINE( 237)		this->a = (int)1;
HXLINE( 238)		this->b = (int)0;
HXLINE( 239)		this->c = (int)0;
HXLINE( 240)		this->d = (int)1;
HXLINE( 241)		this->tx = (int)0;
HXLINE( 242)		this->ty = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,identity,(void))

 ::lime::math::Matrix3 Matrix3_obj::invert(){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_247_invert)
HXLINE( 249)		Float norm = (this->a * this->d);
HXDLIN( 249)		Float norm1 = (norm - (this->b * this->c));
HXLINE( 251)		if ((norm1 == (int)0)) {
HXLINE( 253)			this->a = (this->b = (this->c = (this->d = (int)0)));
HXLINE( 254)			this->tx = -(this->tx);
HXLINE( 255)			this->ty = -(this->ty);
            		}
            		else {
HXLINE( 259)			norm1 = ((Float)((Float)1.0) / (Float)norm1);
HXLINE( 260)			Float a1 = (this->d * norm1);
HXLINE( 261)			this->d = (this->a * norm1);
HXLINE( 262)			this->a = a1;
HXLINE( 263)			 ::lime::math::Matrix3 _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 263)			_hx_tmp->b = (_hx_tmp->b * -(norm1));
HXLINE( 264)			 ::lime::math::Matrix3 _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 264)			_hx_tmp1->c = (_hx_tmp1->c * -(norm1));
HXLINE( 266)			Float tx1 = (-(this->a) * this->tx);
HXDLIN( 266)			Float tx11 = (tx1 - (this->c * this->ty));
HXLINE( 267)			Float _hx_tmp2 = (-(this->b) * this->tx);
HXDLIN( 267)			this->ty = (_hx_tmp2 - (this->d * this->ty));
HXLINE( 268)			this->tx = tx11;
            		}
HXLINE( 274)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,invert,return )

 ::lime::math::Matrix3 Matrix3_obj::mult( ::lime::math::Matrix3 m){
            	HX_GC_STACKFRAME(&_hx_pos_21e31708d26ee405_279_mult)
HXLINE( 281)		 ::lime::math::Matrix3 result =  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,this->a,this->b,this->c,this->d,this->tx,this->ty);
HXLINE( 282)		result->concat(m);
HXLINE( 283)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,mult,return )

void Matrix3_obj::rotate(Float theta){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_288_rotate)
HXLINE( 304)		Float cos = ::Math_obj::cos(theta);
HXLINE( 305)		Float sin = ::Math_obj::sin(theta);
HXLINE( 307)		Float a1 = (this->a * cos);
HXDLIN( 307)		Float a11 = (a1 - (this->b * sin));
HXLINE( 308)		Float _hx_tmp = (this->a * sin);
HXDLIN( 308)		this->b = (_hx_tmp + (this->b * cos));
HXLINE( 309)		this->a = a11;
HXLINE( 311)		Float c1 = (this->c * cos);
HXDLIN( 311)		Float c11 = (c1 - (this->d * sin));
HXLINE( 312)		Float _hx_tmp1 = (this->c * sin);
HXDLIN( 312)		this->d = (_hx_tmp1 + (this->d * cos));
HXLINE( 313)		this->c = c11;
HXLINE( 315)		Float tx1 = (this->tx * cos);
HXDLIN( 315)		Float tx11 = (tx1 - (this->ty * sin));
HXLINE( 316)		Float _hx_tmp2 = (this->tx * sin);
HXDLIN( 316)		this->ty = (_hx_tmp2 + (this->ty * cos));
HXLINE( 317)		this->tx = tx11;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,rotate,(void))

void Matrix3_obj::scale(Float sx,Float sy){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_324_scale)
HXLINE( 335)		 ::lime::math::Matrix3 _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 335)		_hx_tmp->a = (_hx_tmp->a * sx);
HXLINE( 336)		 ::lime::math::Matrix3 _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 336)		_hx_tmp1->b = (_hx_tmp1->b * sy);
HXLINE( 337)		 ::lime::math::Matrix3 _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 337)		_hx_tmp2->c = (_hx_tmp2->c * sx);
HXLINE( 338)		 ::lime::math::Matrix3 _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 338)		_hx_tmp3->d = (_hx_tmp3->d * sy);
HXLINE( 339)		 ::lime::math::Matrix3 _hx_tmp4 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 339)		_hx_tmp4->tx = (_hx_tmp4->tx * sx);
HXLINE( 340)		 ::lime::math::Matrix3 _hx_tmp5 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 340)		_hx_tmp5->ty = (_hx_tmp5->ty * sy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,scale,(void))

void Matrix3_obj::setRotation(Float theta,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_347_setRotation)
HXLINE( 349)		this->a = (::Math_obj::cos(theta) * scale);
HXLINE( 350)		this->c = (::Math_obj::sin(theta) * scale);
HXLINE( 351)		this->b = -(this->c);
HXLINE( 352)		this->d = this->a;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,setRotation,(void))

void Matrix3_obj::setTo(Float a,Float b,Float c,Float d,Float tx,Float ty){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_359_setTo)
HXLINE( 361)		this->a = a;
HXLINE( 362)		this->b = b;
HXLINE( 363)		this->c = c;
HXLINE( 364)		this->d = d;
HXLINE( 365)		this->tx = tx;
HXLINE( 366)		this->ty = ty;
            	}


HX_DEFINE_DYNAMIC_FUNC6(Matrix3_obj,setTo,(void))

::String Matrix3_obj::to3DString(hx::Null< bool >  __o_roundPixels){
bool roundPixels = __o_roundPixels.Default(false);
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_381_to3DString)
HXLINE( 381)		if (roundPixels) {
HXLINE( 383)			::String _hx_tmp = ((((((((((HX_("Matrix33d(",c5,da,b4,68) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + HX_("0, 0, ",80,3e,0e,9c)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + HX_("0, 0, 0, 0, 1, 0, ",df,b7,27,12));
HXDLIN( 383)			::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::_hx_int(this->tx)) + HX_(", ",74,26,00,00));
HXDLIN( 383)			return ((_hx_tmp1 + ::Std_obj::_hx_int(this->ty)) + HX_(", 0, 1)",88,a3,85,b1));
            		}
            		else {
HXLINE( 387)			return ((((((((((((((HX_("Matrix33d(",c5,da,b4,68) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + HX_("0, 0, ",80,3e,0e,9c)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + HX_("0, 0, 0, 0, 1, 0, ",df,b7,27,12)) + this->tx) + HX_(", ",74,26,00,00)) + this->ty) + HX_(", 0, 1)",88,a3,85,b1));
            		}
HXLINE( 381)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,to3DString,return )

::String Matrix3_obj::toMozString(){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_396_toMozString)
HXLINE( 396)		return ((((((((((((HX_("Matrix3(",36,f1,a4,40) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + this->tx) + HX_("px, ",7c,1a,63,4a)) + this->ty) + HX_("px)",21,65,55,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,toMozString,return )

::String Matrix3_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_403_toString)
HXLINE( 403)		return ((((((((((((HX_("Matrix3(",36,f1,a4,40) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + this->tx) + HX_(", ",74,26,00,00)) + this->ty) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,toString,return )

 ::lime::math::Vector2 Matrix3_obj::transformVector2( ::lime::math::Vector2 pos){
            	HX_GC_STACKFRAME(&_hx_pos_21e31708d26ee405_410_transformVector2)
HXLINE( 410)		Float _hx_tmp = (pos->x * this->a);
HXDLIN( 410)		Float _hx_tmp1 = ((_hx_tmp + (pos->y * this->c)) + this->tx);
HXDLIN( 410)		Float _hx_tmp2 = (pos->x * this->b);
HXDLIN( 410)		return  ::lime::math::Vector2_obj::__alloc( HX_CTX ,_hx_tmp1,((_hx_tmp2 + (pos->y * this->d)) + this->ty));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,transformVector2,return )

void Matrix3_obj::translate(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_415_translate)
HXLINE( 417)		 ::lime::math::Matrix3 _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 417)		_hx_tmp->tx = (_hx_tmp->tx + dx);
HXLINE( 418)		 ::lime::math::Matrix3 _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 418)		_hx_tmp1->ty = (_hx_tmp1->ty + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,translate,(void))

void Matrix3_obj::_hx___cleanValues(){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_423___cleanValues)
HXLINE( 425)		this->a = ((Float)::Math_obj::round((this->a * (int)1000)) / (Float)(int)1000);
HXLINE( 426)		this->b = ((Float)::Math_obj::round((this->b * (int)1000)) / (Float)(int)1000);
HXLINE( 427)		this->c = ((Float)::Math_obj::round((this->c * (int)1000)) / (Float)(int)1000);
HXLINE( 428)		this->d = ((Float)::Math_obj::round((this->d * (int)1000)) / (Float)(int)1000);
HXLINE( 429)		this->tx = ((Float)::Math_obj::round((this->tx * (int)10)) / (Float)(int)10);
HXLINE( 430)		this->ty = ((Float)::Math_obj::round((this->ty * (int)10)) / (Float)(int)10);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,_hx___cleanValues,(void))

Float Matrix3_obj::_hx___transformX( ::lime::math::Vector2 pos){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_437___transformX)
HXLINE( 437)		Float _hx_tmp = (pos->x * this->a);
HXDLIN( 437)		return ((_hx_tmp + (pos->y * this->c)) + this->tx);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,_hx___transformX,return )

Float Matrix3_obj::_hx___transformY( ::lime::math::Vector2 pos){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_444___transformY)
HXLINE( 444)		Float _hx_tmp = (pos->x * this->b);
HXDLIN( 444)		return ((_hx_tmp + (pos->y * this->d)) + this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,_hx___transformY,return )

void Matrix3_obj::_hx___translateTransformed( ::lime::math::Vector2 pos){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_449___translateTransformed)
HXLINE( 451)		Float _hx_tmp = (pos->x * this->a);
HXDLIN( 451)		this->tx = ((_hx_tmp + (pos->y * this->c)) + this->tx);
HXLINE( 452)		Float _hx_tmp1 = (pos->x * this->b);
HXDLIN( 452)		this->ty = ((_hx_tmp1 + (pos->y * this->d)) + this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,_hx___translateTransformed,(void))

 ::lime::math::Matrix3 Matrix3_obj::_hx___identity;


hx::ObjectPtr< Matrix3_obj > Matrix3_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty) {
	hx::ObjectPtr< Matrix3_obj > __this = new Matrix3_obj();
	__this->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return __this;
}

hx::ObjectPtr< Matrix3_obj > Matrix3_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty) {
	Matrix3_obj *__this = (Matrix3_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Matrix3_obj), false, "lime.math.Matrix3"));
	*(void **)__this = Matrix3_obj::_hx_vtable;
	__this->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return __this;
}

Matrix3_obj::Matrix3_obj()
{
}

hx::Val Matrix3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return hx::Val( a); }
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b); }
		if (HX_FIELD_EQ(inName,"c") ) { return hx::Val( c); }
		if (HX_FIELD_EQ(inName,"d") ) { return hx::Val( d); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return hx::Val( tx); }
		if (HX_FIELD_EQ(inName,"ty") ) { return hx::Val( ty); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return hx::Val( mult_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		if (HX_FIELD_EQ(inName,"scale") ) { return hx::Val( scale_dyn()); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return hx::Val( setTo_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return hx::Val( concat_dyn()); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn()); }
		if (HX_FIELD_EQ(inName,"invert") ) { return hx::Val( invert_dyn()); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return hx::Val( rotate_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return hx::Val( copyFrom_dyn()); }
		if (HX_FIELD_EQ(inName,"identity") ) { return hx::Val( identity_dyn()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return hx::Val( copyRowTo_dyn()); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return hx::Val( createBox_dyn()); }
		if (HX_FIELD_EQ(inName,"translate") ) { return hx::Val( translate_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"to3DString") ) { return hx::Val( to3DString_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return hx::Val( copyRowFrom_dyn()); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return hx::Val( setRotation_dyn()); }
		if (HX_FIELD_EQ(inName,"toMozString") ) { return hx::Val( toMozString_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return hx::Val( copyColumnTo_dyn()); }
		if (HX_FIELD_EQ(inName,"__transformX") ) { return hx::Val( _hx___transformX_dyn()); }
		if (HX_FIELD_EQ(inName,"__transformY") ) { return hx::Val( _hx___transformY_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__cleanValues") ) { return hx::Val( _hx___cleanValues_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return hx::Val( copyColumnFrom_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVector2") ) { return hx::Val( transformVector2_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return hx::Val( createGradientBox_dyn()); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"deltaTransformVector2") ) { return hx::Val( deltaTransformVector2_dyn()); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__translateTransformed") ) { return hx::Val( _hx___translateTransformed_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { outValue = _hx___identity; return true; }
	}
	return false;
}

hx::Val Matrix3_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { _hx___identity=ioValue.Cast<  ::lime::math::Matrix3 >(); return true; }
	}
	return false;
}

void Matrix3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Matrix3_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix3_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,tx),HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,ty),HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Matrix3_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::math::Matrix3*/ ,(void *) &Matrix3_obj::_hx___identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Matrix3_obj_sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("tx","\x84","\x65","\x00","\x00"),
	HX_HCSTRING("ty","\x85","\x65","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("createBox","\x6f","\x94","\xd8","\x49"),
	HX_HCSTRING("createGradientBox","\x5f","\xec","\xc0","\x25"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("deltaTransformVector2","\x1b","\xee","\xe5","\x85"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("setRotation","\x00","\x07","\xe7","\x38"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("to3DString","\xdd","\xbc","\xef","\x4e"),
	HX_HCSTRING("toMozString","\xce","\xd8","\x8d","\x1b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transformVector2","\x03","\xba","\x12","\x8a"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("__cleanValues","\x2b","\x77","\xc6","\x85"),
	HX_HCSTRING("__transformX","\x8c","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__transformY","\x8d","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__translateTransformed","\x3d","\xe3","\xea","\x64"),
	::String(null()) };

static void Matrix3_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix3_obj::_hx___identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Matrix3_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix3_obj::_hx___identity,"__identity");
};

#endif

hx::Class Matrix3_obj::__mClass;

static ::String Matrix3_obj_sStaticFields[] = {
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	::String(null())
};

void Matrix3_obj::__register()
{
	hx::Object *dummy = new Matrix3_obj;
	Matrix3_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math.Matrix3","\x05","\x23","\x1b","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix3_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix3_obj::__SetStatic;
	__mClass->mMarkFunc = Matrix3_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Matrix3_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Matrix3_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix3_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Matrix3_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Matrix3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Matrix3_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Matrix3_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_21e31708d26ee405_20_boot)
HXLINE(  20)		_hx___identity =  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace lime
} // end namespace math

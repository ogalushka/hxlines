// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_graphics_Image
#include <lime/app/Promise_lime_graphics_Image.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLiteLibrary
#include <openfl/_internal/swf/SWFLiteLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_BitmapSymbol
#include <openfl/_internal/symbols/BitmapSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_46_new,"openfl._internal.swf.SWFLiteLibrary","new",0x489209b9,"openfl._internal.swf.SWFLiteLibrary.new","openfl/_internal/swf/SWFLiteLibrary.hx",46,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_70_exists,"openfl._internal.swf.SWFLiteLibrary","exists",0x9a5f8223,"openfl._internal.swf.SWFLiteLibrary.exists","openfl/_internal/swf/SWFLiteLibrary.hx",70,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_91_getImage,"openfl._internal.swf.SWFLiteLibrary","getImage",0x219672ec,"openfl._internal.swf.SWFLiteLibrary.getImage","openfl/_internal/swf/SWFLiteLibrary.hx",91,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_137_getMovieClip,"openfl._internal.swf.SWFLiteLibrary","getMovieClip",0x5607f2b1,"openfl._internal.swf.SWFLiteLibrary.getMovieClip","openfl/_internal/swf/SWFLiteLibrary.hx",137,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_144_isLocal,"openfl._internal.swf.SWFLiteLibrary","isLocal",0x6a6ec6fa,"openfl._internal.swf.SWFLiteLibrary.isLocal","openfl/_internal/swf/SWFLiteLibrary.hx",144,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_187_load,"openfl._internal.swf.SWFLiteLibrary","load",0x35eb8ead,"openfl._internal.swf.SWFLiteLibrary.load","openfl/_internal/swf/SWFLiteLibrary.hx",187,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_160_load,"openfl._internal.swf.SWFLiteLibrary","load",0x35eb8ead,"openfl._internal.swf.SWFLiteLibrary.load","openfl/_internal/swf/SWFLiteLibrary.hx",160,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_149_load,"openfl._internal.swf.SWFLiteLibrary","load",0x35eb8ead,"openfl._internal.swf.SWFLiteLibrary.load","openfl/_internal/swf/SWFLiteLibrary.hx",149,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_219_load,"openfl._internal.swf.SWFLiteLibrary","load",0x35eb8ead,"openfl._internal.swf.SWFLiteLibrary.load","openfl/_internal/swf/SWFLiteLibrary.hx",219,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_220_load,"openfl._internal.swf.SWFLiteLibrary","load",0x35eb8ead,"openfl._internal.swf.SWFLiteLibrary.load","openfl/_internal/swf/SWFLiteLibrary.hx",220,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_230_loadImage,"openfl._internal.swf.SWFLiteLibrary","loadImage",0x9fc5ad6e,"openfl._internal.swf.SWFLiteLibrary.loadImage","openfl/_internal/swf/SWFLiteLibrary.hx",230,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_254_loadImage,"openfl._internal.swf.SWFLiteLibrary","loadImage",0x9fc5ad6e,"openfl._internal.swf.SWFLiteLibrary.loadImage","openfl/_internal/swf/SWFLiteLibrary.hx",254,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_283_unload,"openfl._internal.swf.SWFLiteLibrary","unload",0x400c0546,"openfl._internal.swf.SWFLiteLibrary.unload","openfl/_internal/swf/SWFLiteLibrary.hx",283,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_301___copyChannel,"openfl._internal.swf.SWFLiteLibrary","__copyChannel",0x00518107,"openfl._internal.swf.SWFLiteLibrary.__copyChannel","openfl/_internal/swf/SWFLiteLibrary.hx",301,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_318___fromManifest,"openfl._internal.swf.SWFLiteLibrary","__fromManifest",0x5078dda0,"openfl._internal.swf.SWFLiteLibrary.__fromManifest","openfl/_internal/swf/SWFLiteLibrary.hx",318,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_328___load,"openfl._internal.swf.SWFLiteLibrary","__load",0xd12f618d,"openfl._internal.swf.SWFLiteLibrary.__load","openfl/_internal/swf/SWFLiteLibrary.hx",328,0xbec32034)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ab34383ae5e3ff_335___loadImage,"openfl._internal.swf.SWFLiteLibrary","__loadImage",0xd3596e8e,"openfl._internal.swf.SWFLiteLibrary.__loadImage","openfl/_internal/swf/SWFLiteLibrary.hx",335,0xbec32034)
namespace openfl{
namespace _internal{
namespace swf{

void SWFLiteLibrary_obj::__construct(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_46_new)
HXLINE(  48)		super::__construct();
HXLINE(  50)		this->id = id;
HXLINE(  52)		this->alphaCheck =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  53)		this->imageClassNames =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  58)		this->rootPath = HX_("",00,00,00,00);
            	}

Dynamic SWFLiteLibrary_obj::__CreateEmpty() { return new SWFLiteLibrary_obj; }

void *SWFLiteLibrary_obj::_hx_vtable = 0;

Dynamic SWFLiteLibrary_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SWFLiteLibrary_obj > _hx_result = new SWFLiteLibrary_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SWFLiteLibrary_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x425552e3) {
		if (inClassId<=(int)0x34644188) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x34644188;
		} else {
			return inClassId==(int)0x425552e3;
		}
	} else {
		return inClassId==(int)0x5a0d44e1;
	}
}

bool SWFLiteLibrary_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_70_exists)
HXLINE(  72)		if (hx::IsNull( this->swf )) {
HXLINE(  72)			return false;
            		}
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if ((id == HX_("",00,00,00,00))) {
HXLINE(  74)			_hx_tmp = (type == HX_("MOVIE_CLIP",1f,e1,aa,77));
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  76)			return true;
            		}
HXLINE(  80)		bool _hx_tmp1;
HXDLIN(  80)		if ((type != HX_("IMAGE",3b,57,57,3b))) {
HXLINE(  80)			_hx_tmp1 = (type == HX_("MOVIE_CLIP",1f,e1,aa,77));
            		}
            		else {
HXLINE(  80)			_hx_tmp1 = true;
            		}
HXDLIN(  80)		if (_hx_tmp1) {
HXLINE(  82)			if (hx::IsNotNull( this->swf )) {
HXLINE(  82)				return this->swf->hasSymbol(id);
            			}
            			else {
HXLINE(  82)				return false;
            			}
            		}
HXLINE(  86)		return false;
            	}


 ::lime::graphics::Image SWFLiteLibrary_obj::getImage(::String id){
            	HX_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_91_getImage)
HXLINE(  93)		if (this->imageClassNames->exists(id)) {
HXLINE(  95)			id = ( (::String)(this->imageClassNames->get(id)) );
            		}
HXLINE( 101)		if (!(this->alphaCheck->exists(id))) {
HXLINE( 103)			 ::Dynamic symbol = this->swf->symbols->iterator();
HXDLIN( 103)			while(( (bool)(symbol->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 103)				 ::openfl::_internal::symbols::SWFSymbol symbol1 = ( ( ::openfl::_internal::symbols::SWFSymbol)(symbol->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 105)				bool _hx_tmp;
HXDLIN( 105)				if (::Std_obj::is(symbol1,hx::ClassOf< ::openfl::_internal::symbols::BitmapSymbol >())) {
HXLINE( 105)					_hx_tmp = (hx::TCast<  ::openfl::_internal::symbols::BitmapSymbol >::cast(symbol1)->path == id);
            				}
            				else {
HXLINE( 105)					_hx_tmp = false;
            				}
HXDLIN( 105)				if (_hx_tmp) {
HXLINE( 107)					 ::openfl::_internal::symbols::BitmapSymbol bitmapSymbol = ( ( ::openfl::_internal::symbols::BitmapSymbol)(symbol1) );
HXLINE( 109)					if (hx::IsNotNull( bitmapSymbol->alpha )) {
HXLINE( 111)						 ::lime::graphics::Image image = this->super::getImage(id);
HXLINE( 112)						 ::lime::graphics::Image alpha = this->super::getImage(bitmapSymbol->alpha);
HXLINE( 114)						this->_hx___copyChannel(image,alpha);
HXLINE( 116)						this->cachedImages->set(id,image);
HXLINE( 117)						this->cachedImages->remove(bitmapSymbol->alpha);
HXLINE( 118)						this->alphaCheck->set(id,true);
HXLINE( 120)						return image;
            					}
            				}
            			}
            		}
HXLINE( 130)		return this->super::getImage(id);
            	}


 ::openfl::display::MovieClip SWFLiteLibrary_obj::getMovieClip(::String id){
            	HX_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_137_getMovieClip)
HXLINE( 137)		if (hx::IsNotNull( this->swf )) {
HXLINE( 137)			return this->swf->createMovieClip(id);
            		}
            		else {
HXLINE( 137)			return null();
            		}
HXDLIN( 137)		return null();
            	}


bool SWFLiteLibrary_obj::isLocal(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_144_isLocal)
HXLINE( 144)		return true;
            	}


 ::lime::app::Future SWFLiteLibrary_obj::load(){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_1, ::openfl::_internal::swf::SWFLiteLibrary,_gthis, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run(::String data){
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::openfl::_internal::swf::SWFLiteLibrary,_gthis, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            			void _hx_run( ::lime::utils::AssetLibrary _){
            				HX_GC_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_187_load)
HXLINE( 189)				_gthis->preloading = false;
HXLINE( 190)				promise->complete(_gthis);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_160_load)
HXLINE( 162)			_gthis->cachedText->set(_gthis->id,data);
HXLINE( 164)			_gthis->swf = ::openfl::_internal::swf::SWFLite_obj::unserialize(data);
HXLINE( 165)			_gthis->swf->library = _gthis;
HXLINE( 167)			 ::openfl::_internal::symbols::BitmapSymbol bitmapSymbol;
HXLINE( 169)			{
HXLINE( 169)				 ::Dynamic symbol = _gthis->swf->symbols->iterator();
HXDLIN( 169)				while(( (bool)(symbol->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 169)					 ::openfl::_internal::symbols::SWFSymbol symbol1 = ( ( ::openfl::_internal::symbols::SWFSymbol)(symbol->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 171)					if (::Std_obj::is(symbol1,hx::ClassOf< ::openfl::_internal::symbols::BitmapSymbol >())) {
HXLINE( 173)						bitmapSymbol = ( ( ::openfl::_internal::symbols::BitmapSymbol)(symbol1) );
HXLINE( 175)						if (hx::IsNotNull( bitmapSymbol->className )) {
HXLINE( 177)							_gthis->imageClassNames->set(bitmapSymbol->className,bitmapSymbol->path);
            						}
            					}
            				}
            			}
HXLINE( 185)			::openfl::_internal::swf::SWFLite_obj::instances->set(_gthis->id,_gthis->swf);
HXLINE( 187)			_gthis->_hx___load()->onProgress(promise->progress_dyn())->onError(promise->error_dyn())->onComplete( ::Dynamic(new _hx_Closure_0(_gthis,promise)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_149_load)
HXLINE( 149)		 ::openfl::_internal::swf::SWFLiteLibrary _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 151)		if (hx::IsNotNull( this->id )) {
HXLINE( 153)			this->preload->set(this->id,true);
            		}
HXLINE( 157)		 ::lime::app::Promise_lime_utils_AssetLibrary promise =  ::lime::app::Promise_lime_utils_AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 158)		this->preloading = true;
HXLINE( 160)		 ::Dynamic onComplete =  ::Dynamic(new _hx_Closure_1(_gthis,promise));
HXLINE( 196)		if (::openfl::utils::Assets_obj::exists(this->id,null())) {
HXLINE( 206)			this->loadText(this->id)->onError(promise->error_dyn())->onComplete(onComplete);
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_2, ::openfl::net::URLLoader,loader, ::Dynamic,onComplete) HXARGC(1)
            			void _hx_run( ::Dynamic _1){
            				HX_GC_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_219_load)
HXLINE( 219)				onComplete(loader->data);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_3, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            			void _hx_run( ::Dynamic e){
            				HX_GC_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_220_load)
HXLINE( 220)				promise->error(e);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 210)			{
HXLINE( 210)				 ::Dynamic id = this->paths->keys();
HXDLIN( 210)				while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 210)					::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 212)					this->preload->set(id1,true);
            				}
            			}
HXLINE( 216)			::String path;
HXDLIN( 216)			bool path1;
HXDLIN( 216)			if (hx::IsNotNull( this->rootPath )) {
HXLINE( 216)				path1 = (this->rootPath != HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 216)				path1 = false;
            			}
HXDLIN( 216)			if (path1) {
HXLINE( 216)				path = ((this->rootPath + HX_("/",2f,00,00,00)) + this->id);
            			}
            			else {
HXLINE( 216)				path = this->id;
            			}
HXLINE( 218)			 ::openfl::net::URLLoader loader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 219)			loader->addEventListener(HX_("complete",b9,00,c8,7f), ::Dynamic(new _hx_Closure_2(loader,onComplete)),null(),null(),null());
HXLINE( 220)			loader->addEventListener(HX_("ioError",02,fe,41,76), ::Dynamic(new _hx_Closure_3(promise)),null(),null(),null());
HXLINE( 221)			loader->load( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,path));
            		}
HXLINE( 225)		return promise->future;
            	}


 ::lime::app::Future SWFLiteLibrary_obj::loadImage(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_230_loadImage)
HXLINE( 230)		 ::openfl::_internal::swf::SWFLiteLibrary _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 232)		if (this->imageClassNames->exists(id)) {
HXLINE( 234)			id = ( (::String)(this->imageClassNames->get(id)) );
            		}
HXLINE( 240)		bool _hx_tmp;
HXDLIN( 240)		if (!(this->preloading)) {
HXLINE( 240)			_hx_tmp = !(this->alphaCheck->exists(id));
            		}
            		else {
HXLINE( 240)			_hx_tmp = false;
            		}
HXDLIN( 240)		if (_hx_tmp) {
HXLINE( 242)			 ::Dynamic symbol = this->swf->symbols->iterator();
HXDLIN( 242)			while(( (bool)(symbol->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 242)				 ::openfl::_internal::symbols::SWFSymbol symbol1 = ( ( ::openfl::_internal::symbols::SWFSymbol)(symbol->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 244)				bool _hx_tmp1;
HXDLIN( 244)				if (::Std_obj::is(symbol1,hx::ClassOf< ::openfl::_internal::symbols::BitmapSymbol >())) {
HXLINE( 244)					_hx_tmp1 = (hx::TCast<  ::openfl::_internal::symbols::BitmapSymbol >::cast(symbol1)->path == id);
            				}
            				else {
HXLINE( 244)					_hx_tmp1 = false;
            				}
HXDLIN( 244)				if (_hx_tmp1) {
HXLINE( 246)					 ::openfl::_internal::symbols::BitmapSymbol bitmapSymbol = ( ( ::openfl::_internal::symbols::BitmapSymbol)(symbol1) );
HXLINE( 248)					if (hx::IsNotNull( bitmapSymbol->alpha )) {
            						HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_hx_Closure_1,::String,id, ::openfl::_internal::swf::SWFLiteLibrary,_gthis, ::lime::app::Promise_lime_graphics_Image,promise, ::openfl::_internal::symbols::BitmapSymbol,bitmapSymbol) HXARGC(1)
            						void _hx_run( ::lime::graphics::Image image){
            							HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_hx_Closure_0,::String,id, ::openfl::_internal::swf::SWFLiteLibrary,_gthis, ::lime::app::Promise_lime_graphics_Image,promise, ::openfl::_internal::symbols::BitmapSymbol,bitmapSymbol, ::lime::graphics::Image,image) HXARGC(1)
            							void _hx_run( ::lime::graphics::Image alpha){
            								HX_GC_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_254_loadImage)
HXLINE( 256)								_gthis->_hx___copyChannel(image,alpha);
HXLINE( 258)								_gthis->cachedImages->set(id,image);
HXLINE( 259)								_gthis->cachedImages->remove(bitmapSymbol->alpha);
HXLINE( 260)								_gthis->alphaCheck->set(id,true);
HXLINE( 262)								promise->complete(image);
            							}
            							HX_END_LOCAL_FUNC1((void))

            							HX_GC_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_254_loadImage)
HXLINE( 254)							_gthis->_hx___loadImage(bitmapSymbol->alpha)->onError(promise->error_dyn())->onComplete( ::Dynamic(new _hx_Closure_0(id,_gthis,promise,bitmapSymbol,image)));
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 250)						 ::lime::app::Promise_lime_graphics_Image promise =  ::lime::app::Promise_lime_graphics_Image_obj::__alloc( HX_CTX );
HXLINE( 252)						this->_hx___loadImage(id)->onError(promise->error_dyn())->onComplete( ::Dynamic(new _hx_Closure_1(id,_gthis,promise,bitmapSymbol)));
HXLINE( 268)						return promise->future;
            					}
            				}
            			}
            		}
HXLINE( 278)		return this->super::loadImage(id);
            	}


void SWFLiteLibrary_obj::unload(){
            	HX_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_283_unload)
HXLINE( 285)		 ::openfl::_internal::symbols::BitmapSymbol bitmap;
HXLINE( 287)		{
HXLINE( 287)			 ::Dynamic symbol = this->swf->symbols->iterator();
HXDLIN( 287)			while(( (bool)(symbol->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 287)				 ::openfl::_internal::symbols::SWFSymbol symbol1 = ( ( ::openfl::_internal::symbols::SWFSymbol)(symbol->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 289)				if (::Std_obj::is(symbol1,hx::ClassOf< ::openfl::_internal::symbols::BitmapSymbol >())) {
HXLINE( 291)					bitmap = ( ( ::openfl::_internal::symbols::BitmapSymbol)(symbol1) );
HXLINE( 292)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,bitmap->path);
            				}
            			}
            		}
            	}


void SWFLiteLibrary_obj::_hx___copyChannel( ::lime::graphics::Image image, ::lime::graphics::Image alpha){
            	HX_GC_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_301___copyChannel)
HXLINE( 303)		if (hx::IsNotNull( alpha )) {
HXLINE( 305)			 ::lime::math::Rectangle _hx_tmp = alpha->get_rect();
HXDLIN( 305)			image->copyChannel(alpha,_hx_tmp, ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null()),::lime::graphics::ImageChannel_obj::RED_dyn(),::lime::graphics::ImageChannel_obj::ALPHA_dyn());
            		}
HXLINE( 309)		image->buffer->premultiplied = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SWFLiteLibrary_obj,_hx___copyChannel,(void))

void SWFLiteLibrary_obj::_hx___fromManifest( ::lime::utils::AssetManifest manifest){
            	HX_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_318___fromManifest)
HXLINE( 320)		this->rootPath = manifest->rootPath;
HXLINE( 321)		this->super::_hx___fromManifest(manifest);
            	}


 ::lime::app::Future SWFLiteLibrary_obj::_hx___load(){
            	HX_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_328___load)
HXLINE( 328)		return this->super::load();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SWFLiteLibrary_obj,_hx___load,return )

 ::lime::app::Future SWFLiteLibrary_obj::_hx___loadImage(::String id){
            	HX_STACKFRAME(&_hx_pos_f3ab34383ae5e3ff_335___loadImage)
HXLINE( 335)		return this->super::loadImage(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SWFLiteLibrary_obj,_hx___loadImage,return )


hx::ObjectPtr< SWFLiteLibrary_obj > SWFLiteLibrary_obj::__new(::String id) {
	hx::ObjectPtr< SWFLiteLibrary_obj > __this = new SWFLiteLibrary_obj();
	__this->__construct(id);
	return __this;
}

hx::ObjectPtr< SWFLiteLibrary_obj > SWFLiteLibrary_obj::__alloc(hx::Ctx *_hx_ctx,::String id) {
	SWFLiteLibrary_obj *__this = (SWFLiteLibrary_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SWFLiteLibrary_obj), true, "openfl._internal.swf.SWFLiteLibrary"));
	*(void **)__this = SWFLiteLibrary_obj::_hx_vtable;
	__this->__construct(id);
	return __this;
}

SWFLiteLibrary_obj::SWFLiteLibrary_obj()
{
}

void SWFLiteLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SWFLiteLibrary);
	HX_MARK_MEMBER_NAME(alphaCheck,"alphaCheck");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(imageClassNames,"imageClassNames");
	HX_MARK_MEMBER_NAME(preloading,"preloading");
	HX_MARK_MEMBER_NAME(rootPath,"rootPath");
	HX_MARK_MEMBER_NAME(swf,"swf");
	 ::lime::utils::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SWFLiteLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alphaCheck,"alphaCheck");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(imageClassNames,"imageClassNames");
	HX_VISIT_MEMBER_NAME(preloading,"preloading");
	HX_VISIT_MEMBER_NAME(rootPath,"rootPath");
	HX_VISIT_MEMBER_NAME(swf,"swf");
	 ::lime::utils::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

hx::Val SWFLiteLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"swf") ) { return hx::Val( swf); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return hx::Val( exists_dyn()); }
		if (HX_FIELD_EQ(inName,"unload") ) { return hx::Val( unload_dyn()); }
		if (HX_FIELD_EQ(inName,"__load") ) { return hx::Val( _hx___load_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isLocal") ) { return hx::Val( isLocal_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { return hx::Val( rootPath); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return hx::Val( getImage_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadImage") ) { return hx::Val( loadImage_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaCheck") ) { return hx::Val( alphaCheck); }
		if (HX_FIELD_EQ(inName,"preloading") ) { return hx::Val( preloading); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__loadImage") ) { return hx::Val( _hx___loadImage_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return hx::Val( getMovieClip_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__copyChannel") ) { return hx::Val( _hx___copyChannel_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__fromManifest") ) { return hx::Val( _hx___fromManifest_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"imageClassNames") ) { return hx::Val( imageClassNames); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SWFLiteLibrary_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"swf") ) { swf=inValue.Cast<  ::openfl::_internal::swf::SWFLite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaCheck") ) { alphaCheck=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preloading") ) { preloading=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"imageClassNames") ) { imageClassNames=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SWFLiteLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphaCheck","\x8a","\xec","\x5b","\x66"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("imageClassNames","\xab","\xbf","\x09","\x89"));
	outFields->push(HX_HCSTRING("preloading","\xb9","\x08","\xef","\xa9"));
	outFields->push(HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1"));
	outFields->push(HX_HCSTRING("swf","\x42","\xab","\x57","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SWFLiteLibrary_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SWFLiteLibrary_obj,alphaCheck),HX_HCSTRING("alphaCheck","\x8a","\xec","\x5b","\x66")},
	{hx::fsString,(int)offsetof(SWFLiteLibrary_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SWFLiteLibrary_obj,imageClassNames),HX_HCSTRING("imageClassNames","\xab","\xbf","\x09","\x89")},
	{hx::fsBool,(int)offsetof(SWFLiteLibrary_obj,preloading),HX_HCSTRING("preloading","\xb9","\x08","\xef","\xa9")},
	{hx::fsString,(int)offsetof(SWFLiteLibrary_obj,rootPath),HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1")},
	{hx::fsObject /*::openfl::_internal::swf::SWFLite*/ ,(int)offsetof(SWFLiteLibrary_obj,swf),HX_HCSTRING("swf","\x42","\xab","\x57","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SWFLiteLibrary_obj_sStaticStorageInfo = 0;
#endif

static ::String SWFLiteLibrary_obj_sMemberFields[] = {
	HX_HCSTRING("alphaCheck","\x8a","\xec","\x5b","\x66"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("imageClassNames","\xab","\xbf","\x09","\x89"),
	HX_HCSTRING("preloading","\xb9","\x08","\xef","\xa9"),
	HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1"),
	HX_HCSTRING("swf","\x42","\xab","\x57","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("__copyChannel","\x6e","\xbe","\x5e","\x6b"),
	HX_HCSTRING("__fromManifest","\x59","\x5a","\x01","\x91"),
	HX_HCSTRING("__load","\x46","\xfd","\xaf","\xf6"),
	HX_HCSTRING("__loadImage","\x35","\xb4","\xcc","\x06"),
	::String(null()) };

static void SWFLiteLibrary_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SWFLiteLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SWFLiteLibrary_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SWFLiteLibrary_obj::__mClass,"__mClass");
};

#endif

hx::Class SWFLiteLibrary_obj::__mClass;

void SWFLiteLibrary_obj::__register()
{
	hx::Object *dummy = new SWFLiteLibrary_obj;
	SWFLiteLibrary_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.swf.SWFLiteLibrary","\x47","\xb9","\x12","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SWFLiteLibrary_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SWFLiteLibrary_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SWFLiteLibrary_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SWFLiteLibrary_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SWFLiteLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SWFLiteLibrary_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace swf

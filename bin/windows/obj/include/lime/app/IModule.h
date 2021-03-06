// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_lime_app_IModule
#define INCLUDED_lime_app_IModule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES IModule_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx_addRenderer)( ::lime::graphics::Renderer renderer); 
		static inline void addRenderer( ::Dynamic _hx_, ::lime::graphics::Renderer renderer) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_addRenderer)(renderer);
		}
		void (hx::Object :: *_hx_addWindow)( ::lime::ui::Window window); 
		static inline void addWindow( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_addWindow)(window);
		}
		void (hx::Object :: *_hx_registerModule)( ::lime::app::Application application); 
		static inline void registerModule( ::Dynamic _hx_, ::lime::app::Application application) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_registerModule)(application);
		}
		void (hx::Object :: *_hx_removeRenderer)( ::lime::graphics::Renderer renderer); 
		static inline void removeRenderer( ::Dynamic _hx_, ::lime::graphics::Renderer renderer) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_removeRenderer)(renderer);
		}
		void (hx::Object :: *_hx_removeWindow)( ::lime::ui::Window window); 
		static inline void removeWindow( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_removeWindow)(window);
		}
		void (hx::Object :: *_hx_setPreloader)( ::lime::app::Preloader preloader); 
		static inline void setPreloader( ::Dynamic _hx_, ::lime::app::Preloader preloader) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_setPreloader)(preloader);
		}
		void (hx::Object :: *_hx_unregisterModule)( ::lime::app::Application application); 
		static inline void unregisterModule( ::Dynamic _hx_, ::lime::app::Application application) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_unregisterModule)(application);
		}
};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_IModule */ 

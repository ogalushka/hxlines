// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_view_GameScreen
#define INCLUDED_view_GameScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(model,GameData)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,IShaderDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS1(view,Field)
HX_DECLARE_CLASS1(view,GameScreen)

namespace view{


class HXCPP_CLASS_ATTRIBUTES GameScreen_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef GameScreen_obj OBJ_;
		GameScreen_obj();

	public:
		enum { _hx_ClassId = 0x0d07128b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="view.GameScreen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"view.GameScreen"); }
		static hx::ObjectPtr< GameScreen_obj > __new();
		static hx::ObjectPtr< GameScreen_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameScreen_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GameScreen","\x1e","\x29","\x84","\x80"); }

		void render( ::model::GameData game);
		::Dynamic render_dyn();

		bool chipSelected;
		::Array< ::Dynamic> _fields;
		int selectIndex;
		int pathToIndex;
		 ::openfl::display::Bitmap background;
		 ::openfl::text::TextField tfDuration;
		 ::openfl::text::TextField tfScore;
		 ::openfl::display::Bitmap imgDuration;
		 ::openfl::display::Bitmap imgScore;
		 ::openfl::display::Sprite btnBack;
		 ::openfl::text::TextField createTextField();
		::Dynamic createTextField_dyn();

		int coorToIndex(Float stageX,Float stageY);
		::Dynamic coorToIndex_dyn();

		void stage_mouseDownHandler( ::openfl::events::MouseEvent event);
		::Dynamic stage_mouseDownHandler_dyn();

		void stage_mouseMoveHandler( ::openfl::events::MouseEvent event);
		::Dynamic stage_mouseMoveHandler_dyn();

		void stage_mouseUpHandler( ::openfl::events::MouseEvent event);
		::Dynamic stage_mouseUpHandler_dyn();

		void btnBack_clickHandler( ::openfl::events::MouseEvent event);
		::Dynamic btnBack_clickHandler_dyn();

		void addedToStageHandler( ::openfl::events::Event event);
		::Dynamic addedToStageHandler_dyn();

		void removeFromStageHandler( ::openfl::events::Event event);
		::Dynamic removeFromStageHandler_dyn();

};

} // end namespace view

#endif /* INCLUDED_view_GameScreen */ 
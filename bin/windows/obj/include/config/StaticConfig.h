// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_config_StaticConfig
#define INCLUDED_config_StaticConfig

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(config,StaticConfig)

namespace config{


class HXCPP_CLASS_ATTRIBUTES StaticConfig_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StaticConfig_obj OBJ_;
		StaticConfig_obj();

	public:
		enum { _hx_ClassId = 0x18e5e332 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="config.StaticConfig")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"config.StaticConfig"); }

		hx::ObjectPtr< StaticConfig_obj > __new() {
			hx::ObjectPtr< StaticConfig_obj > __this = new StaticConfig_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StaticConfig_obj > __alloc(hx::Ctx *_hx_ctx) {
			StaticConfig_obj *__this = (StaticConfig_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StaticConfig_obj), false, "config.StaticConfig"));
			*(void **)__this = StaticConfig_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticConfig_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StaticConfig","\x30","\xaa","\x58","\xae"); }

		static void __boot();
		static ::String APPLICATION_NAME;
		static ::String VERSION;
		static bool DEBUG;
		static Float UPDATE_DELAY;
		static Float MOVE_DELAY;
		static int TURN_CHIP_NUMBER;
		static int LINE_LENGTH;
		static int EMPTY_CELL_CODE;
		static int LEVEL1_SCORE;
		static int LEVEL2_SCORE;
		static int LEVEL3_SCORE;
		static int LEVEL4_SCORE;
		static int COLOR_COUNT;
		static int START_COLOR_COUNT;
		static ::String GAME_SCREEN;
		static ::String MENU_SCREEN;
		static ::String LEAD_BOARD_DEFAULT_USERNAME;
		static int LEAD_BOARD_USERNAME_MAX_LENGTH;
		static int LEAD_BOARD_LINES;
		static int LEAD_BOARD_EVEN_COLOR;
		static int LEAD_BOARD_ODD_COLOR;
		static int LEAD_BOARD_LINE_HEIGHT;
		static Float LEAD_BOARD_COL1;
		static Float LEAD_BOARD_COL2;
		static Float LEAD_BOARD_COL3;
		static int TILE_WIDTH;
		static int TILE_HEIGHT;
		static int BOARD_WIDTH;
		static int BOARD_HEIGHT;
		static int BOARD_CELLS;
		static Float BOARD_LEFT;
		static Float BOARD_TOP;
		static Float BOARD_RIGHT;
		static Float BOARD_BOTTOM;
		static ::String _sourceCodeURL;
		static ::String sourceCodeURL;
		static ::String get_sourceCodeURL();
		static ::Dynamic get_sourceCodeURL_dyn();

		static ::String _leadBoardURL;
		static ::String leadBoardURL;
		static ::String get_leadBoardURL();
		static ::Dynamic get_leadBoardURL_dyn();

};

} // end namespace config

#endif /* INCLUDED_config_StaticConfig */ 
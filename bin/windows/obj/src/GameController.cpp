// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_GameController
#include <GameController.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_IGameLoopHandler
#include <IGameLoopHandler.h>
#endif
#ifndef INCLUDED_config_StaticConfig
#include <config/StaticConfig.h>
#endif
#ifndef INCLUDED_controller_BreadthFirst
#include <controller/BreadthFirst.h>
#endif
#ifndef INCLUDED_events_GameEvent
#include <events/GameEvent.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_model_GameData
#include <model/GameData.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_view_GameScreen
#include <view/GameScreen.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad174b39d0143424_8_new,"GameController","new",0x0e5fa740,"GameController.new","GameController.hx",8,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_15_get_state,"GameController","get_state",0xc40d1148,"GameController.get_state","GameController.hx",15,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_22_set_state,"GameController","set_state",0xa75dfd54,"GameController.set_state","GameController.hx",22,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_40_get_startIndex,"GameController","get_startIndex",0x4518d0b9,"GameController.get_startIndex","GameController.hx",40,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_46_set_startIndex,"GameController","set_startIndex",0x6538b92d,"GameController.set_startIndex","GameController.hx",46,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_70_get_endIndex,"GameController","get_endIndex",0x4b1e2e60,"GameController.get_endIndex","GameController.hx",70,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_76_set_endIndex,"GameController","set_endIndex",0x601751d4,"GameController.set_endIndex","GameController.hx",76,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_93_get_duration,"GameController","get_duration",0xa39a107d,"GameController.get_duration","GameController.hx",93,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_120_dispose,"GameController","dispose",0xe4bd477f,"GameController.dispose","GameController.hx",120,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_129_view_moveHandler,"GameController","view_moveHandler",0xad0ea9bf,"GameController.view_moveHandler","GameController.hx",129,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_133_view_selectHandler,"GameController","view_selectHandler",0x5ac6e2b4,"GameController.view_selectHandler","GameController.hx",133,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_137_view_pathHandler,"GameController","view_pathHandler",0xb14be1ab,"GameController.view_pathHandler","GameController.hx",137,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_143_initFreeCells,"GameController","initFreeCells",0x7aa8a1f5,"GameController.initFreeCells","GameController.hx",143,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_161_moveTo,"GameController","moveTo",0xdf3a880c,"GameController.moveTo","GameController.hx",161,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_205_update,"GameController","update",0x99933b29,"GameController.update","GameController.hx",205,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_232_addRandomChips,"GameController","addRandomChips",0x3b1daca3,"GameController.addRandomChips","GameController.hx",232,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_245_removeChips,"GameController","removeChips",0x35fb4123,"GameController.removeChips","GameController.hx",245,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_260_removeLines,"GameController","removeLines",0x654371fb,"GameController.removeLines","GameController.hx",260,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_287_removeLine,"GameController","removeLine",0x95b11778,"GameController.removeLine","GameController.hx",287,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_299_updateLevel,"GameController","updateLevel",0x4a09359b,"GameController.updateLevel","GameController.hx",299,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_317_findLine,"GameController","findLine",0xb38461ed,"GameController.findLine","GameController.hx",317,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_340_valueAt,"GameController","valueAt",0x99dcfda4,"GameController.valueAt","GameController.hx",340,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_356_getAvailableNeighbors,"GameController","getAvailableNeighbors",0x3ad3f54e,"GameController.getAvailableNeighbors","GameController.hx",356,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_376_isGameEmpty,"GameController","isGameEmpty",0x758396d1,"GameController.isGameEmpty","GameController.hx",376,0x36050030)
HX_LOCAL_STACK_FRAME(_hx_pos_ad174b39d0143424_383_shuffle,"GameController","shuffle",0x0e4e0cd9,"GameController.shuffle","GameController.hx",383,0x36050030)

void GameController_obj::__construct( ::model::GameData gameData, ::view::GameScreen gameRenderer){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_8_new)
HXLINE( 227)		this->_distance = null();
HXLINE( 226)		this->_freeFieldIndex = null();
HXLINE( 109)		this->_game = gameData;
HXLINE( 110)		this->_view = gameRenderer;
HXLINE( 111)		this->_view->addEventListener(::events::GameEvent_obj::MOVE,this->view_moveHandler_dyn(),null(),null(),null());
HXLINE( 112)		this->_view->addEventListener(::events::GameEvent_obj::SELECT,this->view_selectHandler_dyn(),null(),null(),null());
HXLINE( 113)		this->_view->addEventListener(::events::GameEvent_obj::PATH,this->view_pathHandler_dyn(),null(),null(),null());
HXLINE( 114)		this->initFreeCells();
HXLINE( 115)		if ((this->_freeFieldIndex->length == this->_game->fields->length)) {
HXLINE( 116)			this->addRandomChips();
            		}
            	}

Dynamic GameController_obj::__CreateEmpty() { return new GameController_obj; }

void *GameController_obj::_hx_vtable = 0;

Dynamic GameController_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GameController_obj > _hx_result = new GameController_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GameController_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3db3474e;
}

static ::IGameLoopHandler_obj _hx_GameController__hx_IGameLoopHandler= {
	( void (hx::Object::*)(Float,Float))&::GameController_obj::update,
};

void *GameController_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xb7e46cab: return &_hx_GameController__hx_IGameLoopHandler;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::GameState GameController_obj::get_state(){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_15_get_state)
HXLINE(  16)		if (hx::IsNotNull( this->_game )) {
HXLINE(  17)			return this->_game->state;
            		}
HXLINE(  18)		return ::GameState_obj::NONE_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameController_obj,get_state,return )

 ::GameState GameController_obj::set_state( ::GameState value){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_22_set_state)
HXLINE(  22)		if (hx::IsNotNull( this->_game )) {
HXLINE(  23)			return (this->_game->state = value);
            		}
            		else {
HXLINE(  25)			HX_STACK_DO_THROW(HX_("Game object is not defined. Failure access to Access to state field is failure.",f2,5f,24,60));
            		}
HXLINE(  22)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameController_obj,set_state,return )

int GameController_obj::get_startIndex(){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_40_get_startIndex)
HXLINE(  41)		if (hx::IsNotNull( this->_game )) {
HXLINE(  42)			return this->_game->startIndex;
            		}
HXLINE(  43)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameController_obj,get_startIndex,return )

int GameController_obj::set_startIndex(int value){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_46_set_startIndex)
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		if ((value >= (int)0)) {
HXLINE(  47)			_hx_tmp = (value > ::config::StaticConfig_obj::BOARD_CELLS);
            		}
            		else {
HXLINE(  47)			_hx_tmp = true;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  48)			return (int)-1;
            		}
HXLINE(  50)		if (hx::IsNotNull( this->_game )) {
HXLINE(  51)			this->_game->startIndex = value;
HXLINE(  52)			this->_game->path = null();
HXLINE(  53)			this->_distance = ::controller::BreadthFirst_obj::bfs(this->_game->fields,this->_game->startIndex,this->_game->startIndex,this->getAvailableNeighbors_dyn());
HXLINE(  54)			return this->_game->startIndex;
            		}
HXLINE(  56)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameController_obj,set_startIndex,return )

int GameController_obj::get_endIndex(){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_70_get_endIndex)
HXLINE(  71)		if (hx::IsNotNull( this->_game )) {
HXLINE(  72)			return this->_game->endIndex;
            		}
HXLINE(  73)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameController_obj,get_endIndex,return )

int GameController_obj::set_endIndex(int value){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_76_set_endIndex)
HXLINE(  77)		bool _hx_tmp;
HXDLIN(  77)		if ((value >= (int)0)) {
HXLINE(  77)			_hx_tmp = (value > ::config::StaticConfig_obj::BOARD_CELLS);
            		}
            		else {
HXLINE(  77)			_hx_tmp = true;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  78)			return (int)-1;
            		}
HXLINE(  80)		bool _hx_tmp1;
HXDLIN(  80)		bool _hx_tmp2;
HXDLIN(  80)		if (hx::IsNotNull( this->_game )) {
HXLINE(  80)			_hx_tmp2 = (this->get_startIndex() != (int)-1);
            		}
            		else {
HXLINE(  80)			_hx_tmp2 = false;
            		}
HXDLIN(  80)		if (_hx_tmp2) {
HXLINE(  80)			_hx_tmp1 = (this->_distance->__get(value) < ::config::StaticConfig_obj::BOARD_CELLS);
            		}
            		else {
HXLINE(  80)			_hx_tmp1 = false;
            		}
HXDLIN(  80)		if (_hx_tmp1) {
HXLINE(  81)			this->_game->endIndex = value;
HXLINE(  82)			this->_game->path = ::controller::BreadthFirst_obj::bfsPath(this->_game->fields,this->_distance,this->_game->startIndex,this->_game->endIndex,this->getAvailableNeighbors_dyn());
HXLINE(  83)			return this->_game->endIndex;
            		}
HXLINE(  85)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameController_obj,set_endIndex,return )

Float GameController_obj::get_duration(){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_93_get_duration)
HXLINE(  94)		if (hx::IsNotNull( this->_game )) {
HXLINE(  95)			return this->_game->duration;
            		}
HXLINE(  96)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameController_obj,get_duration,return )

void GameController_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_120_dispose)
HXLINE( 121)		this->_game = null();
HXLINE( 122)		this->_view->removeEventListener(::events::GameEvent_obj::MOVE,this->view_moveHandler_dyn(),null());
HXLINE( 123)		this->_view->removeEventListener(::events::GameEvent_obj::SELECT,this->view_selectHandler_dyn(),null());
HXLINE( 124)		this->_view->removeEventListener(::events::GameEvent_obj::PATH,this->view_pathHandler_dyn(),null());
HXLINE( 125)		this->_view = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameController_obj,dispose,(void))

void GameController_obj::view_moveHandler( ::events::GameEvent event){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_129_view_moveHandler)
HXLINE( 129)		this->moveTo(event->index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameController_obj,view_moveHandler,(void))

void GameController_obj::view_selectHandler( ::events::GameEvent event){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_133_view_selectHandler)
HXLINE( 133)		this->set_startIndex(event->index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameController_obj,view_selectHandler,(void))

void GameController_obj::view_pathHandler( ::events::GameEvent event){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_137_view_pathHandler)
HXLINE( 137)		this->set_endIndex(event->index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameController_obj,view_pathHandler,(void))

void GameController_obj::initFreeCells(){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_143_initFreeCells)
HXLINE( 144)		this->_freeFieldIndex = ::Array_obj< int >::__new(0);
HXLINE( 145)		{
HXLINE( 145)			int _g1 = (int)0;
HXDLIN( 145)			int _g = this->_game->fields->length;
HXDLIN( 145)			while((_g1 < _g)){
HXLINE( 145)				_g1 = (_g1 + (int)1);
HXDLIN( 145)				int i = (_g1 - (int)1);
HXLINE( 146)				if ((this->_game->fields->__get(i) == (int)0)) {
HXLINE( 147)					this->_freeFieldIndex->push(i);
            				}
            			}
            		}
HXLINE( 151)		::GameController_obj::shuffle(this->_freeFieldIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameController_obj,initFreeCells,(void))

void GameController_obj::moveTo(int index){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_161_moveTo)
HXLINE( 163)		if ((this->_game->fields->__get(index) != (int)0)) {
HXLINE( 164)			::haxe::Log_obj::trace(HX_("INFO: Change chip.",e6,02,c0,f4),hx::SourceInfo(HX_("GameController.hx",30,00,05,36),164,HX_("GameController",4e,47,b3,3d),HX_("moveTo",ec,d2,ac,cc)));
HXLINE( 165)			this->set_startIndex(index);
HXLINE( 166)			return;
            		}
HXLINE( 170)		if ((this->_distance->__get(index) > ::config::StaticConfig_obj::BOARD_CELLS)) {
HXLINE( 171)			::haxe::Log_obj::trace(HX_("INFO: Distance is unavailable",71,7f,95,a7),hx::SourceInfo(HX_("GameController.hx",30,00,05,36),171,HX_("GameController",4e,47,b3,3d),HX_("moveTo",ec,d2,ac,cc)));
HXLINE( 172)			return;
            		}
HXLINE( 176)		int i = this->_freeFieldIndex->indexOf(index,null());
HXLINE( 177)		::Array< int > _hx_tmp = this->_freeFieldIndex;
HXDLIN( 177)		_hx_tmp[i] = this->get_startIndex();
HXLINE( 180)		::Array< int > _hx_tmp1 = this->_game->fields;
HXDLIN( 180)		_hx_tmp1[index] = this->_game->fields->__get(this->_game->startIndex);
HXLINE( 181)		this->_game->fields[this->_game->startIndex] = ::config::StaticConfig_obj::EMPTY_CELL_CODE;
HXLINE( 184)		this->_game->startIndex = (int)-1;
HXLINE( 185)		this->_game->endIndex = (int)-1;
HXLINE( 186)		this->_game->path = null();
HXLINE( 188)		::Array< int > newChips = ::Array_obj< int >::__new(1)->init(0,index);
HXLINE( 189)		if ((this->removeLines(newChips) == false)) {
HXLINE( 190)			if ((this->_freeFieldIndex->length < ::config::StaticConfig_obj::TURN_CHIP_NUMBER)) {
HXLINE( 191)				this->_game->state = ::GameState_obj::COMPLETE_dyn();
            			}
            			else {
HXLINE( 193)				newChips = this->addRandomChips();
HXLINE( 194)				this->removeLines(newChips);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameController_obj,moveTo,(void))

void GameController_obj::update(Float time,Float deltaTime){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_205_update)
HXLINE( 207)		if (hx::IsEq( this->_game->state,::GameState_obj::PLAY_dyn() )) {
HXLINE( 208)			 ::model::GameData _hx_tmp = this->_game;
HXDLIN( 208)			_hx_tmp->duration = (_hx_tmp->duration + deltaTime);
            		}
HXLINE( 211)		this->_view->render(this->_game);
HXLINE( 214)		bool _hx_tmp1;
HXDLIN( 214)		if (hx::IsEq( this->_game->state,::GameState_obj::PLAY_dyn() )) {
HXLINE( 214)			_hx_tmp1 = (this->_freeFieldIndex->length <= ::config::StaticConfig_obj::TURN_CHIP_NUMBER);
            		}
            		else {
HXLINE( 214)			_hx_tmp1 = false;
            		}
HXDLIN( 214)		if (_hx_tmp1) {
HXLINE( 215)			this->set_state(::GameState_obj::COMPLETE_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameController_obj,update,(void))

::Array< int > GameController_obj::addRandomChips(){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_232_addRandomChips)
HXLINE( 233)		int chipColor = (int)1;
HXLINE( 234)		{
HXLINE( 234)			int _g1 = (int)0;
HXDLIN( 234)			int _g = ::config::StaticConfig_obj::TURN_CHIP_NUMBER;
HXDLIN( 234)			while((_g1 < _g)){
HXLINE( 234)				_g1 = (_g1 + (int)1);
HXDLIN( 234)				int i = (_g1 - (int)1);
HXLINE( 235)				Float chipColor1 = ::Math_obj::random();
HXDLIN( 235)				chipColor = ((int)1 + ::Math_obj::floor((chipColor1 * (::config::StaticConfig_obj::START_COLOR_COUNT + this->_game->level))));
HXLINE( 236)				::Array< int > _hx_tmp = this->_game->fields;
HXDLIN( 236)				_hx_tmp[this->_freeFieldIndex->__get(i)] = chipColor;
            			}
            		}
HXLINE( 238)		return this->_freeFieldIndex->splice((int)0,::config::StaticConfig_obj::TURN_CHIP_NUMBER);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameController_obj,addRandomChips,return )

void GameController_obj::removeChips(::Array< int > line){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_245_removeChips)
HXLINE( 245)		int _g = (int)0;
HXDLIN( 245)		while((_g < line->length)){
HXLINE( 245)			int index = line->__get(_g);
HXDLIN( 245)			_g = (_g + (int)1);
HXLINE( 246)			this->_game->fields[index] = (int)0;
HXLINE( 247)			this->_freeFieldIndex->push(index);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameController_obj,removeChips,(void))

bool GameController_obj::removeLines(::Array< int > startIndxes){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_260_removeLines)
HXLINE( 261)		::Array< int > line;
HXLINE( 262)		bool result = false;
HXLINE( 264)		{
HXLINE( 264)			int _g = (int)0;
HXDLIN( 264)			while((_g < startIndxes->length)){
HXLINE( 264)				int start = startIndxes->__get(_g);
HXDLIN( 264)				_g = (_g + (int)1);
HXLINE( 265)				int colIndex = hx::Mod(start,::config::StaticConfig_obj::BOARD_WIDTH);
HXLINE( 266)				int rowIndex = ::Math_obj::floor(((Float)(start - colIndex) / (Float)::config::StaticConfig_obj::BOARD_WIDTH));
HXLINE( 267)				int chipType = this->_game->fields->__get(start);
HXLINE( 269)				line = this->findLine(colIndex,(int)0,(int)0,(int)1,chipType);
HXLINE( 270)				if (!(result)) {
HXLINE( 270)					result = this->removeLine(line);
            				}
            				else {
HXLINE( 270)					result = true;
            				}
HXLINE( 272)				line = this->findLine((int)0,rowIndex,(int)1,(int)0,chipType);
HXLINE( 273)				if (!(result)) {
HXLINE( 273)					result = this->removeLine(line);
            				}
            				else {
HXLINE( 273)					result = true;
            				}
HXLINE( 275)				int d;
HXDLIN( 275)				if ((rowIndex < colIndex)) {
HXLINE( 275)					d = rowIndex;
            				}
            				else {
HXLINE( 275)					d = colIndex;
            				}
HXLINE( 276)				line = this->findLine((colIndex - d),(rowIndex - d),(int)1,(int)1,chipType);
HXLINE( 277)				if (!(result)) {
HXLINE( 277)					result = this->removeLine(line);
            				}
            				else {
HXLINE( 277)					result = true;
            				}
HXLINE( 279)				int right = ((::config::StaticConfig_obj::BOARD_WIDTH - (int)1) - colIndex);
HXLINE( 280)				if ((rowIndex < right)) {
HXLINE( 280)					d = rowIndex;
            				}
            				else {
HXLINE( 280)					d = right;
            				}
HXLINE( 281)				line = this->findLine((colIndex + d),(rowIndex - d),(int)-1,(int)1,chipType);
HXLINE( 282)				if (!(result)) {
HXLINE( 282)					result = this->removeLine(line);
            				}
            				else {
HXLINE( 282)					result = true;
            				}
            			}
            		}
HXLINE( 284)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameController_obj,removeLines,return )

bool GameController_obj::removeLine(::Array< int > line){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_287_removeLine)
HXLINE( 288)		if ((line->length >= ::config::StaticConfig_obj::LINE_LENGTH)) {
HXLINE( 289)			this->removeChips(line);
HXLINE( 290)			 ::model::GameData _hx_tmp = this->_game;
HXDLIN( 290)			_hx_tmp->score = (_hx_tmp->score + (line->length * this->_game->level));
HXLINE( 291)			this->updateLevel();
HXLINE( 292)			return true;
            		}
HXLINE( 294)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameController_obj,removeLine,return )

void GameController_obj::updateLevel(){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_299_updateLevel)
HXLINE( 299)		if ((this->_game->score <= ::config::StaticConfig_obj::LEVEL1_SCORE)) {
HXLINE( 300)			this->_game->level = (int)1;
            		}
            		else {
HXLINE( 301)			if ((this->_game->score <= ::config::StaticConfig_obj::LEVEL2_SCORE)) {
HXLINE( 302)				this->_game->level = (int)2;
            			}
            			else {
HXLINE( 303)				if ((this->_game->score <= ::config::StaticConfig_obj::LEVEL3_SCORE)) {
HXLINE( 304)					this->_game->level = (int)3;
            				}
            				else {
HXLINE( 305)					if ((this->_game->score <= ::config::StaticConfig_obj::LEVEL4_SCORE)) {
HXLINE( 306)						this->_game->level = (int)4;
            					}
            					else {
HXLINE( 308)						this->_game->level = (int)5;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameController_obj,updateLevel,(void))

::Array< int > GameController_obj::findLine(int colStartIndex,int rowStartIndex,int colIncrement,int rowIncrement,int chipType){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_317_findLine)
HXLINE( 318)		::Array< int > result = ::Array_obj< int >::__new();
HXLINE( 319)		int colIndex = colStartIndex;
HXLINE( 320)		int rowIndex = rowStartIndex;
HXLINE( 321)		int index = (int)0;
HXLINE( 322)		while(true){
HXLINE( 322)			bool _hx_tmp;
HXDLIN( 322)			bool _hx_tmp1;
HXDLIN( 322)			bool _hx_tmp2;
HXDLIN( 322)			if ((colIndex < ::config::StaticConfig_obj::BOARD_WIDTH)) {
HXLINE( 322)				_hx_tmp2 = (rowIndex < ::config::StaticConfig_obj::BOARD_HEIGHT);
            			}
            			else {
HXLINE( 322)				_hx_tmp2 = false;
            			}
HXDLIN( 322)			if (_hx_tmp2) {
HXLINE( 322)				_hx_tmp1 = (colIndex >= (int)0);
            			}
            			else {
HXLINE( 322)				_hx_tmp1 = false;
            			}
HXDLIN( 322)			if (_hx_tmp1) {
HXLINE( 322)				_hx_tmp = (rowIndex >= (int)0);
            			}
            			else {
HXLINE( 322)				_hx_tmp = false;
            			}
HXDLIN( 322)			if (!(_hx_tmp)) {
HXLINE( 322)				goto _hx_goto_24;
            			}
HXLINE( 326)			index = ((rowIndex * ::config::StaticConfig_obj::BOARD_WIDTH) + colIndex);
HXLINE( 327)			if ((this->_game->fields->__get(index) == chipType)) {
HXLINE( 328)				result->push(index);
            			}
            			else {
HXLINE( 330)				if ((result->length >= ::config::StaticConfig_obj::LINE_LENGTH)) {
HXLINE( 331)					goto _hx_goto_24;
            				}
HXLINE( 332)				result = ::Array_obj< int >::__new();
            			}
HXLINE( 334)			colIndex = (colIndex + colIncrement);
HXLINE( 335)			rowIndex = (rowIndex + rowIncrement);
            		}
            		_hx_goto_24:;
HXLINE( 337)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC5(GameController_obj,findLine,return )

int GameController_obj::valueAt(int colIndex,int rowIndex){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_340_valueAt)
HXLINE( 341)		int index = ((rowIndex * ::config::StaticConfig_obj::BOARD_WIDTH) + colIndex);
HXLINE( 342)		return this->_game->fields->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameController_obj,valueAt,return )

::Array< int > GameController_obj::getAvailableNeighbors( ::Dynamic source,int index){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_356_getAvailableNeighbors)
HXLINE( 357)		::Array< int > result = ::Array_obj< int >::__new();
HXLINE( 359)		int emptyChipType = ::config::StaticConfig_obj::EMPTY_CELL_CODE;
HXLINE( 360)		int colIndex = hx::Mod(index,::config::StaticConfig_obj::BOARD_WIDTH);
HXLINE( 361)		int rowIndex = ::Math_obj::floor(((Float)(index - colIndex) / (Float)::config::StaticConfig_obj::BOARD_WIDTH));
HXLINE( 363)		bool _hx_tmp;
HXDLIN( 363)		if ((rowIndex != (int)0)) {
HXLINE( 363)			_hx_tmp = (this->valueAt(colIndex,(rowIndex - (int)1)) == emptyChipType);
            		}
            		else {
HXLINE( 363)			_hx_tmp = false;
            		}
HXDLIN( 363)		if (_hx_tmp) {
HXLINE( 364)			result->push((index - ::config::StaticConfig_obj::BOARD_WIDTH));
            		}
HXLINE( 365)		bool _hx_tmp1;
HXDLIN( 365)		if ((colIndex != (::config::StaticConfig_obj::BOARD_WIDTH - (int)1))) {
HXLINE( 365)			_hx_tmp1 = (this->valueAt((colIndex + (int)1),rowIndex) == emptyChipType);
            		}
            		else {
HXLINE( 365)			_hx_tmp1 = false;
            		}
HXDLIN( 365)		if (_hx_tmp1) {
HXLINE( 366)			result->push((index + (int)1));
            		}
HXLINE( 367)		bool _hx_tmp2;
HXDLIN( 367)		if ((rowIndex != (::config::StaticConfig_obj::BOARD_HEIGHT - (int)1))) {
HXLINE( 367)			_hx_tmp2 = (this->valueAt(colIndex,(rowIndex + (int)1)) == emptyChipType);
            		}
            		else {
HXLINE( 367)			_hx_tmp2 = false;
            		}
HXDLIN( 367)		if (_hx_tmp2) {
HXLINE( 368)			result->push((index + ::config::StaticConfig_obj::BOARD_WIDTH));
            		}
HXLINE( 369)		bool _hx_tmp3;
HXDLIN( 369)		if ((colIndex != (int)0)) {
HXLINE( 369)			_hx_tmp3 = (this->valueAt((colIndex - (int)1),rowIndex) == emptyChipType);
            		}
            		else {
HXLINE( 369)			_hx_tmp3 = false;
            		}
HXDLIN( 369)		if (_hx_tmp3) {
HXLINE( 370)			result->push((index - (int)1));
            		}
HXLINE( 372)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameController_obj,getAvailableNeighbors,return )

bool GameController_obj::isGameEmpty(){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_376_isGameEmpty)
HXLINE( 376)		return (this->_game->duration > (int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameController_obj,isGameEmpty,return )

void GameController_obj::shuffle(::cpp::VirtualArray source){
            	HX_STACKFRAME(&_hx_pos_ad174b39d0143424_383_shuffle)
HXLINE( 384)		if (hx::IsNull( source )) {
HXLINE( 385)			return;
            		}
HXLINE( 386)		int n = source->get_length();
HXLINE( 387)		if ((n < (int)2)) {
HXLINE( 388)			return;
            		}
HXLINE( 389)		{
HXLINE( 389)			int _g1 = (int)0;
HXDLIN( 389)			int _g = n;
HXDLIN( 389)			while((_g1 < _g)){
HXLINE( 389)				_g1 = (_g1 + (int)1);
HXDLIN( 389)				int i = (_g1 - (int)1);
HXLINE( 390)				int randomIndex = ::Math_obj::floor((::Math_obj::random() * n));
HXLINE( 391)				 ::Dynamic tmp = source->__get(i);
HXLINE( 392)				source->set(i,source->__get(randomIndex));
HXLINE( 393)				source->set(randomIndex,tmp);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameController_obj,shuffle,(void))


hx::ObjectPtr< GameController_obj > GameController_obj::__new( ::model::GameData gameData, ::view::GameScreen gameRenderer) {
	hx::ObjectPtr< GameController_obj > __this = new GameController_obj();
	__this->__construct(gameData,gameRenderer);
	return __this;
}

hx::ObjectPtr< GameController_obj > GameController_obj::__alloc(hx::Ctx *_hx_ctx, ::model::GameData gameData, ::view::GameScreen gameRenderer) {
	GameController_obj *__this = (GameController_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GameController_obj), true, "GameController"));
	*(void **)__this = GameController_obj::_hx_vtable;
	__this->__construct(gameData,gameRenderer);
	return __this;
}

GameController_obj::GameController_obj()
{
}

void GameController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameController);
	HX_MARK_MEMBER_NAME(_game,"_game");
	HX_MARK_MEMBER_NAME(_view,"_view");
	HX_MARK_MEMBER_NAME(_freeFieldIndex,"_freeFieldIndex");
	HX_MARK_MEMBER_NAME(_distance,"_distance");
	HX_MARK_END_CLASS();
}

void GameController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_game,"_game");
	HX_VISIT_MEMBER_NAME(_view,"_view");
	HX_VISIT_MEMBER_NAME(_freeFieldIndex,"_freeFieldIndex");
	HX_VISIT_MEMBER_NAME(_distance,"_distance");
}

hx::Val GameController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_state()); }
		if (HX_FIELD_EQ(inName,"_game") ) { return hx::Val( _game); }
		if (HX_FIELD_EQ(inName,"_view") ) { return hx::Val( _view); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moveTo") ) { return hx::Val( moveTo_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn()); }
		if (HX_FIELD_EQ(inName,"valueAt") ) { return hx::Val( valueAt_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_endIndex()); }
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_duration()); }
		if (HX_FIELD_EQ(inName,"findLine") ) { return hx::Val( findLine_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_state") ) { return hx::Val( get_state_dyn()); }
		if (HX_FIELD_EQ(inName,"set_state") ) { return hx::Val( set_state_dyn()); }
		if (HX_FIELD_EQ(inName,"_distance") ) { return hx::Val( _distance); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_startIndex()); }
		if (HX_FIELD_EQ(inName,"removeLine") ) { return hx::Val( removeLine_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChips") ) { return hx::Val( removeChips_dyn()); }
		if (HX_FIELD_EQ(inName,"removeLines") ) { return hx::Val( removeLines_dyn()); }
		if (HX_FIELD_EQ(inName,"updateLevel") ) { return hx::Val( updateLevel_dyn()); }
		if (HX_FIELD_EQ(inName,"isGameEmpty") ) { return hx::Val( isGameEmpty_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_endIndex") ) { return hx::Val( get_endIndex_dyn()); }
		if (HX_FIELD_EQ(inName,"set_endIndex") ) { return hx::Val( set_endIndex_dyn()); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return hx::Val( get_duration_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initFreeCells") ) { return hx::Val( initFreeCells_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_startIndex") ) { return hx::Val( get_startIndex_dyn()); }
		if (HX_FIELD_EQ(inName,"set_startIndex") ) { return hx::Val( set_startIndex_dyn()); }
		if (HX_FIELD_EQ(inName,"addRandomChips") ) { return hx::Val( addRandomChips_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_freeFieldIndex") ) { return hx::Val( _freeFieldIndex); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"view_moveHandler") ) { return hx::Val( view_moveHandler_dyn()); }
		if (HX_FIELD_EQ(inName,"view_pathHandler") ) { return hx::Val( view_pathHandler_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"view_selectHandler") ) { return hx::Val( view_selectHandler_dyn()); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getAvailableNeighbors") ) { return hx::Val( getAvailableNeighbors_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool GameController_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shuffle") ) { outValue = shuffle_dyn(); return true; }
	}
	return false;
}

hx::Val GameController_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_state(inValue) ); }
		if (HX_FIELD_EQ(inName,"_game") ) { _game=inValue.Cast<  ::model::GameData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_view") ) { _view=inValue.Cast<  ::view::GameScreen >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_endIndex(inValue) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_startIndex(inValue) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_freeFieldIndex") ) { _freeFieldIndex=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("startIndex","\x50","\x73","\x2b","\xda"));
	outFields->push(HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("_game","\xd1","\x0f","\x70","\xf7"));
	outFields->push(HX_HCSTRING("_view","\x44","\x4e","\x60","\x01"));
	outFields->push(HX_HCSTRING("_freeFieldIndex","\x63","\x0c","\xb6","\x34"));
	outFields->push(HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GameController_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::model::GameData*/ ,(int)offsetof(GameController_obj,_game),HX_HCSTRING("_game","\xd1","\x0f","\x70","\xf7")},
	{hx::fsObject /*::view::GameScreen*/ ,(int)offsetof(GameController_obj,_view),HX_HCSTRING("_view","\x44","\x4e","\x60","\x01")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GameController_obj,_freeFieldIndex),HX_HCSTRING("_freeFieldIndex","\x63","\x0c","\xb6","\x34")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GameController_obj,_distance),HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GameController_obj_sStaticStorageInfo = 0;
#endif

static ::String GameController_obj_sMemberFields[] = {
	HX_HCSTRING("get_state","\x68","\xd2","\xb4","\xc7"),
	HX_HCSTRING("set_state","\x74","\xbe","\x05","\xab"),
	HX_HCSTRING("get_startIndex","\x99","\xfb","\x20","\x50"),
	HX_HCSTRING("set_startIndex","\x0d","\xe4","\x40","\x70"),
	HX_HCSTRING("get_endIndex","\x40","\xe1","\x2b","\x71"),
	HX_HCSTRING("set_endIndex","\xb4","\x04","\x25","\x86"),
	HX_HCSTRING("get_duration","\x5d","\xc3","\xa7","\xc9"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("view_moveHandler","\x9f","\x4c","\x9f","\xaa"),
	HX_HCSTRING("view_selectHandler","\x94","\xfd","\xed","\x57"),
	HX_HCSTRING("view_pathHandler","\x8b","\x84","\xdc","\xae"),
	HX_HCSTRING("initFreeCells","\x15","\x73","\x97","\xa0"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("_game","\xd1","\x0f","\x70","\xf7"),
	HX_HCSTRING("_view","\x44","\x4e","\x60","\x01"),
	HX_HCSTRING("_freeFieldIndex","\x63","\x0c","\xb6","\x34"),
	HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"),
	HX_HCSTRING("addRandomChips","\x83","\xd7","\x25","\x46"),
	HX_HCSTRING("removeChips","\x43","\x8a","\xed","\x43"),
	HX_HCSTRING("removeLines","\x1b","\xbb","\x35","\x73"),
	HX_HCSTRING("removeLine","\x58","\x52","\xd2","\xc4"),
	HX_HCSTRING("updateLevel","\xbb","\x7e","\xfb","\x57"),
	HX_HCSTRING("findLine","\xcd","\x24","\x47","\x9a"),
	HX_HCSTRING("valueAt","\xc4","\x36","\x6c","\x70"),
	HX_HCSTRING("getAvailableNeighbors","\x6e","\xe6","\xa8","\x73"),
	HX_HCSTRING("isGameEmpty","\xf1","\xdf","\x75","\x83"),
	::String(null()) };

static void GameController_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameController_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameController_obj::__mClass,"__mClass");
};

#endif

hx::Class GameController_obj::__mClass;

static ::String GameController_obj_sStaticFields[] = {
	HX_HCSTRING("shuffle","\xf9","\x45","\xdd","\xe4"),
	::String(null())
};

void GameController_obj::__register()
{
	hx::Object *dummy = new GameController_obj;
	GameController_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("GameController","\x4e","\x47","\xb3","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameController_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GameController_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GameController_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GameController_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameController_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameController_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameController_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

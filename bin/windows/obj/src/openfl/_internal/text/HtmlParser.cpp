// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_text_HtmlParser
#include <openfl/_internal/text/HtmlParser.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#include <openfl/_internal/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_
#include <openfl/text/_TextFormatAlign/TextFormatAlign_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_22_parse,"openfl._internal.text.HtmlParser","parse",0x66532240,"openfl._internal.text.HtmlParser.parse","openfl/_internal/text/HtmlParser.hx",22,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_266___getAttributeMatch,"openfl._internal.text.HtmlParser","__getAttributeMatch",0xe0cc6a6c,"openfl._internal.text.HtmlParser.__getAttributeMatch","openfl/_internal/text/HtmlParser.hx",266,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_7_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",7,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_8_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",8,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_9_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",9,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_10_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",10,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_11_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",11,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_12_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",12,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_13_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",13,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_14_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",14,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_15_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",15,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_16_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",16,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_17_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",17,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_18_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",18,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_19_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",19,0xb5126604)
HX_LOCAL_STACK_FRAME(_hx_pos_7c40cf6c4a1f78cf_20_boot,"openfl._internal.text.HtmlParser","boot",0x49e6b2c5,"openfl._internal.text.HtmlParser.boot","openfl/_internal/text/HtmlParser.hx",20,0xb5126604)
namespace openfl{
namespace _internal{
namespace text{

void HtmlParser_obj::__construct() { }

Dynamic HtmlParser_obj::__CreateEmpty() { return new HtmlParser_obj; }

void *HtmlParser_obj::_hx_vtable = 0;

Dynamic HtmlParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HtmlParser_obj > _hx_result = new HtmlParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HtmlParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3766fbc3;
}

 ::EReg HtmlParser_obj::_hx___regexAlign;

 ::EReg HtmlParser_obj::_hx___regexBreakTag;

 ::EReg HtmlParser_obj::_hx___regexBlockIndent;

 ::EReg HtmlParser_obj::_hx___regexColor;

::Array< ::Dynamic> HtmlParser_obj::_hx___regexEntities;

 ::EReg HtmlParser_obj::_hx___regexFace;

 ::EReg HtmlParser_obj::_hx___regexHTMLTag;

 ::EReg HtmlParser_obj::_hx___regexHref;

 ::EReg HtmlParser_obj::_hx___regexIndent;

 ::EReg HtmlParser_obj::_hx___regexLeading;

 ::EReg HtmlParser_obj::_hx___regexLeftMargin;

 ::EReg HtmlParser_obj::_hx___regexRightMargin;

 ::EReg HtmlParser_obj::_hx___regexSize;

 ::EReg HtmlParser_obj::_hx___regexTabStops;

::String HtmlParser_obj::parse(::String value, ::openfl::text::TextFormat textFormat, ::openfl::_Vector::ObjectVector textFormatRanges){
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_22_parse)
HXLINE(  24)		value = ::openfl::_internal::text::HtmlParser_obj::_hx___regexBreakTag->replace(value,HX_("\n",0a,00,00,00));
HXLINE(  25)		value = ::openfl::_internal::text::HtmlParser_obj::_hx___regexEntities->__get((int)0).StaticCast<  ::EReg >()->replace(value,HX_("\"",22,00,00,00));
HXLINE(  26)		value = ::openfl::_internal::text::HtmlParser_obj::_hx___regexEntities->__get((int)1).StaticCast<  ::EReg >()->replace(value,HX_("'",27,00,00,00));
HXLINE(  27)		value = ::openfl::_internal::text::HtmlParser_obj::_hx___regexEntities->__get((int)2).StaticCast<  ::EReg >()->replace(value,HX_("&",26,00,00,00));
HXLINE(  28)		value = ::openfl::_internal::text::HtmlParser_obj::_hx___regexEntities->__get((int)5).StaticCast<  ::EReg >()->replace(value,HX_(" ",20,00,00,00));
HXLINE(  32)		::Array< ::String > segments = value.split(HX_("<",3c,00,00,00));
HXLINE(  34)		if ((segments->length == (int)1)) {
HXLINE(  36)			value = ::openfl::_internal::text::HtmlParser_obj::_hx___regexHTMLTag->replace(value,HX_("",00,00,00,00));
HXLINE(  38)			if ((textFormatRanges->get_length() > (int)1)) {
HXLINE(  40)				textFormatRanges->splice((int)1,(textFormatRanges->get_length() - (int)1));
            			}
HXLINE(  44)			value = ::openfl::_internal::text::HtmlParser_obj::_hx___regexEntities->__get((int)3).StaticCast<  ::EReg >()->replace(value,HX_("<",3c,00,00,00));
HXLINE(  45)			value = ::openfl::_internal::text::HtmlParser_obj::_hx___regexEntities->__get((int)4).StaticCast<  ::EReg >()->replace(value,HX_(">",3e,00,00,00));
HXLINE(  47)			 ::openfl::_internal::text::TextFormatRange range = textFormatRanges->get((int)0).StaticCast<  ::openfl::_internal::text::TextFormatRange >();
HXLINE(  48)			range->format = textFormat;
HXLINE(  49)			range->start = (int)0;
HXLINE(  50)			range->end = value.length;
HXLINE(  52)			return value;
            		}
            		else {
HXLINE(  56)			textFormatRanges->splice((int)0,textFormatRanges->get_length());
HXLINE(  58)			value = HX_("",00,00,00,00);
HXLINE(  59)			::String segment;
HXLINE(  61)			{
HXLINE(  61)				int _g1 = (int)0;
HXDLIN(  61)				int _g = segments->length;
HXDLIN(  61)				while((_g1 < _g)){
HXLINE(  61)					_g1 = (_g1 + (int)1);
HXDLIN(  61)					int i = (_g1 - (int)1);
HXLINE(  63)					segment = segments->__get(i);
HXLINE(  64)					segment = ::openfl::_internal::text::HtmlParser_obj::_hx___regexEntities->__get((int)3).StaticCast<  ::EReg >()->replace(segment,HX_("<",3c,00,00,00));
HXLINE(  65)					segment = ::openfl::_internal::text::HtmlParser_obj::_hx___regexEntities->__get((int)4).StaticCast<  ::EReg >()->replace(segment,HX_(">",3e,00,00,00));
HXLINE(  66)					segments[i] = segment;
            				}
            			}
HXLINE(  70)			::Array< ::Dynamic> formatStack = ::Array_obj< ::Dynamic>::__new(1)->init(0,textFormat->clone());
HXLINE(  71)			::String sub;
HXLINE(  72)			bool noLineBreak = false;
HXLINE(  74)			{
HXLINE(  74)				int _g2 = (int)0;
HXDLIN(  74)				while((_g2 < segments->length)){
HXLINE(  74)					::String segment1 = segments->__get(_g2);
HXDLIN(  74)					_g2 = (_g2 + (int)1);
HXLINE(  76)					if ((segment1 == HX_("",00,00,00,00))) {
HXLINE(  76)						continue;
            					}
HXLINE(  78)					bool isClosingTag = (segment1.substr((int)0,(int)1) == HX_("/",2f,00,00,00));
HXLINE(  79)					int tagEndIndex = segment1.indexOf(HX_(">",3e,00,00,00),null());
HXLINE(  80)					int start = (tagEndIndex + (int)1);
HXLINE(  81)					int spaceIndex = segment1.indexOf(HX_(" ",20,00,00,00),null());
HXLINE(  82)					int tagName;
HXDLIN(  82)					if (isClosingTag) {
HXLINE(  82)						tagName = (int)1;
            					}
            					else {
HXLINE(  82)						tagName = (int)0;
            					}
HXDLIN(  82)					 ::Dynamic tagName1;
HXDLIN(  82)					bool tagName2;
HXDLIN(  82)					if ((spaceIndex > (int)-1)) {
HXLINE(  82)						tagName2 = (spaceIndex < tagEndIndex);
            					}
            					else {
HXLINE(  82)						tagName2 = false;
            					}
HXDLIN(  82)					if (tagName2) {
HXLINE(  82)						tagName1 = spaceIndex;
            					}
            					else {
HXLINE(  82)						tagName1 = tagEndIndex;
            					}
HXDLIN(  82)					::String tagName3 = segment1.substring(tagName,tagName1);
HXLINE(  83)					 ::openfl::text::TextFormat format;
HXLINE(  85)					if (isClosingTag) {
HXLINE(  87)						formatStack->pop().StaticCast<  ::openfl::text::TextFormat >();
HXLINE(  88)						format = formatStack->__get((formatStack->length - (int)1)).StaticCast<  ::openfl::text::TextFormat >()->clone();
HXLINE(  90)						bool _hx_tmp;
HXDLIN(  90)						if ((tagName3.toLowerCase() == HX_("p",70,00,00,00))) {
HXLINE(  90)							_hx_tmp = (textFormatRanges->get_length() > (int)0);
            						}
            						else {
HXLINE(  90)							_hx_tmp = false;
            						}
HXDLIN(  90)						if (_hx_tmp) {
HXLINE(  92)							value = (value + HX_("\n",0a,00,00,00));
HXLINE(  93)							noLineBreak = true;
            						}
HXLINE(  97)						if ((start < segment1.length)) {
HXLINE(  99)							sub = segment1.substr(start,null());
HXLINE( 100)							{
HXLINE( 100)								int value1 = value.length;
HXDLIN( 100)								textFormatRanges->push( ::openfl::_internal::text::TextFormatRange_obj::__alloc( HX_CTX ,format,value1,(value.length + sub.length)));
            							}
HXLINE( 101)							value = (value + sub);
HXLINE( 102)							noLineBreak = false;
            						}
            					}
            					else {
HXLINE( 108)						format = formatStack->__get((formatStack->length - (int)1)).StaticCast<  ::openfl::text::TextFormat >()->clone();
HXLINE( 110)						if ((tagEndIndex > (int)-1)) {
HXLINE( 112)							{
HXLINE( 112)								::String _g11 = tagName3.toLowerCase();
HXDLIN( 112)								::String _hx_switch_0 = _g11;
            								if (  (_hx_switch_0==HX_("a",61,00,00,00)) ){
HXLINE( 116)									if (::openfl::_internal::text::HtmlParser_obj::_hx___regexHref->match(segment1)) {
HXLINE( 118)										format->url = ::openfl::_internal::text::HtmlParser_obj::_hx___getAttributeMatch(::openfl::_internal::text::HtmlParser_obj::_hx___regexHref);
            									}
HXLINE( 116)									goto _hx_goto_2;
            								}
            								if (  (_hx_switch_0==HX_("b",62,00,00,00)) ){
HXLINE( 170)									format->bold = true;
HXDLIN( 170)									goto _hx_goto_2;
            								}
            								if (  (_hx_switch_0==HX_("em",68,58,00,00)) ||  (_hx_switch_0==HX_("i",69,00,00,00)) ){
HXLINE( 178)									format->italic = true;
HXDLIN( 178)									goto _hx_goto_2;
            								}
            								if (  (_hx_switch_0==HX_("font",cf,5d,c0,43)) ){
HXLINE( 138)									if (::openfl::_internal::text::HtmlParser_obj::_hx___regexFace->match(segment1)) {
HXLINE( 140)										format->font = ::openfl::_internal::text::HtmlParser_obj::_hx___getAttributeMatch(::openfl::_internal::text::HtmlParser_obj::_hx___regexFace);
            									}
HXLINE( 144)									if (::openfl::_internal::text::HtmlParser_obj::_hx___regexColor->match(segment1)) {
HXLINE( 146)										format->color = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + ::openfl::_internal::text::HtmlParser_obj::_hx___getAttributeMatch(::openfl::_internal::text::HtmlParser_obj::_hx___regexColor)));
            									}
HXLINE( 150)									if (::openfl::_internal::text::HtmlParser_obj::_hx___regexSize->match(segment1)) {
HXLINE( 152)										::String sizeAttr = ::openfl::_internal::text::HtmlParser_obj::_hx___getAttributeMatch(::openfl::_internal::text::HtmlParser_obj::_hx___regexSize);
HXLINE( 153)										 ::Dynamic firstChar = sizeAttr.charCodeAt((int)0);
HXLINE( 155)										bool _hx_tmp1;
HXDLIN( 155)										if (hx::IsNotEq( firstChar,(int)43 )) {
HXLINE( 155)											_hx_tmp1 = hx::IsEq( firstChar,(int)45 );
            										}
            										else {
HXLINE( 155)											_hx_tmp1 = true;
            										}
HXDLIN( 155)										if (_hx_tmp1) {
HXLINE( 157)											 ::openfl::text::TextFormat parentFormat;
HXDLIN( 157)											if ((formatStack->length >= (int)2)) {
HXLINE( 157)												parentFormat = formatStack->__get((formatStack->length - (int)2)).StaticCast<  ::openfl::text::TextFormat >();
            											}
            											else {
HXLINE( 157)												parentFormat = textFormat;
            											}
HXLINE( 158)											 ::Dynamic parentFormat1 = parentFormat->size;
HXDLIN( 158)											format->size = (parentFormat1 + ::Std_obj::parseInt(sizeAttr));
            										}
            										else {
HXLINE( 162)											format->size = ::Std_obj::parseInt(sizeAttr);
            										}
            									}
HXLINE( 136)									goto _hx_goto_2;
            								}
            								if (  (_hx_switch_0==HX_("p",70,00,00,00)) ){
HXLINE( 124)									bool _hx_tmp2;
HXDLIN( 124)									if ((textFormatRanges->get_length() > (int)0)) {
HXLINE( 124)										_hx_tmp2 = !(noLineBreak);
            									}
            									else {
HXLINE( 124)										_hx_tmp2 = false;
            									}
HXDLIN( 124)									if (_hx_tmp2) {
HXLINE( 126)										value = (value + HX_("\n",0a,00,00,00));
            									}
HXLINE( 130)									if (::openfl::_internal::text::HtmlParser_obj::_hx___regexAlign->match(segment1)) {
HXLINE( 132)										format->align = ::openfl::text::_TextFormatAlign::TextFormatAlign_Impl__obj::fromString(::openfl::_internal::text::HtmlParser_obj::_hx___getAttributeMatch(::openfl::_internal::text::HtmlParser_obj::_hx___regexAlign).toLowerCase());
            									}
HXLINE( 122)									goto _hx_goto_2;
            								}
            								if (  (_hx_switch_0==HX_("textformat",a4,9b,ea,ff)) ){
HXLINE( 182)									if (::openfl::_internal::text::HtmlParser_obj::_hx___regexBlockIndent->match(segment1)) {
HXLINE( 184)										format->blockIndent = ::Std_obj::parseInt(::openfl::_internal::text::HtmlParser_obj::_hx___getAttributeMatch(::openfl::_internal::text::HtmlParser_obj::_hx___regexBlockIndent));
            									}
HXLINE( 188)									if (::openfl::_internal::text::HtmlParser_obj::_hx___regexIndent->match(segment1)) {
HXLINE( 190)										format->indent = ::Std_obj::parseInt(::openfl::_internal::text::HtmlParser_obj::_hx___getAttributeMatch(::openfl::_internal::text::HtmlParser_obj::_hx___regexIndent));
            									}
HXLINE( 194)									if (::openfl::_internal::text::HtmlParser_obj::_hx___regexLeading->match(segment1)) {
HXLINE( 196)										format->leading = ::Std_obj::parseInt(::openfl::_internal::text::HtmlParser_obj::_hx___getAttributeMatch(::openfl::_internal::text::HtmlParser_obj::_hx___regexLeading));
            									}
HXLINE( 200)									if (::openfl::_internal::text::HtmlParser_obj::_hx___regexLeftMargin->match(segment1)) {
HXLINE( 202)										format->leftMargin = ::Std_obj::parseInt(::openfl::_internal::text::HtmlParser_obj::_hx___getAttributeMatch(::openfl::_internal::text::HtmlParser_obj::_hx___regexLeftMargin));
            									}
HXLINE( 206)									if (::openfl::_internal::text::HtmlParser_obj::_hx___regexRightMargin->match(segment1)) {
HXLINE( 208)										format->rightMargin = ::Std_obj::parseInt(::openfl::_internal::text::HtmlParser_obj::_hx___getAttributeMatch(::openfl::_internal::text::HtmlParser_obj::_hx___regexRightMargin));
            									}
HXLINE( 212)									if (::openfl::_internal::text::HtmlParser_obj::_hx___regexTabStops->match(segment1)) {
HXLINE( 214)										::Array< ::String > values = ::openfl::_internal::text::HtmlParser_obj::_hx___getAttributeMatch(::openfl::_internal::text::HtmlParser_obj::_hx___regexTabStops).split(HX_(" ",20,00,00,00));
HXLINE( 215)										::Array< ::Dynamic> tabStops = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 217)										{
HXLINE( 217)											int _g12 = (int)0;
HXDLIN( 217)											while((_g12 < values->length)){
HXLINE( 217)												::String stop = values->__get(_g12);
HXDLIN( 217)												_g12 = (_g12 + (int)1);
HXLINE( 219)												tabStops->push(::Std_obj::parseInt(stop));
            											}
            										}
HXLINE( 223)										format->tabStops = tabStops;
            									}
HXLINE( 180)									goto _hx_goto_2;
            								}
            								if (  (_hx_switch_0==HX_("u",75,00,00,00)) ){
HXLINE( 174)									format->underline = true;
HXDLIN( 174)									goto _hx_goto_2;
            								}
            								_hx_goto_2:;
            							}
HXLINE( 229)							formatStack->push(format);
HXLINE( 231)							if ((start < segment1.length)) {
HXLINE( 233)								sub = segment1.substring(start,null());
HXLINE( 234)								{
HXLINE( 234)									int value2 = value.length;
HXDLIN( 234)									textFormatRanges->push( ::openfl::_internal::text::TextFormatRange_obj::__alloc( HX_CTX ,format,value2,(value.length + sub.length)));
            								}
HXLINE( 235)								value = (value + sub);
HXLINE( 236)								noLineBreak = false;
            							}
            						}
            						else {
HXLINE( 242)							{
HXLINE( 242)								int value3 = value.length;
HXDLIN( 242)								textFormatRanges->push( ::openfl::_internal::text::TextFormatRange_obj::__alloc( HX_CTX ,format,value3,(value.length + segment1.length)));
            							}
HXLINE( 243)							value = (value + segment1);
HXLINE( 244)							noLineBreak = false;
            						}
            					}
            				}
            			}
HXLINE( 252)			if ((textFormatRanges->get_length() == (int)0)) {
HXLINE( 254)				textFormatRanges->push( ::openfl::_internal::text::TextFormatRange_obj::__alloc( HX_CTX ,formatStack->__get((int)0).StaticCast<  ::openfl::text::TextFormat >(),(int)0,(int)0));
            			}
            		}
HXLINE( 260)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HtmlParser_obj,parse,return )

::String HtmlParser_obj::_hx___getAttributeMatch( ::EReg regex){
            	HX_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_266___getAttributeMatch)
HXLINE( 266)		if (hx::IsNotNull( regex->matched((int)2) )) {
HXLINE( 266)			return regex->matched((int)2);
            		}
            		else {
HXLINE( 266)			return regex->matched((int)3);
            		}
HXDLIN( 266)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HtmlParser_obj,_hx___getAttributeMatch,return )


HtmlParser_obj::HtmlParser_obj()
{
}

bool HtmlParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { outValue = _hx___regexFace; return true; }
		if (HX_FIELD_EQ(inName,"__regexHref") ) { outValue = _hx___regexHref; return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { outValue = _hx___regexSize; return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexAlign") ) { outValue = _hx___regexAlign; return true; }
		if (HX_FIELD_EQ(inName,"__regexColor") ) { outValue = _hx___regexColor; return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__regexIndent") ) { outValue = _hx___regexIndent; return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__regexHTMLTag") ) { outValue = _hx___regexHTMLTag; return true; }
		if (HX_FIELD_EQ(inName,"__regexLeading") ) { outValue = _hx___regexLeading; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__regexBreakTag") ) { outValue = _hx___regexBreakTag; return true; }
		if (HX_FIELD_EQ(inName,"__regexEntities") ) { outValue = _hx___regexEntities; return true; }
		if (HX_FIELD_EQ(inName,"__regexTabStops") ) { outValue = _hx___regexTabStops; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__regexLeftMargin") ) { outValue = _hx___regexLeftMargin; return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__regexBlockIndent") ) { outValue = _hx___regexBlockIndent; return true; }
		if (HX_FIELD_EQ(inName,"__regexRightMargin") ) { outValue = _hx___regexRightMargin; return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__getAttributeMatch") ) { outValue = _hx___getAttributeMatch_dyn(); return true; }
	}
	return false;
}

bool HtmlParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { _hx___regexFace=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexHref") ) { _hx___regexHref=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { _hx___regexSize=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexAlign") ) { _hx___regexAlign=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexColor") ) { _hx___regexColor=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__regexIndent") ) { _hx___regexIndent=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__regexHTMLTag") ) { _hx___regexHTMLTag=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexLeading") ) { _hx___regexLeading=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__regexBreakTag") ) { _hx___regexBreakTag=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexEntities") ) { _hx___regexEntities=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexTabStops") ) { _hx___regexTabStops=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__regexLeftMargin") ) { _hx___regexLeftMargin=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__regexBlockIndent") ) { _hx___regexBlockIndent=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexRightMargin") ) { _hx___regexRightMargin=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HtmlParser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo HtmlParser_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexAlign,HX_HCSTRING("__regexAlign","\x9e","\x21","\xd1","\x2d")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexBreakTag,HX_HCSTRING("__regexBreakTag","\xa2","\xf1","\x6b","\xe6")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexBlockIndent,HX_HCSTRING("__regexBlockIndent","\x32","\x61","\xa3","\xa8")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexColor,HX_HCSTRING("__regexColor","\x3c","\x3c","\x9c","\x56")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &HtmlParser_obj::_hx___regexEntities,HX_HCSTRING("__regexEntities","\x08","\x59","\x3f","\x8c")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexFace,HX_HCSTRING("__regexFace","\xe4","\xc7","\x66","\x12")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexHTMLTag,HX_HCSTRING("__regexHTMLTag","\xe8","\x74","\xf4","\x76")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexHref,HX_HCSTRING("__regexHref","\x32","\x1d","\xc6","\x13")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexIndent,HX_HCSTRING("__regexIndent","\x73","\xbf","\x84","\x3f")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexLeading,HX_HCSTRING("__regexLeading","\xdf","\x25","\x4c","\x7d")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexLeftMargin,HX_HCSTRING("__regexLeftMargin","\x1c","\x6e","\x33","\xf3")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexRightMargin,HX_HCSTRING("__regexRightMargin","\xc3","\x30","\xd7","\x98")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexSize,HX_HCSTRING("__regexSize","\x08","\xb4","\x04","\x1b")},
	{hx::fsObject /*::EReg*/ ,(void *) &HtmlParser_obj::_hx___regexTabStops,HX_HCSTRING("__regexTabStops","\x63","\x56","\x64","\xec")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void HtmlParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HtmlParser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexAlign,"__regexAlign");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexBreakTag,"__regexBreakTag");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexBlockIndent,"__regexBlockIndent");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexColor,"__regexColor");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexEntities,"__regexEntities");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexFace,"__regexFace");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexHTMLTag,"__regexHTMLTag");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexHref,"__regexHref");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexIndent,"__regexIndent");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexLeading,"__regexLeading");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexLeftMargin,"__regexLeftMargin");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexRightMargin,"__regexRightMargin");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexSize,"__regexSize");
	HX_MARK_MEMBER_NAME(HtmlParser_obj::_hx___regexTabStops,"__regexTabStops");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HtmlParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexAlign,"__regexAlign");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexBreakTag,"__regexBreakTag");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexBlockIndent,"__regexBlockIndent");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexColor,"__regexColor");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexEntities,"__regexEntities");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexFace,"__regexFace");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexHTMLTag,"__regexHTMLTag");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexHref,"__regexHref");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexIndent,"__regexIndent");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexLeading,"__regexLeading");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexLeftMargin,"__regexLeftMargin");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexRightMargin,"__regexRightMargin");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexSize,"__regexSize");
	HX_VISIT_MEMBER_NAME(HtmlParser_obj::_hx___regexTabStops,"__regexTabStops");
};

#endif

hx::Class HtmlParser_obj::__mClass;

static ::String HtmlParser_obj_sStaticFields[] = {
	HX_HCSTRING("__regexAlign","\x9e","\x21","\xd1","\x2d"),
	HX_HCSTRING("__regexBreakTag","\xa2","\xf1","\x6b","\xe6"),
	HX_HCSTRING("__regexBlockIndent","\x32","\x61","\xa3","\xa8"),
	HX_HCSTRING("__regexColor","\x3c","\x3c","\x9c","\x56"),
	HX_HCSTRING("__regexEntities","\x08","\x59","\x3f","\x8c"),
	HX_HCSTRING("__regexFace","\xe4","\xc7","\x66","\x12"),
	HX_HCSTRING("__regexHTMLTag","\xe8","\x74","\xf4","\x76"),
	HX_HCSTRING("__regexHref","\x32","\x1d","\xc6","\x13"),
	HX_HCSTRING("__regexIndent","\x73","\xbf","\x84","\x3f"),
	HX_HCSTRING("__regexLeading","\xdf","\x25","\x4c","\x7d"),
	HX_HCSTRING("__regexLeftMargin","\x1c","\x6e","\x33","\xf3"),
	HX_HCSTRING("__regexRightMargin","\xc3","\x30","\xd7","\x98"),
	HX_HCSTRING("__regexSize","\x08","\xb4","\x04","\x1b"),
	HX_HCSTRING("__regexTabStops","\x63","\x56","\x64","\xec"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("__getAttributeMatch","\x9f","\x3b","\x2c","\x45"),
	::String(null())
};

void HtmlParser_obj::__register()
{
	hx::Object *dummy = new HtmlParser_obj;
	HtmlParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text.HtmlParser","\xbb","\xba","\x5d","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HtmlParser_obj::__GetStatic;
	__mClass->mSetStaticField = &HtmlParser_obj::__SetStatic;
	__mClass->mMarkFunc = HtmlParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(HtmlParser_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HtmlParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HtmlParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HtmlParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HtmlParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HtmlParser_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_7_boot)
HXLINE(   7)		_hx___regexAlign =  ::EReg_obj::__alloc( HX_CTX ,HX_("align=(\"([^\"]+)\"|'([^']+)')",46,80,3f,0e),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_8_boot)
HXLINE(   8)		_hx___regexBreakTag =  ::EReg_obj::__alloc( HX_CTX ,HX_("<br\\s*/?>",47,ed,43,f6),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_9_boot)
HXLINE(   9)		_hx___regexBlockIndent =  ::EReg_obj::__alloc( HX_CTX ,HX_("blockindent=(\"([^\"]+)\"|'([^']+)')",fa,c9,96,24),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_10_boot)
HXLINE(  10)		_hx___regexColor =  ::EReg_obj::__alloc( HX_CTX ,HX_("color=(\"#([^\"]+)\"|'#([^']+)')",36,15,0f,76),HX_("i",69,00,00,00));
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_11_boot)
HXLINE(  11)			 ::EReg _hx_tmp =  ::EReg_obj::__alloc( HX_CTX ,HX_("&quot;",2c,d9,81,8f),HX_("g",67,00,00,00));
HXDLIN(  11)			 ::EReg _hx_tmp1 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&apos;",22,7f,ca,55),HX_("g",67,00,00,00));
HXDLIN(  11)			 ::EReg _hx_tmp2 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&amp;",dd,d4,aa,21),HX_("g",67,00,00,00));
HXDLIN(  11)			 ::EReg _hx_tmp3 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&lt;",4d,74,70,19),HX_("g",67,00,00,00));
HXDLIN(  11)			 ::EReg _hx_tmp4 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&gt;",08,a9,6c,19),HX_("g",67,00,00,00));
HXDLIN(  11)			return ::Array_obj< ::Dynamic>::__new(6)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_hx_tmp3)->init(4,_hx_tmp4)->init(5, ::EReg_obj::__alloc( HX_CTX ,HX_("&nbsp;",64,13,c2,c8),HX_("g",67,00,00,00)));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_11_boot)
HXLINE(  11)		_hx___regexEntities =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_12_boot)
HXLINE(  12)		_hx___regexFace =  ::EReg_obj::__alloc( HX_CTX ,HX_("face=(\"([^\"]+)\"|'([^']+)')",1e,00,2b,89),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_13_boot)
HXLINE(  13)		_hx___regexHTMLTag =  ::EReg_obj::__alloc( HX_CTX ,HX_("<.*?>",97,b4,92,aa),HX_("g",67,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_14_boot)
HXLINE(  14)		_hx___regexHref =  ::EReg_obj::__alloc( HX_CTX ,HX_("href=(\"([^\"]+)\"|'([^']+)')",ec,3f,eb,b5),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_15_boot)
HXLINE(  15)		_hx___regexIndent =  ::EReg_obj::__alloc( HX_CTX ,HX_(" indent=(\"([^\"]+)\"|'([^']+)')",4d,db,5b,9f),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_16_boot)
HXLINE(  16)		_hx___regexLeading =  ::EReg_obj::__alloc( HX_CTX ,HX_("leading=(\"([^\"]+)\"|'([^']+)')",07,25,07,ae),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_17_boot)
HXLINE(  17)		_hx___regexLeftMargin =  ::EReg_obj::__alloc( HX_CTX ,HX_("leftmargin=(\"([^\"]+)\"|'([^']+)')",f6,e4,c9,11),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_18_boot)
HXLINE(  18)		_hx___regexRightMargin =  ::EReg_obj::__alloc( HX_CTX ,HX_("rightmargin=(\"([^\"]+)\"|'([^']+)')",4b,8e,21,c0),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_19_boot)
HXLINE(  19)		_hx___regexSize =  ::EReg_obj::__alloc( HX_CTX ,HX_("size=(\"([^\"]+)\"|'([^']+)')",42,27,be,87),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c40cf6c4a1f78cf_20_boot)
HXLINE(  20)		_hx___regexTabStops =  ::EReg_obj::__alloc( HX_CTX ,HX_("tabstops=(\"([^\"]+)\"|'([^']+)')",7d,fe,73,09),HX_("i",69,00,00,00));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace text
// Generated by Haxe 3.4.0 (git build development @ d2a02e8)
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTrianglesView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTrianglesView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,DrawTrianglesView_Impl_)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES DrawTrianglesView_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DrawTrianglesView_Impl__obj OBJ_;
		DrawTrianglesView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x641c2112 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_"); }

		hx::ObjectPtr< DrawTrianglesView_Impl__obj > __new() {
			hx::ObjectPtr< DrawTrianglesView_Impl__obj > __this = new DrawTrianglesView_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< DrawTrianglesView_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			DrawTrianglesView_Impl__obj *__this = (DrawTrianglesView_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DrawTrianglesView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_"));
			*(void **)__this = DrawTrianglesView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawTrianglesView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DrawTrianglesView_Impl_","\x8c","\xe7","\x93","\xd4"); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static  ::openfl::_Vector::FloatVector get_vertices( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_vertices_dyn();

		static  ::openfl::_Vector::IntVector get_indices( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_indices_dyn();

		static  ::openfl::_Vector::FloatVector get_uvtData( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_uvtData_dyn();

		static  ::Dynamic get_culling( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_culling_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTrianglesView_Impl_ */ 

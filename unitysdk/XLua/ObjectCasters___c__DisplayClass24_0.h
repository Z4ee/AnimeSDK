#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace XLua { class ObjectCast; }
namespace XLua { class ObjectCasters; }

#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFF75C20)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__0_OFFSET UNITYSDK_OFFSET(0xFF75EC0)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__1_OFFSET UNITYSDK_OFFSET(0xFF76050)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__2_OFFSET UNITYSDK_OFFSET(0xFF76140)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__3_OFFSET UNITYSDK_OFFSET(0xFF76230)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__4_OFFSET UNITYSDK_OFFSET(0xFF76320)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__5_OFFSET UNITYSDK_OFFSET(0xFF76540)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__6_OFFSET UNITYSDK_OFFSET(0xFF76D50)

namespace XLua
{
	inline static constexpr unsigned int ObjectCasters___c__DisplayClass24_0_TypeDefinitionIndex = 40517;

	class ObjectCasters___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::XLua::ObjectCasters* __4__this; // 0x10
		::System::Type* type; // 0x18
		::XLua::ObjectCast* fixTypeGetter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Object* _genCaster_b__0(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__0_OFFSET))(this, L, idx, target);
		}

		::System::Object* _genCaster_b__1(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__1_OFFSET))(this, L, idx, target);
		}

		::System::Object* _genCaster_b__2(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__2_OFFSET))(this, L, idx, target);
		}

		::System::Object* _genCaster_b__3(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__3_OFFSET))(this, L, idx, target);
		}

		::System::Object* _genCaster_b__4(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__4_OFFSET))(this, L, idx, target);
		}

		::System::Object* _genCaster_b__5(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__5_OFFSET))(this, L, idx, target);
		}

		::System::Object* _genCaster_b__6(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__6_OFFSET))(this, L, idx, target);
		}
	};
}

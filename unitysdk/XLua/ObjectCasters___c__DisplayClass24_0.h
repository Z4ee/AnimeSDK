#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace XLua { class ObjectCast; }
namespace XLua { class ObjectCasters; }

#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA0960)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__0_OFFSET UNITYSDK_OFFSET(0x12EA0C10)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__1_OFFSET UNITYSDK_OFFSET(0x12EA0DA0)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__2_OFFSET UNITYSDK_OFFSET(0x12EA0E90)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__3_OFFSET UNITYSDK_OFFSET(0x12EA0F80)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__4_OFFSET UNITYSDK_OFFSET(0x12EA1070)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__5_OFFSET UNITYSDK_OFFSET(0x12EA12C0)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__6_OFFSET UNITYSDK_OFFSET(0x12EA1AE0)

namespace XLua
{
	inline static constexpr unsigned int ObjectCasters___c__DisplayClass24_0_TypeDefinitionIndex = 47020;

	class ObjectCasters___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::XLua::ObjectCast* fixTypeGetter; // 0x10
		::System::Type* type; // 0x18
		::XLua::ObjectCasters* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Object* _genCaster_b__0(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__0_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* _genCaster_b__1(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* _genCaster_b__2(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__2_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* _genCaster_b__3(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__3_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* _genCaster_b__4(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__4_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* _genCaster_b__5(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__5_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* _genCaster_b__6(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_0__GENCASTER_B__6_OFFSET))(this, a1, a2, a3);
		}
	};
}

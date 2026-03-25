#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace XLua { class ObjectCast; }
namespace XLua { class ObjectCasters___c__DisplayClass24_0; }

#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_2__CTOR_OFFSET UNITYSDK_OFFSET(0xFF75E20)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_2__GENCASTER_B__8_OFFSET UNITYSDK_OFFSET(0xFF77D80)

namespace XLua
{
	inline static constexpr unsigned int ObjectCasters___c__DisplayClass24_2_TypeDefinitionIndex = 40519;

	class ObjectCasters___c__DisplayClass24_2 : public ::System::Object
	{
	public:
		::XLua::ObjectCasters___c__DisplayClass24_0* CS___8__locals2; // 0x10
		::XLua::ObjectCast* keyCaster; // 0x18
		::XLua::ObjectCast* valueCaster; // 0x20
		::System::Type* keyType; // 0x28
		::System::Type* valueType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_2__CTOR_OFFSET))(this);
		}

		::System::Object* _genCaster_b__8(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_2__GENCASTER_B__8_OFFSET))(this, L, idx, target);
		}
	};
}

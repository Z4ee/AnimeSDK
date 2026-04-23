#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace XLua { class ObjectCast; }
namespace XLua { class ObjectCasters___c__DisplayClass24_0; }

#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1123F930)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_1__GENCASTER_B__7_OFFSET UNITYSDK_OFFSET(0x11241110)

namespace XLua
{
	inline static constexpr unsigned int ObjectCasters___c__DisplayClass24_1_TypeDefinitionIndex = 46431;

	class ObjectCasters___c__DisplayClass24_1 : public ::System::Object
	{
	public:
		::System::Type* elementType; // 0x10
		::XLua::ObjectCasters___c__DisplayClass24_0* CS___8__locals1; // 0x18
		::XLua::ObjectCast* elementCaster; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_1__CTOR_OFFSET))(this);
		}

		::System::Object* _genCaster_b__7(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_1__GENCASTER_B__7_OFFSET))(this, L, idx, target);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class ObjectCast; }

#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14B36220)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS25_0__GENNULLABLECASTER_B__0_OFFSET UNITYSDK_OFFSET(0x14B38FE0)

namespace XLua
{
	inline static constexpr unsigned int ObjectCasters___c__DisplayClass25_0_TypeDefinitionIndex = 50572;

	class ObjectCasters___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::XLua::ObjectCast* oc; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Object* _genNullableCaster_b__0(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS25_0__GENNULLABLECASTER_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}

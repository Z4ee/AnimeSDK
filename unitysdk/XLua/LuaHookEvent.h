#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XLUA_LUAHOOKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10BEB690)

namespace XLua
{
	inline static constexpr unsigned int LuaHookEvent_TypeDefinitionIndex = 47998;

	class LuaHookEvent : public ::System::Object
	{
	public:
		// static const ::System::Int32 CALL = 0x0; // 0x0
		// static const ::System::Int32 RETURN = 0x1; // 0x0
		// static const ::System::Int32 LINE = 0x2; // 0x0
		// static const ::System::Int32 COUNT = 0x3; // 0x0
		// static const ::System::Int32 TAIL_CALL = 0x4; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAHOOKEVENT__CTOR_OFFSET))(this);
		}
	};
}

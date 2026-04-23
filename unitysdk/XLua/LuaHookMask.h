#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XLUA_LUAHOOKMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x112369B0)

namespace XLua
{
	inline static constexpr unsigned int LuaHookMask_TypeDefinitionIndex = 46441;

	class LuaHookMask : public ::System::Object
	{
	public:
		// static const ::System::Int32 CLOSE = 0x0; // 0x0
		// static const ::System::Int32 CALL = 0x1; // 0x0
		// static const ::System::Int32 RETURN = 0x2; // 0x0
		// static const ::System::Int32 LINE = 0x4; // 0x0
		// static const ::System::Int32 COUNT = 0x8; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAHOOKMASK__CTOR_OFFSET))(this);
		}
	};
}

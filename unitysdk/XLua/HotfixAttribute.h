#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/XLua/HotfixFlag.h"

#define XLUA_HOTFIXATTRIBUTE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1BFD5B50)
#define XLUA_HOTFIXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFD5B60)

namespace XLua
{
	inline static constexpr unsigned int HotfixAttribute_TypeDefinitionIndex = 5606;

	class HotfixAttribute : public ::System::Attribute
	{
	public:
		::XLua::HotfixFlag flag; // 0x10

		::System::Void _ctor(::XLua::HotfixFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::HotfixFlag))((::PBYTE)hIl2Cpp + XLUA_HOTFIXATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::XLua::HotfixFlag get_Flag()
		{
			return ((::XLua::HotfixFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_HOTFIXATTRIBUTE_GET_FLAG_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/XLua/HotfixFlag.h"

#define XLUA_HOTFIXATTRIBUTE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x17A6F7F0)
#define XLUA_HOTFIXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6F800)

namespace XLua
{
	inline static constexpr unsigned int HotfixAttribute_TypeDefinitionIndex = 8632;

	class HotfixAttribute : public ::System::Attribute
	{
	public:
		::XLua::HotfixFlag flag; // 0x10

		::System::Void _ctor(::XLua::HotfixFlag e)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::HotfixFlag))((::PBYTE)hIl2Cpp + XLUA_HOTFIXATTRIBUTE__CTOR_OFFSET))(this, e);
		}

		::XLua::HotfixFlag get_Flag()
		{
			return ((::XLua::HotfixFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_HOTFIXATTRIBUTE_GET_FLAG_OFFSET))(this);
		}
	};
}

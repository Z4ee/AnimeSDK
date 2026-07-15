#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/XLua/GenFlag.h"

#define XLUA_LUACALLCSHARPATTRIBUTE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1D305D00)
#define XLUA_LUACALLCSHARPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D305D10)

namespace XLua
{
	inline static constexpr unsigned int LuaCallCSharpAttribute_TypeDefinitionIndex = 5603;

	class LuaCallCSharpAttribute : public ::System::Attribute
	{
	public:
		::XLua::GenFlag flag; // 0x10

		::System::Void _ctor(::XLua::GenFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::GenFlag))((::PBYTE)hIl2Cpp + XLUA_LUACALLCSHARPATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::XLua::GenFlag get_Flag()
		{
			return ((::XLua::GenFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUACALLCSHARPATTRIBUTE_GET_FLAG_OFFSET))(this);
		}
	};
}

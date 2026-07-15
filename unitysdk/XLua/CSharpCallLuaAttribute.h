#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_CSHARPCALLLUAATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D305C80)

namespace XLua
{
	inline static constexpr unsigned int CSharpCallLuaAttribute_TypeDefinitionIndex = 5604;

	class CSharpCallLuaAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSHARPCALLLUAATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

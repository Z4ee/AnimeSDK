#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_BLACKLISTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18932C80)

namespace XLua
{
	inline static constexpr unsigned int BlackListAttribute_TypeDefinitionIndex = 5600;

	class BlackListAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_BLACKLISTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

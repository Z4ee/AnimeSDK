#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_BLACKLISTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6F7A0)

namespace XLua
{
	inline static constexpr unsigned int BlackListAttribute_TypeDefinitionIndex = 8620;

	class BlackListAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_BLACKLISTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

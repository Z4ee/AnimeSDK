#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_HOTFIXDELEGATEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18932CF0)

namespace XLua
{
	inline static constexpr unsigned int HotfixDelegateAttribute_TypeDefinitionIndex = 5613;

	class HotfixDelegateAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_HOTFIXDELEGATEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

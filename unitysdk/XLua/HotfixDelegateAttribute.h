#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_HOTFIXDELEGATEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B84C60)

namespace XLua
{
	inline static constexpr unsigned int HotfixDelegateAttribute_TypeDefinitionIndex = 6411;

	class HotfixDelegateAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_HOTFIXDELEGATEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

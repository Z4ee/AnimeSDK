#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_OBFUSCATEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6F850)

namespace XLua
{
	inline static constexpr unsigned int ObfuscateAttribute_TypeDefinitionIndex = 8621;

	class ObfuscateAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBFUSCATEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

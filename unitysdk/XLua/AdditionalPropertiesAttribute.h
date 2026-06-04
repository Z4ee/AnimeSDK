#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_ADDITIONALPROPERTIESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18932C50)

namespace XLua
{
	inline static constexpr unsigned int AdditionalPropertiesAttribute_TypeDefinitionIndex = 5610;

	class AdditionalPropertiesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_ADDITIONALPROPERTIESATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

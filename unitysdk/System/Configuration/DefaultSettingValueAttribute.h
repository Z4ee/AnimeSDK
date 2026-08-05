#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_CONFIGURATION_DEFAULTSETTINGVALUEATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E7E1580)
#define SYSTEM_CONFIGURATION_DEFAULTSETTINGVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E1570)

namespace System::Configuration
{
	inline static constexpr unsigned int DefaultSettingValueAttribute_TypeDefinitionIndex = 4206;

	class DefaultSettingValueAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_DEFAULTSETTINGVALUEATTRIBUTE__CTOR_OFFSET))(this, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_DEFAULTSETTINGVALUEATTRIBUTE_GET_VALUE_OFFSET))(this);
		}
	};
}

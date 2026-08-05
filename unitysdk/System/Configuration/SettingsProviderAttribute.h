#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE_GET_PROVIDERTYPENAME_OFFSET UNITYSDK_OFFSET(0x1C87D130)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C87D120)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C87D110)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsProviderAttribute_TypeDefinitionIndex = 4228;

	class SettingsProviderAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::String* providerTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE__CTOR_OFFSET))(this, providerTypeName);
		}

		::System::Void _ctor_1(::System::Type* providerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE__CTOR_1_OFFSET))(this, providerType);
		}

		::System::String* get_ProviderTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE_GET_PROVIDERTYPENAME_OFFSET))(this);
		}
	};
}

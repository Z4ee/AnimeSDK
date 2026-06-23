#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Specialized { class NameValueCollection; }

#define SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1D456A00)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS_GET_APPSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D4569C0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D456980)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationSettings_TypeDefinitionIndex = 4204;

	class ConfigurationSettings : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Specialized::NameValueCollection* get_AppSettings()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS_GET_APPSETTINGS_OFFSET))();
		}

		static ::System::Object* GetConfig(::System::String* sectionName)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS_GETCONFIG_OFFSET))(sectionName);
		}
	};
}

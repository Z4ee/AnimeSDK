#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Net::Configuration { class ConnectionManagementElementCollection; }

#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_GET_CONNECTIONMANAGEMENT_OFFSET UNITYSDK_OFFSET(0x1BEC4430)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BEC4470)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC43F0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ConnectionManagementSection_TypeDefinitionIndex = 4121;

	class ConnectionManagementSection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::ConnectionManagementElementCollection* get_ConnectionManagement()
		{
			return ((::System::Net::Configuration::ConnectionManagementElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_GET_CONNECTIONMANAGEMENT_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_GET_PROPERTIES_OFFSET))(this);
		}
	};
}

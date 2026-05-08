#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Security/Authentication/ExtendedProtection/PolicyEnforcement.h"
#include "unitysdk/System/Security/Authentication/ExtendedProtection/ProtectionScenario.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Security::Authentication::ExtendedProtection { class ExtendedProtectionPolicy; }
namespace System::Security::Authentication::ExtendedProtection::Configuration { class ServiceNameElementCollection; }

#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_BUILDPOLICY_OFFSET UNITYSDK_OFFSET(0x1A260D50)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_GET_CUSTOMSERVICENAMES_OFFSET UNITYSDK_OFFSET(0x1A260BD0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_GET_POLICYENFORCEMENT_OFFSET UNITYSDK_OFFSET(0x1A260C10)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A260C90)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_GET_PROTECTIONSCENARIO_OFFSET UNITYSDK_OFFSET(0x1A260CD0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_SET_POLICYENFORCEMENT_OFFSET UNITYSDK_OFFSET(0x1A260C50)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_SET_PROTECTIONSCENARIO_OFFSET UNITYSDK_OFFSET(0x1A260D10)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A260B90)

namespace System::Security::Authentication::ExtendedProtection::Configuration
{
	inline static constexpr unsigned int ExtendedProtectionPolicyElement_TypeDefinitionIndex = 4087;

	class ExtendedProtectionPolicyElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT__CTOR_OFFSET))(this);
		}

		::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElementCollection* get_CustomServiceNames()
		{
			return ((::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_GET_CUSTOMSERVICENAMES_OFFSET))(this);
		}

		::System::Security::Authentication::ExtendedProtection::PolicyEnforcement get_PolicyEnforcement()
		{
			return ((::System::Security::Authentication::ExtendedProtection::PolicyEnforcement(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_GET_POLICYENFORCEMENT_OFFSET))(this);
		}

		::System::Void set_PolicyEnforcement(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_SET_POLICYENFORCEMENT_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Security::Authentication::ExtendedProtection::ProtectionScenario get_ProtectionScenario()
		{
			return ((::System::Security::Authentication::ExtendedProtection::ProtectionScenario(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_GET_PROTECTIONSCENARIO_OFFSET))(this);
		}

		::System::Void set_ProtectionScenario(::System::Security::Authentication::ExtendedProtection::ProtectionScenario value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::ProtectionScenario))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_SET_PROTECTIONSCENARIO_OFFSET))(this, value);
		}

		::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* BuildPolicy()
		{
			return ((::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_EXTENDEDPROTECTIONPOLICYELEMENT_BUILDPOLICY_OFFSET))(this);
		}
	};
}

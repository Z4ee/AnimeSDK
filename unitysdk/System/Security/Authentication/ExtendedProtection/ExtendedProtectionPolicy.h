#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Authentication/ExtendedProtection/PolicyEnforcement.h"
#include "unitysdk/System/Security/Authentication/ExtendedProtection/ProtectionScenario.h"

namespace System { class String; }
namespace System::Collections { class ICollection; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Authentication::ExtendedProtection { class ChannelBinding; }
namespace System::Security::Authentication::ExtendedProtection { class ServiceNameCollection; }

#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_GET_CUSTOMCHANNELBINDING_OFFSET UNITYSDK_OFFSET(0x1D256E70)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_GET_CUSTOMSERVICENAMES_OFFSET UNITYSDK_OFFSET(0x1D256EC0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_GET_OSSUPPORTSEXTENDEDPROTECTION_OFFSET UNITYSDK_OFFSET(0x1D256F10)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_GET_POLICYENFORCEMENT_OFFSET UNITYSDK_OFFSET(0x1D256F60)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_GET_PROTECTIONSCENARIO_OFFSET UNITYSDK_OFFSET(0x1D256FB0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D257040)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D257000)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D256D30)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D256D80)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D256DD0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D256E20)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D256D20)

namespace System::Security::Authentication::ExtendedProtection
{
	inline static constexpr unsigned int ExtendedProtectionPolicy_TypeDefinitionIndex = 3155;

	class ExtendedProtectionPolicy : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_OFFSET))(this, policyEnforcement);
		}

		::System::Void _ctor_1(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement, ::System::Security::Authentication::ExtendedProtection::ChannelBinding* customChannelBinding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_1_OFFSET))(this, policyEnforcement, customChannelBinding);
		}

		::System::Void _ctor_2(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement, ::System::Security::Authentication::ExtendedProtection::ProtectionScenario protectionScenario, ::System::Collections::ICollection* customServiceNames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement, ::System::Security::Authentication::ExtendedProtection::ProtectionScenario, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_2_OFFSET))(this, policyEnforcement, protectionScenario, customServiceNames);
		}

		::System::Void _ctor_3(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement, ::System::Security::Authentication::ExtendedProtection::ProtectionScenario protectionScenario, ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* customServiceNames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement, ::System::Security::Authentication::ExtendedProtection::ProtectionScenario, ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_3_OFFSET))(this, policyEnforcement, protectionScenario, customServiceNames);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_4_OFFSET))(this, info, context);
		}

		::System::Security::Authentication::ExtendedProtection::ChannelBinding* get_CustomChannelBinding()
		{
			return ((::System::Security::Authentication::ExtendedProtection::ChannelBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_GET_CUSTOMCHANNELBINDING_OFFSET))(this);
		}

		::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* get_CustomServiceNames()
		{
			return ((::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_GET_CUSTOMSERVICENAMES_OFFSET))(this);
		}

		static ::System::Boolean get_OSSupportsExtendedProtection()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_GET_OSSUPPORTSEXTENDEDPROTECTION_OFFSET))();
		}

		::System::Security::Authentication::ExtendedProtection::PolicyEnforcement get_PolicyEnforcement()
		{
			return ((::System::Security::Authentication::ExtendedProtection::PolicyEnforcement(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_GET_POLICYENFORCEMENT_OFFSET))(this);
		}

		::System::Security::Authentication::ExtendedProtection::ProtectionScenario get_ProtectionScenario()
		{
			return ((::System::Security::Authentication::ExtendedProtection::ProtectionScenario(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_GET_PROTECTIONSCENARIO_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_TOSTRING_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}

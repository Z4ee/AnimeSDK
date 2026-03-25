#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Authentication/ExtendedProtection/PolicyEnforcement.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18731190)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18731150)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18731100)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x187310F0)

namespace System::Security::Authentication::ExtendedProtection
{
	inline static constexpr unsigned int ExtendedProtectionPolicy_TypeDefinitionIndex = 2659;

	class ExtendedProtectionPolicy : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_OFFSET))(this, policyEnforcement);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_1_OFFSET))(this, info, context);
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

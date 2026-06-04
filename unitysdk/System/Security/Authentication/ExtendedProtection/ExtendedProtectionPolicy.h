#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Authentication/ExtendedProtection/PolicyEnforcement.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AFCF5D0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AFCF590)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFCF540)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCF530)

namespace System::Security::Authentication::ExtendedProtection
{
	inline static constexpr unsigned int ExtendedProtectionPolicy_TypeDefinitionIndex = 2660;

	class ExtendedProtectionPolicy : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_TOSTRING_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}

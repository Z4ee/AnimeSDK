#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Authentication/ExtendedProtection/TokenBindingType.h"

#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_TOKENBINDING_GETRAWTOKENBINDINGID_OFFSET UNITYSDK_OFFSET(0x1C4A48A0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_TOKENBINDING_GET_BINDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1C4A49A0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_TOKENBINDING_SET_BINDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1C4A49B0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_TOKENBINDING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4A49C0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_TOKENBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A4890)

namespace System::Security::Authentication::ExtendedProtection
{
	inline static constexpr unsigned int TokenBinding_TypeDefinitionIndex = 3152;

	class TokenBinding : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _rawTokenBindingId; // 0x10
		::System::Security::Authentication::ExtendedProtection::TokenBindingType _BindingType_k__BackingField; // 0x18

		::System::Void _ctor(::System::Security::Authentication::ExtendedProtection::TokenBindingType bindingType, ::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::TokenBindingType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_TOKENBINDING__CTOR_OFFSET))(this, bindingType, rawData);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_TOKENBINDING__CTOR_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetRawTokenBindingId()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_TOKENBINDING_GETRAWTOKENBINDINGID_OFFSET))(this);
		}

		::System::Security::Authentication::ExtendedProtection::TokenBindingType get_BindingType()
		{
			return ((::System::Security::Authentication::ExtendedProtection::TokenBindingType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_TOKENBINDING_GET_BINDINGTYPE_OFFSET))(this);
		}

		::System::Void set_BindingType(::System::Security::Authentication::ExtendedProtection::TokenBindingType value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::TokenBindingType))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_TOKENBINDING_SET_BINDINGTYPE_OFFSET))(this, value);
		}
	};
}

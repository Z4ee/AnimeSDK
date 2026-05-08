#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Security/Claims/ClaimsIdentity.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Security::Claims { class Claim; }

#define SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_ADDNAMECLAIM_OFFSET UNITYSDK_OFFSET(0x193E5490)
#define SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_CLONE_OFFSET UNITYSDK_OFFSET(0x193E55A0)
#define SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x193E5670)
#define SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_GET_CLAIMS_OFFSET UNITYSDK_OFFSET(0x193E5600)
#define SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x193E5660)
#define SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_ONDESERIALIZEDMETHOD_OFFSET UNITYSDK_OFFSET(0x193E5680)
#define SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193E5540)
#define SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x193E5570)
#define SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x193E5330)

namespace System::Security::Principal
{
	inline static constexpr unsigned int GenericIdentity_TypeDefinitionIndex = 1015;

	class GenericIdentity : public ::System::Security::Claims::ClaimsIdentity
	{
	public:
		::System::String* m_type; // 0x78
		::System::String* m_name; // 0x80

		::System::Void _ctor(::System::String* name, ::System::String* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY__CTOR_OFFSET))(this, name, type);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Security::Principal::GenericIdentity* identity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::GenericIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY__CTOR_2_OFFSET))(this, identity);
		}

		::System::Security::Claims::ClaimsIdentity* Clone()
		{
			return ((::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_CLONE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* get_Claims()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_GET_CLAIMS_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_GET_NAME_OFFSET))(this);
		}

		::System::String* get_AuthenticationType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET))(this);
		}

		::System::Void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_ONDESERIALIZEDMETHOD_OFFSET))(this, context);
		}

		::System::Void AddNameClaim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_ADDNAMECLAIM_OFFSET))(this);
		}
	};
}

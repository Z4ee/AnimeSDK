#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Claims/ClaimsPrincipal.h"

namespace System { class String; }
namespace System::Security::Principal { class IIdentity; }

#define SYSTEM_SECURITY_PRINCIPAL_GENERICPRINCIPAL_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1C705220)
#define SYSTEM_SECURITY_PRINCIPAL_GENERICPRINCIPAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C705080)

namespace System::Security::Principal
{
	inline static constexpr unsigned int GenericPrincipal_TypeDefinitionIndex = 1015;

	class GenericPrincipal : public ::System::Security::Claims::ClaimsPrincipal
	{
	public:
		::Il2CppArray<::System::String*>* m_roles; // 0x30
		::System::Security::Principal::IIdentity* m_identity; // 0x38

		::System::Void _ctor(::System::Security::Principal::IIdentity* identity, ::Il2CppArray<::System::String*>* roles)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IIdentity*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICPRINCIPAL__CTOR_OFFSET))(this, identity, roles);
		}

		::System::Security::Principal::IIdentity* get_Identity()
		{
			return ((::System::Security::Principal::IIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICPRINCIPAL_GET_IDENTITY_OFFSET))(this);
		}
	};
}

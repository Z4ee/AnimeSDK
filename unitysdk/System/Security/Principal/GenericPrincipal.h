#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Claims/ClaimsPrincipal.h"

namespace System { class String; }
namespace System::Security::Principal { class IIdentity; }

#define SYSTEM_SECURITY_PRINCIPAL_GENERICPRINCIPAL__CTOR_OFFSET UNITYSDK_OFFSET(0x150B7550)

namespace System::Security::Principal
{
	inline static constexpr unsigned int GenericPrincipal_TypeDefinitionIndex = 977;

	class GenericPrincipal : public ::System::Security::Claims::ClaimsPrincipal
	{
	public:
		::System::Security::Principal::IIdentity* m_identity; // 0x30
		::Il2CppArray<::System::String*>* m_roles; // 0x38

		::System::Void _ctor(::System::Security::Principal::IIdentity* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IIdentity*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_GENERICPRINCIPAL__CTOR_OFFSET))(this, a1, a2);
		}
	};
}

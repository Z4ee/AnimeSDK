#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AccessControlType.h"
#include "unitysdk/System/Security/AccessControl/AuthorizationRule.h"
#include "unitysdk/System/Security/AccessControl/InheritanceFlags.h"
#include "unitysdk/System/Security/AccessControl/PropagationFlags.h"

namespace System::Security::Principal { class IdentityReference; }

#define SYSTEM_SECURITY_ACCESSCONTROL_ACCESSRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B936200)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AccessRule_TypeDefinitionIndex = 964;

	class AccessRule : public ::System::Security::AccessControl::AuthorizationRule
	{
	public:
		::System::Security::AccessControl::AccessControlType type; // 0x28

		::System::Void _ctor(::System::Security::Principal::IdentityReference* identity, ::System::Int32 accessMask, ::System::Boolean isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IdentityReference*, ::System::Int32, ::System::Boolean, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AccessControlType))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_ACCESSRULE__CTOR_OFFSET))(this, identity, accessMask, isInherited, inheritanceFlags, propagationFlags, type);
		}
	};
}

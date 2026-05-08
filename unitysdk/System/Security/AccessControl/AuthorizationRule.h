#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/AccessControl/InheritanceFlags.h"
#include "unitysdk/System/Security/AccessControl/PropagationFlags.h"

namespace System::Security::Principal { class IdentityReference; }

#define SYSTEM_SECURITY_ACCESSCONTROL_AUTHORIZATIONRULE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19553630)
#define SYSTEM_SECURITY_ACCESSCONTROL_AUTHORIZATIONRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x19553790)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AuthorizationRule_TypeDefinitionIndex = 972;

	class AuthorizationRule : public ::System::Object
	{
	public:
		::System::Security::Principal::IdentityReference* identity; // 0x10
		::System::Security::AccessControl::InheritanceFlags inheritanceFlags; // 0x18
		::System::Security::AccessControl::PropagationFlags propagationFlags; // 0x1C
		::System::Int32 accessMask; // 0x20
		::System::Boolean isInherited; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_AUTHORIZATIONRULE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Principal::IdentityReference* identity, ::System::Int32 accessMask, ::System::Boolean isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IdentityReference*, ::System::Int32, ::System::Boolean, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_AUTHORIZATIONRULE__CTOR_1_OFFSET))(this, identity, accessMask, isInherited, inheritanceFlags, propagationFlags);
		}
	};
}

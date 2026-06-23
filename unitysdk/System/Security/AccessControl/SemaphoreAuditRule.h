#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AuditFlags.h"
#include "unitysdk/System/Security/AccessControl/AuditRule.h"
#include "unitysdk/System/Security/AccessControl/SemaphoreRights.h"

namespace System::Security::Principal { class IdentityReference; }

#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHOREAUDITRULE_GET_SEMAPHORERIGHTS_OFFSET UNITYSDK_OFFSET(0x1CEDFA90)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHOREAUDITRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDF9F0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int SemaphoreAuditRule_TypeDefinitionIndex = 3139;

	class SemaphoreAuditRule : public ::System::Security::AccessControl::AuditRule
	{
	public:
		::System::Void _ctor(::System::Security::Principal::IdentityReference* identity, ::System::Security::AccessControl::SemaphoreRights eventRights, ::System::Security::AccessControl::AuditFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IdentityReference*, ::System::Security::AccessControl::SemaphoreRights, ::System::Security::AccessControl::AuditFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHOREAUDITRULE__CTOR_OFFSET))(this, identity, eventRights, flags);
		}

		::System::Security::AccessControl::SemaphoreRights get_SemaphoreRights()
		{
			return ((::System::Security::AccessControl::SemaphoreRights(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHOREAUDITRULE_GET_SEMAPHORERIGHTS_OFFSET))(this);
		}
	};
}

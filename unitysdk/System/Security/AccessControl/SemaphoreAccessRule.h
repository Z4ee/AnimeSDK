#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AccessControlType.h"
#include "unitysdk/System/Security/AccessControl/AccessRule.h"
#include "unitysdk/System/Security/AccessControl/SemaphoreRights.h"

namespace System { class String; }
namespace System::Security::Principal { class IdentityReference; }

#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHOREACCESSRULE_GET_SEMAPHORERIGHTS_OFFSET UNITYSDK_OFFSET(0x1C89B450)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHOREACCESSRULE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C89B370)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHOREACCESSRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C89B2D0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int SemaphoreAccessRule_TypeDefinitionIndex = 3138;

	class SemaphoreAccessRule : public ::System::Security::AccessControl::AccessRule
	{
	public:
		::System::Void _ctor(::System::Security::Principal::IdentityReference* identity, ::System::Security::AccessControl::SemaphoreRights eventRights, ::System::Security::AccessControl::AccessControlType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IdentityReference*, ::System::Security::AccessControl::SemaphoreRights, ::System::Security::AccessControl::AccessControlType))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHOREACCESSRULE__CTOR_OFFSET))(this, identity, eventRights, type);
		}

		::System::Void _ctor_1(::System::String* identity, ::System::Security::AccessControl::SemaphoreRights eventRights, ::System::Security::AccessControl::AccessControlType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::AccessControl::SemaphoreRights, ::System::Security::AccessControl::AccessControlType))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHOREACCESSRULE__CTOR_1_OFFSET))(this, identity, eventRights, type);
		}

		::System::Security::AccessControl::SemaphoreRights get_SemaphoreRights()
		{
			return ((::System::Security::AccessControl::SemaphoreRights(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHOREACCESSRULE_GET_SEMAPHORERIGHTS_OFFSET))(this);
		}
	};
}

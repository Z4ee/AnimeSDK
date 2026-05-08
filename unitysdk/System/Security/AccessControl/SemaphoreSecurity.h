#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AccessControlSections.h"
#include "unitysdk/System/Security/AccessControl/AccessControlType.h"
#include "unitysdk/System/Security/AccessControl/AuditFlags.h"
#include "unitysdk/System/Security/AccessControl/InheritanceFlags.h"
#include "unitysdk/System/Security/AccessControl/NativeObjectSecurity.h"
#include "unitysdk/System/Security/AccessControl/PropagationFlags.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::InteropServices { class SafeHandle; }
namespace System::Security::AccessControl { class AccessRule; }
namespace System::Security::AccessControl { class AuditRule; }
namespace System::Security::AccessControl { class SemaphoreAccessRule; }
namespace System::Security::AccessControl { class SemaphoreAuditRule; }
namespace System::Security::Principal { class IdentityReference; }

#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_ACCESSRULEFACTORY_OFFSET UNITYSDK_OFFSET(0x1A334600)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_ADDACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1A3346D0)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_ADDAUDITRULE_OFFSET UNITYSDK_OFFSET(0x1A3348B0)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_AUDITRULEFACTORY_OFFSET UNITYSDK_OFFSET(0x1A3347E0)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_GET_ACCESSRIGHTTYPE_OFFSET UNITYSDK_OFFSET(0x1A334570)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_GET_ACCESSRULETYPE_OFFSET UNITYSDK_OFFSET(0x1A3345A0)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_GET_AUDITRULETYPE_OFFSET UNITYSDK_OFFSET(0x1A3345D0)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_PERSIST_OFFSET UNITYSDK_OFFSET(0x1A334990)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEACCESSRULEALL_OFFSET UNITYSDK_OFFSET(0x1A334720)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEACCESSRULESPECIFIC_OFFSET UNITYSDK_OFFSET(0x1A334750)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1A3346F0)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEAUDITRULEALL_OFFSET UNITYSDK_OFFSET(0x1A334900)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEAUDITRULESPECIFIC_OFFSET UNITYSDK_OFFSET(0x1A334930)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEAUDITRULE_OFFSET UNITYSDK_OFFSET(0x1A3348D0)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_RESETACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1A334780)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_SETACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1A3347B0)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_SETAUDITRULE_OFFSET UNITYSDK_OFFSET(0x1A334960)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A334510)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A334540)
#define SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3344E0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int SemaphoreSecurity_TypeDefinitionIndex = 3142;

	class SemaphoreSecurity : public ::System::Security::AccessControl::NativeObjectSecurity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Security::AccessControl::AccessControlSections includeSections)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY__CTOR_1_OFFSET))(this, name, includeSections);
		}

		::System::Void _ctor_2(::System::Runtime::InteropServices::SafeHandle* handle, ::System::Security::AccessControl::AccessControlSections includeSections)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::SafeHandle*, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY__CTOR_2_OFFSET))(this, handle, includeSections);
		}

		::System::Type* get_AccessRightType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_GET_ACCESSRIGHTTYPE_OFFSET))(this);
		}

		::System::Type* get_AccessRuleType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_GET_ACCESSRULETYPE_OFFSET))(this);
		}

		::System::Type* get_AuditRuleType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_GET_AUDITRULETYPE_OFFSET))(this);
		}

		::System::Security::AccessControl::AccessRule* AccessRuleFactory(::System::Security::Principal::IdentityReference* identityReference, ::System::Int32 accessMask, ::System::Boolean isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type)
		{
			return ((::System::Security::AccessControl::AccessRule*(*)(::PVOID, ::System::Security::Principal::IdentityReference*, ::System::Int32, ::System::Boolean, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AccessControlType))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_ACCESSRULEFACTORY_OFFSET))(this, identityReference, accessMask, isInherited, inheritanceFlags, propagationFlags, type);
		}

		::System::Void AddAccessRule(::System::Security::AccessControl::SemaphoreAccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::SemaphoreAccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_ADDACCESSRULE_OFFSET))(this, rule);
		}

		::System::Boolean RemoveAccessRule(::System::Security::AccessControl::SemaphoreAccessRule* rule)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::SemaphoreAccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEACCESSRULE_OFFSET))(this, rule);
		}

		::System::Void RemoveAccessRuleAll(::System::Security::AccessControl::SemaphoreAccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::SemaphoreAccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEACCESSRULEALL_OFFSET))(this, rule);
		}

		::System::Void RemoveAccessRuleSpecific(::System::Security::AccessControl::SemaphoreAccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::SemaphoreAccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEACCESSRULESPECIFIC_OFFSET))(this, rule);
		}

		::System::Void ResetAccessRule(::System::Security::AccessControl::SemaphoreAccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::SemaphoreAccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_RESETACCESSRULE_OFFSET))(this, rule);
		}

		::System::Void SetAccessRule(::System::Security::AccessControl::SemaphoreAccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::SemaphoreAccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_SETACCESSRULE_OFFSET))(this, rule);
		}

		::System::Security::AccessControl::AuditRule* AuditRuleFactory(::System::Security::Principal::IdentityReference* identityReference, ::System::Int32 accessMask, ::System::Boolean isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags flags)
		{
			return ((::System::Security::AccessControl::AuditRule*(*)(::PVOID, ::System::Security::Principal::IdentityReference*, ::System::Int32, ::System::Boolean, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_AUDITRULEFACTORY_OFFSET))(this, identityReference, accessMask, isInherited, inheritanceFlags, propagationFlags, flags);
		}

		::System::Void AddAuditRule(::System::Security::AccessControl::SemaphoreAuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::SemaphoreAuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_ADDAUDITRULE_OFFSET))(this, rule);
		}

		::System::Boolean RemoveAuditRule(::System::Security::AccessControl::SemaphoreAuditRule* rule)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::SemaphoreAuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEAUDITRULE_OFFSET))(this, rule);
		}

		::System::Void RemoveAuditRuleAll(::System::Security::AccessControl::SemaphoreAuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::SemaphoreAuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEAUDITRULEALL_OFFSET))(this, rule);
		}

		::System::Void RemoveAuditRuleSpecific(::System::Security::AccessControl::SemaphoreAuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::SemaphoreAuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_REMOVEAUDITRULESPECIFIC_OFFSET))(this, rule);
		}

		::System::Void SetAuditRule(::System::Security::AccessControl::SemaphoreAuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::SemaphoreAuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_SETAUDITRULE_OFFSET))(this, rule);
		}

		::System::Void Persist(::System::Runtime::InteropServices::SafeHandle* handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::SafeHandle*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SEMAPHORESECURITY_PERSIST_OFFSET))(this, handle);
		}
	};
}

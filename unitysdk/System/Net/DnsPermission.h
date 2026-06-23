#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_NET_DNSPERMISSION_COPY_OFFSET UNITYSDK_OFFSET(0x1D5D25B0)
#define SYSTEM_NET_DNSPERMISSION_FROMXML_OFFSET UNITYSDK_OFFSET(0x1D5D25F0)
#define SYSTEM_NET_DNSPERMISSION_INTERSECT_OFFSET UNITYSDK_OFFSET(0x1D5D2630)
#define SYSTEM_NET_DNSPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x1D5D2670)
#define SYSTEM_NET_DNSPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1D5D26B0)
#define SYSTEM_NET_DNSPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x1D5D26F0)
#define SYSTEM_NET_DNSPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D2570)

namespace System::Net
{
	inline static constexpr unsigned int DnsPermission_TypeDefinitionIndex = 4110;

	class DnsPermission : public ::System::Security::CodeAccessPermission
	{
	public:
		::System::Void _ctor(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSPERMISSION__CTOR_OFFSET))(this, state);
		}

		::System::Security::IPermission* Copy()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSPERMISSION_COPY_OFFSET))(this);
		}

		::System::Void FromXml(::System::Security::SecurityElement* securityElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSPERMISSION_FROMXML_OFFSET))(this, securityElement);
		}

		::System::Security::IPermission* Intersect(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSPERMISSION_INTERSECT_OFFSET))(this, target);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSPERMISSION_ISSUBSETOF_OFFSET))(this, target);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSPERMISSION_TOXML_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInformationAccess.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_ADDPERMISSION_OFFSET UNITYSDK_OFFSET(0x1C1CFBB0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_COPY_OFFSET UNITYSDK_OFFSET(0x1C1CFBD0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_FROMXML_OFFSET UNITYSDK_OFFSET(0x1C1CFE70)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_GET_ACCESS_OFFSET UNITYSDK_OFFSET(0x1C1CFBA0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_INTERSECT_OFFSET UNITYSDK_OFFSET(0x1C1CFD20)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x1C1CFDD0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1C1CFBC0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x1C1D04D0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_UNION_OFFSET UNITYSDK_OFFSET(0x1C1CFC30)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1CFB80)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C1CFB90)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1CFB60)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInformationPermission_TypeDefinitionIndex = 3730;

	class NetworkInformationPermission : public ::System::Security::CodeAccessPermission
	{
	public:
		::System::Boolean unrestricted; // 0x10
		::System::Net::NetworkInformation::NetworkInformationAccess access; // 0x14

		::System::Void _ctor(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION__CTOR_OFFSET))(this, state);
		}

		::System::Void _ctor_1(::System::Boolean unrestricted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION__CTOR_1_OFFSET))(this, unrestricted);
		}

		::System::Void _ctor_2(::System::Net::NetworkInformation::NetworkInformationAccess access)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkInformationAccess))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION__CTOR_2_OFFSET))(this, access);
		}

		::System::Net::NetworkInformation::NetworkInformationAccess get_Access()
		{
			return ((::System::Net::NetworkInformation::NetworkInformationAccess(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_GET_ACCESS_OFFSET))(this);
		}

		::System::Void AddPermission(::System::Net::NetworkInformation::NetworkInformationAccess access)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkInformationAccess))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_ADDPERMISSION_OFFSET))(this, access);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Security::IPermission* Copy()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_COPY_OFFSET))(this);
		}

		::System::Security::IPermission* Union(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_UNION_OFFSET))(this, target);
		}

		::System::Security::IPermission* Intersect(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_INTERSECT_OFFSET))(this, target);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_ISSUBSETOF_OFFSET))(this, target);
		}

		::System::Void FromXml(::System::Security::SecurityElement* securityElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_FROMXML_OFFSET))(this, securityElement);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONPERMISSION_TOXML_OFFSET))(this);
		}
	};
}

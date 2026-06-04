#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_CODEACCESSPERMISSION_CHECKPERMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x187E43D0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_DEMAND_OFFSET UNITYSDK_OFFSET(0x187E40B0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_ELEMENT_OFFSET UNITYSDK_OFFSET(0x187E42A0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x187E40E0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x187E4260)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_SYSTEM_SECURITY_IPERMISSION_DEMAND_OFFSET UNITYSDK_OFFSET(0x187E44F0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_THROWINVALIDPERMISSION_OFFSET UNITYSDK_OFFSET(0x187E4460)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x187E4270)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x187E40A0)

namespace System::Security
{
	inline static constexpr unsigned int CodeAccessPermission_TypeDefinitionIndex = 935;

	class CodeAccessPermission : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION__CTOR_OFFSET))(this);
		}

		::System::Void Demand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_DEMAND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_TOSTRING_OFFSET))(this);
		}

		::System::Security::SecurityElement* Element(::System::Int32 a1)
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_ELEMENT_OFFSET))(this, a1);
		}

		static ::System::Security::Permissions::PermissionState CheckPermissionState(::System::Security::Permissions::PermissionState a1, ::System::Boolean a2)
		{
			return ((::System::Security::Permissions::PermissionState(*)(::System::Security::Permissions::PermissionState, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_CHECKPERMISSIONSTATE_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowInvalidPermission(::System::Security::IPermission* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::System::Security::IPermission*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_THROWINVALIDPERMISSION_OFFSET))(a1, a2);
		}

		::System::Void System_Security_IPermission_Demand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_SYSTEM_SECURITY_IPERMISSION_DEMAND_OFFSET))(this);
		}
	};
}

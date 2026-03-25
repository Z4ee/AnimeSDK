#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_CODEACCESSPERMISSION_CHECKPERMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x16409190)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_DEMAND_OFFSET UNITYSDK_OFFSET(0x16408E70)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_ELEMENT_OFFSET UNITYSDK_OFFSET(0x16409060)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x16408EA0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16409020)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_SYSTEM_SECURITY_IPERMISSION_DEMAND_OFFSET UNITYSDK_OFFSET(0x164092B0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_THROWINVALIDPERMISSION_OFFSET UNITYSDK_OFFSET(0x16409220)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16409030)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x16408E60)

namespace System::Security
{
	inline static constexpr unsigned int CodeAccessPermission_TypeDefinitionIndex = 934;

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

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_TOSTRING_OFFSET))(this);
		}

		::System::Security::SecurityElement* Element(::System::Int32 version)
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_ELEMENT_OFFSET))(this, version);
		}

		static ::System::Security::Permissions::PermissionState CheckPermissionState(::System::Security::Permissions::PermissionState state, ::System::Boolean allowUnrestricted)
		{
			return ((::System::Security::Permissions::PermissionState(*)(::System::Security::Permissions::PermissionState, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_CHECKPERMISSIONSTATE_OFFSET))(state, allowUnrestricted);
		}

		static ::System::Void ThrowInvalidPermission(::System::Security::IPermission* target, ::System::Type* expected)
		{
			return ((::System::Void(*)(::System::Security::IPermission*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_THROWINVALIDPERMISSION_OFFSET))(target, expected);
		}

		::System::Void System_Security_IPermission_Demand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_SYSTEM_SECURITY_IPERMISSION_DEMAND_OFFSET))(this);
		}
	};
}

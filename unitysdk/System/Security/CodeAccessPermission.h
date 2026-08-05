#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_CODEACCESSPERMISSION_CHECKPERMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x1D1A76A0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_CHECKSECURITYELEMENT_OFFSET UNITYSDK_OFFSET(0x1D1A7730)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_DEMAND_OFFSET UNITYSDK_OFFSET(0x1D1A73D0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_ELEMENT_OFFSET UNITYSDK_OFFSET(0x1D1A7560)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D1A73E0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D1A74C0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1D1A7A00)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_THROWINVALIDPERMISSION_OFFSET UNITYSDK_OFFSET(0x1D1A7B10)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D1A74D0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_UNION_OFFSET UNITYSDK_OFFSET(0x1D1A7500)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A73C0)

namespace System::Security
{
	inline static constexpr unsigned int CodeAccessPermission_TypeDefinitionIndex = 941;

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

		::System::Security::IPermission* Union(::System::Security::IPermission* other)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_UNION_OFFSET))(this, other);
		}

		::System::Security::SecurityElement* Element(::System::Int32 version)
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_ELEMENT_OFFSET))(this, version);
		}

		static ::System::Security::Permissions::PermissionState CheckPermissionState(::System::Security::Permissions::PermissionState state, ::System::Boolean allowUnrestricted)
		{
			return ((::System::Security::Permissions::PermissionState(*)(::System::Security::Permissions::PermissionState, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_CHECKPERMISSIONSTATE_OFFSET))(state, allowUnrestricted);
		}

		static ::System::Int32 CheckSecurityElement(::System::Security::SecurityElement* se, ::System::String* parameterName, ::System::Int32 minimumVersion, ::System::Int32 maximumVersion)
		{
			return ((::System::Int32(*)(::System::Security::SecurityElement*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_CHECKSECURITYELEMENT_OFFSET))(se, parameterName, minimumVersion, maximumVersion);
		}

		static ::System::Boolean IsUnrestricted(::System::Security::SecurityElement* se)
		{
			return ((::System::Boolean(*)(::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_ISUNRESTRICTED_OFFSET))(se);
		}

		static ::System::Void ThrowInvalidPermission(::System::Security::IPermission* target, ::System::Type* expected)
		{
			return ((::System::Void(*)(::System::Security::IPermission*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_THROWINVALIDPERMISSION_OFFSET))(target, expected);
		}
	};
}

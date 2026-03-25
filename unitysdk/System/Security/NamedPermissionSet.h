#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/PermissionSet.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x161E8230)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x161E84E0)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_GET_NAME_OFFSET UNITYSDK_OFFSET(0x161E7C50)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_SET_NAME_OFFSET UNITYSDK_OFFSET(0x161E7B30)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_TOXML_OFFSET UNITYSDK_OFFSET(0x161E7C60)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161E7A20)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x161E7C40)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x161E7940)

namespace System::Security
{
	inline static constexpr unsigned int NamedPermissionSet_TypeDefinitionIndex = 937;

	class NamedPermissionSet : public ::System::Security::PermissionSet
	{
	public:
		::System::String* name; // 0x30
		::System::String* description; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET__CTOR_1_OFFSET))(this, name, state);
		}

		::System::Void _ctor_2(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET__CTOR_2_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_SET_NAME_OFFSET))(this, value);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_TOXML_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_GETHASHCODE_OFFSET))(this);
		}
	};
}

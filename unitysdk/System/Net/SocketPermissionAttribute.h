#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/CodeAccessSecurityAttribute.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"

namespace System { class String; }
namespace System::Security { class IPermission; }

#define SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_ALREADYSET_OFFSET UNITYSDK_OFFSET(0x1CED0440)
#define SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET UNITYSDK_OFFSET(0x1CED06F0)
#define SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_GET_ACCESS_OFFSET UNITYSDK_OFFSET(0x1CED0380)
#define SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1CED04B0)
#define SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1CED0570)
#define SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_GET_TRANSPORT_OFFSET UNITYSDK_OFFSET(0x1CED0630)
#define SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_SET_ACCESS_OFFSET UNITYSDK_OFFSET(0x1CED0390)
#define SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_SET_HOST_OFFSET UNITYSDK_OFFSET(0x1CED04C0)
#define SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_SET_PORT_OFFSET UNITYSDK_OFFSET(0x1CED0580)
#define SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_SET_TRANSPORT_OFFSET UNITYSDK_OFFSET(0x1CED0640)
#define SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED0370)

namespace System::Net
{
	inline static constexpr unsigned int SocketPermissionAttribute_TypeDefinitionIndex = 3561;

	class SocketPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute
	{
	public:
		::System::String* m_access; // 0x18
		::System::String* m_host; // 0x20
		::System::String* m_transport; // 0x28
		::System::String* m_port; // 0x30

		::System::Void _ctor(::System::Security::Permissions::SecurityAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityAction))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE__CTOR_OFFSET))(this, action);
		}

		::System::String* get_Access()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_GET_ACCESS_OFFSET))(this);
		}

		::System::Void set_Access(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_SET_ACCESS_OFFSET))(this, value);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Host(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_SET_HOST_OFFSET))(this, value);
		}

		::System::String* get_Port()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_SET_PORT_OFFSET))(this, value);
		}

		::System::String* get_Transport()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_GET_TRANSPORT_OFFSET))(this);
		}

		::System::Void set_Transport(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_SET_TRANSPORT_OFFSET))(this, value);
		}

		::System::Security::IPermission* CreatePermission()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET))(this);
		}

		::System::Void AlreadySet(::System::String* property)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSIONATTRIBUTE_ALREADYSET_OFFSET))(this, property);
		}
	};
}

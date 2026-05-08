#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/CodeAccessSecurityAttribute.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Security { class IPermission; }

#define SYSTEM_NET_WEBPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET UNITYSDK_OFFSET(0x1A5872A0)
#define SYSTEM_NET_WEBPERMISSIONATTRIBUTE_GET_ACCEPTPATTERN_OFFSET UNITYSDK_OFFSET(0x1A587060)
#define SYSTEM_NET_WEBPERMISSIONATTRIBUTE_GET_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1A586D20)
#define SYSTEM_NET_WEBPERMISSIONATTRIBUTE_GET_CONNECTPATTERN_OFFSET UNITYSDK_OFFSET(0x1A586E20)
#define SYSTEM_NET_WEBPERMISSIONATTRIBUTE_GET_CONNECT_OFFSET UNITYSDK_OFFSET(0x1A586C20)
#define SYSTEM_NET_WEBPERMISSIONATTRIBUTE_SET_ACCEPTPATTERN_OFFSET UNITYSDK_OFFSET(0x1A587100)
#define SYSTEM_NET_WEBPERMISSIONATTRIBUTE_SET_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1A586D40)
#define SYSTEM_NET_WEBPERMISSIONATTRIBUTE_SET_CONNECTPATTERN_OFFSET UNITYSDK_OFFSET(0x1A586EC0)
#define SYSTEM_NET_WEBPERMISSIONATTRIBUTE_SET_CONNECT_OFFSET UNITYSDK_OFFSET(0x1A586C40)
#define SYSTEM_NET_WEBPERMISSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A586C10)

namespace System::Net
{
	inline static constexpr unsigned int WebPermissionAttribute_TypeDefinitionIndex = 3347;

	class WebPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute
	{
	public:
		::System::Object* m_connect; // 0x18
		::System::Object* m_accept; // 0x20

		::System::Void _ctor(::System::Security::Permissions::SecurityAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityAction))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSIONATTRIBUTE__CTOR_OFFSET))(this, action);
		}

		::System::String* get_Connect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSIONATTRIBUTE_GET_CONNECT_OFFSET))(this);
		}

		::System::Void set_Connect(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSIONATTRIBUTE_SET_CONNECT_OFFSET))(this, value);
		}

		::System::String* get_Accept()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSIONATTRIBUTE_GET_ACCEPT_OFFSET))(this);
		}

		::System::Void set_Accept(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSIONATTRIBUTE_SET_ACCEPT_OFFSET))(this, value);
		}

		::System::String* get_ConnectPattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSIONATTRIBUTE_GET_CONNECTPATTERN_OFFSET))(this);
		}

		::System::Void set_ConnectPattern(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSIONATTRIBUTE_SET_CONNECTPATTERN_OFFSET))(this, value);
		}

		::System::String* get_AcceptPattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSIONATTRIBUTE_GET_ACCEPTPATTERN_OFFSET))(this);
		}

		::System::Void set_AcceptPattern(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSIONATTRIBUTE_SET_ACCEPTPATTERN_OFFSET))(this, value);
		}

		::System::Security::IPermission* CreatePermission()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET))(this);
		}
	};
}

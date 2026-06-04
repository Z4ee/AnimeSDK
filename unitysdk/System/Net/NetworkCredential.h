#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Security { class SecureString; }

#define SYSTEM_NET_NETWORKCREDENTIAL_GETCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x1AF68700)
#define SYSTEM_NET_NETWORKCREDENTIAL_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1AF7B5E0)
#define SYSTEM_NET_NETWORKCREDENTIAL_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1AF68720)
#define SYSTEM_NET_NETWORKCREDENTIAL_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1AF68710)
#define SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETDOMAIN_OFFSET UNITYSDK_OFFSET(0x1AF99CE0)
#define SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x1AF99CC0)
#define SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETUSERNAME_OFFSET UNITYSDK_OFFSET(0x1AF99CD0)
#define SYSTEM_NET_NETWORKCREDENTIAL_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1AF99CA0)
#define SYSTEM_NET_NETWORKCREDENTIAL_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1AF99C30)
#define SYSTEM_NET_NETWORKCREDENTIAL_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1AF99C10)
#define SYSTEM_NET_NETWORKCREDENTIAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF99B60)
#define SYSTEM_NET_NETWORKCREDENTIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF99AB0)

namespace System::Net
{
	inline static constexpr unsigned int NetworkCredential_TypeDefinitionIndex = 2743;

	class NetworkCredential : public ::System::Object
	{
	public:
		::System::String* m_domain; // 0x10
		::System::Security::SecureString* m_password; // 0x18
		::System::String* m_userName; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_GET_USERNAME_OFFSET))(this);
		}

		::System::Void set_UserName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_SET_USERNAME_OFFSET))(this, a1);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_SET_PASSWORD_OFFSET))(this, a1);
		}

		::System::String* get_Domain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_GET_DOMAIN_OFFSET))(this);
		}

		::System::Void set_Domain(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_SET_DOMAIN_OFFSET))(this, a1);
		}

		::System::String* InternalGetUserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETUSERNAME_OFFSET))(this);
		}

		::System::String* InternalGetPassword()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETPASSWORD_OFFSET))(this);
		}

		::System::String* InternalGetDomain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETDOMAIN_OFFSET))(this);
		}

		::System::Net::NetworkCredential* GetCredential(::System::Uri* a1, ::System::String* a2)
		{
			return ((::System::Net::NetworkCredential*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_GETCREDENTIAL_OFFSET))(this, a1, a2);
		}
	};
}

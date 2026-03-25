#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Security { class SecureString; }

#define SYSTEM_NET_NETWORKCREDENTIAL_GETCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x186C7E20)
#define SYSTEM_NET_NETWORKCREDENTIAL_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x186DBBF0)
#define SYSTEM_NET_NETWORKCREDENTIAL_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x186C7E40)
#define SYSTEM_NET_NETWORKCREDENTIAL_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x186C7E30)
#define SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETDOMAIN_OFFSET UNITYSDK_OFFSET(0x186FAAD0)
#define SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x186FAAB0)
#define SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETUSERNAME_OFFSET UNITYSDK_OFFSET(0x186FAAC0)
#define SYSTEM_NET_NETWORKCREDENTIAL_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x186FAA90)
#define SYSTEM_NET_NETWORKCREDENTIAL_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x186FAA20)
#define SYSTEM_NET_NETWORKCREDENTIAL_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x186FAA00)
#define SYSTEM_NET_NETWORKCREDENTIAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186FA950)
#define SYSTEM_NET_NETWORKCREDENTIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x186FA8A0)

namespace System::Net
{
	inline static constexpr unsigned int NetworkCredential_TypeDefinitionIndex = 2742;

	class NetworkCredential : public ::System::Object
	{
	public:
		::System::Security::SecureString* m_password; // 0x10
		::System::String* m_domain; // 0x18
		::System::String* m_userName; // 0x20

		::System::Void _ctor(::System::String* userName, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL__CTOR_OFFSET))(this, userName, password);
		}

		::System::Void _ctor_1(::System::String* userName, ::System::String* password, ::System::String* domain)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL__CTOR_1_OFFSET))(this, userName, password, domain);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_GET_USERNAME_OFFSET))(this);
		}

		::System::Void set_UserName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_SET_USERNAME_OFFSET))(this, value);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::String* get_Domain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_GET_DOMAIN_OFFSET))(this);
		}

		::System::Void set_Domain(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_SET_DOMAIN_OFFSET))(this, value);
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

		::System::Net::NetworkCredential* GetCredential(::System::Uri* uri, ::System::String* authType)
		{
			return ((::System::Net::NetworkCredential*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_GETCREDENTIAL_OFFSET))(this, uri, authType);
		}
	};
}

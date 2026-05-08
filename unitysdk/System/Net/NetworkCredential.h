#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Security { class SecureString; }

#define SYSTEM_NET_NETWORKCREDENTIAL_GETCREDENTIAL_1_OFFSET UNITYSDK_OFFSET(0x1A2571F0)
#define SYSTEM_NET_NETWORKCREDENTIAL_GETCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x1A2571E0)
#define SYSTEM_NET_NETWORKCREDENTIAL_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1A256EA0)
#define SYSTEM_NET_NETWORKCREDENTIAL_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1A256DB0)
#define SYSTEM_NET_NETWORKCREDENTIAL_GET_SECUREPASSWORD_OFFSET UNITYSDK_OFFSET(0x1A256E80)
#define SYSTEM_NET_NETWORKCREDENTIAL_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1A256DA0)
#define SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETDOMAINUSERNAME_OFFSET UNITYSDK_OFFSET(0x1A257180)
#define SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETDOMAIN_OFFSET UNITYSDK_OFFSET(0x1A257170)
#define SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x1A256DC0)
#define SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETSECUREPASSWORD_OFFSET UNITYSDK_OFFSET(0x1A257160)
#define SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETUSERNAME_OFFSET UNITYSDK_OFFSET(0x1A256EB0)
#define SYSTEM_NET_NETWORKCREDENTIAL_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1A256CF0)
#define SYSTEM_NET_NETWORKCREDENTIAL_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1A256CD0)
#define SYSTEM_NET_NETWORKCREDENTIAL_SET_SECUREPASSWORD_OFFSET UNITYSDK_OFFSET(0x1A256D10)
#define SYSTEM_NET_NETWORKCREDENTIAL_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1A256CB0)
#define SYSTEM_NET_NETWORKCREDENTIAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A256AD0)
#define SYSTEM_NET_NETWORKCREDENTIAL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A256B20)
#define SYSTEM_NET_NETWORKCREDENTIAL__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A256A80)
#define SYSTEM_NET_NETWORKCREDENTIAL__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A256BE0)
#define SYSTEM_NET_NETWORKCREDENTIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2569D0)

namespace System::Net
{
	inline static constexpr unsigned int NetworkCredential_TypeDefinitionIndex = 3331;

	class NetworkCredential : public ::System::Object
	{
	public:
		::System::String* m_userName; // 0x10
		::System::Security::SecureString* m_password; // 0x18
		::System::String* m_domain; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* userName, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL__CTOR_1_OFFSET))(this, userName, password);
		}

		::System::Void _ctor_2(::System::String* userName, ::System::Security::SecureString* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL__CTOR_2_OFFSET))(this, userName, password);
		}

		::System::Void _ctor_3(::System::String* userName, ::System::String* password, ::System::String* domain)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL__CTOR_3_OFFSET))(this, userName, password, domain);
		}

		::System::Void _ctor_4(::System::String* userName, ::System::Security::SecureString* password, ::System::String* domain)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::SecureString*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL__CTOR_4_OFFSET))(this, userName, password, domain);
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

		::System::Security::SecureString* get_SecurePassword()
		{
			return ((::System::Security::SecureString*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_GET_SECUREPASSWORD_OFFSET))(this);
		}

		::System::Void set_SecurePassword(::System::Security::SecureString* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_SET_SECUREPASSWORD_OFFSET))(this, value);
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

		::System::Security::SecureString* InternalGetSecurePassword()
		{
			return ((::System::Security::SecureString*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETSECUREPASSWORD_OFFSET))(this);
		}

		::System::String* InternalGetDomain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETDOMAIN_OFFSET))(this);
		}

		::System::String* InternalGetDomainUserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_INTERNALGETDOMAINUSERNAME_OFFSET))(this);
		}

		::System::Net::NetworkCredential* GetCredential(::System::Uri* uri, ::System::String* authType)
		{
			return ((::System::Net::NetworkCredential*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_GETCREDENTIAL_OFFSET))(this, uri, authType);
		}

		::System::Net::NetworkCredential* GetCredential_1(::System::String* host, ::System::Int32 port, ::System::String* authenticationType)
		{
			return ((::System::Net::NetworkCredential*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKCREDENTIAL_GETCREDENTIAL_1_OFFSET))(this, host, port, authenticationType);
		}
	};
}

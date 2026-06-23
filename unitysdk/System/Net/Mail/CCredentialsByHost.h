#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class NetworkCredential; }

#define SYSTEM_NET_MAIL_CCREDENTIALSBYHOST_GETCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x1C49CB60)
#define SYSTEM_NET_MAIL_CCREDENTIALSBYHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49CB50)

namespace System::Net::Mail
{
	inline static constexpr unsigned int CCredentialsByHost_TypeDefinitionIndex = 3600;

	class CCredentialsByHost : public ::System::Object
	{
	public:
		::System::String* userName; // 0x10
		::System::String* password; // 0x18

		::System::Void _ctor(::System::String* userName, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_CCREDENTIALSBYHOST__CTOR_OFFSET))(this, userName, password);
		}

		::System::Net::NetworkCredential* GetCredential(::System::String* host, ::System::Int32 port, ::System::String* authenticationType)
		{
			return ((::System::Net::NetworkCredential*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_CCREDENTIALSBYHOST_GETCREDENTIAL_OFFSET))(this, host, port, authenticationType);
		}
	};
}

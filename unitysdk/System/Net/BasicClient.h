#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class Authorization; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_BASICCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1A0F07A0)
#define SYSTEM_NET_BASICCLIENT_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1A0F0AB0)
#define SYSTEM_NET_BASICCLIENT_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A0F0B90)
#define SYSTEM_NET_BASICCLIENT_INTERNALAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1A0F0850)
#define SYSTEM_NET_BASICCLIENT_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1A0F0B80)
#define SYSTEM_NET_BASICCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0EF1F0)

namespace System::Net
{
	inline static constexpr unsigned int BasicClient_TypeDefinitionIndex = 2812;

	class BasicClient : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT__CTOR_OFFSET))(this);
		}

		::System::Net::Authorization* Authenticate(::System::String* challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_AUTHENTICATE_OFFSET))(this, challenge, webRequest, credentials);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes(::System::String* str)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_GETBYTES_OFFSET))(str);
		}

		static ::System::Net::Authorization* InternalAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_INTERNALAUTHENTICATE_OFFSET))(webRequest, credentials);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_PREAUTHENTICATE_OFFSET))(this, webRequest, credentials);
		}

		::System::String* get_AuthenticationType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_GET_AUTHENTICATIONTYPE_OFFSET))(this);
		}
	};
}

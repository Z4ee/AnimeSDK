#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class Authorization; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_BASICCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1AF56F90)
#define SYSTEM_NET_BASICCLIENT_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1AF572D0)
#define SYSTEM_NET_BASICCLIENT_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AF573A0)
#define SYSTEM_NET_BASICCLIENT_INTERNALAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1AF57040)
#define SYSTEM_NET_BASICCLIENT_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1AF57390)
#define SYSTEM_NET_BASICCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF55EA0)

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

		::System::Net::Authorization* Authenticate(::System::String* a1, ::System::Net::WebRequest* a2, ::System::Net::ICredentials* a3)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_AUTHENTICATE_OFFSET))(this, a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_GETBYTES_OFFSET))(a1);
		}

		static ::System::Net::Authorization* InternalAuthenticate(::System::Net::WebRequest* a1, ::System::Net::ICredentials* a2)
		{
			return ((::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_INTERNALAUTHENTICATE_OFFSET))(a1, a2);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* a1, ::System::Net::ICredentials* a2)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_PREAUTHENTICATE_OFFSET))(this, a1, a2);
		}

		::System::String* get_AuthenticationType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_GET_AUTHENTICATIONTYPE_OFFSET))(this);
		}
	};
}

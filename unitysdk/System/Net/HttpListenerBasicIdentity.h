#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Principal/GenericIdentity.h"

namespace System { class String; }

#define SYSTEM_NET_HTTPLISTENERBASICIDENTITY_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1DEC1280)
#define SYSTEM_NET_HTTPLISTENERBASICIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC1230)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerBasicIdentity_TypeDefinitionIndex = 3524;

	class HttpListenerBasicIdentity : public ::System::Security::Principal::GenericIdentity
	{
	public:
		::System::String* password; // 0x88

		::System::Void _ctor(::System::String* username, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERBASICIDENTITY__CTOR_OFFSET))(this, username, password);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERBASICIDENTITY_GET_PASSWORD_OFFSET))(this);
		}
	};
}

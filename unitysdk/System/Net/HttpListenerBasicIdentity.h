#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Principal/GenericIdentity.h"

namespace System { class String; }

#define SYSTEM_NET_HTTPLISTENERBASICIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B031680)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerBasicIdentity_TypeDefinitionIndex = 2850;

	class HttpListenerBasicIdentity : public ::System::Security::Principal::GenericIdentity
	{
	public:
		::System::String* password; // 0x88

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERBASICIDENTITY__CTOR_OFFSET))(this, a1, a2);
		}
	};
}

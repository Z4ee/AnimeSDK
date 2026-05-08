#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/ProtectionLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Principal/TokenImpersonationLevel.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Net { class NetworkCredential; }
namespace System::Net::Security { class NegotiateStream; }

#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM___C__DISPLAYCLASS69_0__AUTHENTICATEASCLIENTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x19EF5680)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EF5670)

namespace System::Net::Security
{
	inline static constexpr unsigned int NegotiateStream___c__DisplayClass69_0_TypeDefinitionIndex = 3698;

	class NegotiateStream___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::System::Net::Security::NegotiateStream* __4__this; // 0x10
		::System::Net::NetworkCredential* credential; // 0x18
		::System::String* targetName; // 0x20
		::System::Security::Principal::TokenImpersonationLevel allowedImpersonationLevel; // 0x28
		::System::Net::Security::ProtectionLevel requiredProtectionLevel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::IAsyncResult* _AuthenticateAsClientAsync_b__0(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM___C__DISPLAYCLASS69_0__AUTHENTICATEASCLIENTASYNC_B__0_OFFSET))(this, callback, state);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System::Net { class SimpleAsyncResult; }
namespace System::Net { class WebConnectionStream; }

#define SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18728120)
#define SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS76_0__SETHEADERSASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x18728B40)

namespace System::Net
{
	inline static constexpr unsigned int WebConnectionStream___c__DisplayClass76_0_TypeDefinitionIndex = 2878;

	class WebConnectionStream___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::System::Net::WebConnectionStream* __4__this; // 0x10
		::System::Net::SimpleAsyncResult* result; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetHeadersAsync_b__0(::System::IAsyncResult* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS76_0__SETHEADERSASYNC_B__0_OFFSET))(this, r);
		}
	};
}

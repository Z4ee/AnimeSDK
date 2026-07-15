#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class SimpleAsyncResult; }
namespace System::Net { class WebConnectionStream; }

#define SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F01F50)
#define SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS75_0__SETHEADERSASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x19F02F60)

namespace System::Net
{
	inline static constexpr unsigned int WebConnectionStream___c__DisplayClass75_0_TypeDefinitionIndex = 2882;

	class WebConnectionStream___c__DisplayClass75_0 : public ::System::Object
	{
	public:
		::System::Net::WebConnectionStream* __4__this; // 0x10
		::System::Boolean setInternalLength; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetHeadersAsync_b__0(::System::Net::SimpleAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS75_0__SETHEADERSASYNC_B__0_OFFSET))(this, a1);
		}
	};
}

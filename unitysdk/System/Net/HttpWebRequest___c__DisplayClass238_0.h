#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class HttpWebRequest; }
namespace System::Net { class SimpleAsyncResult; }
namespace System::Net { class WebAsyncResult; }

#define SYSTEM_NET_HTTPWEBREQUEST___C__DISPLAYCLASS238_0__BEGINGETRESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x1960F970)
#define SYSTEM_NET_HTTPWEBREQUEST___C__DISPLAYCLASS238_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19609370)

namespace System::Net
{
	inline static constexpr unsigned int HttpWebRequest___c__DisplayClass238_0_TypeDefinitionIndex = 2853;

	class HttpWebRequest___c__DisplayClass238_0 : public ::System::Object
	{
	public:
		::System::Net::HttpWebRequest* __4__this; // 0x10
		::System::Net::WebAsyncResult* aread; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST___C__DISPLAYCLASS238_0__CTOR_OFFSET))(this);
		}

		::System::Void _BeginGetResponse_b__0(::System::Net::SimpleAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST___C__DISPLAYCLASS238_0__BEGINGETRESPONSE_B__0_OFFSET))(this, a1);
		}
	};
}

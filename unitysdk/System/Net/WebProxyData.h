#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }

#define SYSTEM_NET_WEBPROXYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C02E480)

namespace System::Net
{
	inline static constexpr unsigned int WebProxyData_TypeDefinitionIndex = 3477;

	class WebProxyData : public ::System::Object
	{
	public:
		::System::Uri* scriptLocation; // 0x10
		::System::Collections::ArrayList* bypassList; // 0x18
		::System::Uri* proxyAddress; // 0x20
		::System::Collections::Hashtable* proxyHostAddresses; // 0x28
		::System::Boolean bypassOnLocal; // 0x30
		::System::Boolean automaticallyDetectSettings; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATA__CTOR_OFFSET))(this);
		}
	};
}

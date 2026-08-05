#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }

#define SYSTEM_NET_WEBPROXYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D414D70)

namespace System::Net
{
	inline static constexpr unsigned int WebProxyData_TypeDefinitionIndex = 3477;

	class WebProxyData : public ::System::Object
	{
	public:
		::System::Uri* proxyAddress; // 0x10
		::System::Collections::Hashtable* proxyHostAddresses; // 0x18
		::System::Uri* scriptLocation; // 0x20
		::System::Collections::ArrayList* bypassList; // 0x28
		::System::Boolean automaticallyDetectSettings; // 0x30
		::System::Boolean bypassOnLocal; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATA__CTOR_OFFSET))(this);
		}
	};
}

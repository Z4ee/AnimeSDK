#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IWebProxy; }

#define SYSTEM_NET_GLOBALPROXYSELECTION_GETEMPTYWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1F01D450)
#define SYSTEM_NET_GLOBALPROXYSELECTION_GET_SELECT_OFFSET UNITYSDK_OFFSET(0x1F016660)

namespace System::Net
{
	inline static constexpr unsigned int GlobalProxySelection_TypeDefinitionIndex = 2732;

	class GlobalProxySelection : public ::System::Object
	{
	public:
		static ::System::Net::IWebProxy* get_Select()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALPROXYSELECTION_GET_SELECT_OFFSET))();
		}

		static ::System::Net::IWebProxy* GetEmptyWebProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALPROXYSELECTION_GETEMPTYWEBPROXY_OFFSET))();
		}
	};
}

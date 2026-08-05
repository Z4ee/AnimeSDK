#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/ProxyChain.h"

namespace System { class Uri; }

#define SYSTEM_NET_STATICPROXY_GETNEXTPROXY_OFFSET UNITYSDK_OFFSET(0x1CC1BA80)
#define SYSTEM_NET_STATICPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1B970)

namespace System::Net
{
	inline static constexpr unsigned int StaticProxy_TypeDefinitionIndex = 3389;

	class StaticProxy : public ::System::Net::ProxyChain
	{
	public:
		::System::Uri* m_Proxy; // 0x38

		::System::Void _ctor(::System::Uri* destination, ::System::Uri* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_STATICPROXY__CTOR_OFFSET))(this, destination, proxy);
		}

		::System::Boolean GetNextProxy(::System::Uri*& proxy)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_STATICPROXY_GETNEXTPROXY_OFFSET))(this, proxy);
		}
	};
}

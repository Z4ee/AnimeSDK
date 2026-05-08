#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/ProxyChain.h"

namespace System { class Uri; }

#define SYSTEM_NET_DIRECTPROXY_GETNEXTPROXY_OFFSET UNITYSDK_OFFSET(0x1A5741D0)
#define SYSTEM_NET_DIRECTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A574140)

namespace System::Net
{
	inline static constexpr unsigned int DirectProxy_TypeDefinitionIndex = 3389;

	class DirectProxy : public ::System::Net::ProxyChain
	{
	public:
		::System::Boolean m_ProxyRetrieved; // 0x38

		::System::Void _ctor(::System::Uri* destination)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIRECTPROXY__CTOR_OFFSET))(this, destination);
		}

		::System::Boolean GetNextProxy(::System::Uri*& proxy)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIRECTPROXY_GETNEXTPROXY_OFFSET))(this, proxy);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class ICredentials; }
namespace System::Net { class ProxyChain; }

#define SYSTEM_NET_EMPTYWEBPROXY_GETPROXY_OFFSET UNITYSDK_OFFSET(0x19BB65A0)
#define SYSTEM_NET_EMPTYWEBPROXY_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x19BB65C0)
#define SYSTEM_NET_EMPTYWEBPROXY_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x19BB65B0)
#define SYSTEM_NET_EMPTYWEBPROXY_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x19BB65D0)
#define SYSTEM_NET_EMPTYWEBPROXY_SYSTEM_NET_IAUTOWEBPROXY_GETPROXIES_OFFSET UNITYSDK_OFFSET(0x19BB65E0)
#define SYSTEM_NET_EMPTYWEBPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB6590)

namespace System::Net
{
	inline static constexpr unsigned int EmptyWebProxy_TypeDefinitionIndex = 3406;

	class EmptyWebProxy : public ::System::Object
	{
	public:
		::System::Net::ICredentials* m_credentials; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_EMPTYWEBPROXY__CTOR_OFFSET))(this);
		}

		::System::Uri* GetProxy(::System::Uri* uri)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_EMPTYWEBPROXY_GETPROXY_OFFSET))(this, uri);
		}

		::System::Boolean IsBypassed(::System::Uri* uri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_EMPTYWEBPROXY_ISBYPASSED_OFFSET))(this, uri);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_EMPTYWEBPROXY_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_EMPTYWEBPROXY_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::System::Net::ProxyChain* System_Net_IAutoWebProxy_GetProxies(::System::Uri* destination)
		{
			return ((::System::Net::ProxyChain*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_EMPTYWEBPROXY_SYSTEM_NET_IAUTOWEBPROXY_GETPROXIES_OFFSET))(this, destination);
		}
	};
}

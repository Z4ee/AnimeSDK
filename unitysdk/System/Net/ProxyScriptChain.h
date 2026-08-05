#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/ProxyChain.h"

namespace System { class Uri; }
namespace System::Net { class WebProxy; }

#define SYSTEM_NET_PROXYSCRIPTCHAIN_ABORT_OFFSET UNITYSDK_OFFSET(0x1DECA050)
#define SYSTEM_NET_PROXYSCRIPTCHAIN_GETNEXTPROXY_OFFSET UNITYSDK_OFFSET(0x1DEC9FA0)
#define SYSTEM_NET_PROXYSCRIPTCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC9F00)

namespace System::Net
{
	inline static constexpr unsigned int ProxyScriptChain_TypeDefinitionIndex = 3387;

	class ProxyScriptChain : public ::System::Net::ProxyChain
	{
	public:
		::System::Net::WebProxy* m_Proxy; // 0x38
		::Il2CppArray<::System::Uri*>* m_ScriptProxies; // 0x40
		::System::Int32 m_CurrentIndex; // 0x48
		::System::Int32 m_SyncStatus; // 0x4C

		::System::Void _ctor(::System::Net::WebProxy* proxy, ::System::Uri* destination)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebProxy*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYSCRIPTCHAIN__CTOR_OFFSET))(this, proxy, destination);
		}

		::System::Boolean GetNextProxy(::System::Uri*& proxy)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYSCRIPTCHAIN_GETNEXTPROXY_OFFSET))(this, proxy);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYSCRIPTCHAIN_ABORT_OFFSET))(this);
		}
	};
}

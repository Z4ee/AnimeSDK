#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class ICredentials; }

#define SYSTEM_NET_EMPTYWEBPROXY_GETPROXY_OFFSET UNITYSDK_OFFSET(0x186C9D90)
#define SYSTEM_NET_EMPTYWEBPROXY_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x186C9DB0)
#define SYSTEM_NET_EMPTYWEBPROXY_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x186C9DA0)
#define SYSTEM_NET_EMPTYWEBPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x186C9D80)

namespace System::Net
{
	inline static constexpr unsigned int EmptyWebProxy_TypeDefinitionIndex = 2780;

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
	};
}

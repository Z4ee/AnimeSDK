#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class ICredentials; }

#define SYSTEM_NET_EMPTYWEBPROXY_GETPROXY_OFFSET UNITYSDK_OFFSET(0x1B012B60)
#define SYSTEM_NET_EMPTYWEBPROXY_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1B012B80)
#define SYSTEM_NET_EMPTYWEBPROXY_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x1B012B70)
#define SYSTEM_NET_EMPTYWEBPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B012B50)

namespace System::Net
{
	inline static constexpr unsigned int EmptyWebProxy_TypeDefinitionIndex = 2792;

	class EmptyWebProxy : public ::System::Object
	{
	public:
		::System::Net::ICredentials* m_credentials; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_EMPTYWEBPROXY__CTOR_OFFSET))(this);
		}

		::System::Uri* GetProxy(::System::Uri* a1)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_EMPTYWEBPROXY_GETPROXY_OFFSET))(this, a1);
		}

		::System::Boolean IsBypassed(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_EMPTYWEBPROXY_ISBYPASSED_OFFSET))(this, a1);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_EMPTYWEBPROXY_GET_CREDENTIALS_OFFSET))(this);
		}
	};
}

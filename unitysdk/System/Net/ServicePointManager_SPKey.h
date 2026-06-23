#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }

#define SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C1D0F20)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C1D0E70)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GET_URI_OFFSET UNITYSDK_OFFSET(0x1C1D0DF0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GET_USECONNECT_OFFSET UNITYSDK_OFFSET(0x1C1D0E00)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GET_USESPROXY_OFFSET UNITYSDK_OFFSET(0x1C1D0E10)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D0DE0)

namespace System::Net
{
	inline static constexpr unsigned int ServicePointManager_SPKey_TypeDefinitionIndex = 3555;

	class ServicePointManager_SPKey : public ::System::Object
	{
	public:
		::System::Uri* uri; // 0x10
		::System::Uri* proxy; // 0x18
		::System::Boolean use_connect; // 0x20

		::System::Void _ctor(::System::Uri* uri, ::System::Uri* proxy, ::System::Boolean use_connect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Uri*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY__CTOR_OFFSET))(this, uri, proxy, use_connect);
		}

		::System::Uri* get_Uri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GET_URI_OFFSET))(this);
		}

		::System::Boolean get_UseConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GET_USECONNECT_OFFSET))(this);
		}

		::System::Boolean get_UsesProxy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GET_USESPROXY_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_EQUALS_OFFSET))(this, obj);
		}
	};
}

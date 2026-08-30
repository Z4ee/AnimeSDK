#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }

#define SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B962920)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B9628A0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GET_USESPROXY_OFFSET UNITYSDK_OFFSET(0x1B962870)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B962240)

namespace System::Net
{
	inline static constexpr unsigned int ServicePointManager_SPKey_TypeDefinitionIndex = 2875;

	class ServicePointManager_SPKey : public ::System::Object
	{
	public:
		::System::Uri* uri; // 0x10
		::System::Uri* proxy; // 0x18
		::System::Boolean use_connect; // 0x20

		::System::Void _ctor(::System::Uri* a1, ::System::Uri* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Uri*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_UsesProxy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GET_USESPROXY_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SPKEY_EQUALS_OFFSET))(this, a1);
		}
	};
}

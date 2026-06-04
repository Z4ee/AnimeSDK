#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class ServicePoint; }
namespace System::Net { class WebConnection; }
namespace System::Net { class WebConnectionGroup; }

#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_BUSY_OFFSET UNITYSDK_OFFSET(0x1AFC22A0)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x1AFC2240)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x1AFC2260)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_IDLESINCE_OFFSET UNITYSDK_OFFSET(0x1AFC22B0)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1AFC2280)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_SETIDLE_OFFSET UNITYSDK_OFFSET(0x1AFBF8F0)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_SET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x1AFC2250)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x1AFC2270)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_TRYSETBUSY_OFFSET UNITYSDK_OFFSET(0x1AFBF110)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC21A0)

namespace System::Net
{
	inline static constexpr unsigned int WebConnectionGroup_ConnectionState_TypeDefinitionIndex = 2876;

	class WebConnectionGroup_ConnectionState : public ::System::Object
	{
	public:
		::System::Net::WebConnection* _Connection_k__BackingField; // 0x10
		::System::Net::WebConnectionGroup* _Group_k__BackingField; // 0x18
		::System::DateTime idleSince; // 0x20
		::System::Boolean busy; // 0x28

		::System::Void _ctor(::System::Net::WebConnectionGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionGroup*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE__CTOR_OFFSET))(this, a1);
		}

		::System::Net::WebConnection* get_Connection()
		{
			return ((::System::Net::WebConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_CONNECTION_OFFSET))(this);
		}

		::System::Void set_Connection(::System::Net::WebConnection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_SET_CONNECTION_OFFSET))(this, a1);
		}

		::System::Net::WebConnectionGroup* get_Group()
		{
			return ((::System::Net::WebConnectionGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_GROUP_OFFSET))(this);
		}

		::System::Void set_Group(::System::Net::WebConnectionGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionGroup*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_SET_GROUP_OFFSET))(this, a1);
		}

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_SERVICEPOINT_OFFSET))(this);
		}

		::System::Boolean get_Busy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_BUSY_OFFSET))(this);
		}

		::System::DateTime get_IdleSince()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_IDLESINCE_OFFSET))(this);
		}

		::System::Boolean TrySetBusy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_TRYSETBUSY_OFFSET))(this);
		}

		::System::Void SetIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_SETIDLE_OFFSET))(this);
		}
	};
}

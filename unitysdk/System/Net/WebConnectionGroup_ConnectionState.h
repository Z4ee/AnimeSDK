#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class ServicePoint; }
namespace System::Net { class WebConnection; }
namespace System::Net { class WebConnectionGroup; }

#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_BUSY_OFFSET UNITYSDK_OFFSET(0x18724E40)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x18724DE0)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x18724E00)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_IDLESINCE_OFFSET UNITYSDK_OFFSET(0x18724E50)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x18724E20)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_SETIDLE_OFFSET UNITYSDK_OFFSET(0x187224A0)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_SET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x18724DF0)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x18724E10)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_TRYSETBUSY_OFFSET UNITYSDK_OFFSET(0x18721C90)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18724D40)

namespace System::Net
{
	inline static constexpr unsigned int WebConnectionGroup_ConnectionState_TypeDefinitionIndex = 2875;

	class WebConnectionGroup_ConnectionState : public ::System::Object
	{
	public:
		::System::Net::WebConnection* _Connection_k__BackingField; // 0x10
		::System::Net::WebConnectionGroup* _Group_k__BackingField; // 0x18
		::System::DateTime idleSince; // 0x20
		::System::Boolean busy; // 0x28

		::System::Void _ctor(::System::Net::WebConnectionGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionGroup*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE__CTOR_OFFSET))(this, group);
		}

		::System::Net::WebConnection* get_Connection()
		{
			return ((::System::Net::WebConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_CONNECTION_OFFSET))(this);
		}

		::System::Void set_Connection(::System::Net::WebConnection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_SET_CONNECTION_OFFSET))(this, value);
		}

		::System::Net::WebConnectionGroup* get_Group()
		{
			return ((::System::Net::WebConnectionGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_GET_GROUP_OFFSET))(this);
		}

		::System::Void set_Group(::System::Net::WebConnectionGroup* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionGroup*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CONNECTIONSTATE_SET_GROUP_OFFSET))(this, value);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_DRAINENTITYBODY_OFFSET UNITYSDK_OFFSET(0x1C2EA8C0)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_ENTITYBODY_OFFSET UNITYSDK_OFFSET(0x1C2EA820)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_HEADERWAIT_OFFSET UNITYSDK_OFFSET(0x1C2EAAA0)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_IDLECONNECTION_OFFSET UNITYSDK_OFFSET(0x1C2EAA00)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_MINSENDBYTESPERSECOND_OFFSET UNITYSDK_OFFSET(0x1C2EAB40)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_REQUESTQUEUE_OFFSET UNITYSDK_OFFSET(0x1C2EA960)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_DRAINENTITYBODY_OFFSET UNITYSDK_OFFSET(0x1C2EA910)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_ENTITYBODY_OFFSET UNITYSDK_OFFSET(0x1C2EA870)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_HEADERWAIT_OFFSET UNITYSDK_OFFSET(0x1C2EAAF0)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_IDLECONNECTION_OFFSET UNITYSDK_OFFSET(0x1C2EAA50)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_MINSENDBYTESPERSECOND_OFFSET UNITYSDK_OFFSET(0x1C2EAB90)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_REQUESTQUEUE_OFFSET UNITYSDK_OFFSET(0x1C2EA9B0)
#define SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2EABE0)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerTimeoutManager_TypeDefinitionIndex = 3531;

	class HttpListenerTimeoutManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER__CTOR_OFFSET))(this);
		}

		::System::TimeSpan get_EntityBody()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_ENTITYBODY_OFFSET))(this);
		}

		::System::Void set_EntityBody(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_ENTITYBODY_OFFSET))(this, value);
		}

		::System::TimeSpan get_DrainEntityBody()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_DRAINENTITYBODY_OFFSET))(this);
		}

		::System::Void set_DrainEntityBody(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_DRAINENTITYBODY_OFFSET))(this, value);
		}

		::System::TimeSpan get_RequestQueue()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_REQUESTQUEUE_OFFSET))(this);
		}

		::System::Void set_RequestQueue(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_REQUESTQUEUE_OFFSET))(this, value);
		}

		::System::TimeSpan get_IdleConnection()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_IDLECONNECTION_OFFSET))(this);
		}

		::System::Void set_IdleConnection(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_IDLECONNECTION_OFFSET))(this, value);
		}

		::System::TimeSpan get_HeaderWait()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_HEADERWAIT_OFFSET))(this);
		}

		::System::Void set_HeaderWait(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_HEADERWAIT_OFFSET))(this, value);
		}

		::System::Int64 get_MinSendBytesPerSecond()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_GET_MINSENDBYTESPERSECOND_OFFSET))(this);
		}

		::System::Void set_MinSendBytesPerSecond(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERTIMEOUTMANAGER_SET_MINSENDBYTESPERSECOND_OFFSET))(this, value);
		}
	};
}

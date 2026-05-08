#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Collections { class ArrayList; }
namespace System::Runtime::Remoting { class ServerIdentity; }
namespace System::Threading { class Timer; }

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_MANAGELEASES_OFFSET UNITYSDK_OFFSET(0x18C69290)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_SETPOLLTIME_OFFSET UNITYSDK_OFFSET(0x18C68E70)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_STARTMANAGER_OFFSET UNITYSDK_OFFSET(0x18C69140)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_STOPMANAGER_OFFSET UNITYSDK_OFFSET(0x18C691F0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_TRACKLIFETIME_OFFSET UNITYSDK_OFFSET(0x18C68F90)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C69540)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LeaseManager_TypeDefinitionIndex = 1278;

	class LeaseManager : public ::System::Object
	{
	public:
		::System::Threading::Timer* _timer; // 0x10
		::System::Collections::ArrayList* _objects; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void SetPollTime(::System::TimeSpan timeSpan)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_SETPOLLTIME_OFFSET))(this, timeSpan);
		}

		::System::Void TrackLifetime(::System::Runtime::Remoting::ServerIdentity* identity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::ServerIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_TRACKLIFETIME_OFFSET))(this, identity);
		}

		::System::Void StartManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_STARTMANAGER_OFFSET))(this);
		}

		::System::Void StopManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_STOPMANAGER_OFFSET))(this);
		}

		::System::Void ManageLeases(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_MANAGELEASES_OFFSET))(this, state);
		}
	};
}

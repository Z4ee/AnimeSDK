#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Runtime/Remoting/Lifetime/LeaseState.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Queue; }
namespace System::Runtime::Remoting::Lifetime { class ISponsor; }
namespace System::Runtime::Remoting::Lifetime { class Lease_RenewalDelegate; }

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x178E2510)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_CHECKNEXTSPONSOR_OFFSET UNITYSDK_OFFSET(0x178E29D0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTLEASETIME_OFFSET UNITYSDK_OFFSET(0x178E24B0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x178E2500)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x178E2520)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_PROCESSSPONSORRESPONSE_OFFSET UNITYSDK_OFFSET(0x178E3090)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEW_OFFSET UNITYSDK_OFFSET(0x178E2530)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x178E2620)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x178E28A0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE__CTOR_OFFSET UNITYSDK_OFFSET(0x178E2250)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int Lease_TypeDefinitionIndex = 1233;

	class Lease : public ::System::MarshalByRefObject
	{
	public:
		::System::Collections::ArrayList* _sponsors; // 0x18
		::System::Collections::Queue* _renewingSponsors; // 0x20
		::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate* _renewalDelegate; // 0x28
		::System::TimeSpan _initialLeaseTime; // 0x30
		::System::TimeSpan _sponsorshipTimeout; // 0x38
		::System::TimeSpan _renewOnCallTime; // 0x40
		::System::DateTime _leaseExpireTime; // 0x48
		::System::Runtime::Remoting::Lifetime::LeaseState _currentState; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE__CTOR_OFFSET))(this);
		}

		::System::TimeSpan get_CurrentLeaseTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTLEASETIME_OFFSET))(this);
		}

		::System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState()
		{
			return ((::System::Runtime::Remoting::Lifetime::LeaseState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void Activate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_ACTIVATE_OFFSET))(this);
		}

		::System::TimeSpan get_RenewOnCallTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_RENEWONCALLTIME_OFFSET))(this);
		}

		::System::TimeSpan Renew(::System::TimeSpan a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEW_OFFSET))(this, a1);
		}

		::System::Void Unregister(::System::Runtime::Remoting::Lifetime::ISponsor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Lifetime::ISponsor*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UNREGISTER_OFFSET))(this, a1);
		}

		::System::Void UpdateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UPDATESTATE_OFFSET))(this);
		}

		::System::Void CheckNextSponsor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_CHECKNEXTSPONSOR_OFFSET))(this);
		}

		::System::Void ProcessSponsorResponse(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_PROCESSSPONSORRESPONSE_OFFSET))(this, a1, a2);
		}
	};
}

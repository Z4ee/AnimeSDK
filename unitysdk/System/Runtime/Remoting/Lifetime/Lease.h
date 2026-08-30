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

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x19431080)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_CHECKNEXTSPONSOR_OFFSET UNITYSDK_OFFSET(0x19431540)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTLEASETIME_OFFSET UNITYSDK_OFFSET(0x19431020)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x19431070)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x19431090)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_PROCESSSPONSORRESPONSE_OFFSET UNITYSDK_OFFSET(0x19431C00)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEW_OFFSET UNITYSDK_OFFSET(0x194310A0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x19431190)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x19431410)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19430DC0)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int Lease_TypeDefinitionIndex = 1240;

	class Lease : public ::System::MarshalByRefObject
	{
	public:
		::System::Collections::Queue* _renewingSponsors; // 0x18
		::System::Collections::ArrayList* _sponsors; // 0x20
		::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate* _renewalDelegate; // 0x28
		::System::DateTime _leaseExpireTime; // 0x30
		::System::Runtime::Remoting::Lifetime::LeaseState _currentState; // 0x38
		::System::TimeSpan _initialLeaseTime; // 0x40
		::System::TimeSpan _sponsorshipTimeout; // 0x48
		::System::TimeSpan _renewOnCallTime; // 0x50

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

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

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x19602C90)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_CHECKNEXTSPONSOR_OFFSET UNITYSDK_OFFSET(0x19603320)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTLEASETIME_OFFSET UNITYSDK_OFFSET(0x19602C30)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x19602C80)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x19602E30)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_PROCESSSPONSORRESPONSE_OFFSET UNITYSDK_OFFSET(0x196035D0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEW_OFFSET UNITYSDK_OFFSET(0x19602F80)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_INITIALLEASETIME_OFFSET UNITYSDK_OFFSET(0x19602CA0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x19602E40)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_SPONSORSHIPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x19602EE0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x19603090)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x196031D0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19602AD0)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int Lease_TypeDefinitionIndex = 1276;

	class Lease : public ::System::MarshalByRefObject
	{
	public:
		::System::Collections::ArrayList* _sponsors; // 0x18
		::System::Collections::Queue* _renewingSponsors; // 0x20
		::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate* _renewalDelegate; // 0x28
		::System::TimeSpan _initialLeaseTime; // 0x30
		::System::DateTime _leaseExpireTime; // 0x38
		::System::Runtime::Remoting::Lifetime::LeaseState _currentState; // 0x40
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

		::System::Void set_InitialLeaseTime(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_INITIALLEASETIME_OFFSET))(this, value);
		}

		::System::TimeSpan get_RenewOnCallTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_RENEWONCALLTIME_OFFSET))(this);
		}

		::System::Void set_RenewOnCallTime(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_RENEWONCALLTIME_OFFSET))(this, value);
		}

		::System::Void set_SponsorshipTimeout(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_SPONSORSHIPTIMEOUT_OFFSET))(this, value);
		}

		::System::TimeSpan Renew(::System::TimeSpan renewalTime)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEW_OFFSET))(this, renewalTime);
		}

		::System::Void Unregister(::System::Runtime::Remoting::Lifetime::ISponsor* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Lifetime::ISponsor*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UNREGISTER_OFFSET))(this, obj);
		}

		::System::Void UpdateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UPDATESTATE_OFFSET))(this);
		}

		::System::Void CheckNextSponsor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_CHECKNEXTSPONSOR_OFFSET))(this);
		}

		::System::Void ProcessSponsorResponse(::System::Object* state, ::System::Boolean timedOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_PROCESSSPONSORRESPONSE_OFFSET))(this, state, timedOut);
		}
	};
}

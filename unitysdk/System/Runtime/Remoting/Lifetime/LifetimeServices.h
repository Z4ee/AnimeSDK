#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Runtime::Remoting { class ServerIdentity; }
namespace System::Runtime::Remoting::Lifetime { class LeaseManager; }

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASEMANAGERPOLLTIME_OFFSET UNITYSDK_OFFSET(0x1BDD4A70)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASETIME_OFFSET UNITYSDK_OFFSET(0x1BDD4B50)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x1BDD4C10)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_SPONSORSHIPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1BDD4CD0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASEMANAGERPOLLTIME_OFFSET UNITYSDK_OFFSET(0x1BDD4AD0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASETIME_OFFSET UNITYSDK_OFFSET(0x1BDD4BB0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x1BDD4C70)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_SPONSORSHIPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1BDD4D30)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_TRACKLIFETIME_OFFSET UNITYSDK_OFFSET(0x1BDD4D90)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDD49D0)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LifetimeServices_TypeDefinitionIndex = 1245;

	class LifetimeServices : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Lifetime::LeaseManager** StaticGet__leaseManager()
		{
			return (::System::Runtime::Remoting::Lifetime::LeaseManager**)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x12F20);
		}
		static ::System::TimeSpan* StaticGet__sponsorshipTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x7C50);
		}
		static ::System::TimeSpan* StaticGet__leaseTime()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x7C58);
		}
		static ::System::TimeSpan* StaticGet__renewOnCallTime()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x7C60);
		}
		static ::System::TimeSpan* StaticGet__leaseManagerPollTime()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x7C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES__CCTOR_OFFSET))();
		}

		static ::System::TimeSpan get_LeaseManagerPollTime()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASEMANAGERPOLLTIME_OFFSET))();
		}

		static ::System::Void set_LeaseManagerPollTime(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASEMANAGERPOLLTIME_OFFSET))(a1);
		}

		static ::System::TimeSpan get_LeaseTime()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASETIME_OFFSET))();
		}

		static ::System::Void set_LeaseTime(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASETIME_OFFSET))(a1);
		}

		static ::System::TimeSpan get_RenewOnCallTime()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_RENEWONCALLTIME_OFFSET))();
		}

		static ::System::Void set_RenewOnCallTime(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_RENEWONCALLTIME_OFFSET))(a1);
		}

		static ::System::TimeSpan get_SponsorshipTimeout()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_SPONSORSHIPTIMEOUT_OFFSET))();
		}

		static ::System::Void set_SponsorshipTimeout(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_SPONSORSHIPTIMEOUT_OFFSET))(a1);
		}

		static ::System::Void TrackLifetime(::System::Runtime::Remoting::ServerIdentity* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ServerIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_TRACKLIFETIME_OFFSET))(a1);
		}
	};
}

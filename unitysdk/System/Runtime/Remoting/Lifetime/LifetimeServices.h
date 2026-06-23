#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Runtime::Remoting { class ServerIdentity; }
namespace System::Runtime::Remoting::Lifetime { class LeaseManager; }

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASEMANAGERPOLLTIME_OFFSET UNITYSDK_OFFSET(0x1C1ACA80)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_TRACKLIFETIME_OFFSET UNITYSDK_OFFSET(0x1C1ACB00)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1AC950)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1ACA70)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LifetimeServices_TypeDefinitionIndex = 1280;

	class LifetimeServices : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Lifetime::LeaseManager** StaticGet__leaseManager()
		{
			return (::System::Runtime::Remoting::Lifetime::LeaseManager**)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0xCB0);
		}
		static ::System::TimeSpan* StaticGet__sponsorshipTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x350);
		}
		static ::System::TimeSpan* StaticGet__leaseTime()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x358);
		}
		static ::System::TimeSpan* StaticGet__leaseManagerPollTime()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x360);
		}
		static ::System::TimeSpan* StaticGet__renewOnCallTime()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES__CTOR_OFFSET))(this);
		}

		static ::System::Void set_LeaseManagerPollTime(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASEMANAGERPOLLTIME_OFFSET))(value);
		}

		static ::System::Void TrackLifetime(::System::Runtime::Remoting::ServerIdentity* identity)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ServerIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_TRACKLIFETIME_OFFSET))(identity);
		}
	};
}

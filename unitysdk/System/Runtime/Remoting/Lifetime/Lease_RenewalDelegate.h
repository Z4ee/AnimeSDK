#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Runtime::Remoting::Lifetime { class ILease; }

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x163A5250)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x163A54D0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x163A5500)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x163A5230)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int Lease_RenewalDelegate_TypeDefinitionIndex = 1231;

	class Lease_RenewalDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::TimeSpan Invoke(::System::Runtime::Remoting::Lifetime::ILease* lease)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::Runtime::Remoting::Lifetime::ILease*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_INVOKE_OFFSET))(this, lease);
		}

		::System::IAsyncResult* BeginInvoke(::System::Runtime::Remoting::Lifetime::ILease* lease, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Runtime::Remoting::Lifetime::ILease*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_BEGININVOKE_OFFSET))(this, lease, callback, object);
		}

		::System::TimeSpan EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Runtime::Remoting::Lifetime { class ILease; }

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19431BD0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19431EA0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19431ED0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19431AE0)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int Lease_RenewalDelegate_TypeDefinitionIndex = 1241;

	class Lease_RenewalDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::TimeSpan Invoke(::System::Runtime::Remoting::Lifetime::ILease* a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::Runtime::Remoting::Lifetime::ILease*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Runtime::Remoting::Lifetime::ILease* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Runtime::Remoting::Lifetime::ILease*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::TimeSpan EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEWALDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

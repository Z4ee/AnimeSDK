#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net::NetworkInformation { class NetworkAvailabilityEventArgs; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x192206D0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19220710)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19220150)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYCHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19220140)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkAvailabilityChangedEventHandler_TypeDefinitionIndex = 3727;

	class NetworkAvailabilityChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYCHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Net::NetworkInformation::NetworkAvailabilityEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::NetworkInformation::NetworkAvailabilityEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYCHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Net::NetworkInformation::NetworkAvailabilityEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Net::NetworkInformation::NetworkAvailabilityEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

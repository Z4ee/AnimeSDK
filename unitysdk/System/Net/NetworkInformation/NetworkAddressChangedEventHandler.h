#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class EventArgs; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKADDRESSCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19BBAE20)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKADDRESSCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19BBAE60)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKADDRESSCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19BBA8A0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKADDRESSCHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBA890)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkAddressChangedEventHandler_TypeDefinitionIndex = 3726;

	class NetworkAddressChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKADDRESSCHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKADDRESSCHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::EventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::EventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKADDRESSCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKADDRESSCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

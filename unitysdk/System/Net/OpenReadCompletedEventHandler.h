#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class OpenReadCompletedEventArgs; }

#define SYSTEM_NET_OPENREADCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CED0320)
#define SYSTEM_NET_OPENREADCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CED0360)
#define SYSTEM_NET_OPENREADCOMPLETEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CECFDA0)
#define SYSTEM_NET_OPENREADCOMPLETEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECFD80)

namespace System::Net
{
	inline static constexpr unsigned int OpenReadCompletedEventHandler_TypeDefinitionIndex = 3457;

	class OpenReadCompletedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_OPENREADCOMPLETEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Net::OpenReadCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::OpenReadCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_OPENREADCOMPLETEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Net::OpenReadCompletedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Net::OpenReadCompletedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_OPENREADCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_OPENREADCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

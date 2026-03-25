#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Runtime::Remoting::Messaging { class Header; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x163AF680)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x163AF6B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x163AF120)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x163AF100)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int HeaderHandler_TypeDefinitionIndex = 1303;

	class HeaderHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* headers)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_INVOKE_OFFSET))(this, headers);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* headers, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_BEGININVOKE_OFFSET))(this, headers, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

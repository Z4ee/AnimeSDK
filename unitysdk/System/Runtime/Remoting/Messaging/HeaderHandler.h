#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Runtime::Remoting::Messaging { class Header; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x178EF250)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x178EF280)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x178EF240)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x178EF150)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int HeaderHandler_TypeDefinitionIndex = 1306;

	class HeaderHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

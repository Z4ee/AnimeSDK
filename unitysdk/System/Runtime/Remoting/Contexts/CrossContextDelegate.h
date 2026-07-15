#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A839A30)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A839A60)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A839A20)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8399B0)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int CrossContextDelegate_TypeDefinitionIndex = 1245;

	class CrossContextDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

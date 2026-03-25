#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x163A3E80)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x163A3EB0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x163A3BE0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x163A3BC0)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int CrossContextDelegate_TypeDefinitionIndex = 1242;

	class CrossContextDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

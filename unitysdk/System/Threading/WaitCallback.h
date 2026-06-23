#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_THREADING_WAITCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C1B97D0)
#define SYSTEM_THREADING_WAITCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C1B9800)
#define SYSTEM_THREADING_WAITCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C1B92D0)
#define SYSTEM_THREADING_WAITCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B92B0)

namespace System::Threading
{
	inline static constexpr unsigned int WaitCallback_TypeDefinitionIndex = 841;

	class WaitCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITCALLBACK_INVOKE_OFFSET))(this, state);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* state, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITCALLBACK_BEGININVOKE_OFFSET))(this, state, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

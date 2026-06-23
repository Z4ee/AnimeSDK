#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_THREADING_WAITORTIMERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C70D0E0)
#define SYSTEM_THREADING_WAITORTIMERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C70D160)
#define SYSTEM_THREADING_WAITORTIMERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C70CAF0)
#define SYSTEM_THREADING_WAITORTIMERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70CAD0)

namespace System::Threading
{
	inline static constexpr unsigned int WaitOrTimerCallback_TypeDefinitionIndex = 842;

	class WaitOrTimerCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITORTIMERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* state, ::System::Boolean timedOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITORTIMERCALLBACK_INVOKE_OFFSET))(this, state, timedOut);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* state, ::System::Boolean timedOut, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITORTIMERCALLBACK_BEGININVOKE_OFFSET))(this, state, timedOut, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITORTIMERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

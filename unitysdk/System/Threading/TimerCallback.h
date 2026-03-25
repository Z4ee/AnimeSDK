#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_THREADING_TIMERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16252860)
#define SYSTEM_THREADING_TIMERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16252890)
#define SYSTEM_THREADING_TIMERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x16251570)
#define SYSTEM_THREADING_TIMERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16247AD0)

namespace System::Threading
{
	inline static constexpr unsigned int TimerCallback_TypeDefinitionIndex = 877;

	class TimerCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMERCALLBACK_INVOKE_OFFSET))(this, state);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* state, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMERCALLBACK_BEGININVOKE_OFFSET))(this, state, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

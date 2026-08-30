#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_THREADING_TIMERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C66F4D0)
#define SYSTEM_THREADING_TIMERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C66F500)
#define SYSTEM_THREADING_TIMERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C66DAA0)
#define SYSTEM_THREADING_TIMERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C66F3E0)

namespace System::Threading
{
	inline static constexpr unsigned int TimerCallback_TypeDefinitionIndex = 882;

	class TimerCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMERCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMERCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMERCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMERCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

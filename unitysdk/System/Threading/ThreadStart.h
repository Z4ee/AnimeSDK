#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_THREADING_THREADSTART_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC56EE0)
#define SYSTEM_THREADING_THREADSTART_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC56F10)
#define SYSTEM_THREADING_THREADSTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC540F0)
#define SYSTEM_THREADING_THREADSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC56E70)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadStart_TypeDefinitionIndex = 867;

	class ThreadStart : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADSTART__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADSTART_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADSTART_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADSTART_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

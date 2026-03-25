#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_THREADING_THREADSTART_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16250720)
#define SYSTEM_THREADING_THREADSTART_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16250750)
#define SYSTEM_THREADING_THREADSTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x1624D610)
#define SYSTEM_THREADING_THREADSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1624C4E0)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadStart_TypeDefinitionIndex = 862;

	class ThreadStart : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADSTART__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADSTART_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADSTART_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADSTART_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

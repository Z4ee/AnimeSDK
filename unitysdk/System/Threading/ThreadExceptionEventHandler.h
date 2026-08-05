#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Threading { class ThreadExceptionEventArgs; }

#define SYSTEM_THREADING_THREADEXCEPTIONEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C89DCA0)
#define SYSTEM_THREADING_THREADEXCEPTIONEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C89DCE0)
#define SYSTEM_THREADING_THREADEXCEPTIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C89D710)
#define SYSTEM_THREADING_THREADEXCEPTIONEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C89D6F0)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadExceptionEventHandler_TypeDefinitionIndex = 2712;

	class ThreadExceptionEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADEXCEPTIONEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Threading::ThreadExceptionEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Threading::ThreadExceptionEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADEXCEPTIONEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Threading::ThreadExceptionEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Threading::ThreadExceptionEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADEXCEPTIONEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADEXCEPTIONEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class UnhandledExceptionEventArgs; }

#define SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16273080)
#define SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x162730C0)
#define SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x16272B00)
#define SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16272AE0)

namespace System
{
	inline static constexpr unsigned int UnhandledExceptionEventHandler_TypeDefinitionIndex = 359;

	class UnhandledExceptionEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::UnhandledExceptionEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::UnhandledExceptionEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::UnhandledExceptionEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::UnhandledExceptionEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

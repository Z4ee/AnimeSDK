#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class UnhandledExceptionEventArgs; }

#define SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D1FF620)
#define SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D1FF660)
#define SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D1FF610)
#define SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FF520)

namespace System
{
	inline static constexpr unsigned int UnhandledExceptionEventHandler_TypeDefinitionIndex = 358;

	class UnhandledExceptionEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::UnhandledExceptionEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::UnhandledExceptionEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::UnhandledExceptionEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::UnhandledExceptionEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

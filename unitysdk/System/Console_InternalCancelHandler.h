#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_CONSOLE_INTERNALCANCELHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18661850)
#define SYSTEM_CONSOLE_INTERNALCANCELHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18661880)
#define SYSTEM_CONSOLE_INTERNALCANCELHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18661840)
#define SYSTEM_CONSOLE_INTERNALCANCELHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186617D0)

namespace System
{
	inline static constexpr unsigned int Console_InternalCancelHandler_TypeDefinitionIndex = 382;

	class Console_InternalCancelHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_INTERNALCANCELHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_INTERNALCANCELHANDLER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_INTERNALCANCELHANDLER_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_INTERNALCANCELHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

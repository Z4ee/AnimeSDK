#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CDEAF0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CDEB40)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CDEAE0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDEA70)

namespace System
{
	inline static constexpr unsigned int Console_WindowsConsole_WindowsCancelHandler_TypeDefinitionIndex = 381;

	class Console_WindowsConsole_WindowsCancelHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

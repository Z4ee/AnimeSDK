#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x178A8850)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x178A88A0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x178A8550)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x178A8530)

namespace System
{
	inline static constexpr unsigned int Console_WindowsConsole_WindowsCancelHandler_TypeDefinitionIndex = 382;

	class Console_WindowsConsole_WindowsCancelHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Int32 keyCode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_INVOKE_OFFSET))(this, keyCode);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 keyCode, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_BEGININVOKE_OFFSET))(this, keyCode, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_WINDOWSCANCELHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

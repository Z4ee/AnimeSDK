#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class IConsoleDriver; }
namespace System { class String; }

#define SYSTEM_CONSOLEDRIVER_CREATENULLCONSOLEDRIVER_OFFSET UNITYSDK_OFFSET(0x1CB11540)
#define SYSTEM_CONSOLEDRIVER_CREATETERMINFODRIVER_OFFSET UNITYSDK_OFFSET(0x1CB115D0)
#define SYSTEM_CONSOLEDRIVER_CREATEWINDOWSCONSOLEDRIVER_OFFSET UNITYSDK_OFFSET(0x1CB11580)
#define SYSTEM_CONSOLEDRIVER_GET_ISCONSOLE_OFFSET UNITYSDK_OFFSET(0x1CB11400)
#define SYSTEM_CONSOLEDRIVER_INTERNALKEYAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1CB11780)
#define SYSTEM_CONSOLEDRIVER_ISATTY_OFFSET UNITYSDK_OFFSET(0x1CB11760)
#define SYSTEM_CONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x1CB11620)
#define SYSTEM_CONSOLEDRIVER_SETECHO_OFFSET UNITYSDK_OFFSET(0x1CB117A0)
#define SYSTEM_CONSOLEDRIVER_TTYSETUP_OFFSET UNITYSDK_OFFSET(0x1CB11790)
#define SYSTEM_CONSOLEDRIVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB113B0)

namespace System
{
	inline static constexpr unsigned int ConsoleDriver_TypeDefinitionIndex = 372;

	class ConsoleDriver : public ::System::Object
	{
	public:
		static ::System::IConsoleDriver** StaticGet_driver()
		{
			return (::System::IConsoleDriver**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDriver_TypeDefinitionIndex)->GetStaticField(0x8D0);
		}
		static ::System::Boolean* StaticGet_called_isatty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConsoleDriver_TypeDefinitionIndex)->GetStaticField(0x1D0);
		}
		static ::System::Boolean* StaticGet_is_console()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConsoleDriver_TypeDefinitionIndex)->GetStaticField(0x1D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER__CCTOR_OFFSET))();
		}

		static ::System::IConsoleDriver* CreateNullConsoleDriver()
		{
			return ((::System::IConsoleDriver*(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_CREATENULLCONSOLEDRIVER_OFFSET))();
		}

		static ::System::IConsoleDriver* CreateWindowsConsoleDriver()
		{
			return ((::System::IConsoleDriver*(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_CREATEWINDOWSCONSOLEDRIVER_OFFSET))();
		}

		static ::System::IConsoleDriver* CreateTermInfoDriver(::System::String* term)
		{
			return ((::System::IConsoleDriver*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_CREATETERMINFODRIVER_OFFSET))(term);
		}

		static ::System::ConsoleKeyInfo ReadKey(::System::Boolean intercept)
		{
			return ((::System::ConsoleKeyInfo(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_READKEY_OFFSET))(intercept);
		}

		static ::System::Boolean get_IsConsole()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_GET_ISCONSOLE_OFFSET))();
		}

		static ::System::Boolean Isatty(::System::IntPtr handle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_ISATTY_OFFSET))(handle);
		}

		static ::System::Int32 InternalKeyAvailable(::System::Int32 ms_timeout)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_INTERNALKEYAVAILABLE_OFFSET))(ms_timeout);
		}

		static ::System::Boolean TtySetup(::System::String* keypadXmit, ::System::String* teardown, ::Il2CppArray<::System::Byte>*& control_characters, ::System::Int32*& address)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*&, ::System::Int32*&))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_TTYSETUP_OFFSET))(keypadXmit, teardown, control_characters, address);
		}

		static ::System::Boolean SetEcho(::System::Boolean wantEcho)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_SETECHO_OFFSET))(wantEcho);
		}
	};
}

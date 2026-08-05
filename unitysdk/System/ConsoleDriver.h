#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class IConsoleDriver; }
namespace System { class String; }

#define SYSTEM_CONSOLEDRIVER_CREATENULLCONSOLEDRIVER_OFFSET UNITYSDK_OFFSET(0x1DF28D30)
#define SYSTEM_CONSOLEDRIVER_CREATETERMINFODRIVER_OFFSET UNITYSDK_OFFSET(0x1DF28DC0)
#define SYSTEM_CONSOLEDRIVER_CREATEWINDOWSCONSOLEDRIVER_OFFSET UNITYSDK_OFFSET(0x1DF28D70)
#define SYSTEM_CONSOLEDRIVER_GET_ISCONSOLE_OFFSET UNITYSDK_OFFSET(0x1DF28BF0)
#define SYSTEM_CONSOLEDRIVER_INTERNALKEYAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1DF28F70)
#define SYSTEM_CONSOLEDRIVER_ISATTY_OFFSET UNITYSDK_OFFSET(0x1DF28F50)
#define SYSTEM_CONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x1DF28E10)
#define SYSTEM_CONSOLEDRIVER_SETECHO_OFFSET UNITYSDK_OFFSET(0x1DF28F90)
#define SYSTEM_CONSOLEDRIVER_TTYSETUP_OFFSET UNITYSDK_OFFSET(0x1DF28F80)
#define SYSTEM_CONSOLEDRIVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF28BA0)

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
		static ::System::Boolean* StaticGet_is_console()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConsoleDriver_TypeDefinitionIndex)->GetStaticField(0x1D0);
		}
		static ::System::Boolean* StaticGet_called_isatty()
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

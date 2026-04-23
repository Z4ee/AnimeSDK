#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Console_WindowsConsole_WindowsCancelHandler; }

#define SYSTEM_CONSOLE_WINDOWSCONSOLE_DOWINDOWSCONSOLECANCELEVENT_OFFSET UNITYSDK_OFFSET(0x178A84A0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLECP_OFFSET UNITYSDK_OFFSET(0x178A83A0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLEOUTPUTCP_OFFSET UNITYSDK_OFFSET(0x178A8420)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETINPUTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x178A6A40)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETOUTPUTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x178A6AE0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x178A84E0)

namespace System
{
	inline static constexpr unsigned int Console_WindowsConsole_TypeDefinitionIndex = 381;

	class Console_WindowsConsole : public ::System::Object
	{
	public:
		static ::System::Console_WindowsConsole_WindowsCancelHandler** StaticGet_cancelHandler()
		{
			return (::System::Console_WindowsConsole_WindowsCancelHandler**)Il2CppClass::FromTypeDefinitionIndex(Console_WindowsConsole_TypeDefinitionIndex)->GetStaticField(0x1680);
		}
		static ::System::Boolean* StaticGet_ctrlHandlerAdded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Console_WindowsConsole_TypeDefinitionIndex)->GetStaticField(0x1090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetConsoleCP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLECP_OFFSET))();
		}

		static ::System::Int32 GetConsoleOutputCP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLEOUTPUTCP_OFFSET))();
		}

		static ::System::Boolean DoWindowsConsoleCancelEvent(::System::Int32 keyCode)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_DOWINDOWSCONSOLECANCELEVENT_OFFSET))(keyCode);
		}

		static ::System::Int32 GetInputCodePage()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_GETINPUTCODEPAGE_OFFSET))();
		}

		static ::System::Int32 GetOutputCodePage()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_GETOUTPUTCODEPAGE_OFFSET))();
		}
	};
}

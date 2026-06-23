#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Console_WindowsConsole_WindowsCancelHandler; }

#define SYSTEM_CONSOLE_WINDOWSCONSOLE_DOWINDOWSCONSOLECANCELEVENT_OFFSET UNITYSDK_OFFSET(0x1BE180A0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLECP_OFFSET UNITYSDK_OFFSET(0x1BE17FA0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLEOUTPUTCP_OFFSET UNITYSDK_OFFSET(0x1BE18020)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETINPUTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1BE18100)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETOUTPUTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1BE181D0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE182B0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE182A0)

namespace System
{
	inline static constexpr unsigned int Console_WindowsConsole_TypeDefinitionIndex = 369;

	class Console_WindowsConsole : public ::System::Object
	{
	public:
		static ::System::Console_WindowsConsole_WindowsCancelHandler** StaticGet_cancelHandler()
		{
			return (::System::Console_WindowsConsole_WindowsCancelHandler**)Il2CppClass::FromTypeDefinitionIndex(Console_WindowsConsole_TypeDefinitionIndex)->GetStaticField(0x440);
		}
		static ::System::Boolean* StaticGet_ctrlHandlerAdded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Console_WindowsConsole_TypeDefinitionIndex)->GetStaticField(0xD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE__CTOR_OFFSET))(this);
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

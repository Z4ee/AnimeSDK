#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/ConsoleScreenBufferInfo.h"
#include "unitysdk/System/Handles.h"
#include "unitysdk/System/InputRecord.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_WINDOWSCONSOLEDRIVER_GETCONSOLESCREENBUFFERINFO_OFFSET UNITYSDK_OFFSET(0x1865D7F0)
#define SYSTEM_WINDOWSCONSOLEDRIVER_GETSTDHANDLE_OFFSET UNITYSDK_OFFSET(0x1865D730)
#define SYSTEM_WINDOWSCONSOLEDRIVER_ISMODIFIERKEY_OFFSET UNITYSDK_OFFSET(0x1865DC90)
#define SYSTEM_WINDOWSCONSOLEDRIVER_READCONSOLEINPUT_OFFSET UNITYSDK_OFFSET(0x1865DB50)
#define SYSTEM_WINDOWSCONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x1865D8C0)
#define SYSTEM_WINDOWSCONSOLEDRIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1865D4E0)

namespace System
{
	inline static constexpr unsigned int WindowsConsoleDriver_TypeDefinitionIndex = 459;

	class WindowsConsoleDriver : public ::System::Object
	{
	public:
		::System::IntPtr outputHandle; // 0x10
		::System::IntPtr inputHandle; // 0x18
		::System::Int16 defaultAttribute; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER__CTOR_OFFSET))(this);
		}

		::System::ConsoleKeyInfo ReadKey(::System::Boolean a1)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_READKEY_OFFSET))(this, a1);
		}

		static ::System::Boolean IsModifierKey(::System::Int16 a1)
		{
			return ((::System::Boolean(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_ISMODIFIERKEY_OFFSET))(a1);
		}

		static ::System::IntPtr GetStdHandle(::System::Handles a1)
		{
			return ((::System::IntPtr(*)(::System::Handles))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_GETSTDHANDLE_OFFSET))(a1);
		}

		static ::System::Boolean GetConsoleScreenBufferInfo(::System::IntPtr a1, ::System::ConsoleScreenBufferInfo& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::ConsoleScreenBufferInfo&))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_GETCONSOLESCREENBUFFERINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean ReadConsoleInput(::System::IntPtr a1, ::System::InputRecord& a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::InputRecord&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_READCONSOLEINPUT_OFFSET))(a1, a2, a3, a4);
		}
	};
}

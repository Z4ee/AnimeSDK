#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/ConsoleScreenBufferInfo.h"
#include "unitysdk/System/Handles.h"
#include "unitysdk/System/InputRecord.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_WINDOWSCONSOLEDRIVER_GETCONSOLESCREENBUFFERINFO_OFFSET UNITYSDK_OFFSET(0x16277220)
#define SYSTEM_WINDOWSCONSOLEDRIVER_GETSTDHANDLE_OFFSET UNITYSDK_OFFSET(0x16277160)
#define SYSTEM_WINDOWSCONSOLEDRIVER_ISMODIFIERKEY_OFFSET UNITYSDK_OFFSET(0x162776C0)
#define SYSTEM_WINDOWSCONSOLEDRIVER_READCONSOLEINPUT_OFFSET UNITYSDK_OFFSET(0x16277580)
#define SYSTEM_WINDOWSCONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x162772F0)
#define SYSTEM_WINDOWSCONSOLEDRIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x16276F10)

namespace System
{
	inline static constexpr unsigned int WindowsConsoleDriver_TypeDefinitionIndex = 460;

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

		::System::ConsoleKeyInfo ReadKey(::System::Boolean intercept)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_READKEY_OFFSET))(this, intercept);
		}

		static ::System::Boolean IsModifierKey(::System::Int16 virtualKeyCode)
		{
			return ((::System::Boolean(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_ISMODIFIERKEY_OFFSET))(virtualKeyCode);
		}

		static ::System::IntPtr GetStdHandle(::System::Handles handle)
		{
			return ((::System::IntPtr(*)(::System::Handles))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_GETSTDHANDLE_OFFSET))(handle);
		}

		static ::System::Boolean GetConsoleScreenBufferInfo(::System::IntPtr handle, ::System::ConsoleScreenBufferInfo& info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::ConsoleScreenBufferInfo&))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_GETCONSOLESCREENBUFFERINFO_OFFSET))(handle, info);
		}

		static ::System::Boolean ReadConsoleInput(::System::IntPtr handle, ::System::InputRecord& record, ::System::Int32 length, ::System::Int32& nread)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::InputRecord&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_READCONSOLEINPUT_OFFSET))(handle, record, length, nread);
		}
	};
}

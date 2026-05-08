#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleColor.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/ConsoleScreenBufferInfo.h"
#include "unitysdk/System/Handles.h"
#include "unitysdk/System/InputRecord.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_WINDOWSCONSOLEDRIVER_GETATTRFOREGROUND_OFFSET UNITYSDK_OFFSET(0x1ACA0A30)
#define SYSTEM_WINDOWSCONSOLEDRIVER_GETCONSOLESCREENBUFFERINFO_OFFSET UNITYSDK_OFFSET(0x1ACA0960)
#define SYSTEM_WINDOWSCONSOLEDRIVER_GETSTDHANDLE_OFFSET UNITYSDK_OFFSET(0x1ACA08A0)
#define SYSTEM_WINDOWSCONSOLEDRIVER_ISMODIFIERKEY_OFFSET UNITYSDK_OFFSET(0x1ACA1070)
#define SYSTEM_WINDOWSCONSOLEDRIVER_READCONSOLEINPUT_OFFSET UNITYSDK_OFFSET(0x1ACA0F30)
#define SYSTEM_WINDOWSCONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x1ACA0CA0)
#define SYSTEM_WINDOWSCONSOLEDRIVER_RESETCOLOR_OFFSET UNITYSDK_OFFSET(0x1ACA1090)
#define SYSTEM_WINDOWSCONSOLEDRIVER_SETCONSOLETEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1ACA0BD0)
#define SYSTEM_WINDOWSCONSOLEDRIVER_SET_FOREGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1ACA0A40)
#define SYSTEM_WINDOWSCONSOLEDRIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA0650)

namespace System
{
	inline static constexpr unsigned int WindowsConsoleDriver_TypeDefinitionIndex = 446;

	class WindowsConsoleDriver : public ::System::Object
	{
	public:
		::System::Int16 defaultAttribute; // 0x10
		::System::IntPtr outputHandle; // 0x18
		::System::IntPtr inputHandle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER__CTOR_OFFSET))(this);
		}

		static ::System::Int16 GetAttrForeground(::System::Int32 attr, ::System::ConsoleColor color)
		{
			return ((::System::Int16(*)(::System::Int32, ::System::ConsoleColor))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_GETATTRFOREGROUND_OFFSET))(attr, color);
		}

		::System::Void set_ForegroundColor(::System::ConsoleColor value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ConsoleColor))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_SET_FOREGROUNDCOLOR_OFFSET))(this, value);
		}

		::System::ConsoleKeyInfo ReadKey(::System::Boolean intercept)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_READKEY_OFFSET))(this, intercept);
		}

		::System::Void ResetColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_RESETCOLOR_OFFSET))(this);
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

		static ::System::Boolean SetConsoleTextAttribute(::System::IntPtr handle, ::System::Int16 attribute)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_SETCONSOLETEXTATTRIBUTE_OFFSET))(handle, attribute);
		}

		static ::System::Boolean ReadConsoleInput(::System::IntPtr handle, ::System::InputRecord& record, ::System::Int32 length, ::System::Int32& nread)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::InputRecord&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWSCONSOLEDRIVER_READCONSOLEINPUT_OFFSET))(handle, record, length, nread);
		}
	};
}

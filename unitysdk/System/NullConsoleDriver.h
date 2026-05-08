#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleColor.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NULLCONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x18B98FC0)
#define SYSTEM_NULLCONSOLEDRIVER_RESETCOLOR_OFFSET UNITYSDK_OFFSET(0x18B99030)
#define SYSTEM_NULLCONSOLEDRIVER_SET_FOREGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x18B98FB0)
#define SYSTEM_NULLCONSOLEDRIVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B99050)
#define SYSTEM_NULLCONSOLEDRIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B99040)

namespace System
{
	inline static constexpr unsigned int NullConsoleDriver_TypeDefinitionIndex = 396;

	class NullConsoleDriver : public ::System::Object
	{
	public:
		static ::System::ConsoleKeyInfo* StaticGet_EmptyConsoleKeyInfo()
		{
			return (::System::ConsoleKeyInfo*)Il2CppClass::FromTypeDefinitionIndex(NullConsoleDriver_TypeDefinitionIndex)->GetStaticField(0xD90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER__CCTOR_OFFSET))();
		}

		::System::Void set_ForegroundColor(::System::ConsoleColor value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ConsoleColor))((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER_SET_FOREGROUNDCOLOR_OFFSET))(this, value);
		}

		::System::ConsoleKeyInfo ReadKey(::System::Boolean intercept)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER_READKEY_OFFSET))(this, intercept);
		}

		::System::Void ResetColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER_RESETCOLOR_OFFSET))(this);
		}
	};
}

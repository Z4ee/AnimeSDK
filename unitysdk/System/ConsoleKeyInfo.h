#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleKey.h"
#include "unitysdk/System/ConsoleModifiers.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_CONSOLEKEYINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20D1580)
#define SYSTEM_CONSOLEKEYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x20D1510)
#define SYSTEM_CONSOLEKEYINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20D15A0)
#define SYSTEM_CONSOLEKEYINFO_GET_KEYCHAR_OFFSET UNITYSDK_OFFSET(0x156C9B0)
#define SYSTEM_CONSOLEKEYINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define SYSTEM_CONSOLEKEYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x20D1460)

namespace System
{
	inline static constexpr unsigned int ConsoleKeyInfo_TypeDefinitionIndex = 217;

	struct alignas(4) ConsoleKeyInfo
	{
		::System::Char _keyChar; // 0x10
		::System::ConsoleKey _key; // 0x14
		::System::ConsoleModifiers _mods; // 0x18

		::System::Void _ctor(::System::Char keyChar, ::System::ConsoleKey key, ::System::Boolean shift, ::System::Boolean alt, ::System::Boolean control)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::ConsoleKey, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO__CTOR_OFFSET))(this, keyChar, key, shift, alt, control);
		}

		::System::Char get_KeyChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_GET_KEYCHAR_OFFSET))(this);
		}

		::System::ConsoleKey get_Key()
		{
			return ((::System::ConsoleKey(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_GET_KEY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_EQUALS_OFFSET))(this, value);
		}

		::System::Boolean Equals_1(::System::ConsoleKeyInfo obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ConsoleKeyInfo))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_GETHASHCODE_OFFSET))(this);
		}
	};
}

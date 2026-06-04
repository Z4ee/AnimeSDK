#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleKey.h"
#include "unitysdk/System/ConsoleModifiers.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_CONSOLEKEYINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x38330E0)
#define SYSTEM_CONSOLEKEYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x3833070)
#define SYSTEM_CONSOLEKEYINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3833100)
#define SYSTEM_CONSOLEKEYINFO_GET_KEYCHAR_OFFSET UNITYSDK_OFFSET(0x2C6FDA0)
#define SYSTEM_CONSOLEKEYINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1E110)
#define SYSTEM_CONSOLEKEYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3832FC0)

namespace System
{
	inline static constexpr unsigned int ConsoleKeyInfo_TypeDefinitionIndex = 216;

	struct alignas(4) ConsoleKeyInfo
	{
		::System::Char _keyChar; // 0x10
		::System::ConsoleKey _key; // 0x14
		::System::ConsoleModifiers _mods; // 0x18

		::System::Void _ctor(::System::Char a1, ::System::ConsoleKey a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::ConsoleKey, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Char get_KeyChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_GET_KEYCHAR_OFFSET))(this);
		}

		::System::ConsoleKey get_Key()
		{
			return ((::System::ConsoleKey(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_GET_KEY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::ConsoleKeyInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ConsoleKeyInfo))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEKEYINFO_GETHASHCODE_OFFSET))(this);
		}
	};
}

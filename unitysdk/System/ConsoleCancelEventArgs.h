#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleSpecialKey.h"
#include "unitysdk/System/EventArgs.h"

#define SYSTEM_CONSOLECANCELEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195389C0)
#define SYSTEM_CONSOLECANCELEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19538960)

namespace System
{
	inline static constexpr unsigned int ConsoleCancelEventArgs_TypeDefinitionIndex = 201;

	class ConsoleCancelEventArgs : public ::System::EventArgs
	{
	public:
		::System::ConsoleSpecialKey _type; // 0x10
		::System::Boolean _cancel; // 0x14

		::System::Void _ctor(::System::ConsoleSpecialKey type)
		{
			return ((::System::Void(*)(::PVOID, ::System::ConsoleSpecialKey))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTARGS__CTOR_OFFSET))(this, type);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTARGS__CTOR_1_OFFSET))(this);
		}
	};
}

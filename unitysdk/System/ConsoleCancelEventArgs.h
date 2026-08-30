#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleSpecialKey.h"
#include "unitysdk/System/EventArgs.h"

#define SYSTEM_CONSOLECANCELEVENTARGS_GET_CANCEL_OFFSET UNITYSDK_OFFSET(0x1BC89EB0)
#define SYSTEM_CONSOLECANCELEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC89EC0)
#define SYSTEM_CONSOLECANCELEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC89B10)

namespace System
{
	inline static constexpr unsigned int ConsoleCancelEventArgs_TypeDefinitionIndex = 213;

	class ConsoleCancelEventArgs : public ::System::EventArgs
	{
	public:
		::System::ConsoleSpecialKey _type; // 0x10
		::System::Boolean _cancel; // 0x14

		::System::Void _ctor(::System::ConsoleSpecialKey a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ConsoleSpecialKey))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTARGS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_Cancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTARGS_GET_CANCEL_OFFSET))(this);
		}
	};
}

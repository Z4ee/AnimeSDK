#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NULLCONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x1C6D4960)
#define SYSTEM_NULLCONSOLEDRIVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6D49E0)
#define SYSTEM_NULLCONSOLEDRIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D49D0)

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

		::System::ConsoleKeyInfo ReadKey(::System::Boolean intercept)
		{
			return ((::System::ConsoleKeyInfo(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER_READKEY_OFFSET))(this, intercept);
		}
	};
}

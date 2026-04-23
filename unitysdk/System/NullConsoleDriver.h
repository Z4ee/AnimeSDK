#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NULLCONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x17982F50)
#define SYSTEM_NULLCONSOLEDRIVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17982FD0)
#define SYSTEM_NULLCONSOLEDRIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x17982FC0)

namespace System
{
	inline static constexpr unsigned int NullConsoleDriver_TypeDefinitionIndex = 409;

	class NullConsoleDriver : public ::System::Object
	{
	public:
		static ::System::ConsoleKeyInfo* StaticGet_EmptyConsoleKeyInfo()
		{
			return (::System::ConsoleKeyInfo*)Il2CppClass::FromTypeDefinitionIndex(NullConsoleDriver_TypeDefinitionIndex)->GetStaticField(0x3B00);
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

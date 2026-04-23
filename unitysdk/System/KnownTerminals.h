#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_KNOWNTERMINALS_GET_ANSI_OFFSET UNITYSDK_OFFSET(0x1797C7B0)
#define SYSTEM_KNOWNTERMINALS_GET_LINUX_OFFSET UNITYSDK_OFFSET(0x1797C6B0)
#define SYSTEM_KNOWNTERMINALS_GET_XTERM_OFFSET UNITYSDK_OFFSET(0x1797C730)

namespace System
{
	inline static constexpr unsigned int KnownTerminals_TypeDefinitionIndex = 401;

	class KnownTerminals : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* get_linux()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_KNOWNTERMINALS_GET_LINUX_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* get_xterm()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_KNOWNTERMINALS_GET_XTERM_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* get_ansi()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_KNOWNTERMINALS_GET_ANSI_OFFSET))();
		}
	};
}

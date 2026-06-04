#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x1AF42E10)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1AF42E50)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Debug_TypeDefinitionIndex = 2522;

	class Debug : public ::System::Object
	{
	public:
		static ::System::Void Assert(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_OFFSET))(a1);
		}

		static ::System::Void WriteLine(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_OFFSET))(a1);
		}
	};
}

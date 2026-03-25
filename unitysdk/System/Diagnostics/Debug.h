#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x186A0590)
#define SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_OFFSET UNITYSDK_OFFSET(0x186A05D0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Debug_TypeDefinitionIndex = 2521;

	class Debug : public ::System::Object
	{
	public:
		static ::System::Void Assert(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_ASSERT_OFFSET))(condition);
		}

		static ::System::Void WriteLine(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUG_WRITELINE_OFFSET))(message);
		}
	};
}

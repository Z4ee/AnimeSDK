#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_DEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x1BA0D0F0)

namespace System::Globalization
{
	inline static constexpr unsigned int CharUnicodeInfo_Debug_TypeDefinitionIndex = 696;

	class CharUnicodeInfo_Debug : public ::System::Object
	{
	public:
		static ::System::Void Assert(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_DEBUG_ASSERT_OFFSET))(condition, message);
		}
	};
}

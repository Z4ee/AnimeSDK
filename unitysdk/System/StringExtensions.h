#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_STRINGEXTENSIONS_SUBSTRINGTRIM_1_OFFSET UNITYSDK_OFFSET(0x1A58CE80)
#define SYSTEM_STRINGEXTENSIONS_SUBSTRINGTRIM_OFFSET UNITYSDK_OFFSET(0x1A58CE60)

namespace System
{
	inline static constexpr unsigned int StringExtensions_TypeDefinitionIndex = 2656;

	class StringExtensions : public ::System::Object
	{
	public:
		static ::System::String* SubstringTrim(::System::String* value, ::System::Int32 startIndex)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRINGEXTENSIONS_SUBSTRINGTRIM_OFFSET))(value, startIndex);
		}

		static ::System::String* SubstringTrim_1(::System::String* value, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_STRINGEXTENSIONS_SUBSTRINGTRIM_1_OFFSET))(value, startIndex, length);
		}
	};
}

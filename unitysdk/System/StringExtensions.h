#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_STRINGEXTENSIONS_SUBSTRINGTRIM_1_OFFSET UNITYSDK_OFFSET(0x1DD324F0)
#define SYSTEM_STRINGEXTENSIONS_SUBSTRINGTRIM_OFFSET UNITYSDK_OFFSET(0x1DD324D0)

namespace System
{
	inline static constexpr unsigned int StringExtensions_TypeDefinitionIndex = 2655;

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

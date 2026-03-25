#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLERANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1874D760)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCharClass_SingleRange_TypeDefinitionIndex = 2497;

	class RegexCharClass_SingleRange : public ::System::Object
	{
	public:
		::System::Char _first; // 0x10
		::System::Char _last; // 0x12

		::System::Void _ctor(::System::Char first, ::System::Char last)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLERANGE__CTOR_OFFSET))(this, first, last);
		}
	};
}

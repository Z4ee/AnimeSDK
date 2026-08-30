#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text::RegularExpressions { class RegexCharClass_SingleRange; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLERANGECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1829E190)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLERANGECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1829E180)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCharClass_SingleRangeComparer_TypeDefinitionIndex = 2508;

	class RegexCharClass_SingleRangeComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLERANGECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Text::RegularExpressions::RegexCharClass_SingleRange* a1, ::System::Text::RegularExpressions::RegexCharClass_SingleRange* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Text::RegularExpressions::RegexCharClass_SingleRange*, ::System::Text::RegularExpressions::RegexCharClass_SingleRange*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLERANGECOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}

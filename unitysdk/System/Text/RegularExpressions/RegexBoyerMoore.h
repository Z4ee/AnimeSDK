#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1AFE4200)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_MATCHPATTERN_OFFSET UNITYSDK_OFFSET(0x1AFE4050)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_SCAN_OFFSET UNITYSDK_OFFSET(0x1AFE4270)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AFE4720)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE37A0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexBoyerMoore_TypeDefinitionIndex = 2491;

	class RegexBoyerMoore : public ::System::Object
	{
	public:
		::System::Globalization::CultureInfo* _culture; // 0x10
		::System::String* _pattern; // 0x18
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* _negativeUnicode; // 0x20
		::Il2CppArray<::System::Int32>* _positive; // 0x28
		::Il2CppArray<::System::Int32>* _negativeASCII; // 0x30
		::System::Int32 _lowASCII; // 0x38
		::System::Int32 _highASCII; // 0x3C
		::System::Boolean _rightToLeft; // 0x40
		::System::Boolean _caseInsensitive; // 0x41

		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Globalization::CultureInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MatchPattern(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_MATCHPATTERN_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsMatch(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_ISMATCH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Scan(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_SCAN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_TOSTRING_OFFSET))(this);
		}
	};
}

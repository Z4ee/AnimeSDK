#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class RegexBoyerMoore; }
namespace System::Text::RegularExpressions { class RegexPrefix; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_OPCODEBACKTRACKS_OFFSET UNITYSDK_OFFSET(0x1A189760)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1896A0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCode_TypeDefinitionIndex = 2499;

	class RegexCode : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* _caps; // 0x10
		::System::Text::RegularExpressions::RegexPrefix* _fcPrefix; // 0x18
		::Il2CppArray<::System::String*>* _strings; // 0x20
		::Il2CppArray<::System::Int32>* _codes; // 0x28
		::System::Text::RegularExpressions::RegexBoyerMoore* _bmPrefix; // 0x30
		::System::Int32 _capsize; // 0x38
		::System::Boolean _rightToLeft; // 0x3C
		::System::Int32 _trackcount; // 0x40
		::System::Int32 _anchors; // 0x44

		::System::Void _ctor(::Il2CppArray<::System::Int32>* codes, ::System::Collections::Generic::List_1<::System::String*>* stringlist, ::System::Int32 trackcount, ::System::Collections::Hashtable* caps, ::System::Int32 capsize, ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix, ::System::Text::RegularExpressions::RegexPrefix* fcPrefix, ::System::Int32 anchors, ::System::Boolean rightToLeft)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Collections::Hashtable*, ::System::Int32, ::System::Text::RegularExpressions::RegexBoyerMoore*, ::System::Text::RegularExpressions::RegexPrefix*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE__CTOR_OFFSET))(this, codes, stringlist, trackcount, caps, capsize, bmPrefix, fcPrefix, anchors, rightToLeft);
		}

		static ::System::Boolean OpcodeBacktracks(::System::Int32 Op)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_OPCODEBACKTRACKS_OFFSET))(Op);
		}
	};
}

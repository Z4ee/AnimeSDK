#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class RegexBoyerMoore; }
namespace System::Text::RegularExpressions { class RegexPrefix; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_OPCODEBACKTRACKS_OFFSET UNITYSDK_OFFSET(0x1E9FF400)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FF340)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCode_TypeDefinitionIndex = 2510;

	class RegexCode : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::RegexBoyerMoore* _bmPrefix; // 0x10
		::System::Collections::Hashtable* _caps; // 0x18
		::Il2CppArray<::System::String*>* _strings; // 0x20
		::System::Text::RegularExpressions::RegexPrefix* _fcPrefix; // 0x28
		::Il2CppArray<::System::Int32>* _codes; // 0x30
		::System::Int32 _capsize; // 0x38
		::System::Int32 _anchors; // 0x3C
		::System::Int32 _trackcount; // 0x40
		::System::Boolean _rightToLeft; // 0x44

		::System::Void _ctor(::Il2CppArray<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Int32 a3, ::System::Collections::Hashtable* a4, ::System::Int32 a5, ::System::Text::RegularExpressions::RegexBoyerMoore* a6, ::System::Text::RegularExpressions::RegexPrefix* a7, ::System::Int32 a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Collections::Hashtable*, ::System::Int32, ::System::Text::RegularExpressions::RegexBoyerMoore*, ::System::Text::RegularExpressions::RegexPrefix*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Boolean OpcodeBacktracks(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_OPCODEBACKTRACKS_OFFSET))(a1);
		}
	};
}

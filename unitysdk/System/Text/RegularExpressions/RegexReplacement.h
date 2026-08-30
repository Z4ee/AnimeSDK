#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class MatchEvaluator; }
namespace System::Text::RegularExpressions { class Regex; }
namespace System::Text::RegularExpressions { class RegexNode; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x182AF240)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPLRTL_OFFSET UNITYSDK_OFFSET(0x182AEE90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPL_OFFSET UNITYSDK_OFFSET(0x182AEB40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1828FC50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x18293F30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACE_OFFSET UNITYSDK_OFFSET(0x18293810)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_SPLIT_OFFSET UNITYSDK_OFFSET(0x18294710)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x182A8320)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexReplacement_TypeDefinitionIndex = 2526;

	class RegexReplacement : public ::System::Object
	{
	public:
		::System::String* _rep; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _rules; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _strings; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::Text::RegularExpressions::RegexNode* a2, ::System::Collections::Hashtable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexNode*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReplacementImpl(::System::Text::StringBuilder* a1, ::System::Text::RegularExpressions::Match* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void ReplacementImplRTL(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Text::RegularExpressions::Match* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPLRTL_OFFSET))(this, a1, a2);
		}

		::System::String* get_Pattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_GET_PATTERN_OFFSET))(this);
		}

		::System::String* Replacement(::System::Text::RegularExpressions::Match* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENT_OFFSET))(this, a1);
		}

		::System::String* Replace(::System::Text::RegularExpressions::Regex* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACE_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::String* Replace_1(::System::Text::RegularExpressions::MatchEvaluator* a1, ::System::Text::RegularExpressions::Regex* a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::String*(*)(::System::Text::RegularExpressions::MatchEvaluator*, ::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::System::String*>* Split(::System::Text::RegularExpressions::Regex* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_SPLIT_OFFSET))(a1, a2, a3, a4);
		}
	};
}

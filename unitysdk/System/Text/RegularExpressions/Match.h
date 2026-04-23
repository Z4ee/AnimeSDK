#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/Group.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class GroupCollection; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ADDMATCH_OFFSET UNITYSDK_OFFSET(0x1A17A5F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_BALANCEMATCH_OFFSET UNITYSDK_OFFSET(0x1A17A940)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1A1799F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x1A179BD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GROUPTOSTRINGIMPL_OFFSET UNITYSDK_OFFSET(0x1A17A4E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ISMATCHED_OFFSET UNITYSDK_OFFSET(0x1A17AAC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_LASTGROUPTOSTRINGIMPL_OFFSET UNITYSDK_OFFSET(0x1A17A5C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHINDEX_OFFSET UNITYSDK_OFFSET(0x1A17AB60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHLENGTH_OFFSET UNITYSDK_OFFSET(0x1A17AC20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_NEXTMATCH_OFFSET UNITYSDK_OFFSET(0x1A179C10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_REMOVEMATCH_OFFSET UNITYSDK_OFFSET(0x1A17AA80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_RESET_OFFSET UNITYSDK_OFFSET(0x1A179B70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_RESULT_OFFSET UNITYSDK_OFFSET(0x1A179F90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_TIDY_OFFSET UNITYSDK_OFFSET(0x1A17ACE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A17AF20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A17AF80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A179A20)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Match_TypeDefinitionIndex = 2507;

	class Match : public ::System::Text::RegularExpressions::Group
	{
	public:
		static ::System::Text::RegularExpressions::Match** StaticGet__empty()
		{
			return (::System::Text::RegularExpressions::Match**)Il2CppClass::FromTypeDefinitionIndex(Match_TypeDefinitionIndex)->GetStaticField(0x106C0);
		}
		::System::Text::RegularExpressions::Regex* _regex; // 0x40
		::System::Text::RegularExpressions::GroupCollection* _groupcoll; // 0x48
		::Il2CppArray<::System::Int32>* _matchcount; // 0x50
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* _matches; // 0x58
		::System::Boolean _balancing; // 0x60
		::System::Int32 _textend; // 0x64
		::System::Int32 _textstart; // 0x68
		::System::Int32 _textpos; // 0x6C
		::System::Int32 _textbeg; // 0x70

		::System::Void _ctor(::System::Text::RegularExpressions::Regex* regex, ::System::Int32 capcount, ::System::String* text, ::System::Int32 begpos, ::System::Int32 len, ::System::Int32 startpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH__CTOR_OFFSET))(this, regex, capcount, text, begpos, len, startpos);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH__CTOR_1_OFFSET))(this);
		}

		static ::System::Text::RegularExpressions::Match* get_Empty()
		{
			return ((::System::Text::RegularExpressions::Match*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GET_EMPTY_OFFSET))();
		}

		::System::Void Reset(::System::Text::RegularExpressions::Regex* regex, ::System::String* text, ::System::Int32 textbeg, ::System::Int32 textend, ::System::Int32 textstart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_RESET_OFFSET))(this, regex, text, textbeg, textend, textstart);
		}

		::System::Text::RegularExpressions::GroupCollection* get_Groups()
		{
			return ((::System::Text::RegularExpressions::GroupCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GET_GROUPS_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Match* NextMatch()
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_NEXTMATCH_OFFSET))(this);
		}

		::System::String* Result(::System::String* replacement)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_RESULT_OFFSET))(this, replacement);
		}

		::System::String* GroupToStringImpl(::System::Int32 groupnum)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GROUPTOSTRINGIMPL_OFFSET))(this, groupnum);
		}

		::System::String* LastGroupToStringImpl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_LASTGROUPTOSTRINGIMPL_OFFSET))(this);
		}

		::System::Void AddMatch(::System::Int32 cap, ::System::Int32 start, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ADDMATCH_OFFSET))(this, cap, start, len);
		}

		::System::Void BalanceMatch(::System::Int32 cap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_BALANCEMATCH_OFFSET))(this, cap);
		}

		::System::Void RemoveMatch(::System::Int32 cap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_REMOVEMATCH_OFFSET))(this, cap);
		}

		::System::Boolean IsMatched(::System::Int32 cap)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ISMATCHED_OFFSET))(this, cap);
		}

		::System::Int32 MatchIndex(::System::Int32 cap)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHINDEX_OFFSET))(this, cap);
		}

		::System::Int32 MatchLength(::System::Int32 cap)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHLENGTH_OFFSET))(this, cap);
		}

		::System::Void Tidy(::System::Int32 textpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_TIDY_OFFSET))(this, textpos);
		}
	};
}

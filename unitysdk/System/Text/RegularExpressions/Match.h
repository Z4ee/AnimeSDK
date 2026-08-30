#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/Group.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class GroupCollection; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ADDMATCH_OFFSET UNITYSDK_OFFSET(0x1E9F0F90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_BALANCEMATCH_OFFSET UNITYSDK_OFFSET(0x1E9F1200)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1E9F0140)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x1E9F0310)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GROUPTOSTRINGIMPL_OFFSET UNITYSDK_OFFSET(0x1E9F0E50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ISMATCHED_OFFSET UNITYSDK_OFFSET(0x1E9F1400)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_LASTGROUPTOSTRINGIMPL_OFFSET UNITYSDK_OFFSET(0x1E9F0EF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHINDEX_OFFSET UNITYSDK_OFFSET(0x1E9F1470)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHLENGTH_OFFSET UNITYSDK_OFFSET(0x1E9F14F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_NEXTMATCH_OFFSET UNITYSDK_OFFSET(0x1E9F0350)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_REMOVEMATCH_OFFSET UNITYSDK_OFFSET(0x1E9F13D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_RESET_OFFSET UNITYSDK_OFFSET(0x1E9F02B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_RESULT_OFFSET UNITYSDK_OFFSET(0x1E9F0750)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_TIDY_OFFSET UNITYSDK_OFFSET(0x1E9F1570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F1730)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9F17A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F0170)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Match_TypeDefinitionIndex = 2518;

	class Match : public ::System::Text::RegularExpressions::Group
	{
	public:
		static ::System::Text::RegularExpressions::Match** StaticGet__empty()
		{
			return (::System::Text::RegularExpressions::Match**)Il2CppClass::FromTypeDefinitionIndex(Match_TypeDefinitionIndex)->GetStaticField(0x24690);
		}
		::Il2CppArray<::System::Int32>* _matchcount; // 0x40
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* _matches; // 0x48
		::System::Text::RegularExpressions::GroupCollection* _groupcoll; // 0x50
		::System::Text::RegularExpressions::Regex* _regex; // 0x58
		::System::Int32 _textbeg; // 0x60
		::System::Int32 _textstart; // 0x64
		::System::Int32 _textend; // 0x68
		::System::Boolean _balancing; // 0x6C
		::System::Int32 _textpos; // 0x70

		::System::Void _ctor(::System::Text::RegularExpressions::Regex* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
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

		::System::Void Reset(::System::Text::RegularExpressions::Regex* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_RESET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Text::RegularExpressions::GroupCollection* get_Groups()
		{
			return ((::System::Text::RegularExpressions::GroupCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GET_GROUPS_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Match* NextMatch()
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_NEXTMATCH_OFFSET))(this);
		}

		::System::String* Result(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_RESULT_OFFSET))(this, a1);
		}

		::System::String* GroupToStringImpl(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_GROUPTOSTRINGIMPL_OFFSET))(this, a1);
		}

		::System::String* LastGroupToStringImpl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_LASTGROUPTOSTRINGIMPL_OFFSET))(this);
		}

		::System::Void AddMatch(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ADDMATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BalanceMatch(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_BALANCEMATCH_OFFSET))(this, a1);
		}

		::System::Void RemoveMatch(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_REMOVEMATCH_OFFSET))(this, a1);
		}

		::System::Boolean IsMatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_ISMATCHED_OFFSET))(this, a1);
		}

		::System::Int32 MatchIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHINDEX_OFFSET))(this, a1);
		}

		::System::Int32 MatchLength(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_MATCHLENGTH_OFFSET))(this, a1);
		}

		::System::Void Tidy(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_TIDY_OFFSET))(this, a1);
		}
	};
}

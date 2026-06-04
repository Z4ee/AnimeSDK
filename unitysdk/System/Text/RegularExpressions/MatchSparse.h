#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/Match.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Text::RegularExpressions { class GroupCollection; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x1AFDF580)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDF4F0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int MatchSparse_TypeDefinitionIndex = 2508;

	class MatchSparse : public ::System::Text::RegularExpressions::Match
	{
	public:
		::System::Collections::Hashtable* _caps; // 0x78

		::System::Void _ctor(::System::Text::RegularExpressions::Regex* a1, ::System::Collections::Hashtable* a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::Collections::Hashtable*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Text::RegularExpressions::GroupCollection* get_Groups()
		{
			return ((::System::Text::RegularExpressions::GroupCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE_GET_GROUPS_OFFSET))(this);
		}
	};
}

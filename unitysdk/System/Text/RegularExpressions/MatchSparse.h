#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/Match.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Text::RegularExpressions { class GroupCollection; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x1D6CAFB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CAF00)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int MatchSparse_TypeDefinitionIndex = 2740;

	class MatchSparse : public ::System::Text::RegularExpressions::Match
	{
	public:
		::System::Collections::Hashtable* _caps; // 0x78

		::System::Void _ctor(::System::Text::RegularExpressions::Regex* regex, ::System::Collections::Hashtable* caps, ::System::Int32 capcount, ::System::String* text, ::System::Int32 begpos, ::System::Int32 len, ::System::Int32 startpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::Collections::Hashtable*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE__CTOR_OFFSET))(this, regex, caps, capcount, text, begpos, len, startpos);
		}

		::System::Text::RegularExpressions::GroupCollection* get_Groups()
		{
			return ((::System::Text::RegularExpressions::GroupCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHSPARSE_GET_GROUPS_OFFSET))(this);
		}
	};
}

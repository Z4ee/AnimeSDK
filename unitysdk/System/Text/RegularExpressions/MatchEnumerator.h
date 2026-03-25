#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class MatchCollection; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x187411F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x187411A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18741240)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18741140)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int MatchEnumerator_TypeDefinitionIndex = 2509;

	class MatchEnumerator : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::Match* _match; // 0x10
		::System::Text::RegularExpressions::MatchCollection* _matchcoll; // 0x18
		::System::Boolean _done; // 0x20
		::System::Int32 _curindex; // 0x24

		::System::Void _ctor(::System::Text::RegularExpressions::MatchCollection* matchcoll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::MatchCollection*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHENUMERATOR__CTOR_OFFSET))(this, matchcoll);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHENUMERATOR_RESET_OFFSET))(this);
		}
	};
}

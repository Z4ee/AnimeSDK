#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_CASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x1B421EF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1B421F00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1B421EE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B421F60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B421ED0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexPrefix_TypeDefinitionIndex = 2734;

	class RegexPrefix : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::RegexPrefix** StaticGet__empty()
		{
			return (::System::Text::RegularExpressions::RegexPrefix**)Il2CppClass::FromTypeDefinitionIndex(RegexPrefix_TypeDefinitionIndex)->GetStaticField(0x3390);
		}
		::System::String* _prefix; // 0x10
		::System::Boolean _caseInsensitive; // 0x18

		::System::Void _ctor(::System::String* prefix, ::System::Boolean ci)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX__CTOR_OFFSET))(this, prefix, ci);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX__CCTOR_OFFSET))();
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_PREFIX_OFFSET))(this);
		}

		::System::Boolean get_CaseInsensitive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_CASEINSENSITIVE_OFFSET))(this);
		}

		static ::System::Text::RegularExpressions::RegexPrefix* get_Empty()
		{
			return ((::System::Text::RegularExpressions::RegexPrefix*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_EMPTY_OFFSET))();
		}
	};
}

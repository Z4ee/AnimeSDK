#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class CultureInfo; }
namespace System::Text::RegularExpressions { class RegexCharClass; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_ADDFC_OFFSET UNITYSDK_OFFSET(0x1923BD30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_GETFIRSTCHARS_OFFSET UNITYSDK_OFFSET(0x1923BDC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_ISCASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x1923BE00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1923BC50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1923BD00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1923BC10)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexFC_TypeDefinitionIndex = 2734;

	class RegexFC : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::RegexCharClass* _cc; // 0x10
		::System::Boolean _nullable; // 0x18
		::System::Boolean _caseInsensitive; // 0x19

		::System::Void _ctor(::System::Boolean nullable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_OFFSET))(this, nullable);
		}

		::System::Void _ctor_1(::System::Char ch, ::System::Boolean not, ::System::Boolean nullable, ::System::Boolean caseInsensitive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_1_OFFSET))(this, ch, not, nullable, caseInsensitive);
		}

		::System::Void _ctor_2(::System::String* charClass, ::System::Boolean nullable, ::System::Boolean caseInsensitive)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_2_OFFSET))(this, charClass, nullable, caseInsensitive);
		}

		::System::Boolean AddFC(::System::Text::RegularExpressions::RegexFC* fc, ::System::Boolean concatenate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::RegularExpressions::RegexFC*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_ADDFC_OFFSET))(this, fc, concatenate);
		}

		::System::String* GetFirstChars(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_GETFIRSTCHARS_OFFSET))(this, culture);
		}

		::System::Boolean IsCaseInsensitive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_ISCASEINSENSITIVE_OFFSET))(this);
		}
	};
}

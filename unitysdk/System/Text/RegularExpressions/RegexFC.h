#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class CultureInfo; }
namespace System::Text::RegularExpressions { class RegexCharClass; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_ADDFC_OFFSET UNITYSDK_OFFSET(0x1829E590)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_GETFIRSTCHARS_OFFSET UNITYSDK_OFFSET(0x1829E620)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_ISCASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x1829E660)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1829E3D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1829E560)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1829E2B0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexFC_TypeDefinitionIndex = 2512;

	class RegexFC : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::RegexCharClass* _cc; // 0x10
		::System::Boolean _nullable; // 0x18
		::System::Boolean _caseInsensitive; // 0x19

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Char a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddFC(::System::Text::RegularExpressions::RegexFC* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::RegularExpressions::RegexFC*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_ADDFC_OFFSET))(this, a1, a2);
		}

		::System::String* GetFirstChars(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_GETFIRSTCHARS_OFFSET))(this, a1);
		}

		::System::Boolean IsCaseInsensitive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFC_ISCASEINSENSITIVE_OFFSET))(this);
		}
	};
}

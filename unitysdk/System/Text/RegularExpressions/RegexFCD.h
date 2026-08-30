#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text::RegularExpressions { class RegexFC; }
namespace System::Text::RegularExpressions { class RegexNode; }
namespace System::Text::RegularExpressions { class RegexPrefix; }
namespace System::Text::RegularExpressions { class RegexTree; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORFROMTYPE_OFFSET UNITYSDK_OFFSET(0x1829EEB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORS_OFFSET UNITYSDK_OFFSET(0x1829ECC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_CALCULATEFC_OFFSET UNITYSDK_OFFSET(0x1829F160)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_FCISEMPTY_OFFSET UNITYSDK_OFFSET(0x1829F0E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_FIRSTCHARS_OFFSET UNITYSDK_OFFSET(0x1829E670)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_INTISEMPTY_OFFSET UNITYSDK_OFFSET(0x1829F000)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_POPFC_OFFSET UNITYSDK_OFFSET(0x1829F0F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_POPINT_OFFSET UNITYSDK_OFFSET(0x1829F010)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PREFIX_OFFSET UNITYSDK_OFFSET(0x1829E9A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHFC_OFFSET UNITYSDK_OFFSET(0x1829F050)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHINT_OFFSET UNITYSDK_OFFSET(0x1829EF70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_REGEXFCFROMREGEXTREE_OFFSET UNITYSDK_OFFSET(0x1829E800)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_SKIPCHILD_OFFSET UNITYSDK_OFFSET(0x1829FAB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_TOPFC_OFFSET UNITYSDK_OFFSET(0x1829F130)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1829E7C0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexFCD_TypeDefinitionIndex = 2511;

	class RegexFCD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Text::RegularExpressions::RegexFC*>* _fcStack; // 0x10
		::Il2CppArray<::System::Int32>* _intStack; // 0x18
		::System::Int32 _fcDepth; // 0x20
		::System::Int32 _intDepth; // 0x24
		::System::Boolean _skipchild; // 0x28
		::System::Boolean _failed; // 0x29
		::System::Boolean _skipAllChildren; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD__CTOR_OFFSET))(this);
		}

		static ::System::Text::RegularExpressions::RegexPrefix* FirstChars(::System::Text::RegularExpressions::RegexTree* a1)
		{
			return ((::System::Text::RegularExpressions::RegexPrefix*(*)(::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_FIRSTCHARS_OFFSET))(a1);
		}

		static ::System::Text::RegularExpressions::RegexPrefix* Prefix(::System::Text::RegularExpressions::RegexTree* a1)
		{
			return ((::System::Text::RegularExpressions::RegexPrefix*(*)(::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PREFIX_OFFSET))(a1);
		}

		static ::System::Int32 Anchors(::System::Text::RegularExpressions::RegexTree* a1)
		{
			return ((::System::Int32(*)(::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORS_OFFSET))(a1);
		}

		static ::System::Int32 AnchorFromType(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORFROMTYPE_OFFSET))(a1);
		}

		::System::Void PushInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHINT_OFFSET))(this, a1);
		}

		::System::Boolean IntIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_INTISEMPTY_OFFSET))(this);
		}

		::System::Int32 PopInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_POPINT_OFFSET))(this);
		}

		::System::Void PushFC(::System::Text::RegularExpressions::RegexFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexFC*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHFC_OFFSET))(this, a1);
		}

		::System::Boolean FCIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_FCISEMPTY_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexFC* PopFC()
		{
			return ((::System::Text::RegularExpressions::RegexFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_POPFC_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexFC* TopFC()
		{
			return ((::System::Text::RegularExpressions::RegexFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_TOPFC_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexFC* RegexFCFromRegexTree(::System::Text::RegularExpressions::RegexTree* a1)
		{
			return ((::System::Text::RegularExpressions::RegexFC*(*)(::PVOID, ::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_REGEXFCFROMREGEXTREE_OFFSET))(this, a1);
		}

		::System::Void SkipChild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_SKIPCHILD_OFFSET))(this);
		}

		::System::Void CalculateFC(::System::Int32 a1, ::System::Text::RegularExpressions::RegexNode* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexNode*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_CALCULATEFC_OFFSET))(this, a1, a2, a3);
		}
	};
}

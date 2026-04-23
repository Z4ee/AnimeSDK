#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text::RegularExpressions { class RegexFC; }
namespace System::Text::RegularExpressions { class RegexNode; }
namespace System::Text::RegularExpressions { class RegexPrefix; }
namespace System::Text::RegularExpressions { class RegexTree; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORFROMTYPE_OFFSET UNITYSDK_OFFSET(0x1A18A310)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORS_OFFSET UNITYSDK_OFFSET(0x1A18A150)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_CALCULATEFC_OFFSET UNITYSDK_OFFSET(0x1A18A5F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_FCISEMPTY_OFFSET UNITYSDK_OFFSET(0x1A18A560)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_FIRSTCHARS_OFFSET UNITYSDK_OFFSET(0x1A189B40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_INTISEMPTY_OFFSET UNITYSDK_OFFSET(0x1A18A470)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_POPFC_OFFSET UNITYSDK_OFFSET(0x1A18A570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_POPINT_OFFSET UNITYSDK_OFFSET(0x1A18A480)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PREFIX_OFFSET UNITYSDK_OFFSET(0x1A189E80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHFC_OFFSET UNITYSDK_OFFSET(0x1A18A4C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHINT_OFFSET UNITYSDK_OFFSET(0x1A18A3D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_REGEXFCFROMREGEXTREE_OFFSET UNITYSDK_OFFSET(0x1A189CD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_SKIPCHILD_OFFSET UNITYSDK_OFFSET(0x1A18AF30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_TOPFC_OFFSET UNITYSDK_OFFSET(0x1A18A5B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A189C90)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexFCD_TypeDefinitionIndex = 2500;

	class RegexFCD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Text::RegularExpressions::RegexFC*>* _fcStack; // 0x10
		::Il2CppArray<::System::Int32>* _intStack; // 0x18
		::System::Boolean _failed; // 0x20
		::System::Boolean _skipAllChildren; // 0x21
		::System::Boolean _skipchild; // 0x22
		::System::Int32 _intDepth; // 0x24
		::System::Int32 _fcDepth; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD__CTOR_OFFSET))(this);
		}

		static ::System::Text::RegularExpressions::RegexPrefix* FirstChars(::System::Text::RegularExpressions::RegexTree* t)
		{
			return ((::System::Text::RegularExpressions::RegexPrefix*(*)(::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_FIRSTCHARS_OFFSET))(t);
		}

		static ::System::Text::RegularExpressions::RegexPrefix* Prefix(::System::Text::RegularExpressions::RegexTree* tree)
		{
			return ((::System::Text::RegularExpressions::RegexPrefix*(*)(::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PREFIX_OFFSET))(tree);
		}

		static ::System::Int32 Anchors(::System::Text::RegularExpressions::RegexTree* tree)
		{
			return ((::System::Int32(*)(::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORS_OFFSET))(tree);
		}

		static ::System::Int32 AnchorFromType(::System::Int32 type)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_ANCHORFROMTYPE_OFFSET))(type);
		}

		::System::Void PushInt(::System::Int32 I)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHINT_OFFSET))(this, I);
		}

		::System::Boolean IntIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_INTISEMPTY_OFFSET))(this);
		}

		::System::Int32 PopInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_POPINT_OFFSET))(this);
		}

		::System::Void PushFC(::System::Text::RegularExpressions::RegexFC* fc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexFC*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_PUSHFC_OFFSET))(this, fc);
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

		::System::Text::RegularExpressions::RegexFC* RegexFCFromRegexTree(::System::Text::RegularExpressions::RegexTree* tree)
		{
			return ((::System::Text::RegularExpressions::RegexFC*(*)(::PVOID, ::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_REGEXFCFROMREGEXTREE_OFFSET))(this, tree);
		}

		::System::Void SkipChild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_SKIPCHILD_OFFSET))(this);
		}

		::System::Void CalculateFC(::System::Int32 NodeType, ::System::Text::RegularExpressions::RegexNode* node, ::System::Int32 CurIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexNode*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXFCD_CALCULATEFC_OFFSET))(this, NodeType, node, CurIndex);
		}
	};
}

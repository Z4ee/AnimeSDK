#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1D4641C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x1D464070)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILD_OFFSET UNITYSDK_OFFSET(0x1D464080)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEQUANTIFIER_OFFSET UNITYSDK_OFFSET(0x1D4640E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEREP_OFFSET UNITYSDK_OFFSET(0x1D4631D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEALTERNATION_OFFSET UNITYSDK_OFFSET(0x1D463460)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCECONCATENATION_OFFSET UNITYSDK_OFFSET(0x1D463820)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEGROUP_OFFSET UNITYSDK_OFFSET(0x1D463E20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEREP_OFFSET UNITYSDK_OFFSET(0x1D463C90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCESET_OFFSET UNITYSDK_OFFSET(0x1D463E90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCE_OFFSET UNITYSDK_OFFSET(0x1D4631F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REVERSELEFT_OFFSET UNITYSDK_OFFSET(0x1D463120)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_STRIPENATION_OFFSET UNITYSDK_OFFSET(0x1D463FC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_TYPE_OFFSET UNITYSDK_OFFSET(0x1D4642D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_USEOPTIONR_OFFSET UNITYSDK_OFFSET(0x1D463110)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D4630C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D4630D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D4630E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D4630F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4630B0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexNode_TypeDefinitionIndex = 2744;

	class RegexNode : public ::System::Object
	{
	public:
		// static const ::System::Int32 Oneloop = 0x3; // 0x0
		// static const ::System::Int32 Notoneloop = 0x4; // 0x0
		// static const ::System::Int32 Setloop = 0x5; // 0x0
		// static const ::System::Int32 Onelazy = 0x6; // 0x0
		// static const ::System::Int32 Notonelazy = 0x7; // 0x0
		// static const ::System::Int32 Setlazy = 0x8; // 0x0
		// static const ::System::Int32 One = 0x9; // 0x0
		// static const ::System::Int32 Notone = 0xA; // 0x0
		// static const ::System::Int32 Set = 0xB; // 0x0
		// static const ::System::Int32 Multi = 0xC; // 0x0
		// static const ::System::Int32 Ref = 0xD; // 0x0
		// static const ::System::Int32 Bol = 0xE; // 0x0
		// static const ::System::Int32 Eol = 0xF; // 0x0
		// static const ::System::Int32 Boundary = 0x10; // 0x0
		// static const ::System::Int32 Nonboundary = 0x11; // 0x0
		// static const ::System::Int32 ECMABoundary = 0x29; // 0x0
		// static const ::System::Int32 NonECMABoundary = 0x2A; // 0x0
		// static const ::System::Int32 Beginning = 0x12; // 0x0
		// static const ::System::Int32 Start = 0x13; // 0x0
		// static const ::System::Int32 EndZ = 0x14; // 0x0
		// static const ::System::Int32 End = 0x15; // 0x0
		// static const ::System::Int32 Nothing = 0x16; // 0x0
		// static const ::System::Int32 Empty = 0x17; // 0x0
		// static const ::System::Int32 Alternate = 0x18; // 0x0
		// static const ::System::Int32 Concatenate = 0x19; // 0x0
		// static const ::System::Int32 Loop = 0x1A; // 0x0
		// static const ::System::Int32 Lazyloop = 0x1B; // 0x0
		// static const ::System::Int32 Capture = 0x1C; // 0x0
		// static const ::System::Int32 Group = 0x1D; // 0x0
		// static const ::System::Int32 Require = 0x1E; // 0x0
		// static const ::System::Int32 Prevent = 0x1F; // 0x0
		// static const ::System::Int32 Greedy = 0x20; // 0x0
		// static const ::System::Int32 Testref = 0x21; // 0x0
		// static const ::System::Int32 Testgroup = 0x22; // 0x0
		::System::String* _str; // 0x10
		::System::Text::RegularExpressions::RegexNode* _next; // 0x18
		::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>* _children; // 0x20
		::System::Int32 _n; // 0x28
		::System::Int32 _type; // 0x2C
		::System::Text::RegularExpressions::RegexOptions _options; // 0x30
		::System::Int32 _m; // 0x34
		::System::Char _ch; // 0x38

		::System::Void _ctor(::System::Int32 type, ::System::Text::RegularExpressions::RegexOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_OFFSET))(this, type, options);
		}

		::System::Void _ctor_1(::System::Int32 type, ::System::Text::RegularExpressions::RegexOptions options, ::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_1_OFFSET))(this, type, options, ch);
		}

		::System::Void _ctor_2(::System::Int32 type, ::System::Text::RegularExpressions::RegexOptions options, ::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_2_OFFSET))(this, type, options, str);
		}

		::System::Void _ctor_3(::System::Int32 type, ::System::Text::RegularExpressions::RegexOptions options, ::System::Int32 m)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_3_OFFSET))(this, type, options, m);
		}

		::System::Void _ctor_4(::System::Int32 type, ::System::Text::RegularExpressions::RegexOptions options, ::System::Int32 m, ::System::Int32 n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_4_OFFSET))(this, type, options, m, n);
		}

		::System::Boolean UseOptionR()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_USEOPTIONR_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ReverseLeft()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REVERSELEFT_OFFSET))(this);
		}

		::System::Void MakeRep(::System::Int32 type, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEREP_OFFSET))(this, type, min, max);
		}

		::System::Text::RegularExpressions::RegexNode* Reduce()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCE_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* StripEnation(::System::Int32 emptyType)
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_STRIPENATION_OFFSET))(this, emptyType);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceGroup()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEGROUP_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceRep()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEREP_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceSet()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCESET_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceAlternation()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEALTERNATION_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceConcatenation()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCECONCATENATION_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* MakeQuantifier(::System::Boolean lazy, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEQUANTIFIER_OFFSET))(this, lazy, min, max);
		}

		::System::Void AddChild(::System::Text::RegularExpressions::RegexNode* newChild)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexNode*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_ADDCHILD_OFFSET))(this, newChild);
		}

		::System::Text::RegularExpressions::RegexNode* Child(::System::Int32 i)
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILD_OFFSET))(this, i);
		}

		::System::Int32 ChildCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILDCOUNT_OFFSET))(this);
		}

		::System::Int32 Type()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_TYPE_OFFSET))(this);
		}
	};
}

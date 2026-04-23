#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1A192760)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x1A18A110)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILD_OFFSET UNITYSDK_OFFSET(0x1A18A120)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEQUANTIFIER_OFFSET UNITYSDK_OFFSET(0x1A192600)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEREP_OFFSET UNITYSDK_OFFSET(0x1A191770)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEALTERNATION_OFFSET UNITYSDK_OFFSET(0x1A191890)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCECONCATENATION_OFFSET UNITYSDK_OFFSET(0x1A191E80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEGROUP_OFFSET UNITYSDK_OFFSET(0x1A192420)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEREP_OFFSET UNITYSDK_OFFSET(0x1A192260)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCESET_OFFSET UNITYSDK_OFFSET(0x1A192470)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCE_OFFSET UNITYSDK_OFFSET(0x1A191790)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REVERSELEFT_OFFSET UNITYSDK_OFFSET(0x1A1916E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_STRIPENATION_OFFSET UNITYSDK_OFFSET(0x1A1925B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_TYPE_OFFSET UNITYSDK_OFFSET(0x1A192840)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_USEOPTIONR_OFFSET UNITYSDK_OFFSET(0x1A1916D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A191680)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A191690)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A1916A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A1916B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A191670)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexNode_TypeDefinitionIndex = 2512;

	class RegexNode : public ::System::Object
	{
	public:
		::System::String* _str; // 0x10
		::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>* _children; // 0x18
		::System::Text::RegularExpressions::RegexNode* _next; // 0x20
		::System::Int32 _type; // 0x28
		::System::Text::RegularExpressions::RegexOptions _options; // 0x2C
		::System::Char _ch; // 0x30
		::System::Int32 _n; // 0x34
		::System::Int32 _m; // 0x38

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

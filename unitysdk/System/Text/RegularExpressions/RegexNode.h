#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1AFF4B40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AFECDE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILD_OFFSET UNITYSDK_OFFSET(0x1AFECDF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEQUANTIFIER_OFFSET UNITYSDK_OFFSET(0x1AFF4A90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEREP_OFFSET UNITYSDK_OFFSET(0x1AFF3BA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEALTERNATION_OFFSET UNITYSDK_OFFSET(0x1AFF3CD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCECONCATENATION_OFFSET UNITYSDK_OFFSET(0x1AFF4310)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEGROUP_OFFSET UNITYSDK_OFFSET(0x1AFF4890)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEREP_OFFSET UNITYSDK_OFFSET(0x1AFF4750)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCESET_OFFSET UNITYSDK_OFFSET(0x1AFF48F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCE_OFFSET UNITYSDK_OFFSET(0x1AFF3BC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REVERSELEFT_OFFSET UNITYSDK_OFFSET(0x1AFF3B40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_STRIPENATION_OFFSET UNITYSDK_OFFSET(0x1AFF4A30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_TYPE_OFFSET UNITYSDK_OFFSET(0x1AFF4C70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_USEOPTIONR_OFFSET UNITYSDK_OFFSET(0x1AFF3B30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFF3AE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AFF3AF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AFF3B00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AFF3B10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF3AD0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexNode_TypeDefinitionIndex = 2512;

	class RegexNode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>* _children; // 0x10
		::System::String* _str; // 0x18
		::System::Text::RegularExpressions::RegexNode* _next; // 0x20
		::System::Int32 _type; // 0x28
		::System::Char _ch; // 0x2C
		::System::Int32 _n; // 0x30
		::System::Int32 _m; // 0x34
		::System::Text::RegularExpressions::RegexOptions _options; // 0x38

		::System::Void _ctor(::System::Int32 a1, ::System::Text::RegularExpressions::RegexOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Text::RegularExpressions::RegexOptions a2, ::System::Char a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Text::RegularExpressions::RegexOptions a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::Int32 a1, ::System::Text::RegularExpressions::RegexOptions a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::System::Int32 a1, ::System::Text::RegularExpressions::RegexOptions a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UseOptionR()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_USEOPTIONR_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ReverseLeft()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REVERSELEFT_OFFSET))(this);
		}

		::System::Void MakeRep(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEREP_OFFSET))(this, a1, a2, a3);
		}

		::System::Text::RegularExpressions::RegexNode* Reduce()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCE_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* StripEnation(::System::Int32 a1)
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_STRIPENATION_OFFSET))(this, a1);
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

		::System::Text::RegularExpressions::RegexNode* MakeQuantifier(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEQUANTIFIER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddChild(::System::Text::RegularExpressions::RegexNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexNode*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_ADDCHILD_OFFSET))(this, a1);
		}

		::System::Text::RegularExpressions::RegexNode* Child(::System::Int32 a1)
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILD_OFFSET))(this, a1);
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

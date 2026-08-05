#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class LabelTarget; }

#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1FAEB510)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1FAEB4E0)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_BREAKLABEL_OFFSET UNITYSDK_OFFSET(0x1FAEB4F0)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_CONTINUELABEL_OFFSET UNITYSDK_OFFSET(0x1FAEB500)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1FAEB4D0)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1FAEB490)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FAEB540)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAEB5D0)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAEB420)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LoopExpression_TypeDefinitionIndex = 4501;

	class LoopExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::LabelTarget* _BreakLabel_k__BackingField; // 0x10
		::System::Linq::Expressions::LabelTarget* _ContinueLabel_k__BackingField; // 0x18
		::System::Linq::Expressions::Expression* _Body_k__BackingField; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::LabelTarget* break_, ::System::Linq::Expressions::LabelTarget* continue_)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION__CTOR_OFFSET))(this, body, break_, continue_);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_BODY_OFFSET))(this);
		}

		::System::Linq::Expressions::LabelTarget* get_BreakLabel()
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_BREAKLABEL_OFFSET))(this);
		}

		::System::Linq::Expressions::LabelTarget* get_ContinueLabel()
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_CONTINUELABEL_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::LoopExpression* Update(::System::Linq::Expressions::LabelTarget* breakLabel, ::System::Linq::Expressions::LabelTarget* continueLabel, ::System::Linq::Expressions::Expression* body)
		{
			return ((::System::Linq::Expressions::LoopExpression*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_UPDATE_OFFSET))(this, breakLabel, continueLabel, body);
		}
	};
}

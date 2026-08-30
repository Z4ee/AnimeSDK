#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"

namespace System::Linq::Expressions { class LabelTarget; }

#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1E764C70)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_BREAKLABEL_OFFSET UNITYSDK_OFFSET(0x1E764C80)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_CONTINUELABEL_OFFSET UNITYSDK_OFFSET(0x1E764C90)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LoopExpression_TypeDefinitionIndex = 3239;

	class LoopExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::LabelTarget* _BreakLabel_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Body_k__BackingField; // 0x18
		::System::Linq::Expressions::LabelTarget* _ContinueLabel_k__BackingField; // 0x20

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
	};
}

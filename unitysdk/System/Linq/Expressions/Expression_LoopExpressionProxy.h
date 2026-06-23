#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions { class LoopExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1E304E60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_BREAKLABEL_OFFSET UNITYSDK_OFFSET(0x1E304E80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1E304EA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_CONTINUELABEL_OFFSET UNITYSDK_OFFSET(0x1E304EC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1E304EE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E304F00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E304F10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E304DC0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_LoopExpressionProxy_TypeDefinitionIndex = 4414;

	class Expression_LoopExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::LoopExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::LoopExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::LoopExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_BODY_OFFSET))(this);
		}

		::System::Linq::Expressions::LabelTarget* get_BreakLabel()
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_BREAKLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::Linq::Expressions::LabelTarget* get_ContinueLabel()
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_CONTINUELABEL_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LOOPEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}

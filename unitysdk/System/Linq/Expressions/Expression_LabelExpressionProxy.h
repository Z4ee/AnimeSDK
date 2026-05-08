#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LabelExpression; }
namespace System::Linq::Expressions { class LabelTarget; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1A3EBF80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1A3EBFA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1A3EBFC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A3EBFE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1A3EBFF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A3EC010)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3EBEE0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_LabelExpressionProxy_TypeDefinitionIndex = 4412;

	class Expression_LabelExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::LabelExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::LabelExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::LabelExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_DefaultValue()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::LabelTarget* get_Target()
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_TARGET_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABELEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}

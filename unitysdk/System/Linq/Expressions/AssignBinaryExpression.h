#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BinaryExpression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_ISBYREF_OFFSET UNITYSDK_OFFSET(0x1DF2EDF0)
#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1DF2EE40)
#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DF2EE00)
#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x1DF2ED50)
#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2ECE0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int AssignBinaryExpression_TypeDefinitionIndex = 4394;

	class AssignBinaryExpression : public ::System::Linq::Expressions::BinaryExpression
	{
	public:
		::System::Void _ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION__CTOR_OFFSET))(this, left, right);
		}

		static ::System::Linq::Expressions::AssignBinaryExpression* Make(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Boolean byRef)
		{
			return ((::System::Linq::Expressions::AssignBinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_MAKE_OFFSET))(left, right, byRef);
		}

		::System::Boolean get_IsByRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_ISBYREF_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}
	};
}

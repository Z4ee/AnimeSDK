#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }

#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1ADB7430)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GETISBYREF_OFFSET UNITYSDK_OFFSET(0x1ADB7420)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_ISBYREF_OFFSET UNITYSDK_OFFSET(0x1ADB7410)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ADB7400)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1ADB73F0)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ADB73C0)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x1ADB6F60)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB6F00)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ParameterExpression_TypeDefinitionIndex = 3255;

	class ParameterExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION__CTOR_OFFSET))(this, a1);
		}

		static ::System::Linq::Expressions::ParameterExpression* Make(::System::Type* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_MAKE_OFFSET))(a1, a2, a3);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsByRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_ISBYREF_OFFSET))(this);
		}

		::System::Boolean GetIsByRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GETISBYREF_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_ACCEPT_OFFSET))(this, a1);
		}
	};
}

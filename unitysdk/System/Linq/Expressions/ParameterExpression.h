#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }

#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1F5A1C90)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GETISBYREF_OFFSET UNITYSDK_OFFSET(0x1F5A1C80)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_ISBYREF_OFFSET UNITYSDK_OFFSET(0x1F5A1C70)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F5A1C60)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F5A1C50)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F5A1C20)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x1F5A1880)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5A1CC0)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A1820)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ParameterExpression_TypeDefinitionIndex = 4530;

	class ParameterExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION__CTOR_1_OFFSET))(this);
		}

		static ::System::Linq::Expressions::ParameterExpression* Make(::System::Type* type, ::System::String* name, ::System::Boolean isByRef)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_MAKE_OFFSET))(type, name, isByRef);
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

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1E327EF0)
#define SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E327ED0)
#define SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E327EA0)
#define SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1E327EE0)
#define SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E327F20)
#define SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E327FB0)
#define SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E327E40)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int RuntimeVariablesExpression_TypeDefinitionIndex = 4534;

	class RuntimeVariablesExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* _Variables_k__BackingField; // 0x10

		::System::Void _ctor(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION__CTOR_OFFSET))(this, variables);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* get_Variables()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_GET_VARIABLES_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::RuntimeVariablesExpression* Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables)
		{
			return ((::System::Linq::Expressions::RuntimeVariablesExpression*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_UPDATE_OFFSET))(this, variables);
		}
	};
}

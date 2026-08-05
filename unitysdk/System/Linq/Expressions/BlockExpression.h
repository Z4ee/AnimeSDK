#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1EEECCD0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1EEECFB0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1EEED050)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETORMAKEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1EEED0A0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1EEED000)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1EEECC30)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1EEECD00)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1EEECC50)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EEECD10)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1EEECC40)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_RETURNREADONLYEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1EEED150)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x1EEED100)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_SAMEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1EEECF60)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_SAMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1EEECE90)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EEECD70)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEECC80)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BlockExpression_TypeDefinitionIndex = 4430;

	class BlockExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Expressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_EXPRESSIONS_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* get_Variables()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_VARIABLES_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Result()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_RESULT_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::BlockExpression* Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_UPDATE_OFFSET))(this, variables, expressions);
		}

		::System::Boolean SameVariables(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::ParameterExpression*>* variables)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_SAMEVARIABLES_OFFSET))(this, variables);
		}

		::System::Boolean SameExpressions(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_SAMEEXPRESSIONS_OFFSET))(this, expressions);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETEXPRESSION_OFFSET))(this, index);
		}

		::System::Int32 get_ExpressionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_EXPRESSIONCOUNT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETORMAKEEXPRESSIONS_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* GetOrMakeVariables()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETORMAKEVARIABLES_OFFSET))(this);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_REWRITE_OFFSET))(this, variables, args);
		}

		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* ReturnReadOnlyExpressions(::System::Linq::Expressions::BlockExpression* provider, ::System::Object*& collection)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::System::Linq::Expressions::BlockExpression*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_RETURNREADONLYEXPRESSIONS_OFFSET))(provider, collection);
		}
	};
}

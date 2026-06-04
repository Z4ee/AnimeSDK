#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1AD415F0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1AD41690)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1AD41730)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETORMAKEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1AD41780)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD416E0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1AD415D0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1AD41620)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AD41630)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1AD415E0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_RETURNREADONLYEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1AD40DF0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x1AD417E0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD40C40)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BlockExpression_TypeDefinitionIndex = 3180;

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

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_ACCEPT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETEXPRESSION_OFFSET))(this, a1);
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

		::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_REWRITE_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* ReturnReadOnlyExpressions(::System::Linq::Expressions::BlockExpression* a1, ::System::Object*& a2)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::System::Linq::Expressions::BlockExpression*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_RETURNREADONLYEXPRESSIONS_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BlockExpression.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_BLOCK2_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1F3318D0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK2_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1F331EB0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK2_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1F331EA0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK2_REWRITE_OFFSET UNITYSDK_OFFSET(0x1F331EC0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK2_SAMEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1F331940)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK2__CTOR_OFFSET UNITYSDK_OFFSET(0x1F331860)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Block2_TypeDefinitionIndex = 4431;

	class Block2 : public ::System::Linq::Expressions::BlockExpression
	{
	public:
		::System::Object* _arg0; // 0x10
		::System::Linq::Expressions::Expression* _arg1; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK2__CTOR_OFFSET))(this, arg0, arg1);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK2_GETEXPRESSION_OFFSET))(this, index);
		}

		::System::Boolean SameExpressions(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK2_SAMEEXPRESSIONS_OFFSET))(this, expressions);
		}

		::System::Int32 get_ExpressionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK2_GET_EXPRESSIONCOUNT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK2_GETORMAKEEXPRESSIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK2_REWRITE_OFFSET))(this, variables, args);
		}
	};
}

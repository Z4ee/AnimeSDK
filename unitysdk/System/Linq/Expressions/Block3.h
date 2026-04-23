#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BlockExpression.h"

namespace System { class Object; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_BLOCK3_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x19ECA500)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK3_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x19ECA590)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK3_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19ECA580)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK3_REWRITE_OFFSET UNITYSDK_OFFSET(0x19ECA5A0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK3__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECA490)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Block3_TypeDefinitionIndex = 3181;

	class Block3 : public ::System::Linq::Expressions::BlockExpression
	{
	public:
		::System::Linq::Expressions::Expression* _arg1; // 0x10
		::System::Object* _arg0; // 0x18
		::System::Linq::Expressions::Expression* _arg2; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK3__CTOR_OFFSET))(this, arg0, arg1, arg2);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK3_GETEXPRESSION_OFFSET))(this, index);
		}

		::System::Int32 get_ExpressionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK3_GET_EXPRESSIONCOUNT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK3_GETORMAKEEXPRESSIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK3_REWRITE_OFFSET))(this, variables, args);
		}
	};
}

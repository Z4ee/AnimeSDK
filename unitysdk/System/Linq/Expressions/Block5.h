#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BlockExpression.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1F333270)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1F333AD0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1F333AC0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK5_REWRITE_OFFSET UNITYSDK_OFFSET(0x1F333AE0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK5_SAMEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1F333300)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK5__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3331F0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Block5_TypeDefinitionIndex = 4434;

	class Block5 : public ::System::Linq::Expressions::BlockExpression
	{
	public:
		::System::Linq::Expressions::Expression* _arg1; // 0x10
		::System::Linq::Expressions::Expression* _arg4; // 0x18
		::System::Linq::Expressions::Expression* _arg2; // 0x20
		::System::Object* _arg0; // 0x28
		::System::Linq::Expressions::Expression* _arg3; // 0x30

		::System::Void _ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3, ::System::Linq::Expressions::Expression* arg4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK5__CTOR_OFFSET))(this, arg0, arg1, arg2, arg3, arg4);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GETEXPRESSION_OFFSET))(this, index);
		}

		::System::Boolean SameExpressions(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK5_SAMEEXPRESSIONS_OFFSET))(this, expressions);
		}

		::System::Int32 get_ExpressionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GET_EXPRESSIONCOUNT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GETORMAKEEXPRESSIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK5_REWRITE_OFFSET))(this, variables, args);
		}
	};
}

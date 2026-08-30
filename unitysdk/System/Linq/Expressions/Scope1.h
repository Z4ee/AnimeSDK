#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ScopeExpression.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E768550)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1E7685C0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1E7685B0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1_REWRITE_OFFSET UNITYSDK_OFFSET(0x1E7685D0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E768480)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E768410)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Scope1_TypeDefinitionIndex = 3199;

	class Scope1 : public ::System::Linq::Expressions::ScopeExpression
	{
	public:
		::System::Object* _body; // 0x18

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GETEXPRESSION_OFFSET))(this, a1);
		}

		::System::Int32 get_ExpressionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GET_EXPRESSIONCOUNT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GETORMAKEEXPRESSIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1_REWRITE_OFFSET))(this, a1, a2);
		}
	};
}

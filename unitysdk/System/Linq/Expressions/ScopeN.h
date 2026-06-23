#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ScopeExpression.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E0F6AC0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1E0F6C80)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1E0F6AB0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1E0F6BA0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_REWRITE_OFFSET UNITYSDK_OFFSET(0x1E0F6CC0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_SAMEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1E0F6A60)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F69F0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ScopeN_TypeDefinitionIndex = 4438;

	class ScopeN : public ::System::Linq::Expressions::ScopeExpression
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _body; // 0x18

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* body)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN__CTOR_OFFSET))(this, variables, body);
		}

		::System::Boolean SameExpressions(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_SAMEEXPRESSIONS_OFFSET))(this, expressions);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* get_Body()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GET_BODY_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GETEXPRESSION_OFFSET))(this, index);
		}

		::System::Int32 get_ExpressionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GET_EXPRESSIONCOUNT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GETORMAKEEXPRESSIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_REWRITE_OFFSET))(this, variables, args);
		}
	};
}

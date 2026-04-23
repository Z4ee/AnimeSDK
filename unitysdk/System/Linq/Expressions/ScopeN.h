#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ScopeExpression.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x19F40380)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x19F40540)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GET_BODY_OFFSET UNITYSDK_OFFSET(0x19F40370)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19F40460)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_REWRITE_OFFSET UNITYSDK_OFFSET(0x19F40580)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x19F40300)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ScopeN_TypeDefinitionIndex = 3187;

	class ScopeN : public ::System::Linq::Expressions::ScopeExpression
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _body; // 0x18

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* body)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN__CTOR_OFFSET))(this, variables, body);
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

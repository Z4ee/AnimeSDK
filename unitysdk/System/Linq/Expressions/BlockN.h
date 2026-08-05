#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BlockExpression.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1F333CF0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1F333EB0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1F333DD0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKN_REWRITE_OFFSET UNITYSDK_OFFSET(0x1F333EF0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKN_SAMEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1F333CA0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F333C40)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BlockN_TypeDefinitionIndex = 4435;

	class BlockN : public ::System::Linq::Expressions::BlockExpression
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _expressions; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKN__CTOR_OFFSET))(this, expressions);
		}

		::System::Boolean SameExpressions(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKN_SAMEEXPRESSIONS_OFFSET))(this, expressions);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GETEXPRESSION_OFFSET))(this, index);
		}

		::System::Int32 get_ExpressionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GET_EXPRESSIONCOUNT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GETORMAKEEXPRESSIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKN_REWRITE_OFFSET))(this, variables, args);
		}
	};
}

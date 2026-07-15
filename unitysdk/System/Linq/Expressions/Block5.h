#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BlockExpression.h"

namespace System { class Object; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x17E30380)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x17E30440)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x17E30430)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK5_REWRITE_OFFSET UNITYSDK_OFFSET(0x17E30450)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK5__CTOR_OFFSET UNITYSDK_OFFSET(0x17E30300)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Block5_TypeDefinitionIndex = 3188;

	class Block5 : public ::System::Linq::Expressions::BlockExpression
	{
	public:
		::System::Linq::Expressions::Expression* _arg1; // 0x10
		::System::Linq::Expressions::Expression* _arg3; // 0x18
		::System::Object* _arg0; // 0x20
		::System::Linq::Expressions::Expression* _arg4; // 0x28
		::System::Linq::Expressions::Expression* _arg2; // 0x30

		::System::Void _ctor(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Linq::Expressions::Expression* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GETEXPRESSION_OFFSET))(this, a1);
		}

		::System::Int32 get_ExpressionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GET_EXPRESSIONCOUNT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK5_GETORMAKEEXPRESSIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK5_REWRITE_OFFSET))(this, a1, a2);
		}
	};
}

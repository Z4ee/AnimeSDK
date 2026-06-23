#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/InvocationExpression.h"

namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E70DAA0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E70DA40)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E70DAF0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_REWRITE_OFFSET UNITYSDK_OFFSET(0x1E70DB00)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E70D9D0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpression0_TypeDefinitionIndex = 4483;

	class InvocationExpression0 : public ::System::Linq::Expressions::InvocationExpression
	{
	public:
		::System::Void _ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0__CTOR_OFFSET))(this, lambda, returnType);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::InvocationExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_REWRITE_OFFSET))(this, lambda, arguments);
		}
	};
}

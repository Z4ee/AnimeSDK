#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/InvocationExpression.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1C06DC60)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1C06DC20)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C06DD40)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_REWRITE_OFFSET UNITYSDK_OFFSET(0x1C06DE20)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06DBB0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpressionN_TypeDefinitionIndex = 4483;

	class InvocationExpressionN : public ::System::Linq::Expressions::InvocationExpression
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _arguments; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Expression* lambda, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments, ::System::Type* returnType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN__CTOR_OFFSET))(this, lambda, arguments, returnType);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::InvocationExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_REWRITE_OFFSET))(this, lambda, arguments);
		}
	};
}

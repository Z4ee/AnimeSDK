#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/InvocationExpression.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1F75B7F0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F75B7E0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F75B890)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_REWRITE_OFFSET UNITYSDK_OFFSET(0x1F75B8A0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4__CTOR_OFFSET UNITYSDK_OFFSET(0x1F75B750)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpression4_TypeDefinitionIndex = 4487;

	class InvocationExpression4 : public ::System::Linq::Expressions::InvocationExpression
	{
	public:
		::System::Linq::Expressions::Expression* _arg2; // 0x20
		::System::Linq::Expressions::Expression* _arg1; // 0x28
		::System::Object* _arg0; // 0x30
		::System::Linq::Expressions::Expression* _arg3; // 0x38

		::System::Void _ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4__CTOR_OFFSET))(this, lambda, returnType, arg0, arg1, arg2, arg3);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::InvocationExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_REWRITE_OFFSET))(this, lambda, arguments);
		}
	};
}

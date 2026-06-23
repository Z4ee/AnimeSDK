#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/InvocationExpression.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1DAE6620)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1DAE6610)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DAE66A0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_REWRITE_OFFSET UNITYSDK_OFFSET(0x1DAE66B0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE65A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpression1_TypeDefinitionIndex = 4484;

	class InvocationExpression1 : public ::System::Linq::Expressions::InvocationExpression
	{
	public:
		::System::Object* _arg0; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1__CTOR_OFFSET))(this, lambda, returnType, arg0);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::InvocationExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_REWRITE_OFFSET))(this, lambda, arguments);
		}
	};
}

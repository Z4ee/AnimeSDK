#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/InvocationExpression.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION2_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1C1C93B0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION2_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1C1C93A0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION2_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C1C9440)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION2_REWRITE_OFFSET UNITYSDK_OFFSET(0x1C1C9450)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C9320)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpression2_TypeDefinitionIndex = 4486;

	class InvocationExpression2 : public ::System::Linq::Expressions::InvocationExpression
	{
	public:
		::System::Linq::Expressions::Expression* _arg1; // 0x20
		::System::Object* _arg0; // 0x28

		::System::Void _ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION2__CTOR_OFFSET))(this, lambda, returnType, arg0, arg1);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION2_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION2_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION2_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::InvocationExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION2_REWRITE_OFFSET))(this, lambda, arguments);
		}
	};
}

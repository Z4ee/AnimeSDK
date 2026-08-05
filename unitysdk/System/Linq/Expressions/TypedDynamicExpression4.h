#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/DynamicExpression4.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION4_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E5A4850)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION4__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A47B0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedDynamicExpression4_TypeDefinitionIndex = 4467;

	class TypedDynamicExpression4 : public ::System::Linq::Expressions::DynamicExpression4
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x40

		::System::Void _ctor(::System::Type* retType, ::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION4__CTOR_OFFSET))(this, retType, delegateType, binder, arg0, arg1, arg2, arg3);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION4_GET_TYPE_OFFSET))(this);
		}
	};
}

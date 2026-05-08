#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/DynamicExpression3.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION3_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BF3EE20)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION3__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3ED90)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedDynamicExpression3_TypeDefinitionIndex = 4466;

	class TypedDynamicExpression3 : public ::System::Linq::Expressions::DynamicExpression3
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x38

		::System::Void _ctor(::System::Type* retType, ::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION3__CTOR_OFFSET))(this, retType, delegateType, binder, arg0, arg1, arg2);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION3_GET_TYPE_OFFSET))(this);
		}
	};
}

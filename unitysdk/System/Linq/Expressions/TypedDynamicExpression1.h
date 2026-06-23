#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/DynamicExpression1.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC5B0D0)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5B050)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedDynamicExpression1_TypeDefinitionIndex = 4461;

	class TypedDynamicExpression1 : public ::System::Linq::Expressions::DynamicExpression1
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x28

		::System::Void _ctor(::System::Type* retType, ::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION1__CTOR_OFFSET))(this, retType, delegateType, binder, arg0);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION1_GET_TYPE_OFFSET))(this);
		}
	};
}

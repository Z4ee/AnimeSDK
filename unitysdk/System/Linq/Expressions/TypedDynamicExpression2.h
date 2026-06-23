#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/DynamicExpression2.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E080780)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E06DE50)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedDynamicExpression2_TypeDefinitionIndex = 4463;

	class TypedDynamicExpression2 : public ::System::Linq::Expressions::DynamicExpression2
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x30

		::System::Void _ctor(::System::Type* retType, ::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION2__CTOR_OFFSET))(this, retType, delegateType, binder, arg0, arg1);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION2_GET_TYPE_OFFSET))(this);
		}
	};
}

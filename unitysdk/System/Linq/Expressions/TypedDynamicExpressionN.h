#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/DynamicExpressionN.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSIONN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C06EA20)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSIONN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06E9A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedDynamicExpressionN_TypeDefinitionIndex = 4460;

	class TypedDynamicExpressionN : public ::System::Linq::Expressions::DynamicExpressionN
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x28

		::System::Void _ctor(::System::Type* returnType, ::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSIONN__CTOR_OFFSET))(this, returnType, delegateType, binder, arguments);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSIONN_GET_TYPE_OFFSET))(this);
		}
	};
}

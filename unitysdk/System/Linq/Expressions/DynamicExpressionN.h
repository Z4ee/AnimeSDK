#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/DynamicExpression.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }

#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F46B850)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_REWRITE_OFFSET UNITYSDK_OFFSET(0x1F46B890)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_SAMEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F46B720)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1F46B640)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F46B770)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F468EA0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DynamicExpressionN_TypeDefinitionIndex = 4458;

	class DynamicExpressionN : public ::System::Linq::Expressions::DynamicExpression
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _arguments; // 0x20

		::System::Void _ctor(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN__CTOR_OFFSET))(this, delegateType, binder, arguments);
		}

		::System::Linq::Expressions::Expression* System_Linq_Expressions_IArgumentProvider_GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Boolean SameArguments(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_SAMEARGUMENTS_OFFSET))(this, arguments);
		}

		::System::Int32 System_Linq_Expressions_IArgumentProvider_get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::DynamicExpression* Rewrite(::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::PVOID, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_REWRITE_OFFSET))(this, args);
		}
	};
}

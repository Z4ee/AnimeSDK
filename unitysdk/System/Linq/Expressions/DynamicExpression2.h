#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/DynamicExpression.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }

#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E06F1D0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2_REWRITE_OFFSET UNITYSDK_OFFSET(0x1E06F1E0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2_SAMEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E06EC80)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E06EBE0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E06EC70)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E06DDD0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DynamicExpression2_TypeDefinitionIndex = 4462;

	class DynamicExpression2 : public ::System::Linq::Expressions::DynamicExpression
	{
	public:
		::System::Linq::Expressions::Expression* _arg1; // 0x20
		::System::Object* _arg0; // 0x28

		::System::Void _ctor(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2__CTOR_OFFSET))(this, delegateType, binder, arg0, arg1);
		}

		::System::Linq::Expressions::Expression* System_Linq_Expressions_IArgumentProvider_GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 System_Linq_Expressions_IArgumentProvider_get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Boolean SameArguments(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2_SAMEARGUMENTS_OFFSET))(this, arguments);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::DynamicExpression* Rewrite(::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::PVOID, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION2_REWRITE_OFFSET))(this, args);
		}
	};
}

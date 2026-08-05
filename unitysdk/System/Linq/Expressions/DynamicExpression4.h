#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/DynamicExpression.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }

#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F46B5A0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_REWRITE_OFFSET UNITYSDK_OFFSET(0x1F46B5B0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_SAMEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F46AEF0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1F46AE40)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F46AEE0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4696C0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DynamicExpression4_TypeDefinitionIndex = 4466;

	class DynamicExpression4 : public ::System::Linq::Expressions::DynamicExpression
	{
	public:
		::System::Linq::Expressions::Expression* _arg1; // 0x20
		::System::Linq::Expressions::Expression* _arg2; // 0x28
		::System::Linq::Expressions::Expression* _arg3; // 0x30
		::System::Object* _arg0; // 0x38

		::System::Void _ctor(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4__CTOR_OFFSET))(this, delegateType, binder, arg0, arg1, arg2, arg3);
		}

		::System::Linq::Expressions::Expression* System_Linq_Expressions_IArgumentProvider_GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 System_Linq_Expressions_IArgumentProvider_get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Boolean SameArguments(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_SAMEARGUMENTS_OFFSET))(this, arguments);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::DynamicExpression* Rewrite(::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::PVOID, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_REWRITE_OFFSET))(this, args);
		}
	};
}

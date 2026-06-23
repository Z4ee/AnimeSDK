#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class DynamicExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_1_OFFSET UNITYSDK_OFFSET(0x1DC545B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_2_OFFSET UNITYSDK_OFFSET(0x1DC547C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_3_OFFSET UNITYSDK_OFFSET(0x1DC54AB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_4_OFFSET UNITYSDK_OFFSET(0x1DC54E70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_5_OFFSET UNITYSDK_OFFSET(0x1DC544A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_OFFSET UNITYSDK_OFFSET(0x1DC54390)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_GETVALIDMETHODFORDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1DC542A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_1_OFFSET UNITYSDK_OFFSET(0x1DC52E20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_2_OFFSET UNITYSDK_OFFSET(0x1DC536A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_3_OFFSET UNITYSDK_OFFSET(0x1DC538F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_4_OFFSET UNITYSDK_OFFSET(0x1DC53BB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_5_OFFSET UNITYSDK_OFFSET(0x1DC53EF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_6_OFFSET UNITYSDK_OFFSET(0x1DC55320)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1DC52E10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_VALIDATEDYNAMICARGUMENT_1_OFFSET UNITYSDK_OFFSET(0x1DC555F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_VALIDATEDYNAMICARGUMENT_OFFSET UNITYSDK_OFFSET(0x1DC54380)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ExpressionExtension_TypeDefinitionIndex = 4468;

	class ExpressionExtension : public ::System::Object
	{
	public:
		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET))(delegateType, binder, arguments);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic_1(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_1_OFFSET))(delegateType, binder, arguments);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic_2(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_2_OFFSET))(delegateType, binder, arg0);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic_3(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_3_OFFSET))(delegateType, binder, arg0, arg1);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic_4(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_4_OFFSET))(delegateType, binder, arg0, arg1, arg2);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic_5(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_5_OFFSET))(delegateType, binder, arg0, arg1, arg2, arg3);
		}

		static ::System::Reflection::MethodInfo* GetValidMethodForDynamic(::System::Type* delegateType)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_GETVALIDMETHODFORDYNAMIC_OFFSET))(delegateType);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_OFFSET))(binder, returnType, arguments);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic_1(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_1_OFFSET))(binder, returnType, arg0);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic_2(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_2_OFFSET))(binder, returnType, arg0, arg1);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic_3(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_3_OFFSET))(binder, returnType, arg0, arg1, arg2);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic_4(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_4_OFFSET))(binder, returnType, arg0, arg1, arg2, arg3);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic_5(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_DYNAMIC_5_OFFSET))(binder, returnType, arguments);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic_6(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_6_OFFSET))(binder, returnType, arguments);
		}

		static ::System::Void ValidateDynamicArgument(::System::Linq::Expressions::Expression* arg, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_VALIDATEDYNAMICARGUMENT_OFFSET))(arg, paramName);
		}

		static ::System::Void ValidateDynamicArgument_1(::System::Linq::Expressions::Expression* arg, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_VALIDATEDYNAMICARGUMENT_1_OFFSET))(arg, paramName, index);
		}
	};
}

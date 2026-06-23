#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }

#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1E06E3A0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_1_OFFSET UNITYSDK_OFFSET(0x1E06E660)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_2_OFFSET UNITYSDK_OFFSET(0x1E06E670)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_3_OFFSET UNITYSDK_OFFSET(0x1E06E680)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_4_OFFSET UNITYSDK_OFFSET(0x1E06E690)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_5_OFFSET UNITYSDK_OFFSET(0x1E06E6A0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_OFFSET UNITYSDK_OFFSET(0x1E06E650)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E06E350)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E06D8E0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x1E06E330)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1E06D7A0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_DELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x1E06E340)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E06E320)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E06E2F0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_1_OFFSET UNITYSDK_OFFSET(0x1E06E6C0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_2_OFFSET UNITYSDK_OFFSET(0x1E06E6D0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_3_OFFSET UNITYSDK_OFFSET(0x1E06E6E0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_4_OFFSET UNITYSDK_OFFSET(0x1E06E6F0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_5_OFFSET UNITYSDK_OFFSET(0x1E06E700)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1E06E6B0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_1_OFFSET UNITYSDK_OFFSET(0x1E06DAB0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_2_OFFSET UNITYSDK_OFFSET(0x1E06DC70)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_3_OFFSET UNITYSDK_OFFSET(0x1E06DED0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_4_OFFSET UNITYSDK_OFFSET(0x1E06E0D0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x1E06D8F0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x1E06D7B0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x1E06E470)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SAMEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E06E560)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E06E5B0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E06E600)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IDYNAMICEXPRESSION_CREATECALLSITE_OFFSET UNITYSDK_OFFSET(0x1E06E720)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IDYNAMICEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x1E06E710)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E06E4C0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E06E730)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E06D730)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DynamicExpression_TypeDefinitionIndex = 4457;

	class DynamicExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Type* _DelegateType_k__BackingField; // 0x10
		::System::Runtime::CompilerServices::CallSiteBinder* _Binder_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION__CTOR_OFFSET))(this, delegateType, binder);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_CANREDUCE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Reduce()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_REDUCE_OFFSET))(this);
		}

		static ::System::Linq::Expressions::DynamicExpression* Make(::System::Type* returnType, ::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET))(returnType, delegateType, binder, arguments);
		}

		static ::System::Linq::Expressions::DynamicExpression* Make_1(::System::Type* returnType, ::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_1_OFFSET))(returnType, delegateType, binder, arg0);
		}

		static ::System::Linq::Expressions::DynamicExpression* Make_2(::System::Type* returnType, ::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_2_OFFSET))(returnType, delegateType, binder, arg0, arg1);
		}

		static ::System::Linq::Expressions::DynamicExpression* Make_3(::System::Type* returnType, ::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_3_OFFSET))(returnType, delegateType, binder, arg0, arg1, arg2);
		}

		static ::System::Linq::Expressions::DynamicExpression* Make_4(::System::Type* returnType, ::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_4_OFFSET))(returnType, delegateType, binder, arg0, arg1, arg2, arg3);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Runtime::CompilerServices::CallSiteBinder* get_Binder()
		{
			return ((::System::Runtime::CompilerServices::CallSiteBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_BINDER_OFFSET))(this);
		}

		::System::Type* get_DelegateType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_DELEGATETYPE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Arguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::DynamicExpression* Rewrite(::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::PVOID, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_REWRITE_OFFSET))(this, args);
		}

		::System::Linq::Expressions::DynamicExpression* Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_UPDATE_OFFSET))(this, arguments);
		}

		::System::Boolean SameArguments(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SAMEARGUMENTS_OFFSET))(this, arguments);
		}

		::System::Linq::Expressions::Expression* System_Linq_Expressions_IArgumentProvider_GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 System_Linq_Expressions_IArgumentProvider_get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IARGUMENTPROVIDER_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_OFFSET))(binder, returnType, arguments);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic_1(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_1_OFFSET))(binder, returnType, arguments);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic_2(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_2_OFFSET))(binder, returnType, arg0);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic_3(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_3_OFFSET))(binder, returnType, arg0, arg1);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic_4(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_4_OFFSET))(binder, returnType, arg0, arg1, arg2);
		}

		static ::System::Linq::Expressions::DynamicExpression* Dynamic_5(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_DYNAMIC_5_OFFSET))(binder, returnType, arg0, arg1, arg2, arg3);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_OFFSET))(delegateType, binder, arguments);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic_1(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_1_OFFSET))(delegateType, binder, arguments);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic_2(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_2_OFFSET))(delegateType, binder, arg0);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic_3(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_3_OFFSET))(delegateType, binder, arg0, arg1);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic_4(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_4_OFFSET))(delegateType, binder, arg0, arg1, arg2);
		}

		static ::System::Linq::Expressions::DynamicExpression* MakeDynamic_5(::System::Type* delegateType, ::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3)
		{
			return ((::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKEDYNAMIC_5_OFFSET))(delegateType, binder, arg0, arg1, arg2, arg3);
		}

		::System::Linq::Expressions::Expression* System_Linq_Expressions_IDynamicExpression_Rewrite(::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IDYNAMICEXPRESSION_REWRITE_OFFSET))(this, args);
		}

		::System::Object* System_Linq_Expressions_IDynamicExpression_CreateCallSite()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IDYNAMICEXPRESSION_CREATECALLSITE_OFFSET))(this);
		}
	};
}

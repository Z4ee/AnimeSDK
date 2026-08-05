#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/InstanceMethodCallExpression.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class MethodCallExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1F4F4D60)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F4F5470)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F4F4DF0)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_REWRITE_OFFSET UNITYSDK_OFFSET(0x1F4F5480)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_SAMEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F4F4E00)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4F4CE0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InstanceMethodCallExpression3_TypeDefinitionIndex = 4524;

	class InstanceMethodCallExpression3 : public ::System::Linq::Expressions::InstanceMethodCallExpression
	{
	public:
		::System::Object* _arg0; // 0x20
		::System::Linq::Expressions::Expression* _arg1; // 0x28
		::System::Linq::Expressions::Expression* _arg2; // 0x30

		::System::Void _ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3__CTOR_OFFSET))(this, method, instance, arg0, arg1, arg2);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Boolean SameArguments(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_SAMEARGUMENTS_OFFSET))(this, arguments);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_REWRITE_OFFSET))(this, instance, args);
		}
	};
}

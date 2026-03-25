#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/InstanceMethodCallExpression.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class MethodCallExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION0_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x184B6940)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION0_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x184B6990)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION0_REWRITE_OFFSET UNITYSDK_OFFSET(0x184B69A0)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION0__CTOR_OFFSET UNITYSDK_OFFSET(0x184AA820)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InstanceMethodCallExpression0_TypeDefinitionIndex = 3244;

	class InstanceMethodCallExpression0 : public ::System::Linq::Expressions::InstanceMethodCallExpression
	{
	public:
		::System::Void _ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION0__CTOR_OFFSET))(this, method, instance);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION0_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION0_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION0_REWRITE_OFFSET))(this, instance, args);
		}
	};
}

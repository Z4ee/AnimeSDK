#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/InstanceMethodCallExpression.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class MethodCallExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1AD694C0)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD69550)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_REWRITE_OFFSET UNITYSDK_OFFSET(0x1AD69560)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5C8D0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InstanceMethodCallExpression3_TypeDefinitionIndex = 3250;

	class InstanceMethodCallExpression3 : public ::System::Linq::Expressions::InstanceMethodCallExpression
	{
	public:
		::System::Linq::Expressions::Expression* _arg1; // 0x20
		::System::Linq::Expressions::Expression* _arg2; // 0x28
		::System::Object* _arg0; // 0x30

		::System::Void _ctor(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Linq::Expressions::Expression* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_GETARGUMENT_OFFSET))(this, a1);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION3_REWRITE_OFFSET))(this, a1, a2);
		}
	};
}

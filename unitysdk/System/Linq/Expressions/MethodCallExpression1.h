#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MethodCallExpression.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1C1C8060)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C1C80E0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_REWRITE_OFFSET UNITYSDK_OFFSET(0x1C1C80F0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C7FF0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpression1_TypeDefinitionIndex = 3246;

	class MethodCallExpression1 : public ::System::Linq::Expressions::MethodCallExpression
	{
	public:
		::System::Object* _arg0; // 0x18

		::System::Void _ctor(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_GETARGUMENT_OFFSET))(this, a1);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_REWRITE_OFFSET))(this, a1, a2);
		}
	};
}

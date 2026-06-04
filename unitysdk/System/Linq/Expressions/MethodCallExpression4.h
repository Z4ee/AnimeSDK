#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MethodCallExpression.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION4_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1ADB5AD0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION4_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1ADB5B80)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION4_REWRITE_OFFSET UNITYSDK_OFFSET(0x1ADB5B90)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION4__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB5A50)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpression4_TypeDefinitionIndex = 3245;

	class MethodCallExpression4 : public ::System::Linq::Expressions::MethodCallExpression
	{
	public:
		::System::Object* _arg0; // 0x18
		::System::Linq::Expressions::Expression* _arg1; // 0x20
		::System::Linq::Expressions::Expression* _arg3; // 0x28
		::System::Linq::Expressions::Expression* _arg2; // 0x30

		::System::Void _ctor(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Linq::Expressions::Expression* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION4_GETARGUMENT_OFFSET))(this, a1);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION4_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION4_REWRITE_OFFSET))(this, a1, a2);
		}
	};
}

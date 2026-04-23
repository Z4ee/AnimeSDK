#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MethodCallExpression.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION2_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x19F3DEB0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION2_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x19F3DF40)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION2_REWRITE_OFFSET UNITYSDK_OFFSET(0x19F3DF50)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION2__CTOR_OFFSET UNITYSDK_OFFSET(0x19F3DE40)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpression2_TypeDefinitionIndex = 3242;

	class MethodCallExpression2 : public ::System::Linq::Expressions::MethodCallExpression
	{
	public:
		::System::Linq::Expressions::Expression* _arg1; // 0x18
		::System::Object* _arg0; // 0x20

		::System::Void _ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION2__CTOR_OFFSET))(this, method, arg0, arg1);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION2_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION2_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION2_REWRITE_OFFSET))(this, instance, args);
		}
	};
}

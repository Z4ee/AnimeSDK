#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MethodCallExpression.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1C0738E0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1C073FE0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C073970)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3_REWRITE_OFFSET UNITYSDK_OFFSET(0x1C073FF0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3_SAMEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1C073980)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C073860)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpression3_TypeDefinitionIndex = 4519;

	class MethodCallExpression3 : public ::System::Linq::Expressions::MethodCallExpression
	{
	public:
		::System::Linq::Expressions::Expression* _arg1; // 0x18
		::System::Linq::Expressions::Expression* _arg2; // 0x20
		::System::Object* _arg0; // 0x28

		::System::Void _ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3__CTOR_OFFSET))(this, method, arg0, arg1, arg2);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Boolean SameArguments(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3_SAMEARGUMENTS_OFFSET))(this, arguments);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION3_REWRITE_OFFSET))(this, instance, args);
		}
	};
}

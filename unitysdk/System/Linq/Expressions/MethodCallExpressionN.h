#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MethodCallExpression.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E70DDC0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E70DF80)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E70DEA0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_REWRITE_OFFSET UNITYSDK_OFFSET(0x1E70E010)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_SAMEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E70DFC0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E70DD50)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpressionN_TypeDefinitionIndex = 4513;

	class MethodCallExpressionN : public ::System::Linq::Expressions::MethodCallExpression
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _arguments; // 0x18

		::System::Void _ctor(::System::Reflection::MethodInfo* method, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN__CTOR_OFFSET))(this, method, args);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Boolean SameArguments(::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_SAMEARGUMENTS_OFFSET))(this, arguments);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_REWRITE_OFFSET))(this, instance, args);
		}
	};
}

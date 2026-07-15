#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x17E64F30)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x17E2CFA0)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x17E2CE70)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_INDEXER_OFFSET UNITYSDK_OFFSET(0x17E64F20)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x17E64D80)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x17E64F10)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17E64D90)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x17E63CD0)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4C440)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int IndexExpression_TypeDefinitionIndex = 3216;

	class IndexExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _arguments; // 0x10
		::System::Linq::Expressions::Expression* _Object_k__BackingField; // 0x18
		::System::Reflection::PropertyInfo* _Indexer_k__BackingField; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Object()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_OBJECT_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* get_Indexer()
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_INDEXER_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GETARGUMENT_OFFSET))(this, a1);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_ACCEPT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* Rewrite(::System::Linq::Expressions::Expression* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_REWRITE_OFFSET))(this, a1, a2);
		}
	};
}

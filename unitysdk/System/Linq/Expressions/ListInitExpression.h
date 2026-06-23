#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ElementInit; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class NewExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1E118A50)
#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1E118A20)
#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_INITIALIZERS_OFFSET UNITYSDK_OFFSET(0x1E118A40)
#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_NEWEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E118A30)
#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E118A10)
#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E115240)
#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x1E118A80)
#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E118A90)
#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E118B20)
#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1189A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ListInitExpression_TypeDefinitionIndex = 4500;

	class ListInitExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* _Initializers_k__BackingField; // 0x10
		::System::Linq::Expressions::NewExpression* _NewExpression_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::NewExpression* newExpression, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* initializers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::NewExpression*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION__CTOR_OFFSET))(this, newExpression, initializers);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_CANREDUCE_OFFSET))(this);
		}

		::System::Linq::Expressions::NewExpression* get_NewExpression()
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_NEWEXPRESSION_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* get_Initializers()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_INITIALIZERS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::Expression* Reduce()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_REDUCE_OFFSET))(this);
		}

		::System::Linq::Expressions::ListInitExpression* Update(::System::Linq::Expressions::NewExpression* newExpression, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ElementInit*>* initializers)
		{
			return ((::System::Linq::Expressions::ListInitExpression*(*)(::PVOID, ::System::Linq::Expressions::NewExpression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ElementInit*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_UPDATE_OFFSET))(this, newExpression, initializers);
		}
	};
}

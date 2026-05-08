#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ElementInit; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class MemberBinding; }
namespace System::Linq::Expressions { class NewExpression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1BD31610)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x1BD31600)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1BD315D0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_NEWEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1BD315F0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1BD315E0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BD31590)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_REDUCELISTINIT_OFFSET UNITYSDK_OFFSET(0x1BD31B70)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_REDUCEMEMBERBINDING_OFFSET UNITYSDK_OFFSET(0x1BD31A40)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_REDUCEMEMBERINIT_OFFSET UNITYSDK_OFFSET(0x1BD31660)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x1BD31640)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BD31FB0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD32040)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD31520)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberInitExpression_TypeDefinitionIndex = 4509;

	class MemberInitExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::NewExpression* _NewExpression_k__BackingField; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* _Bindings_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::NewExpression* newExpression, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* bindings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::NewExpression*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION__CTOR_OFFSET))(this, newExpression, bindings);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_CANREDUCE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::NewExpression* get_NewExpression()
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_NEWEXPRESSION_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* get_Bindings()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_BINDINGS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::Expression* Reduce()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_REDUCE_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Expression* ReduceMemberInit(::System::Linq::Expressions::Expression* objExpression, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* bindings, ::System::Boolean keepOnStack)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::Expression*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_REDUCEMEMBERINIT_OFFSET))(objExpression, bindings, keepOnStack);
		}

		static ::System::Linq::Expressions::Expression* ReduceListInit(::System::Linq::Expressions::Expression* listExpression, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* initializers, ::System::Boolean keepOnStack)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::Expression*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_REDUCELISTINIT_OFFSET))(listExpression, initializers, keepOnStack);
		}

		static ::System::Linq::Expressions::Expression* ReduceMemberBinding(::System::Linq::Expressions::ParameterExpression* objVar, ::System::Linq::Expressions::MemberBinding* binding)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::MemberBinding*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_REDUCEMEMBERBINDING_OFFSET))(objVar, binding);
		}

		::System::Linq::Expressions::MemberInitExpression* Update(::System::Linq::Expressions::NewExpression* newExpression, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::MemberBinding*>* bindings)
		{
			return ((::System::Linq::Expressions::MemberInitExpression*(*)(::PVOID, ::System::Linq::Expressions::NewExpression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::MemberBinding*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_UPDATE_OFFSET))(this, newExpression, bindings);
		}
	};
}

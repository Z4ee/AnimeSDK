#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class CatchBlock; }
namespace System::Linq::Expressions { class ExpressionVisitor; }

#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1C1CE360)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1C1CE320)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_FAULT_OFFSET UNITYSDK_OFFSET(0x1C1CE350)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_FINALLY_OFFSET UNITYSDK_OFFSET(0x1C1CE340)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_HANDLERS_OFFSET UNITYSDK_OFFSET(0x1C1CE330)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1C1CE310)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C1CE300)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C1CE3F0)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1CE280)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TryExpression_TypeDefinitionIndex = 3270;

	class TryExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _Finally_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Body_k__BackingField; // 0x18
		::System::Linq::Expressions::Expression* _Fault_k__BackingField; // 0x20
		::System::Type* _Type_k__BackingField; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* _Handlers_k__BackingField; // 0x30

		::System::Void _ctor(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_BODY_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* get_Handlers()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_HANDLERS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Finally()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_FINALLY_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Fault()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_FAULT_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_ACCEPT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::TryExpression* Update(::System::Linq::Expressions::Expression* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4)
		{
			return ((::System::Linq::Expressions::TryExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_UPDATE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}

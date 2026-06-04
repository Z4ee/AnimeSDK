#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }

#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1ADB68B0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_GET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1ADB68A0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ADB6890)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x1ADB6780)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ADB68E0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB6700)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int NewArrayExpression_TypeDefinitionIndex = 3251;

	class NewArrayExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* _Expressions_k__BackingField; // 0x10
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* a1, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Linq::Expressions::NewArrayExpression* Make(::System::Linq::Expressions::ExpressionType a1, ::System::Type* a2, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_MAKE_OFFSET))(a1, a2, a3);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Expressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_GET_EXPRESSIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_ACCEPT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::NewArrayExpression* Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a1)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_UPDATE_OFFSET))(this, a1);
		}
	};
}

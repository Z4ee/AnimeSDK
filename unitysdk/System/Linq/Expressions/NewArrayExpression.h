#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }

#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x19F3F300)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_GET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x19F3F2F0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x19F3F2E0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x19F3F1D0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x19F3F330)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19F3F150)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int NewArrayExpression_TypeDefinitionIndex = 3250;

	class NewArrayExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* _Expressions_k__BackingField; // 0x10
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* type, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION__CTOR_OFFSET))(this, type, expressions);
		}

		static ::System::Linq::Expressions::NewArrayExpression* Make(::System::Linq::Expressions::ExpressionType nodeType, ::System::Type* type, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_MAKE_OFFSET))(nodeType, type, expressions);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Expressions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_GET_EXPRESSIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::NewArrayExpression* Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYEXPRESSION_UPDATE_OFFSET))(this, expressions);
		}
	};
}

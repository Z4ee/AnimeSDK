#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class SwitchCase; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1F338D10)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_CASES_OFFSET UNITYSDK_OFFSET(0x1F338CE0)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_COMPARISON_OFFSET UNITYSDK_OFFSET(0x1F338D00)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_DEFAULTBODY_OFFSET UNITYSDK_OFFSET(0x1F338CF0)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_ISLIFTED_OFFSET UNITYSDK_OFFSET(0x1F338D40)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F338CC0)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_SWITCHVALUE_OFFSET UNITYSDK_OFFSET(0x1F338CD0)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F338CB0)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F338F40)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F339000)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F338C30)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SwitchExpression_TypeDefinitionIndex = 4542;

	class SwitchExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _DefaultBody_k__BackingField; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* _Cases_k__BackingField; // 0x18
		::System::Reflection::MethodInfo* _Comparison_k__BackingField; // 0x20
		::System::Linq::Expressions::Expression* _SwitchValue_k__BackingField; // 0x28
		::System::Type* _Type_k__BackingField; // 0x30

		::System::Void _ctor(::System::Type* type, ::System::Linq::Expressions::Expression* switchValue, ::System::Linq::Expressions::Expression* defaultBody, ::System::Reflection::MethodInfo* comparison, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* cases)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION__CTOR_OFFSET))(this, type, switchValue, defaultBody, comparison, cases);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_SwitchValue()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_SWITCHVALUE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* get_Cases()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_CASES_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_DefaultBody()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_DEFAULTBODY_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_Comparison()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_COMPARISON_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Boolean get_IsLifted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_ISLIFTED_OFFSET))(this);
		}

		::System::Linq::Expressions::SwitchExpression* Update(::System::Linq::Expressions::Expression* switchValue, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::SwitchCase*>* cases, ::System::Linq::Expressions::Expression* defaultBody)
		{
			return ((::System::Linq::Expressions::SwitchExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::SwitchCase*>*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_UPDATE_OFFSET))(this, switchValue, cases, defaultBody);
		}
	};
}

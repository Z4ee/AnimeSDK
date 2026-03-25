#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x18504900)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x18504730)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x18504810)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x185046F0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x185046E0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x185048F0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x185046D0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x185046A0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x18504930)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18504630)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int NewExpression_TypeDefinitionIndex = 3251;

	class NewExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>* _Members_k__BackingField; // 0x10
		::System::Reflection::ConstructorInfo* _Constructor_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _arguments; // 0x20

		::System::Void _ctor(::System::Reflection::ConstructorInfo* constructor, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>* members)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION__CTOR_OFFSET))(this, constructor, arguments, members);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* get_Constructor()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_CONSTRUCTOR_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Arguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>* get_Members()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_MEMBERS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::NewExpression* Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_UPDATE_OFFSET))(this, arguments);
		}
	};
}

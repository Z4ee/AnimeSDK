#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/NewExpression.h"

namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_NEWVALUETYPEEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E30ABB0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWVALUETYPEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E30AB30)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int NewValueTypeExpression_TypeDefinitionIndex = 4529;

	class NewValueTypeExpression : public ::System::Linq::Expressions::NewExpression
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x28

		::System::Void _ctor(::System::Type* type, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* arguments, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>* members)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Reflection::MemberInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWVALUETYPEEXPRESSION__CTOR_OFFSET))(this, type, arguments, members);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWVALUETYPEEXPRESSION_GET_TYPE_OFFSET))(this);
		}
	};
}

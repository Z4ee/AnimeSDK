#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class MemberBinding; }
namespace System::Linq::Expressions { class NewExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x19F3D7B0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_NEWEXPRESSION_OFFSET UNITYSDK_OFFSET(0x19F3D7A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberInitExpression_TypeDefinitionIndex = 3233;

	class MemberInitExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* _Bindings_k__BackingField; // 0x10
		::System::Linq::Expressions::NewExpression* _NewExpression_k__BackingField; // 0x18

		::System::Linq::Expressions::NewExpression* get_NewExpression()
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_NEWEXPRESSION_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* get_Bindings()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_BINDINGS_OFFSET))(this);
		}
	};
}

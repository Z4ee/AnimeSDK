#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ElementInit; }
namespace System::Linq::Expressions { class NewExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_INITIALIZERS_OFFSET UNITYSDK_OFFSET(0x1DF4A8B0)
#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_NEWEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1DF4A8A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ListInitExpression_TypeDefinitionIndex = 3238;

	class ListInitExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* _Initializers_k__BackingField; // 0x10
		::System::Linq::Expressions::NewExpression* _NewExpression_k__BackingField; // 0x18

		::System::Linq::Expressions::NewExpression* get_NewExpression()
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_NEWEXPRESSION_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* get_Initializers()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_INITIALIZERS_OFFSET))(this);
		}
	};
}

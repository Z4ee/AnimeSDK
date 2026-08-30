#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Linq/Expressions/NewArrayExpression.h"

namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYBOUNDSEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1DF4CF60)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYBOUNDSEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4CE80)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int NewArrayBoundsExpression_TypeDefinitionIndex = 3265;

	class NewArrayBoundsExpression : public ::System::Linq::Expressions::NewArrayExpression
	{
	public:
		::System::Void _ctor(::System::Type* a1, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYBOUNDSEXPRESSION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYBOUNDSEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}
	};
}

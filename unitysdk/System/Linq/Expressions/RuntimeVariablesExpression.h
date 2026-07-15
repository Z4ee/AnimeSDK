#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1C1CAD90)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int RuntimeVariablesExpression_TypeDefinitionIndex = 3263;

	class RuntimeVariablesExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* _Variables_k__BackingField; // 0x10

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* get_Variables()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_GET_VARIABLES_OFFSET))(this);
		}
	};
}

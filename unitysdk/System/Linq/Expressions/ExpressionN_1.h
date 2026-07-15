#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression_1.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ExpressionN_1_TypeDefinitionIndex = 3228;

	template <typename TDelegate>
	class ExpressionN_1 : public ::System::Linq::Expressions::Expression_1<TDelegate>
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* _parameters; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionN_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int FullExpression_1_TypeDefinitionIndex = 3229;

	template <typename TDelegate>
	class FullExpression_1 : public ::System::Linq::Expressions::ExpressionN_1<TDelegate>
	{
	public:
		::System::String* _NameCore_k__BackingField; // 0x0
		::System::Boolean _TailCallCore_k__BackingField; // 0x0
	};
}

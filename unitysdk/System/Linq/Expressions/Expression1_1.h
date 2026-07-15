#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression_1.h"

namespace System { class Object; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ParameterExpression; }

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression1_1_TypeDefinitionIndex = 3225;

	template <typename TDelegate>
	class Expression1_1 : public ::System::Linq::Expressions::Expression_1<TDelegate>
	{
	public:
		::System::Object* _par0; // 0x0
	};
}

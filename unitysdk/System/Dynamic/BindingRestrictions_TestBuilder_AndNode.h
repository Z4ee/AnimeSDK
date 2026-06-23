#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Linq::Expressions { class Expression; }

namespace System::Dynamic
{
	inline static constexpr unsigned int BindingRestrictions_TestBuilder_AndNode_TypeDefinitionIndex = 4968;

	struct alignas(8) BindingRestrictions_TestBuilder_AndNode
	{
		::System::Int32 Depth; // 0x10
		::System::Linq::Expressions::Expression* Node; // 0x18
	};
}

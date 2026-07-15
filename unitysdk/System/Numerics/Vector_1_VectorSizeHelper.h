#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Vector_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Numerics
{
	inline static constexpr unsigned int Vector_1_VectorSizeHelper_TypeDefinitionIndex = 3853;

	template <typename T>
	struct Vector_1_VectorSizeHelper
	{
		::System::Numerics::Vector_1<T> _placeholder; // 0x0
		::System::Byte _byte; // 0x0
	};
}

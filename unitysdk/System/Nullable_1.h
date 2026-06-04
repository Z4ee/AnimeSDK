#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

namespace System
{
	inline static constexpr unsigned int Nullable_1_TypeDefinitionIndex = 410;

	template <typename T>
	struct Nullable_1
	{
		T value; // 0x0
		::System::Boolean has_value; // 0x0
	};
}

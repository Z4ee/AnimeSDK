#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeArrayOptions_TypeDefinitionIndex = 3978;

	enum class NativeArrayOptions : ::System::Int32
	{
		UninitializedMemory = 0,
		ClearMemory = 1,
	};
}

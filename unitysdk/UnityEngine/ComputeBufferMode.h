#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeBufferMode_TypeDefinitionIndex = 4110;

	enum class ComputeBufferMode : ::System::Int32
	{
		Immutable = 0,
		Dynamic = 1,
		Circular = 2,
		StreamOut = 3,
		SubUpdates = 4,
	};
}

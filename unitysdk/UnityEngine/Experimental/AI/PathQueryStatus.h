#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::AI
{
	inline static constexpr unsigned int PathQueryStatus_TypeDefinitionIndex = 24822;

	enum class PathQueryStatus : ::System::Int32
	{
		Failure = -2147483648,
		Success = 1073741824,
		InProgress = 536870912,
		StatusDetailMask = 16777215,
		WrongMagic = 1,
		WrongVersion = 2,
		OutOfMemory = 4,
		InvalidParam = 8,
		BufferTooSmall = 16,
		OutOfNodes = 32,
		PartialResult = 64,
	};
}

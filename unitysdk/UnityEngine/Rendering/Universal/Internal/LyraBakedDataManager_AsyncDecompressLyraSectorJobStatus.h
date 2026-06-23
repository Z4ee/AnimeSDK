#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus_TypeDefinitionIndex = 27327;

	enum class LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus : ::System::Int32
	{
		kFinishedBinaryDecompression = 1,
		kFinishedDecompressingDistanceFieldBlock = 4,
		kToDecompressingDistanceFieldBlock1 = 3,
		kToDecompressingDistanceFieldBlock0 = 2,
		kToDo = 0,
	};
}

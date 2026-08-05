#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus_TypeDefinitionIndex = 26931;

	enum class LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus : ::System::Int32
	{
		kToDecompressingDistanceFieldBlock0 = 2,
		kToDecompressingDistanceFieldBlock1 = 3,
		kToDo = 0,
		kFinishedBinaryDecompression = 1,
		kFinishedDecompressingDistanceFieldBlock = 4,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus_TypeDefinitionIndex = 30459;

	enum class LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus : ::System::Int32
	{
		kToDo = 0,
		kFinishedBinaryDecompression = 1,
		kToDecompressingDistanceFieldBlock0 = 2,
		kToDecompressingDistanceFieldBlock1 = 3,
		kFinishedDecompressingDistanceFieldBlock = 4,
	};
}

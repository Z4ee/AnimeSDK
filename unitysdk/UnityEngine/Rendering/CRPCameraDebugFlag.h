#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPCameraDebugFlag_TypeDefinitionIndex = 35967;

	enum class CRPCameraDebugFlag : ::System::Int32
	{
		kLoadGameAtHere = 1,
		kRecorderDepth = 1048576,
		kRecorderMask = 2097152,
		kRecorderAO = 4194304,
		kRecorderProbe = 8388608,
		kRecorderGBufferB = 16777216,
		kRecordTransparent = 33554432,
		kRecordGameViewHDR = 67108864,
	};
}

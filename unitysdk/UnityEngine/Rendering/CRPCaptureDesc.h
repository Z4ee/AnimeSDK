#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPCaptureDesc_TypeDefinitionIndex = 4818;

	struct alignas(4) CRPCaptureDesc
	{
		::System::Int32 count; // 0x10
		::System::Int32 captureType; // 0x14
		::System::Int32 cameraType; // 0x18
		::System::Int32 opType; // 0x1C
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CameraOverlay.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPCameraInfo_TypeDefinitionIndex = 4791;

	struct alignas(4) CRPCameraInfo
	{
		::UnityEngine::Rendering::CameraOverlay overlayType; // 0x10
		::System::Single renderScale; // 0x14
		::System::UInt32 _Flag; // 0x18
		::System::UInt32 _DebugFlag; // 0x1C
	};
}

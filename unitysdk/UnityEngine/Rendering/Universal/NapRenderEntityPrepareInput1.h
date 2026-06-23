#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderEntityPrepareInput1_TypeDefinitionIndex = 26916;

	struct alignas(4) NapRenderEntityPrepareInput1
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Single forceInShadow; // 0x1C
		::UnityEngine::Vector3 faceForward; // 0x20
		::System::Int32 blendLightStart; // 0x2C
		::UnityEngine::Vector3 facePosition; // 0x30
		::System::Int32 blendLightEnd; // 0x3C
		::UnityEngine::Vector4 mainLightData; // 0x40
		::UnityEngine::Vector4 toonLightIndices; // 0x50
		::System::Int32 toonLightCount; // 0x60
		::System::Single isGPUCrowd; // 0x64
		::System::Single indexChanged; // 0x68
		::System::Single directionalLightSize; // 0x6C
		::UnityEngine::Matrix4x4 worldToObjectMatrix; // 0x70
		::UnityEngine::Vector3 cameraPositionWS; // 0xB0
		::System::Int32 isFirstTimeCalculateRadian; // 0xBC
		::UnityEngine::Vector4 overridenMainLightColor; // 0xC0
		::System::Single lockLightAngleRatio; // 0xD0
		::System::Single fixShadowCoverageOutOfFrustum; // 0xD4
		::UnityEngine::Vector2 dummy; // 0xD8
	};
}

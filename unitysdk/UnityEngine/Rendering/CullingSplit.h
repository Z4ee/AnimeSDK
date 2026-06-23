#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullingSplit_TypeDefinitionIndex = 6219;

	struct alignas(4) CullingSplit
	{
		::UnityEngine::Vector3 sphereCenter; // 0x10
		::System::Single sphereRadius; // 0x1C
		::System::Int32 cullingPlaneOffset; // 0x20
		::System::Int32 cullingPlaneCount; // 0x24
		::System::Single cascadeBlendCullingFactor; // 0x28
		::System::Single nearPlane; // 0x2C
		::UnityEngine::Matrix4x4 cullingMatrix; // 0x30
	};
}

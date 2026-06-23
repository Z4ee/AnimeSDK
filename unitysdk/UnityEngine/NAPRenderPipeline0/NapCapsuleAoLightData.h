#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapCapsuleAoLightData_TypeDefinitionIndex = 5931;

	struct alignas(4) NapCapsuleAoLightData
	{
		::UnityEngine::Vector3 boundingConePos; // 0x10
		::System::Single boundingConeLength; // 0x1C
		::System::Single boundingConeRadius; // 0x20
		::System::Single boundingConeBackadd; // 0x24
		::UnityEngine::Matrix4x4 mat; // 0x28
		::UnityEngine::Vector3 minMaxDist; // 0x68
	};
}

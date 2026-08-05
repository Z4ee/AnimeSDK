#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalData_TypeDefinitionIndex = 27792;

	struct alignas(4) DecalData
	{
		::UnityEngine::Matrix4x4 worldToDecal; // 0x10
		::UnityEngine::Matrix4x4 normalToWorld; // 0x50
		::UnityEngine::Vector4 diffuseScaleBias; // 0x90
		::UnityEngine::Vector4 normalScaleBias; // 0xA0
		::UnityEngine::Vector4 maskScaleBias; // 0xB0
		::UnityEngine::Vector4 baseColor; // 0xC0
		::UnityEngine::Vector4 remappingAOS; // 0xD0
		::UnityEngine::Vector4 scalingMAB; // 0xE0
		::UnityEngine::Vector3 blendParams; // 0xF0
	};
}

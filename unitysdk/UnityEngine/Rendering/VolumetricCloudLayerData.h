#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Material; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumetricCloudLayerData_TypeDefinitionIndex = 4841;

	struct alignas(8) VolumetricCloudLayerData
	{
		::UnityEngine::Material* material; // 0x10
		::UnityEngine::Vector3 scale; // 0x18
		::System::Int32 maskWidth; // 0x24
		::System::Int32 maskHeight; // 0x28
		::UnityEngine::Vector3 centerForTrace; // 0x2C
		::UnityEngine::Vector3 scaleForTrace; // 0x38
	};
}

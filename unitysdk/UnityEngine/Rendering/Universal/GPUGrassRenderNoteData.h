#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassRenderNoteData_TypeDefinitionIndex = 30235;

	struct alignas(4) GPUGrassRenderNoteData
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Vector3 scale; // 0x2C
		::UnityEngine::Vector3 color; // 0x38
		::UnityEngine::Vector4 textureScaleOffset; // 0x44
	};
}

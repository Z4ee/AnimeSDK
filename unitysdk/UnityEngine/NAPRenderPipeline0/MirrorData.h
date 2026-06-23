#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MirrorData_TypeDefinitionIndex = 5953;

	struct alignas(4) MirrorData
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 normal; // 0x1C
		::UnityEngine::Vector3 right; // 0x28
		::UnityEngine::Vector3 up; // 0x34
		::UnityEngine::Vector4 size; // 0x40
	};
}

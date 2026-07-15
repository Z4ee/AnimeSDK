#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LightVolumeInfo_TypeDefinitionIndex = 4856;

	struct alignas(4) LightVolumeInfo
	{
		::System::Int32 posmType; // 0x10
		::UnityEngine::Bounds bounds; // 0x14
		::UnityEngine::Vector3 offset; // 0x2C
		::UnityEngine::Matrix4x4 worldToBounds; // 0x38
		::UnityEngine::Matrix4x4 localToWorld; // 0x78
		::UnityEngine::Matrix4x4 worldToLocal; // 0xB8
		::UnityEngine::Matrix4x4 oobbDelegateDrawMatrix; // 0xF8
	};
}

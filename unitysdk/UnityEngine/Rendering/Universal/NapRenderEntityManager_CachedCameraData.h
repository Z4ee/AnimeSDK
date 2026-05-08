#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderEntityManager_CachedCameraData_TypeDefinitionIndex = 30077;

	struct alignas(8) NapRenderEntityManager_CachedCameraData
	{
		::UnityEngine::Camera* camera; // 0x10
		::UnityEngine::Vector3 position; // 0x18
		::UnityEngine::Vector3 forward; // 0x24
		::Il2CppArray<::UnityEngine::Plane>* planes; // 0x30
		::System::Int32 cullingMask; // 0x38
	};
}

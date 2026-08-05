#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingInstanceCullingFlags.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingInstanceCullingMaterialTest.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingInstanceCullingTest.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingInstanceMaterialConfig.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingInstanceTriangleCullingConfig.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingSubMeshFlagsConfig.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/LODParameters.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingInstanceCullingConfig_TypeDefinitionIndex = 6348;

	struct alignas(8) RayTracingInstanceCullingConfig
	{
		::UnityEngine::Experimental::Rendering::RayTracingInstanceCullingFlags flags; // 0x10
		::UnityEngine::Vector3 sphereCenter; // 0x14
		::System::Single sphereRadius; // 0x20
		::Il2CppArray<::UnityEngine::Plane>* planes; // 0x28
		::UnityEngine::Vector4 CenterAngle; // 0x30
		::Il2CppArray<::UnityEngine::Experimental::Rendering::RayTracingInstanceCullingTest>* instanceTests; // 0x40
		::UnityEngine::Experimental::Rendering::RayTracingInstanceCullingMaterialTest materialTest; // 0x48
		::UnityEngine::Experimental::Rendering::RayTracingInstanceMaterialConfig transparentMaterialConfig; // 0x60
		::UnityEngine::Experimental::Rendering::RayTracingInstanceMaterialConfig alphaTestedMaterialConfig; // 0x78
		::UnityEngine::Experimental::Rendering::RayTracingInstanceMaterialConfig alphaTestedMaterialConfigTimeline; // 0x90
		::UnityEngine::Experimental::Rendering::RayTracingSubMeshFlagsConfig subMeshFlagsConfig; // 0xA8
		::UnityEngine::Experimental::Rendering::RayTracingInstanceTriangleCullingConfig triangleCullingConfig; // 0xB8
		::UnityEngine::Rendering::LODParameters lodParameters; // 0xC8
		::System::Int32 lodCullingCameraInstanceID; // 0xE4
	};
}

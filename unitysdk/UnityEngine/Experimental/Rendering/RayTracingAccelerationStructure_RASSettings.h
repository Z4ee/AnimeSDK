#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingAccelerationStructure_ManagementMode.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingAccelerationStructure_RayTracingModeMask.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_RASSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x586780)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingAccelerationStructure_RASSettings_TypeDefinitionIndex = 6352;

	struct alignas(4) RayTracingAccelerationStructure_RASSettings
	{
		::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_ManagementMode managementMode; // 0x10
		::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_RayTracingModeMask rayTracingModeMask; // 0x14
		::System::Int32 layerMask; // 0x18

		::System::Void _ctor(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_ManagementMode sceneManagementMode, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_RayTracingModeMask rayTracingModeMask, ::System::Int32 layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_ManagementMode, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_RayTracingModeMask, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_RASSETTINGS__CTOR_OFFSET))(this, sceneManagementMode, rayTracingModeMask, layerMask);
		}
	};
}

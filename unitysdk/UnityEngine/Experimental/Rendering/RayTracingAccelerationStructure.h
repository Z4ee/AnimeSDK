#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingAccelerationStructure_RASSettings.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsFence.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x1E316830)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_CREATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E316820)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E3167D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E316790)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E3166B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E3166E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E3166A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3167E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3167A0)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingAccelerationStructure_TypeDefinitionIndex = 6349;

	class RayTracingAccelerationStructure : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Boolean m_AsyncBuilt; // 0x18
		::UnityEngine::Rendering::GraphicsFence m_AsyncBuildFence; // 0x20

		::System::Void _ctor(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_RASSettings settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_RASSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE__CTOR_OFFSET))(this, settings);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE__CTOR_1_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::IntPtr Create(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_RASSettings desc)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_RASSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_CREATE_OFFSET))(desc);
		}

		static ::System::Void Destroy(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* accelStruct)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_DESTROY_OFFSET))(accelStruct);
		}

		::System::Void ClearInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_CLEARINSTANCES_OFFSET))(this);
		}

		static ::System::IntPtr Create_Injected(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_RASSettings& desc)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_RASSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGACCELERATIONSTRUCTURE_CREATE_INJECTED_OFFSET))(desc);
		}
	};
}

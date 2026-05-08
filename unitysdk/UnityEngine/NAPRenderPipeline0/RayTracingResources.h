#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine::Experimental::Rendering { class RayTracingShader; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RAYTRACINGRESOURCES_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B2F3D50)
#define UNITYENGINE_NAPRENDERPIPELINE0_RAYTRACINGRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F3D60)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RayTracingResources_TypeDefinitionIndex = 6026;

	class RayTracingResources : public ::System::Object
	{
	public:
		::UnityEngine::Experimental::Rendering::RayTracingShader* RTXPathTracer; // 0x10
		::UnityEngine::ComputeShader* RTXPathTracerHelper; // 0x18
		::UnityEngine::ComputeShader* RTXAreaLight; // 0x20
		::UnityEngine::Experimental::Rendering::RayTracingShader* RTXGI; // 0x28
		::UnityEngine::ComputeShader* RTXGICS; // 0x30
		::UnityEngine::Shader* RTXGIPS; // 0x38
		::UnityEngine::TextAsset* rankingTile; // 0x40
		::UnityEngine::TextAsset* sobol_256spp_256d; // 0x48
		::UnityEngine::TextAsset* scramblingTile; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RAYTRACINGRESOURCES__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::NAPRenderPipeline0::RayTracingResources* get_instance()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RayTracingResources*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RAYTRACINGRESOURCES_GET_INSTANCE_OFFSET))();
		}
	};
}

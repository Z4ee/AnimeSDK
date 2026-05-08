#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine::Experimental::Rendering { class RayTracingShader; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_RAYTRACINGRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x190A9F70)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererData_RayTracingResources_TypeDefinitionIndex = 29849;

	class ForwardRendererData_RayTracingResources : public ::System::Object
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_RAYTRACINGRESOURCES__CTOR_OFFSET))(this);
		}
	};
}

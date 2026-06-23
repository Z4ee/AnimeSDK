#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINEEDITORRESOURCES_MATERIALRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89A300)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipelineEditorResources_MaterialResources_TypeDefinitionIndex = 26530;

	class UniversalRenderPipelineEditorResources_MaterialResources : public ::System::Object
	{
	public:
		::UnityEngine::Material* lit; // 0x10
		::UnityEngine::Material* particleLit; // 0x18
		::UnityEngine::Material* terrainLit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINEEDITORRESOURCES_MATERIALRESOURCES__CTOR_OFFSET))(this);
		}
	};
}

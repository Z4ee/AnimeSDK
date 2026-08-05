#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINEEDITORRESOURCES_SHADERRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C457640)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipelineEditorResources_ShaderResources_TypeDefinitionIndex = 27476;

	class UniversalRenderPipelineEditorResources_ShaderResources : public ::System::Object
	{
	public:
		::UnityEngine::Shader* autodeskInteractivePS; // 0x10
		::UnityEngine::Shader* autodeskInteractiveTransparentPS; // 0x18
		::UnityEngine::Shader* autodeskInteractiveMaskedPS; // 0x20
		::UnityEngine::Shader* terrainDetailLitPS; // 0x28
		::UnityEngine::Shader* terrainDetailGrassPS; // 0x30
		::UnityEngine::Shader* terrainDetailGrassBillboardPS; // 0x38
		::UnityEngine::Shader* defaultSpeedTree7PS; // 0x40
		::UnityEngine::Shader* defaultSpeedTree8PS; // 0x48
		::UnityEngine::Shader* lightMapResolutionPS; // 0x50
		::UnityEngine::Shader* overdrawOpaquePS; // 0x58
		::UnityEngine::Shader* overdrawTransparentPS; // 0x60
		::UnityEngine::Shader* UVViewPS; // 0x68
		::UnityEngine::ComputeShader* visibleCheckCS; // 0x70
		::UnityEngine::ComputeShader* textureCheckCS; // 0x78
		::UnityEngine::ComputeShader* napEntityPrepare; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINEEDITORRESOURCES_SHADERRESOURCES__CTOR_OFFSET))(this);
		}
	};
}

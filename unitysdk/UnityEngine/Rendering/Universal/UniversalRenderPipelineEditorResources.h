#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineEditorResources_ColliderPreviewConfig; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineEditorResources_MaterialResources; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineEditorResources_ShaderResources; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINEEDITORRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1F823290)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipelineEditorResources_TypeDefinitionIndex = 27473;

	class UniversalRenderPipelineEditorResources : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources* shaders; // 0x18
		::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources* materials; // 0x20
		::UnityEngine::Texture* checkBoard; // 0x28
		::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ColliderPreviewConfig* colliderPreviewConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINEEDITORRESOURCES__CTOR_OFFSET))(this);
		}
	};
}

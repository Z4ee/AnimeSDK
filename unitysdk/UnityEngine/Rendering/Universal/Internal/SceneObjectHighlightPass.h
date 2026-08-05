#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal::Internal { class SceneToFindObjectInfo; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTHIGHLIGHTPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC61380)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTHIGHLIGHTPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC619B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTHIGHLIGHTPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC61270)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int SceneObjectHighlightPass_TypeDefinitionIndex = 27530;

	class SceneObjectHighlightPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::Rendering::Universal::Internal::SceneToFindObjectInfo** StaticGet_SceneToFindObjectInfoCache()
		{
			return (::UnityEngine::Rendering::Universal::Internal::SceneToFindObjectInfo**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectHighlightPass_TypeDefinitionIndex)->GetStaticField(0x217C0);
		}
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xA8
		::System::String* m_ProfilerTag; // 0xB0

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTHIGHLIGHTPASS__CTOR_OFFSET))(this, evt);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTHIGHLIGHTPASS__CCTOR_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTHIGHLIGHTPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}

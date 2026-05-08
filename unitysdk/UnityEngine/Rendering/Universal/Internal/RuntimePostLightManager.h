#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHTMANAGER_DRAWRUNTIMEPOSTAO_OFFSET UNITYSDK_OFFSET(0x19B920D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHTMANAGER_DRAWRUNTIMEPOSTLIGHT_OFFSET UNITYSDK_OFFSET(0x19B91D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B92450)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int RuntimePostLightManager_TypeDefinitionIndex = 30363;

	class RuntimePostLightManager : public ::System::Object
	{
	public:
		// static const ::System::String* kDrawPostLight; // 0x0
		// static const ::System::String* kDrawPostAO; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void DrawRuntimePostLight(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHTMANAGER_DRAWRUNTIMEPOSTLIGHT_OFFSET))(context, renderingData, postCullRenderingData, cmd);
		}

		static ::System::Void DrawRuntimePostAO(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHTMANAGER_DRAWRUNTIMEPOSTAO_OFFSET))(context, renderingData, postCullRenderingData, cmd);
		}
	};
}

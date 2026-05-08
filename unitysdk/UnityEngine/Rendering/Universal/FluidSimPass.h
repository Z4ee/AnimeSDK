#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FLUIDSIMPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A6EFAD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLUIDSIMPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1A6EFA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLUIDSIMPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6EF9A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FluidSimPass_TypeDefinitionIndex = 30193;

	class FluidSimPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::String* m_ProfilerName; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent passEvent, ::System::String* profilerName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLUIDSIMPASS__CTOR_OFFSET))(this, passEvent, profilerName);
		}

		::System::Boolean Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLUIDSIMPASS_SETUP_OFFSET))(this, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLUIDSIMPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}

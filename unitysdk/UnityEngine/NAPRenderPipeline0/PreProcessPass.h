#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AE719E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_GETDYNAMICSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1AE71940)
#define UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE718E0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PreProcessPass_TypeDefinitionIndex = 5804;

	class PreProcessPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS__CTOR_OFFSET))(this, evt);
		}

		static ::UnityEngine::Vector4 GetDynamicScreenSize(::UnityEngine::RenderTextureDescriptor& desc)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_GETDYNAMICSCREENSIZE_OFFSET))(desc);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}

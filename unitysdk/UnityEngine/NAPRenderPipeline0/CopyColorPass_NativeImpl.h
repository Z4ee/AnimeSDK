#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_NATIVEIMPL_EXECUTECOPYCOLORPASS_OFFSET UNITYSDK_OFFSET(0x1E474670)
#define UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E474680)
#define UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1E474760)
#define UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_NATIVEIMPL_RELEASETEMPBUFFER_OFFSET UNITYSDK_OFFSET(0x1E474750)
#define UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E474610)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CopyColorPass_NativeImpl_TypeDefinitionIndex = 5731;

	class CopyColorPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		static ::System::Void ExecuteCopyColorPass(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier& camreaColor, ::System::Boolean needResetRT, ::System::Boolean needBlur)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_NATIVEIMPL_EXECUTECOPYCOLORPASS_OFFSET))(context, renderingData, camreaColor, needResetRT, needBlur);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void ReleaseTempBuffer(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_NATIVEIMPL_RELEASETEMPBUFFER_OFFSET))(cmd);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COPYCOLORPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}

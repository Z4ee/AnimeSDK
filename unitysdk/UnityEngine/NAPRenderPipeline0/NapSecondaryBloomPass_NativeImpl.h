#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class NapSecondaryBloomPassNativeState; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB60310)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EB60340)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB60280)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapSecondaryBloomPass_NativeImpl_TypeDefinitionIndex = 5752;

	class NapSecondaryBloomPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::Int32 m_SecondaryDownSampleBuffer; // 0xA8
		::UnityEngine::NAPRenderPipeline0::NapSecondaryBloomPassNativeState* m_NativeState; // 0xB0

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}

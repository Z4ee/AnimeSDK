#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class TBLLightDataPassNativeState; }

#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E48CCE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1E48CCB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E48CC30)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TBLLightDataPass_NativeImpl_TypeDefinitionIndex = 5780;

	class TBLLightDataPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::TBLLightDataPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier& rti, ::System::Boolean separateBuildGPULightLists)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS_NATIVEIMPL_SETUP_OFFSET))(this, rti, separateBuildGPULightLists);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class TransparentSettingsPassNativeState; }

#define UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D2A4450)
#define UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1D2A4420)
#define UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A4390)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TransparentSettingsPass_NativeImpl_TypeDefinitionIndex = 5758;

	class TransparentSettingsPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::TransparentSettingsPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::System::Boolean shadowReceiveSupported)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt, shadowReceiveSupported);
		}

		::System::Boolean Setup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASS_NATIVEIMPL_SETUP_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}

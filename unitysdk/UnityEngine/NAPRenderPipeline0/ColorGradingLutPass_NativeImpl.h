#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class ColorGradingLutPassNativeState; }

#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B491E60)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_NATIVEIMPL_GETLIFTGAMMAGAINSETTINGSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1B491E50)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_NATIVEIMPL_SETLIFTGAMMAGAINSETTINGSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1B491DA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B491D20)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ColorGradingLutPass_NativeImpl_TypeDefinitionIndex = 5718;

	class ColorGradingLutPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ColorGradingLutPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		static ::System::Void SetLiftGammaGainSettingStrength(::System::Single lerpv)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_NATIVEIMPL_SETLIFTGAMMAGAINSETTINGSTRENGTH_OFFSET))(lerpv);
		}

		static ::System::Single GetLiftGammaGainSettingStrength()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_NATIVEIMPL_GETLIFTGAMMAGAINSETTINGSTRENGTH_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}

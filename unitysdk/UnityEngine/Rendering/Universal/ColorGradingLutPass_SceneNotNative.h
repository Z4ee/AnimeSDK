#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SceneColorGradingParams.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuFloatParams; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuTextureParams; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuVector4Params; }
namespace UnityEngine::Rendering::Universal::Internal { class ICpuParams; }

#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11094260)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GENERATECOLORGRADINGLUTFORSCENE_OFFSET UNITYSDK_OFFSET(0x110951B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GETLERPEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x11092BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GETTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x11092B50)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GET_S_LIFTGAMMAGAINSETTINGSTRENGTH_OFFSET UNITYSDK_OFFSET(0x11094250)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x11093160)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ColorGradingLutPass_SceneNotNative_TypeDefinitionIndex = 27855;

	class ColorGradingLutPass_SceneNotNative : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CpuParam_CurveMaster; // 0xA8
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _ShoSegmentB; // 0xB0
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _Lift; // 0xB8
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _ShoSegmentA; // 0xC0
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* _PreLogLutTex; // 0xC8
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _Lut_Params; // 0xD0
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _SplitShadows; // 0xD8
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CpuParam_LogLutTex; // 0xE0
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CpuParam_CurveHueVsSat; // 0xE8
		::UnityEngine::Texture2D* resultHueVsHue; // 0xF0
		::UnityEngine::Texture2D* resultMaster; // 0xF8
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _UserLut_Params; // 0x100
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CpuParam_CurveRed; // 0x108
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _Gamma; // 0x110
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CpuParam_CurveLumVsSat; // 0x118
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CpuParam_CurveGreen; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::ICpuParams*>* CachedMaterialParamsList; // 0x128
		::UnityEngine::Rendering::Universal::Internal::CpuFloatParams* _Desaturate; // 0x130
		::UnityEngine::Texture2D* resultHueVsSat; // 0x138
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _ToeSegmentB; // 0x140
		::UnityEngine::Texture2D* resultLumVsSat; // 0x148
		::UnityEngine::Rendering::Universal::Internal::CpuFloatParams* _RevertSaturation; // 0x150
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _SplitHighlights; // 0x158
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _ColorFilter; // 0x160
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _CustomToneCurve; // 0x168
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _Shadows; // 0x170
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _ShaHiLimits; // 0x178
		::WeatherConfig* preRight; // 0x180
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _Gain; // 0x188
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CpuParam_CurveBlue; // 0x190
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _LogLutTex_Params; // 0x198
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _ChannelMixerGreen; // 0x1A0
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _ChannelMixerRed; // 0x1A8
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _ChannelMixerBlue; // 0x1B0
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _MidSegmentA; // 0x1B8
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _HueSatCon; // 0x1C0
		::WeatherConfig* preLeft; // 0x1C8
		::UnityEngine::Rendering::Universal::Internal::CpuFloatParams* _LerpAlpha; // 0x1D0
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _MidSegmentB; // 0x1D8
		::UnityEngine::Texture2D* resultGreen; // 0x1E0
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CpuParam_UserLut; // 0x1E8
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _ToeSegmentA; // 0x1F0
		::System::String* k_ProfilerTag; // 0x1F8
		::UnityEngine::Texture2D* resultBlue; // 0x200
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CpuParam_CurveHueVsHue; // 0x208
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _Highlights; // 0x210
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CpuParam_CurveSatVsSat; // 0x218
		::UnityEngine::Texture2D* resultSatVsSat; // 0x220
		::UnityEngine::Texture2D* resultRed; // 0x228
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _ColorBalance; // 0x230
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* _Midtones; // 0x238
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_GraphicsFormat; // 0x240
		::System::Int32 m_LutHeight; // 0x244
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_HdrLutFormat; // 0x248
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_LdrLutFormat; // 0x24C
		::System::Int32 m_LutWidth; // 0x250
		::System::Single preLerpValue; // 0x254
		::System::Int32 cachedMaterialVersion; // 0x258

		::System::Void _ctor(::System::String* profileTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE__CTOR_OFFSET))(this, profileTag, renderPassEventConfig);
		}

		::UnityEngine::TextureFormat GetTextureFormat()
		{
			return ((::UnityEngine::TextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GETTEXTUREFORMAT_OFFSET))(this);
		}

		::System::Void GetLerpedTexture(::UnityEngine::Texture2D* left, ::UnityEngine::Texture2D* right, ::UnityEngine::Texture2D*& result, ::System::Single lerpValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GETLERPEDTEXTURE_OFFSET))(this, left, right, result, lerpValue);
		}

		static ::System::Single get_s_LiftGammaGainSettingStrength()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GET_S_LIFTGAMMAGAINSETTINGSTRENGTH_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void GenerateColorGradingLutForScene(::UnityEngine::Rendering::ScriptableRenderContext& ctx, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 lutWidth, ::System::Int32 lutHeight, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Boolean applyLutAfterEverything, ::UnityEngine::Rendering::Universal::SceneColorGradingParams sceneColorGradingParams, ::UnityEngine::Texture* userLutTex, ::UnityEngine::Vector4 userLutParam, ::System::Boolean hdr, ::UnityEngine::Texture* LogLutTex, ::UnityEngine::Texture* preLogLutTex, ::UnityEngine::Vector4 userLogLutParam, ::System::Single lerpAlpha)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Boolean, ::UnityEngine::Rendering::Universal::SceneColorGradingParams, ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::System::Boolean, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GENERATECOLORGRADINGLUTFORSCENE_OFFSET))(this, ctx, cmd, lutWidth, lutHeight, format, applyLutAfterEverything, sceneColorGradingParams, userLutTex, userLutParam, hdr, LogLutTex, preLogLutTex, userLogLutParam, lerpAlpha);
		}
	};
}

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
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF796510)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GENERATECOLORGRADINGLUTFORSCENE_OFFSET UNITYSDK_OFFSET(0xF7974F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GETLERPEDTEXTURE_OFFSET UNITYSDK_OFFSET(0xF795E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GETTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0xF795E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GET_S_LIFTGAMMAGAINSETTINGSTRENGTH_OFFSET UNITYSDK_OFFSET(0xF796500)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7985D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0xF796400)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ColorGradingLutPass_SceneNotNative_TypeDefinitionIndex = 26482;

	class ColorGradingLutPass_SceneNotNative : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet__PreLogLutTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingLutPass_SceneNotNative_TypeDefinitionIndex)->GetStaticField(0x7510);
		}
		static ::System::Int32* StaticGet__LerpAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingLutPass_SceneNotNative_TypeDefinitionIndex)->GetStaticField(0x7514);
		}
		static ::System::Int32* StaticGet__LogLutTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingLutPass_SceneNotNative_TypeDefinitionIndex)->GetStaticField(0x7518);
		}
		static ::System::Int32* StaticGet__LogLutTex_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingLutPass_SceneNotNative_TypeDefinitionIndex)->GetStaticField(0x751C);
		}
		// static const ::System::String* TonemapLogLut; // 0x0
		// static const ::System::String* DynamicLogLut; // 0x0
		::System::String* k_ProfilerTag; // 0xA8
		::UnityEngine::Texture2D* resultBlue; // 0xB0
		::UnityEngine::Texture2D* resultRed; // 0xB8
		::UnityEngine::Texture2D* resultLumVsSat; // 0xC0
		::WeatherConfig* preRight; // 0xC8
		::UnityEngine::Texture2D* resultMaster; // 0xD0
		::WeatherConfig* preLeft; // 0xD8
		::UnityEngine::Texture2D* resultGreen; // 0xE0
		::UnityEngine::Texture2D* resultSatVsSat; // 0xE8
		::UnityEngine::Texture2D* resultHueVsSat; // 0xF0
		::UnityEngine::Texture2D* resultHueVsHue; // 0xF8
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_LdrLutFormat; // 0x100
		::System::Int32 m_LutHeight; // 0x104
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_GraphicsFormat; // 0x108
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_HdrLutFormat; // 0x10C
		::System::Int32 m_LutWidth; // 0x110
		::System::Single preLerpValue; // 0x114

		::System::Void _ctor(::System::String* profileTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE__CTOR_OFFSET))(this, profileTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE__CCTOR_OFFSET))();
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

		static ::System::Void GenerateColorGradingLutForScene(::UnityEngine::Rendering::ScriptableRenderContext& ctx, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 lutWidth, ::System::Int32 lutHeight, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Boolean applyLutAfterEverything, ::UnityEngine::Rendering::Universal::SceneColorGradingParams sceneColorGradingParams, ::UnityEngine::Texture* userLutTex, ::UnityEngine::Vector4 userLutParam, ::System::Boolean hdr, ::UnityEngine::Texture* LogLutTex, ::UnityEngine::Texture* preLogLutTex, ::UnityEngine::Vector4 userLogLutParam, ::System::Single lerpAlpha)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Boolean, ::UnityEngine::Rendering::Universal::SceneColorGradingParams, ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::System::Boolean, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORGRADINGLUTPASS_SCENENOTNATIVE_GENERATECOLORGRADINGLUTFORSCENE_OFFSET))(ctx, cmd, lutWidth, lutHeight, format, applyLutAfterEverything, sceneColorGradingParams, userLutTex, userLutParam, hdr, LogLutTex, preLogLutTex, userLogLutParam, lerpAlpha);
		}
	};
}

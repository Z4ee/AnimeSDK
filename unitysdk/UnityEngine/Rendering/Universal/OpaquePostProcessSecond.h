#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/OpaquePostProcessSecond___c__DisplayClass14_0.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }
namespace UnityEngine::Rendering::Universal { class OpaquePostProcessSecond_BloomCombineData; }
namespace UnityEngine::Rendering::Universal { class OpaquePostProcessSecond_BloomData; }
namespace UnityEngine::Rendering::Universal { class OpaquePostProcessSecond_BloomStage; }

#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x191459D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_GETBLOOMTHRESHOLDPARAMS_OFFSET UNITYSDK_OFFSET(0x1914A010)
#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_GETUEBLOOMTHRESHOLDPARAMS_OFFSET UNITYSDK_OFFSET(0x1914A0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_LUMINANCE_OFFSET UNITYSDK_OFFSET(0x1914A300)
#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_PREPAREHIGHQUALITYBLOOMDATA_OFFSET UNITYSDK_OFFSET(0x191463B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_SETUP_OFFSET UNITYSDK_OFFSET(0x191458D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_UEBLOOM_OFFSET UNITYSDK_OFFSET(0x19146D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND__CCTOR_OFFSET UNITYSDK_OFFSET(0x1914A360)
#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND__CTOR_OFFSET UNITYSDK_OFFSET(0x19145360)
#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND__UEBLOOM_G__DRAWBLOOMPASS_14_0_OFFSET UNITYSDK_OFFSET(0x19148F50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OpaquePostProcessSecond_TypeDefinitionIndex = 30204;

	class OpaquePostProcessSecond : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Single* StaticGet_s_GlareScalerForHDR()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpaquePostProcessSecond_TypeDefinitionIndex)->GetStaticField(0x12180);
		}
		static ::System::Single* StaticGet_s_GlareThresholdForHDR()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpaquePostProcessSecond_TypeDefinitionIndex)->GetStaticField(0x12184);
		}
		static ::System::Boolean* StaticGet_s_OverrideHDRBloomValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpaquePostProcessSecond_TypeDefinitionIndex)->GetStaticField(0x12188);
		}
		// static const ::System::Int32 BloomSizeScale = 0x4; // 0x0
		// static const ::System::Int32 k_MaxBloomMipCount = 0x7; // 0x0
		// static const ::System::Int32 k_RTGuardBandSize = 0x4; // 0x0
		::Il2CppArray<::UnityEngine::Rendering::Universal::OpaquePostProcessSecond_BloomStage*>* bloomStages; // 0xA8
		::UnityEngine::Rendering::Universal::NapBloom* _napBloom; // 0xB0
		::UnityEngine::Rendering::Universal::OpaquePostProcessSecond_BloomData* bloomData; // 0xB8
		::UnityEngine::Rendering::Universal::OpaquePostProcessSecond_BloomCombineData* bloomCombineData; // 0xC0
		::WeatherConfig* weatherConfig; // 0xC8
		::System::Single oldHdrMaxLum; // 0xD0
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_DefaultHDRFormat; // 0xD4
		::UnityEngine::Vector4 m_BloomBicubicParams; // 0xD8
		::UnityEngine::Rendering::RenderTargetIdentifier sourceColor; // 0xE8
		::UnityEngine::Rendering::RenderTargetIdentifier sourceDepth; // 0x110

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent passEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND__CTOR_OFFSET))(this, passEvent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND__CCTOR_OFFSET))();
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier colorSource, ::UnityEngine::Rendering::RenderTargetIdentifier depthSource, ::UnityEngine::Rendering::Universal::NapBloom* boomConfig, ::WeatherConfig* _weatherConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::Universal::NapBloom*, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_SETUP_OFFSET))(this, colorSource, depthSource, boomConfig, _weatherConfig);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void UEBloom(::UnityEngine::Rendering::CommandBuffer* cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Int32 Width, ::System::Int32 Height)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_UEBLOOM_OFFSET))(this, cmdWrapper, renderingData, Width, Height);
		}

		::UnityEngine::Vector4 GetBloomThresholdParams()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_GETBLOOMTHRESHOLDPARAMS_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetUEBloomThresholdParams()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_GETUEBLOOMTHRESHOLDPARAMS_OFFSET))(this);
		}

		::System::Void PrepareHighQualityBloomData(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::OpaquePostProcessSecond_BloomData* passData, ::UnityEngine::Rendering::CommandBuffer* cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::OpaquePostProcessSecond_BloomData*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_PREPAREHIGHQUALITYBLOOMDATA_OFFSET))(this, cameraData, passData, cmdWrapper);
		}

		static ::System::Single Luminance(::UnityEngine::Color& color)
		{
			return ((::System::Single(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_LUMINANCE_OFFSET))(color);
		}

		::System::Void _UEBloom_g__DrawBloomPass_14_0(::UnityEngine::Rendering::RenderTargetIdentifier src, ::UnityEngine::Rendering::RenderTargetIdentifier dst, ::UnityEngine::Vector2 inputSize, ::System::Int32 pass, ::UnityEngine::Rendering::Universal::OpaquePostProcessSecond___c__DisplayClass14_0& a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Vector2, ::System::Int32, ::UnityEngine::Rendering::Universal::OpaquePostProcessSecond___c__DisplayClass14_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND__UEBLOOM_G__DRAWBLOOMPASS_14_0_OFFSET))(this, src, dst, inputSize, pass, a5);
		}
	};
}

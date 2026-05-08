#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MirrorReflectionQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSAOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EDamageDecalQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLightLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLodLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleResolutionLevel.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_GETCURRENTRENDERSCALE_OFFSET UNITYSDK_OFFSET(0xF7EFED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_GETCURRENTRENDERTARGETFACTOR_OFFSET UNITYSDK_OFFSET(0xF7EFF50)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_GET_GRAPHICDEVICENAME_OFFSET UNITYSDK_OFFSET(0xF7EFEC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_GET_SFORCEFULLSCREENTRANSPARENTFXCOUNT_OFFSET UNITYSDK_OFFSET(0xF7F0110)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_GET_URPASSET_OFFSET UNITYSDK_OFFSET(0xF7F0000)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETANTIALIASINGQUALITY_OFFSET UNITYSDK_OFFSET(0xF7F24E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETBLOOMQUALITY_OFFSET UNITYSDK_OFFSET(0xF7F41D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETDAMAGEDECALLEVEL_OFFSET UNITYSDK_OFFSET(0xF7F06C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETDPIFACTOR_OFFSET UNITYSDK_OFFSET(0xF7F09D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETMIRRORREFLECTIONQUALITY_OFFSET UNITYSDK_OFFSET(0xF7F2DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETPARTICLELIGHTLEVEL_OFFSET UNITYSDK_OFFSET(0xF7F0560)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETPARTICLELODLEVEL_OFFSET UNITYSDK_OFFSET(0xF7F04E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETPARTICLEQUALITY_OFFSET UNITYSDK_OFFSET(0xF7F0820)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETPARTICLERESOLUTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xF7F0330)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0xF7F1F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETRENDERSCALE_OFFSET UNITYSDK_OFFSET(0xF7F0A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETSCENEGLAREQUALITY_OFFSET UNITYSDK_OFFSET(0xF7F4590)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETSHADOWQUALITY_OFFSET UNITYSDK_OFFSET(0xF7F1240)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETVOLUMETRICCLOUDQUALITY_OFFSET UNITYSDK_OFFSET(0xF7F3E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETVOLUMETRICFOGQUALITY_OFFSET UNITYSDK_OFFSET(0xF7F3A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SET_SFORCEFULLSCREENTRANSPARENTFXCOUNT_OFFSET UNITYSDK_OFFSET(0xF7F0170)
#define UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7EFFD0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GraphicSettings_TypeDefinitionIndex = 30003;

	class GraphicSettings : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset** StaticGet__UrpAsset()
		{
			return (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset**)Il2CppClass::FromTypeDefinitionIndex(GraphicSettings_TypeDefinitionIndex)->GetStaticField(0x24AE0);
		}
		static ::System::Single* StaticGet_s_CurrentRenderScele()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GraphicSettings_TypeDefinitionIndex)->GetStaticField(0x7780);
		}
		static ::System::Single* StaticGet_s_CurrentTaauScele()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GraphicSettings_TypeDefinitionIndex)->GetStaticField(0x7784);
		}
		static ::System::Int32* StaticGet__forceFullScreenTransparentFXCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GraphicSettings_TypeDefinitionIndex)->GetStaticField(0x7788);
		}
		static ::System::Single* StaticGet_s_CurrentRenderTargetFactor()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GraphicSettings_TypeDefinitionIndex)->GetStaticField(0x778C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS__CCTOR_OFFSET))();
		}

		static ::System::String* get_graphicDeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_GET_GRAPHICDEVICENAME_OFFSET))();
		}

		static ::System::Single GetCurrentRenderScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_GETCURRENTRENDERSCALE_OFFSET))();
		}

		static ::System::Single GetCurrentRenderTargetFactor()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_GETCURRENTRENDERTARGETFACTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* get_UrpAsset()
		{
			return ((::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_GET_URPASSET_OFFSET))();
		}

		static ::System::Int32 get_sForceFullScreenTransparentFXCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_GET_SFORCEFULLSCREENTRANSPARENTFXCOUNT_OFFSET))();
		}

		static ::System::Void set_sForceFullScreenTransparentFXCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SET_SFORCEFULLSCREENTRANSPARENTFXCOUNT_OFFSET))(value);
		}

		static ::System::Void SetParticleResolutionLevel(::UnityEngine::Rendering::Universal::GraphicSettings_EParticleResolutionLevel screenLevel)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::GraphicSettings_EParticleResolutionLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETPARTICLERESOLUTIONLEVEL_OFFSET))(screenLevel);
		}

		static ::System::Void SetParticleLodLevel(::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel level)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETPARTICLELODLEVEL_OFFSET))(level);
		}

		static ::System::Void SetParticleLightLevel(::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLightLevel lightLevel)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLightLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETPARTICLELIGHTLEVEL_OFFSET))(lightLevel);
		}

		static ::System::Void SetDamageDecalLevel(::UnityEngine::Rendering::Universal::GraphicSettings_EDamageDecalQuality damageDecalLevel)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::GraphicSettings_EDamageDecalQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETDAMAGEDECALLEVEL_OFFSET))(damageDecalLevel);
		}

		static ::System::Void SetParticleQuality(::System::Boolean isHalfScreen)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETPARTICLEQUALITY_OFFSET))(isHalfScreen);
		}

		static ::System::Void SetDPIFactor(::System::Single dpiFactor)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETDPIFACTOR_OFFSET))(dpiFactor);
		}

		static ::System::Void SetRenderScale(::UnityEngine::Vector2 recommendResolution, ::System::Single renderScale, ::System::Single rtFactor, ::System::Single taauScale)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETRENDERSCALE_OFFSET))(recommendResolution, renderScale, rtFactor, taauScale);
		}

		static ::System::Void SetShadowQuality(::UnityEngine::NAPRenderPipeline0::ShadowQuality shadowQuality, ::UnityEngine::NAPRenderPipeline0::SSAOQuality aoMaxQuality)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::ShadowQuality, ::UnityEngine::NAPRenderPipeline0::SSAOQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETSHADOWQUALITY_OFFSET))(shadowQuality, aoMaxQuality);
		}

		static ::System::Void SetPerObjectShadow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETPEROBJECTSHADOW_OFFSET))();
		}

		static ::System::Void SetAntiAliasingQuality(::UnityEngine::NAPRenderPipeline0::AntialiasingMode antialiasingMode)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::AntialiasingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETANTIALIASINGQUALITY_OFFSET))(antialiasingMode);
		}

		static ::System::Void SetMirrorReflectionQuality(::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality mirrorReflectionQuality, ::System::Int32 downScale, ::System::Single minSmoothness)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETMIRRORREFLECTIONQUALITY_OFFSET))(mirrorReflectionQuality, downScale, minSmoothness);
		}

		static ::System::Void SetVolumetricFogQuality(::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality fogQuality)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETVOLUMETRICFOGQUALITY_OFFSET))(fogQuality);
		}

		static ::System::Void SetVolumetricCloudQuality(::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality cloudQuality)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETVOLUMETRICCLOUDQUALITY_OFFSET))(cloudQuality);
		}

		static ::System::Void SetBloomQuality(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETBLOOMQUALITY_OFFSET))(isOn);
		}

		static ::System::Void SetSceneGlareQuality(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GRAPHICSETTINGS_SETSCENEGLAREQUALITY_OFFSET))(isOn);
		}
	};
}

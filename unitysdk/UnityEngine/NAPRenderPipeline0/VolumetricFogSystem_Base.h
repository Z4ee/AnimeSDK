#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawVolumetricFogWeatherConfigParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/VisibleLight.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class IWeatherConfig; }
namespace UnityEngine::NAPRenderPipeline0 { class NativeAdditionalLightData_NativeSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumetricFog_NativeSRP; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class DynamicArray_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_ADDVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1D2A7460)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D2A50F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DENOISE_OFFSET UNITYSDK_OFFSET(0x1D2A6B20)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWFAKEPUNCTUALLIGHTVOLUMETRICFOGEXTRA_OFFSET UNITYSDK_OFFSET(0x1D2A5E20)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWFAKEPUNCTUALLIGHTVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1D2A5E30)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWPOSTLIGHTEFFECTFOREFFECT_OFFSET UNITYSDK_OFFSET(0x1D2A5170)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWPOSTLIGHTEFFECTFOROPAQUEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D2A5180)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWPUNCTUALLIGHTVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1D2A5190)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1D2A51A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_GETLIGHTATTENUATION_OFFSET UNITYSDK_OFFSET(0x1D2A4C30)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_GETVOLUMETRICFOGCONFIG_OFFSET UNITYSDK_OFFSET(0x1D2A4570)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_GET_USEREVERTMODE_OFFSET UNITYSDK_OFFSET(0x1D2A4840)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_HASVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1D2A4860)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_REMOVEVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1D2A74E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_SETUPFAKEPUNCTUALLIGHTVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1D2A5940)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_SET_USEREVERTMODE_OFFSET UNITYSDK_OFFSET(0x1D2A4850)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A45D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D2A7560)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumetricFogSystem_Base_TypeDefinitionIndex = 6009;

	class VolumetricFogSystem_Base : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* m_VolumetricFogConfig; // 0x10
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality m_VolumetricFogQuality; // 0x18
		::System::Boolean _UseRevertMode_k__BackingField; // 0x1C
		::Il2CppArray<::UnityEngine::Plane>* planes; // 0x20
		::UnityEngine::MaterialPropertyBlock* cachedPropertyBlock; // 0x28
		::System::Boolean m_UseTempRT; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* m_LightVolumeList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* m_LightPositionList; // 0x40
		::System::Comparison_1<::System::Int32>* m_sortFunc; // 0x48
		::UnityEngine::Vector3 m_cameraPos; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumetricFog_NativeSRP*>* mFogList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE__CTOR_OFFSET))(this);
		}

		::System::Void GetVolumetricFogConfig(::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality quality, ::System::Int32& resolutionDownScale, ::System::Single& blurRadius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_GETVOLUMETRICFOGCONFIG_OFFSET))(this, quality, resolutionDownScale, blurRadius);
		}

		::System::Boolean get_UseRevertMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_GET_USEREVERTMODE_OFFSET))(this);
		}

		::System::Void set_UseRevertMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_SET_USEREVERTMODE_OFFSET))(this, value);
		}

		::System::Boolean HasVolumetricFog(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* weatherConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_HASVOLUMETRICFOG_OFFSET))(this, camera, weatherConfig);
		}

		::UnityEngine::Vector4 GetLightAttenuation(::UnityEngine::Rendering::VisibleLight& light, ::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightData_NativeSRP* lightData)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Rendering::VisibleLight&, ::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightData_NativeSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_GETLIGHTATTENUATION_OFFSET))(this, light, lightData);
		}

		::System::Void Cleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_CLEANUP_OFFSET))(this, cmd);
		}

		::System::Void DrawPostLightEffectForEffect(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Int32 oldRenderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier colorSource, ::UnityEngine::Rendering::RenderTargetIdentifier depthSource)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWPOSTLIGHTEFFECTFOREFFECT_OFFSET))(this, cmd, context, renderingData, oldRenderTarget, colorSource, depthSource);
		}

		::System::Void DrawPostLightEffectForOpaqueObject(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Int32 oldRenderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier colorSource, ::UnityEngine::Rendering::RenderTargetIdentifier depthSource)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWPOSTLIGHTEFFECTFOROPAQUEOBJECT_OFFSET))(this, cmd, context, renderingData, oldRenderTarget, colorSource, depthSource);
		}

		::System::Void DrawPunctualLightVolumetricFog(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* weatherConfig, ::UnityEngine::Rendering::CullingResults& cullResults, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>* visibleLightPreData, ::System::Int32 oldRenderTarget, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Single globalFogIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>*, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWPUNCTUALLIGHTVOLUMETRICFOG_OFFSET))(this, cmd, context, weatherConfig, cullResults, visibleLightPreData, oldRenderTarget, renderingData, globalFogIntensity);
		}

		::System::Void DrawVolumetricFog(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* weatherConfig, ::UnityEngine::NAPRenderPipeline0::DrawVolumetricFogWeatherConfigParams& p, ::UnityEngine::Camera* camera, ::System::Single globalFogIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::UnityEngine::NAPRenderPipeline0::DrawVolumetricFogWeatherConfigParams&, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWVOLUMETRICFOG_OFFSET))(this, cmd, weatherConfig, p, camera, globalFogIntensity);
		}

		::System::Boolean SetupFakePunctualLightVolumetricFog(::UnityEngine::NAPRenderPipeline0::IWeatherConfig* weatherConfig, ::UnityEngine::Rendering::CullingResults& cullResults, ::UnityEngine::Vector2 targetResolution)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_SETUPFAKEPUNCTUALLIGHTVOLUMETRICFOG_OFFSET))(this, weatherConfig, cullResults, targetResolution);
		}

		::System::Void DrawFakePunctualLightVolumetricFogExtra(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* weatherConfig, ::UnityEngine::Rendering::CullingResults& cullResults, ::UnityEngine::Camera* camera, ::UnityEngine::Vector2 m_Resolution)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::Camera*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWFAKEPUNCTUALLIGHTVOLUMETRICFOGEXTRA_OFFSET))(this, cmd, weatherConfig, cullResults, camera, m_Resolution);
		}

		::System::Void DrawFakePunctualLightVolumetricFog(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* weatherConfig, ::UnityEngine::Rendering::CullingResults& cullResults, ::UnityEngine::Camera* camera, ::UnityEngine::Vector2 m_Resolution)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::Camera*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DRAWFAKEPUNCTUALLIGHTVOLUMETRICFOG_OFFSET))(this, cmd, weatherConfig, cullResults, camera, m_Resolution);
		}

		::System::Void Denoise(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* history, ::System::Single m_BlurRadius, ::UnityEngine::Vector4 texelSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_DENOISE_OFFSET))(this, cmd, history, m_BlurRadius, texelSize);
		}

		::System::Void AddVolumetricFog(::UnityEngine::NAPRenderPipeline0::VolumetricFog_NativeSRP* fog)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumetricFog_NativeSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_ADDVOLUMETRICFOG_OFFSET))(this, fog);
		}

		::System::Void RemoveVolumetricFog(::UnityEngine::NAPRenderPipeline0::VolumetricFog_NativeSRP* fog)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumetricFog_NativeSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE_REMOVEVOLUMETRICFOG_OFFSET))(this, fog);
		}

		::System::Int32 __ctor_b__3_0(::System::Int32 l, ::System::Int32 r)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGSYSTEM_BASE___CTOR_B__3_0_OFFSET))(this, l, r);
		}
	};
}

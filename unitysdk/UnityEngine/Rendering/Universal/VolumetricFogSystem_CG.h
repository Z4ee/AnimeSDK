#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogSystem_Base.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::NAPRenderPipeline0 { class IWeatherConfig; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class DynamicArray_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG_DRAWPOSTLIGHTEFFECTFOREFFECT_OFFSET UNITYSDK_OFFSET(0xF7FF250)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG_DRAWPOSTLIGHTEFFECTFOROPAQUEOBJECT_OFFSET UNITYSDK_OFFSET(0xF8006D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG_DRAWPUNCTUALLIGHTVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0xF801F90)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG__CTOR_OFFSET UNITYSDK_OFFSET(0xF804120)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG___BASE_DRAWPOSTLIGHTEFFECTFOREFFECT_OFFSET UNITYSDK_OFFSET(0xF804170)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG___BASE_DRAWPOSTLIGHTEFFECTFOROPAQUEOBJECT_OFFSET UNITYSDK_OFFSET(0xF804180)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG___BASE_DRAWPUNCTUALLIGHTVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0xF804190)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricFogSystem_CG_TypeDefinitionIndex = 29927;

	class VolumetricFogSystem_CG : public ::UnityEngine::NAPRenderPipeline0::VolumetricFogSystem_Base
	{
	public:
		static ::UnityEngine::Shader** StaticGet_s_ShaderCGVolumetricFog()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(VolumetricFogSystem_CG_TypeDefinitionIndex)->GetStaticField(0x24B30);
		}
		static ::UnityEngine::Material** StaticGet_s_MaterialCGVolumetricFog()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(VolumetricFogSystem_CG_TypeDefinitionIndex)->GetStaticField(0x24B38);
		}
		::UnityEngine::Material* postLightMat; // 0x68
		::UnityEngine::MaterialPropertyBlock* postLightPropertyBlock; // 0x70
		::UnityEngine::Material* postLightLutMat; // 0x78
		::System::Int32 _SpecialControlParams; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG__CTOR_OFFSET))(this);
		}

		::System::Void DrawPostLightEffectForEffect(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Int32 oldRenderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier colorSource, ::UnityEngine::Rendering::RenderTargetIdentifier depthSource)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG_DRAWPOSTLIGHTEFFECTFOREFFECT_OFFSET))(this, cmd, context, renderingData, oldRenderTarget, colorSource, depthSource);
		}

		::System::Void DrawPostLightEffectForOpaqueObject(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Int32 oldRenderTarget, ::UnityEngine::Rendering::RenderTargetIdentifier colorSource, ::UnityEngine::Rendering::RenderTargetIdentifier depthSource)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG_DRAWPOSTLIGHTEFFECTFOROPAQUEOBJECT_OFFSET))(this, cmd, context, renderingData, oldRenderTarget, colorSource, depthSource);
		}

		::System::Void DrawPunctualLightVolumetricFog(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* _weatherConfig, ::UnityEngine::Rendering::CullingResults& cullResults, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>* visibleLightPreData, ::System::Int32 oldRenderTarget, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Single globalFogIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>*, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG_DRAWPUNCTUALLIGHTVOLUMETRICFOG_OFFSET))(this, cmd, context, _weatherConfig, cullResults, visibleLightPreData, oldRenderTarget, renderingData, globalFogIntensity);
		}

		::System::Void __base_DrawPostLightEffectForEffect(::UnityEngine::Rendering::CommandBuffer* P0, ::UnityEngine::Rendering::ScriptableRenderContext P1, ::UnityEngine::NAPRenderPipeline0::RenderingData& P2, ::System::Int32 P3, ::UnityEngine::Rendering::RenderTargetIdentifier P4, ::UnityEngine::Rendering::RenderTargetIdentifier P5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG___BASE_DRAWPOSTLIGHTEFFECTFOREFFECT_OFFSET))(this, P0, P1, P2, P3, P4, P5);
		}

		::System::Void __base_DrawPostLightEffectForOpaqueObject(::UnityEngine::Rendering::CommandBuffer* P0, ::UnityEngine::Rendering::ScriptableRenderContext P1, ::UnityEngine::NAPRenderPipeline0::RenderingData& P2, ::System::Int32 P3, ::UnityEngine::Rendering::RenderTargetIdentifier P4, ::UnityEngine::Rendering::RenderTargetIdentifier P5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG___BASE_DRAWPOSTLIGHTEFFECTFOROPAQUEOBJECT_OFFSET))(this, P0, P1, P2, P3, P4, P5);
		}

		::System::Void __base_DrawPunctualLightVolumetricFog(::UnityEngine::Rendering::CommandBuffer* P0, ::UnityEngine::Rendering::ScriptableRenderContext P1, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* P2, ::UnityEngine::Rendering::CullingResults& P3, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>* P4, ::System::Int32 P5, ::UnityEngine::NAPRenderPipeline0::RenderingData& P6, ::System::Single P7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>*, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICFOGSYSTEM_CG___BASE_DRAWPUNCTUALLIGHTVOLUMETRICFOG_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7);
		}
	};
}

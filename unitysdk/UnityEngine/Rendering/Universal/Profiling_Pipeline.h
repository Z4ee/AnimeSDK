#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_PROFILING_PIPELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC72060)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Profiling_Pipeline_TypeDefinitionIndex = 26792;

	class Profiling_Pipeline : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_ForwardRender_RefreshEnvironmentConfig()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21A50);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererPreCull()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21A58);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSetup()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21A60);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_NapRenderEntity_PrepareData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21A68);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_ParticleLightOptimize()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21A70);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_SetupLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21A78);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_PerObjectShadowSetup()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21A80);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_PassUtil_FlushParams()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21A88);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_Execute()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21A90);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ExBlockBeforeRendering()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21A98);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AA0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_UpdateForLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AA8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ExBlockMainRenderingOpaque()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AB0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_PassUtil_UpdateWaterValue()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AB8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_ForwardRender_SetSkyCover()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AC0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_setupPerFrameShaderConstants()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AC8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_WaitSRPHelper()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AD0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_SetupCameras()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AD8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_InitializeCameraRenderState()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AE0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RenderPlanarReflection()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AE8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_FillBlockRange()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AF0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_LensFlareUpdate()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21AF8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_SetupStaticResource()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B00);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSortPasses()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B08);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ExBlockMainRenderingTransparent()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B10);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_DrawGizmos()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B18);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ExBlockAfterRendering()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B20);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_SoftEdge()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B28);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_OverlayBeforeDeferredShading()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B30);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RenderEditorCamera()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B38);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererInitializeRenderingData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B40);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_PassUtil_CommonWeatherParams()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B48);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_CharacterSetup()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B50);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererPBDApplyWind()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B58);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSubmit()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B60);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_ForwardRender_InitializeCameraViewConstant()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B68);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ForwardLights_SetupMainLightConstants()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B70);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_UpdateLensFlareLightData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B78);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RenderGameCameraStack()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B80);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Smapler_FlushGamePlayKeywords()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B88);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_InitializeShadowData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B90);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups_SetupConstants()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21B98);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_PassUtil_ApplyPPSParams()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21BA0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_RuntimePostAO()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21BA8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_ForwardLights_InitializeLightConstants()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21BB0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_InitializeLightData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21BB8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_InternalFinishRendering()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21BC0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererExecute()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21BC8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_SRP_CapsuleAOUpdate()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21BD0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_PassUtil_ApplyRTXParams()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21BD8);
		}
		// static const ::System::String* k_Name; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PROFILING_PIPELINE__CCTOR_OFFSET))();
		}
	};
}

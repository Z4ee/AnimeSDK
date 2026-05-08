#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_PIPELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190CFEE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex = 30262;

	class UniversalRenderPipeline_Profiling_Pipeline : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeRenderingData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F30);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_getPerObjectLightFlags()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F38);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_WaitSRPHelper()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F40);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeAdditionalCameraData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F48);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_InitializeShadowData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F50);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSortPasses()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F58);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeCameraData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F60);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_setupPerFrameShaderConstants()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F68);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F70);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererPreCull()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F78);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSubmit()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F80);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererExecute()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F88);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_endFrameRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F90);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeShadowData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23F98);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_endCameraRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23FA0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_ParticleLightOptimize()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23FA8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RenderStack()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23FB0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_InitializeLightData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23FB8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_beginCameraRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23FC0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeLightData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23FC8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_beginFrameRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23FD0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeStackedCameraData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23FD8);
		}
		// static const ::System::String* k_Name; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_PIPELINE__CCTOR_OFFSET))();
		}
	};
}

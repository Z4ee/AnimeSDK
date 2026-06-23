#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_PIPELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF12830)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex = 27234;

	class UniversalRenderPipeline_Profiling_Pipeline : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_ParticleLightOptimize()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21720);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_beginCameraRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21728);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeAdditionalCameraData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21730);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeShadowData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21738);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeRenderingData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21740);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_InitializeShadowData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21748);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_beginFrameRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21750);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21758);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSortPasses()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21760);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_InitializeLightData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21768);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSubmit()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21770);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RenderStack()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21778);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_endCameraRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21780);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_WaitSRPHelper()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21788);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererPreCull()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21790);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeStackedCameraData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x21798);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererExecute()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x217A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeLightData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x217A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_endFrameRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x217B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeCameraData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x217B8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_getPerObjectLightFlags()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x217C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_setupPerFrameShaderConstants()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x217C8);
		}
		// static const ::System::String* k_Name; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_PIPELINE__CCTOR_OFFSET))();
		}
	};
}

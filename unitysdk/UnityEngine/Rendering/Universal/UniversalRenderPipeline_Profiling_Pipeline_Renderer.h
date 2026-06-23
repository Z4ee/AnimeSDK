#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_PIPELINE_RENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC37B20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipeline_Profiling_Pipeline_Renderer_TypeDefinitionIndex = 27236;

	class UniversalRenderPipeline_Profiling_Pipeline_Renderer : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_setupCullingParameters()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_Renderer_TypeDefinitionIndex)->GetStaticField(0x21B50);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_setup()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_Renderer_TypeDefinitionIndex)->GetStaticField(0x21B58);
		}
		// static const ::System::String* k_Name; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_PIPELINE_RENDERER__CCTOR_OFFSET))();
		}
	};
}

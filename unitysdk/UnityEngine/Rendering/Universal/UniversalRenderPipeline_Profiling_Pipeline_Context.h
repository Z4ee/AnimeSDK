#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_PIPELINE_CONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDCF510)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipeline_Profiling_Pipeline_Context_TypeDefinitionIndex = 27235;

	class UniversalRenderPipeline_Profiling_Pipeline_Context : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_submit()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_Context_TypeDefinitionIndex)->GetStaticField(0x21570);
		}
		// static const ::System::String* k_Name; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_PIPELINE_CONTEXT__CCTOR_OFFSET))();
		}
	};
}

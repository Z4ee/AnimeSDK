#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_PROFILING_PIPELINE_CONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFF2B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Profiling_Pipeline_Context_TypeDefinitionIndex = 26793;

	class Profiling_Pipeline_Context : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_submit()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(Profiling_Pipeline_Context_TypeDefinitionIndex)->GetStaticField(0x22E60);
		}
		// static const ::System::String* k_Name; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PROFILING_PIPELINE_CONTEXT__CCTOR_OFFSET))();
		}
	};
}

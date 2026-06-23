#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_TRYGETORADDCAMERASAMPLER_OFFSET UNITYSDK_OFFSET(0x1B800F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8011A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipeline_Profiling_TypeDefinitionIndex = 27233;

	class UniversalRenderPipeline_Profiling : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_s_HashSamplerCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_TypeDefinitionIndex)->GetStaticField(0x220D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING__CCTOR_OFFSET))();
		}

		static ::System::String* TryGetOrAddCameraSampler(::UnityEngine::Camera* camera)
		{
			return ((::System::String*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_TRYGETORADDCAMERASAMPLER_OFFSET))(camera);
		}
	};
}

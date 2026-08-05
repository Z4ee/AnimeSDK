#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_UNIVERSAL_PROFILING_TRYGETORADDCAMERASAMPLER_OFFSET UNITYSDK_OFFSET(0x1CEFEC30)
#define UNITYENGINE_RENDERING_UNIVERSAL_PROFILING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFEE80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Profiling_TypeDefinitionIndex = 26791;

	class Profiling : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_s_HashSamplerCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Profiling_TypeDefinitionIndex)->GetStaticField(0x22D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PROFILING__CCTOR_OFFSET))();
		}

		static ::System::String* TryGetOrAddCameraSampler(::UnityEngine::Camera* camera)
		{
			return ((::System::String*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PROFILING_TRYGETORADDCAMERASAMPLER_OFFSET))(camera);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Profiling/Sampler.h"

namespace System { class String; }

#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECC9B00)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1ECC9A50)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECC9B10)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ECC9A20)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECC99F0)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int CustomSampler_TypeDefinitionIndex = 4515;

	class CustomSampler : public ::UnityEngine::Profiling::Sampler
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_InvalidCustomSampler()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(CustomSampler_TypeDefinitionIndex)->GetStaticField(0x13790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Profiling::CustomSampler* Create(::System::String* a1)
		{
			return ((::UnityEngine::Profiling::CustomSampler*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATE_OFFSET))(a1);
		}

		static ::System::IntPtr CreateInternal(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATEINTERNAL_OFFSET))(a1);
		}
	};
}

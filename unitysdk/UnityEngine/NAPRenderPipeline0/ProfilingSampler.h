#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D6A6670)
#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER_SET_INLINESAMPLER_OFFSET UNITYSDK_OFFSET(0x1D6A6660)
#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D6A6680)
#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER_SET_SAMPLER_OFFSET UNITYSDK_OFFSET(0x1D6A6650)
#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D6A6690)
#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A65C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ProfilingSampler_TypeDefinitionIndex = 5977;

	class ProfilingSampler : public ::System::Object
	{
	public:
		::UnityEngine::Profiling::CustomSampler* _sampler_k__BackingField; // 0x10
		::UnityEngine::Profiling::CustomSampler* _inlineSampler_k__BackingField; // 0x18
		::System::String* _name_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER__CTOR_1_OFFSET))(this);
		}

		::System::Void set_sampler(::UnityEngine::Profiling::CustomSampler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Profiling::CustomSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER_SET_SAMPLER_OFFSET))(this, value);
		}

		::System::Void set_inlineSampler(::UnityEngine::Profiling::CustomSampler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Profiling::CustomSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER_SET_INLINESAMPLER_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSAMPLER_SET_NAME_OFFSET))(this, value);
		}
	};
}

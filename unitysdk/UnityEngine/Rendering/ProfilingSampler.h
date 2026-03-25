#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_CPUELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x188E8A50)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_CPUSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x188E8A60)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_GPUELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x188E8A30)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_GPUSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x188E8A40)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINECPUELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x188E8A70)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINECPUSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x188E8A80)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINESAMPLER_OFFSET UNITYSDK_OFFSET(0x188E89E0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x188E8A00)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_SAMPLER_OFFSET UNITYSDK_OFFSET(0x188E89C0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_ISVALID_OFFSET UNITYSDK_OFFSET(0x188E89A0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_ENABLERECORDING_OFFSET UNITYSDK_OFFSET(0x188E8A20)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_INLINESAMPLER_OFFSET UNITYSDK_OFFSET(0x188E89F0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x188E8A10)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_SAMPLER_OFFSET UNITYSDK_OFFSET(0x188E89D0)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x188E8A90)
#define UNITYENGINE_RENDERING_PROFILINGSAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x188E8910)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ProfilingSampler_TypeDefinitionIndex = 27841;

	class ProfilingSampler : public ::System::Object
	{
	public:
		::UnityEngine::Profiling::CustomSampler* _sampler_k__BackingField; // 0x10
		::UnityEngine::Profiling::CustomSampler* _inlineSampler_k__BackingField; // 0x18
		::System::String* _name_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER__CTOR_1_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_ISVALID_OFFSET))(this);
		}

		::UnityEngine::Profiling::CustomSampler* get_sampler()
		{
			return ((::UnityEngine::Profiling::CustomSampler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_SAMPLER_OFFSET))(this);
		}

		::System::Void set_sampler(::UnityEngine::Profiling::CustomSampler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Profiling::CustomSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_SAMPLER_OFFSET))(this, value);
		}

		::UnityEngine::Profiling::CustomSampler* get_inlineSampler()
		{
			return ((::UnityEngine::Profiling::CustomSampler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINESAMPLER_OFFSET))(this);
		}

		::System::Void set_inlineSampler(::UnityEngine::Profiling::CustomSampler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Profiling::CustomSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_INLINESAMPLER_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_NAME_OFFSET))(this, value);
		}

		::System::Void set_enableRecording(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_SET_ENABLERECORDING_OFFSET))(this, value);
		}

		::System::Single get_gpuElapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_GPUELAPSEDTIME_OFFSET))(this);
		}

		::System::Int32 get_gpuSampleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_GPUSAMPLECOUNT_OFFSET))(this);
		}

		::System::Single get_cpuElapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_CPUELAPSEDTIME_OFFSET))(this);
		}

		::System::Int32 get_cpuSampleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_CPUSAMPLECOUNT_OFFSET))(this);
		}

		::System::Single get_inlineCpuElapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINECPUELAPSEDTIME_OFFSET))(this);
		}

		::System::Int32 get_inlineCpuSampleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSAMPLER_GET_INLINECPUSAMPLECOUNT_OFFSET))(this);
		}
	};
}

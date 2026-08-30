#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Profiling { class Recorder; }

#define UNITYENGINE_PROFILING_SAMPLER_GETRECORDERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED47380)
#define UNITYENGINE_PROFILING_SAMPLER_GETRECORDER_OFFSET UNITYSDK_OFFSET(0x1ED47310)
#define UNITYENGINE_PROFILING_SAMPLER_GETSAMPLERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED47400)
#define UNITYENGINE_PROFILING_SAMPLER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1ED47300)
#define UNITYENGINE_PROFILING_SAMPLER_GET_OFFSET UNITYSDK_OFFSET(0x1ED47390)
#define UNITYENGINE_PROFILING_SAMPLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED47410)
#define UNITYENGINE_PROFILING_SAMPLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED472F0)
#define UNITYENGINE_PROFILING_SAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED466B0)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Sampler_TypeDefinitionIndex = 4514;

	class Sampler : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::Sampler** StaticGet_s_InvalidSampler()
		{
			return (::UnityEngine::Profiling::Sampler**)Il2CppClass::FromTypeDefinitionIndex(Sampler_TypeDefinitionIndex)->GetStaticField(0x11730);
		}
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER__CCTOR_OFFSET))();
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER_GET_ISVALID_OFFSET))(this);
		}

		::UnityEngine::Profiling::Recorder* GetRecorder()
		{
			return ((::UnityEngine::Profiling::Recorder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER_GETRECORDER_OFFSET))(this);
		}

		static ::UnityEngine::Profiling::Sampler* Get(::System::String* a1)
		{
			return ((::UnityEngine::Profiling::Sampler*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER_GET_OFFSET))(a1);
		}

		static ::System::IntPtr GetRecorderInternal(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER_GETRECORDERINTERNAL_OFFSET))(a1);
		}

		static ::System::IntPtr GetSamplerInternal(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_SAMPLER_GETSAMPLERINTERNAL_OFFSET))(a1);
		}
	};
}

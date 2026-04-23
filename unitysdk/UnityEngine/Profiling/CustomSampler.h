#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Profiling/Sampler.h"

namespace System { class String; }

#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A467F10)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1A467E60)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A467F20)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A467E30)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A467E00)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int CustomSampler_TypeDefinitionIndex = 4326;

	class CustomSampler : public ::UnityEngine::Profiling::Sampler
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_InvalidCustomSampler()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(CustomSampler_TypeDefinitionIndex)->GetStaticField(0x16070);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER__CTOR_1_OFFSET))(this, ptr);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Profiling::CustomSampler* Create(::System::String* name)
		{
			return ((::UnityEngine::Profiling::CustomSampler*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATE_OFFSET))(name);
		}

		static ::System::IntPtr CreateInternal(::System::String* name)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATEINTERNAL_OFFSET))(name);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class CommandBufferExt; }
namespace UnityEngine::Rendering { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_PROFILINGSCOPE_BEGINPROFILE_1_OFFSET UNITYSDK_OFFSET(0x1A322850)
#define UNITYENGINE_RENDERING_PROFILINGSCOPE_BEGINPROFILE_OFFSET UNITYSDK_OFFSET(0x1A322840)
#define UNITYENGINE_RENDERING_PROFILINGSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define UNITYENGINE_RENDERING_PROFILINGSCOPE_ENDPROFILE_OFFSET UNITYSDK_OFFSET(0x1A322860)
#define UNITYENGINE_RENDERING_PROFILINGSCOPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1020)
#define UNITYENGINE_RENDERING_PROFILINGSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1020)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ProfilingScope_TypeDefinitionIndex = 33466;

	struct alignas(1) ProfilingScope
	{
		::System::Void _ctor(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProfilingSampler* sampler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProfilingSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE__CTOR_OFFSET))(this, cmd, sampler);
		}

		::System::Void _ctor_1(::UnityEngine::Rendering::CommandBufferExt* cmd, ::UnityEngine::Rendering::ProfilingSampler* sampler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBufferExt*, ::UnityEngine::Rendering::ProfilingSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE__CTOR_1_OFFSET))(this, cmd, sampler);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_DISPOSE_OFFSET))(this);
		}

		static ::System::Void BeginProfile(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProfilingSampler* sampler)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProfilingSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_BEGINPROFILE_OFFSET))(cmd, sampler);
		}

		static ::System::Void BeginProfile_1(::UnityEngine::Rendering::CommandBufferExt* cmd, ::UnityEngine::Rendering::ProfilingSampler* sampler)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::UnityEngine::Rendering::ProfilingSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_BEGINPROFILE_1_OFFSET))(cmd, sampler);
		}

		static ::System::Void EndProfile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_ENDPROFILE_OFFSET))();
		}
	};
}

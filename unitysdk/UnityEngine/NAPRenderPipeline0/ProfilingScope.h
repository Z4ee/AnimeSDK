#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0xA39FC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA39F70)
#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE_INITPROFILINGSCOPE_OFFSET UNITYSDK_OFFSET(0xA3A010)
#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CC1A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA39E40)
#define UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0xA39D10)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ProfilingScope_TypeDefinitionIndex = 5980;

	struct alignas(8) ProfilingScope
	{
		static ::System::Boolean* StaticGet_Enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ProfilingScope_TypeDefinitionIndex)->GetStaticField(0x2B20);
		}
		::System::String* m_Name; // 0x10
		::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper m_CmdWrapper; // 0x18
		::System::Boolean m_Disposed; // 0x28

		::System::Void _ctor(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler* sampler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE__CTOR_OFFSET))(this, cmd, sampler);
		}

		::System::Void _ctor_1(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler* sampler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE__CTOR_1_OFFSET))(this, cmdWrapper, sampler);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void InitProfilingScope(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler* sampler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PROFILINGSCOPE_INITPROFILINGSCOPE_OFFSET))(this, cmdWrapper, sampler);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/ShaderWarmupSetup.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeywordSet.h"
#include "unitysdk/UnityEngine/WarmupPipelineState.h"
#include "unitysdk/UnityEngine/WarmupQualityCategory.h"

namespace UnityEngine { class Shader; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_BEGINPSOWARMUPQUALITYSET_OFFSET UNITYSDK_OFFSET(0x1DEDA880)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_BEGINPSOWARMUP_OFFSET UNITYSDK_OFFSET(0x1DEDA860)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_ENDPSOWARMUPQUALITYSET_OFFSET UNITYSDK_OFFSET(0x1DEDA890)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_ENDPSOWARMUP_OFFSET UNITYSDK_OFFSET(0x1DEDA870)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_GETPSOCACHEFILESIZE_OFFSET UNITYSDK_OFFSET(0x1DEDA8B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_PSOWARMUPASYNCSAVERUNNING_OFFSET UNITYSDK_OFFSET(0x1DEDA8A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_SWAPPIPELINECACHEMEMORYPAGE_OFFSET UNITYSDK_OFFSET(0x1DEDA8C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPPSO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DEDA850)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPPSO_OFFSET UNITYSDK_OFFSET(0x1DEDA840)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPSHADERPASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DEDA830)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPSHADERPASS_OFFSET UNITYSDK_OFFSET(0x1DEDA810)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ShaderWarmup_TypeDefinitionIndex = 4941;

	class ShaderWarmup : public ::System::Object
	{
	public:
		static ::System::Void WarmupShaderPass(::UnityEngine::Shader* a1, ::System::Int32 a2, ::UnityEngine::Rendering::ShaderKeywordSet a3, ::UnityEngine::Experimental::Rendering::ShaderWarmupSetup a4)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32, ::UnityEngine::Rendering::ShaderKeywordSet, ::UnityEngine::Experimental::Rendering::ShaderWarmupSetup))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPSHADERPASS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void WarmupPSO(::UnityEngine::Shader* a1, ::UnityEngine::WarmupPipelineState a2)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::UnityEngine::WarmupPipelineState))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPPSO_OFFSET))(a1, a2);
		}

		static ::System::Void BeginPSOWarmup(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_BEGINPSOWARMUP_OFFSET))(a1);
		}

		static ::System::Void EndPSOWarmup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_ENDPSOWARMUP_OFFSET))();
		}

		static ::System::Void BeginPSOWarmupQualitySet(::UnityEngine::WarmupQualityCategory a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::WarmupQualityCategory, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_BEGINPSOWARMUPQUALITYSET_OFFSET))(a1, a2);
		}

		static ::System::Void EndPSOWarmupQualitySet()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_ENDPSOWARMUPQUALITYSET_OFFSET))();
		}

		static ::System::Boolean PSOWarmupAsyncSaveRunning()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_PSOWARMUPASYNCSAVERUNNING_OFFSET))();
		}

		static ::System::UInt64 GetPSOCacheFileSize()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_GETPSOCACHEFILESIZE_OFFSET))();
		}

		static ::System::Void SwapPipelineCacheMemoryPage()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_SWAPPIPELINECACHEMEMORYPAGE_OFFSET))();
		}

		static ::System::Void WarmupShaderPass_Injected(::UnityEngine::Shader* a1, ::System::Int32 a2, ::UnityEngine::Rendering::ShaderKeywordSet& a3, ::UnityEngine::Experimental::Rendering::ShaderWarmupSetup& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32, ::UnityEngine::Rendering::ShaderKeywordSet&, ::UnityEngine::Experimental::Rendering::ShaderWarmupSetup&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPSHADERPASS_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void WarmupPSO_Injected(::UnityEngine::Shader* a1, ::UnityEngine::WarmupPipelineState& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::UnityEngine::WarmupPipelineState&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPPSO_INJECTED_OFFSET))(a1, a2);
		}
	};
}

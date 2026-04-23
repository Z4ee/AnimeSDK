#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/ShaderWarmupSetup.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeywordSet.h"
#include "unitysdk/UnityEngine/WarmupPipelineState.h"
#include "unitysdk/UnityEngine/WarmupQualityCategory.h"

namespace UnityEngine { class Shader; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_BEGINPSOWARMUPQUALITYSET_OFFSET UNITYSDK_OFFSET(0x1A443CD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_BEGINPSOWARMUP_OFFSET UNITYSDK_OFFSET(0x1A443CB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_ENDPSOWARMUPQUALITYSET_OFFSET UNITYSDK_OFFSET(0x1A443CE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_ENDPSOWARMUP_OFFSET UNITYSDK_OFFSET(0x1A443CC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_GETPSOCACHEFILESIZE_OFFSET UNITYSDK_OFFSET(0x1A443D00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_PSOWARMUPASYNCSAVERUNNING_OFFSET UNITYSDK_OFFSET(0x1A443CF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPPSO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A443CA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPPSO_OFFSET UNITYSDK_OFFSET(0x1A443C90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPSHADERPASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A443C80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPSHADERPASS_OFFSET UNITYSDK_OFFSET(0x1A443C60)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ShaderWarmup_TypeDefinitionIndex = 4750;

	class ShaderWarmup : public ::System::Object
	{
	public:
		static ::System::Void WarmupShaderPass(::UnityEngine::Shader* shader, ::System::Int32 passIndex, ::UnityEngine::Rendering::ShaderKeywordSet keywordSet, ::UnityEngine::Experimental::Rendering::ShaderWarmupSetup setup)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32, ::UnityEngine::Rendering::ShaderKeywordSet, ::UnityEngine::Experimental::Rendering::ShaderWarmupSetup))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPSHADERPASS_OFFSET))(shader, passIndex, keywordSet, setup);
		}

		static ::System::Void WarmupPSO(::UnityEngine::Shader* shader, ::UnityEngine::WarmupPipelineState pso)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::UnityEngine::WarmupPipelineState))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPPSO_OFFSET))(shader, pso);
		}

		static ::System::Void BeginPSOWarmup(::System::Boolean resetHistory)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_BEGINPSOWARMUP_OFFSET))(resetHistory);
		}

		static ::System::Void EndPSOWarmup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_ENDPSOWARMUP_OFFSET))();
		}

		static ::System::Void BeginPSOWarmupQualitySet(::UnityEngine::WarmupQualityCategory qualityCategory, ::System::Int32 level)
		{
			return ((::System::Void(*)(::UnityEngine::WarmupQualityCategory, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_BEGINPSOWARMUPQUALITYSET_OFFSET))(qualityCategory, level);
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

		static ::System::Void WarmupShaderPass_Injected(::UnityEngine::Shader* shader, ::System::Int32 passIndex, ::UnityEngine::Rendering::ShaderKeywordSet& keywordSet, ::UnityEngine::Experimental::Rendering::ShaderWarmupSetup& setup)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32, ::UnityEngine::Rendering::ShaderKeywordSet&, ::UnityEngine::Experimental::Rendering::ShaderWarmupSetup&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPSHADERPASS_INJECTED_OFFSET))(shader, passIndex, keywordSet, setup);
		}

		static ::System::Void WarmupPSO_Injected(::UnityEngine::Shader* shader, ::UnityEngine::WarmupPipelineState& pso)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::UnityEngine::WarmupPipelineState&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SHADERWARMUP_WARMUPPSO_INJECTED_OFFSET))(shader, pso);
		}
	};
}

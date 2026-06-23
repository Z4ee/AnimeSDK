#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTXRenderer.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D852090)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_RTXPATHTRACERENABLED_OFFSET UNITYSDK_OFFSET(0x1D851FE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8532E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D853290)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXPathTracer_TypeDefinitionIndex = 5792;

	class RTXPathTracer : public ::UnityEngine::NAPRenderPipeline0::RTXRenderer
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_ResetPathTracer()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_TypeDefinitionIndex)->GetStaticField(0x5370);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnablePathTracer()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_TypeDefinitionIndex)->GetStaticField(0x5378);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER__CCTOR_OFFSET))();
		}

		static ::System::Boolean RTXPathTracerEnabled(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_RTXPATHTRACERENABLED_OFFSET))(renderingData);
		}

		static ::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier target)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_EXECUTE_OFFSET))(context, renderingData, target);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTXRenderer.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXDEBUGBVH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D7B30B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXDEBUGBVH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7B3930)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXDEBUGBVH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B38E0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXDebugBVH_TypeDefinitionIndex = 5805;

	class RTXDebugBVH : public ::UnityEngine::NAPRenderPipeline0::RTXRenderer
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_DebugBVHMaxDepth()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXDebugBVH_TypeDefinitionIndex)->GetStaticField(0x54C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXDEBUGBVH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXDEBUGBVH__CCTOR_OFFSET))();
		}

		static ::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier target, ::System::Int32 mode)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXDEBUGBVH_EXECUTE_OFFSET))(context, renderingData, target, mode);
		}
	};
}

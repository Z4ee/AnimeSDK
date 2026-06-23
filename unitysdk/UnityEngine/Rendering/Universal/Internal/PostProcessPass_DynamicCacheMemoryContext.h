#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/EDynamicCacheMemoryPolicy.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DYNAMICCACHEMEMORYCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x98ECC0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_DynamicCacheMemoryContext_TypeDefinitionIndex = 26706;

	struct alignas(8) PostProcessPass_DynamicCacheMemoryContext
	{
		::System::Int32 dynamicCacheRTCount; // 0x10
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* dynamicCacheRTs; // 0x18
		::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>* dynamicCachePolicies; // 0x20
		::System::Boolean enableDynamicCache; // 0x28

		/*
		::System::Void Init(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DYNAMICCACHEMEMORYCONTEXT_INIT_OFFSET))(this, cameraData, passContext);
		}
		*/
	};
}

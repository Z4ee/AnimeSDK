#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CRPCaptureDesc.h"
#include "unitysdk/UnityEngine/Rendering/CRPGlobalMutationStats.h"

#define UNITYENGINE_RENDERING_CAPTUREGLOBALMUTATIONDESC_GETCAPTURERESULT_OFFSET UNITYSDK_OFFSET(0x1DCCD6F0)
#define UNITYENGINE_RENDERING_CAPTUREGLOBALMUTATIONDESC_UPDATEMANUAL_OFFSET UNITYSDK_OFFSET(0x1DCCD6E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CaptureGlobalMutationDesc_TypeDefinitionIndex = 4830;

	struct alignas(8) CaptureGlobalMutationDesc
	{
		::UnityEngine::Rendering::CRPCaptureDesc desc; // 0x10
		::System::Boolean includePerName; // 0x20
		::UnityEngine::Rendering::CRPGlobalMutationStats stats; // 0x28

		static ::System::Void UpdateManual(::UnityEngine::Rendering::CaptureGlobalMutationDesc& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CaptureGlobalMutationDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAPTUREGLOBALMUTATIONDESC_UPDATEMANUAL_OFFSET))(a1);
		}

		static ::System::Void GetCaptureResult(::UnityEngine::Rendering::CaptureGlobalMutationDesc& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CaptureGlobalMutationDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAPTUREGLOBALMUTATIONDESC_GETCAPTURERESULT_OFFSET))(a1);
		}
	};
}

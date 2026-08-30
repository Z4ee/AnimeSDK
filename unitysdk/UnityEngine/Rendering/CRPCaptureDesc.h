#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_RENDERING_CRPCAPTUREDESC_SETCAPTURE_OFFSET UNITYSDK_OFFSET(0x1ED53D90)
#define UNITYENGINE_RENDERING_CRPCAPTUREDESC_UPDATECAPTURE_OFFSET UNITYSDK_OFFSET(0x1ED53DA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPCaptureDesc_TypeDefinitionIndex = 4826;

	struct alignas(4) CRPCaptureDesc
	{
		::System::Int32 count; // 0x10
		::System::Int32 captureType; // 0x14
		::System::Int32 cameraType; // 0x18
		::System::Int32 opType; // 0x1C

		static ::System::Void SetCapture(::UnityEngine::Rendering::CRPCaptureDesc& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPCaptureDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPCAPTUREDESC_SETCAPTURE_OFFSET))(a1);
		}

		static ::System::Void UpdateCapture(::UnityEngine::Rendering::CRPCaptureDesc& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPCaptureDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPCAPTUREDESC_UPDATECAPTURE_OFFSET))(a1);
		}
	};
}

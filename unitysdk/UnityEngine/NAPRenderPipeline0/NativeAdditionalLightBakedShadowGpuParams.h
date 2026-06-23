#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NativeAdditionalLightBakedShadowGpuParams_TypeDefinitionIndex = 5935;

	struct alignas(4) NativeAdditionalLightBakedShadowGpuParams
	{
		::System::Int32 faceIndex0; // 0x10
		::System::Int32 faceIndex1; // 0x14
		::System::Int32 faceIndex2; // 0x18
		::System::Int32 faceIndex3; // 0x1C
		::System::Int32 faceIndex4; // 0x20
		::System::Int32 faceIndex5; // 0x24
		::System::Int32 _padding0; // 0x28
		::System::Int32 _padding1; // 0x2C
		::UnityEngine::Matrix4x4 worldToShadow0; // 0x30
		::UnityEngine::Matrix4x4 worldToShadow1; // 0x70
		::UnityEngine::Matrix4x4 worldToShadow2; // 0xB0
		::UnityEngine::Matrix4x4 worldToShadow3; // 0xF0
		::UnityEngine::Matrix4x4 worldToShadow4; // 0x130
		::UnityEngine::Matrix4x4 worldToShadow5; // 0x170
	};
}

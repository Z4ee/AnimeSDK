#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CameraMotionBlurCBuffer_TypeDefinitionIndex = 30405;

	struct alignas(4) CameraMotionBlurCBuffer
	{
		::UnityEngine::Vector4 CameraMotionBlurCBufferPacked0; // 0x10
		::UnityEngine::Vector4 CameraMotionBlurCBufferPacked1; // 0x20
		::UnityEngine::Vector4 _CoCParams; // 0x30
	};
}

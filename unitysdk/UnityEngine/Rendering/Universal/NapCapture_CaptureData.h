#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class RenderTexture; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCapture_CaptureData_TypeDefinitionIndex = 30198;

	struct alignas(8) NapCapture_CaptureData
	{
		::System::Int32 id; // 0x10
		::UnityEngine::RenderTexture* rt; // 0x18
		::System::Boolean wasRenderToFinalTarget; // 0x20
		::System::Boolean wasClearDepth; // 0x21
	};
}

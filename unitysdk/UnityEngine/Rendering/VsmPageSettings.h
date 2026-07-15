#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VsmPageSettings_TypeDefinitionIndex = 4873;

	struct alignas(4) VsmPageSettings
	{
		::System::Boolean autoUpdate; // 0x10
		::System::Boolean enableRellocTexture; // 0x11
		::System::Boolean enableImmediateUpdate; // 0x12
		::System::UInt32 coreSize; // 0x14
		::System::UInt32 meterPerPage; // 0x18
		::System::UInt32 lod0TextureSize; // 0x1C
		::System::Single maxHeightDiff; // 0x20
		::System::UInt32 peekUpdateFrameCount; // 0x24
		::System::UInt32 maxCullPagePerFrame; // 0x28
		::System::UInt32 maxUpdatePageAtPeekFrame; // 0x2C
	};
}

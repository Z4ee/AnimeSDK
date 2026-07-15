#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/EDebugRT.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugOverlaySetting_TypeDefinitionIndex = 4805;

	struct alignas(4) DebugOverlaySetting
	{
		::UnityEngine::Rendering::EDebugRT debugID; // 0x10
		::System::Int32 debugDrawID; // 0x14
		::System::Int32 shaderDebugID; // 0x18
		::UnityEngine::Vector4 posScale; // 0x1C
		::System::Single scale; // 0x2C
		::System::Single alpha; // 0x30
		::UnityEngine::Vector4 channelMask; // 0x34
		::System::UInt32 keywordFlag; // 0x44
		::System::Int32 DebugOverlayMaterial; // 0x48
		::System::Int32 computeOverdraw; // 0x4C
	};
}

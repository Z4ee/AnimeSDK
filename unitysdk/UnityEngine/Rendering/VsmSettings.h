#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/VsmPageSettings.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VsmSettings_TypeDefinitionIndex = 4874;

	struct alignas(8) VsmSettings
	{
		::System::Boolean enable; // 0x10
		::System::Boolean resetVsm; // 0x11
		::System::UInt32 physicTextureSize; // 0x14
		::System::UInt32 textureDepthCount; // 0x18
		::System::UInt32 overrideLayerMask; // 0x1C
		::System::Single nearOffsetDistance; // 0x20
		::System::Single queryExpandRange; // 0x24
		::System::Int32 maxDrawRendererPerFrame; // 0x28
		::System::Int32 csmCascadeCount; // 0x2C
		::UnityEngine::Vector3 splitPrecent; // 0x30
		::System::Single csmShadowDistance; // 0x3C
		::UnityEngine::Rendering::VsmPageSettings pageSettings; // 0x40
		::Il2CppArray<::System::UInt32>* lodRanges; // 0x60
	};
}

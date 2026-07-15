#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowRenderingLayers_TypeDefinitionIndex = 4872;

	struct alignas(4) ShadowRenderingLayers
	{
		::System::UInt32 DynamicShadowRenderingLayerMask; // 0x10
		::System::UInt32 ObjShadowInCSMRenderingLayerMask; // 0x14
		::System::UInt32 AvatarDetachableRenderingLayer; // 0x18
		::System::UInt32 DisableSelfShadowRenderingLayer; // 0x1C
		::System::UInt32 ExclusiveShadowCasterRenderingLayerMask; // 0x20
		::System::UInt32 CastStableLayer; // 0x24
		::System::UInt32 CastDefaultLayer; // 0x28
	};
}

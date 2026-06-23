#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MonoPerObjectShadowBindings_NativeSerializedData_TypeDefinitionIndex = 6121;

	struct alignas(4) MonoPerObjectShadowBindings_NativeSerializedData
	{
		::System::Byte forcePerObjectShadow; // 0x10
		::System::Byte rayCastForCullingSphere; // 0x11
		::System::Byte cacheBoundsWhenStays; // 0x12
		::System::Byte perObjectShadowOnly; // 0x13
		::System::Byte useCustomLightDirection; // 0x14
		::System::Byte _padding1; // 0x15
		::System::Byte _padding2; // 0x16
		::System::Byte _padding3; // 0x17
		::UnityEngine::Vector3 customLightDirection; // 0x18
		::System::Single depthBias; // 0x24
		::System::Single perObjectShadowResolveAlpha; // 0x28
	};
}

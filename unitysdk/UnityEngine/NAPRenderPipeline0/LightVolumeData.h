#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LightVolumeData_TypeDefinitionIndex = 5928;

	struct alignas(4) LightVolumeData
	{
		::UnityEngine::Vector3 lightPos; // 0x10
		::System::UInt32 lightVolume; // 0x1C
		::UnityEngine::Vector3 lightAxisX; // 0x20
		::System::UInt32 lightCategory; // 0x2C
		::UnityEngine::Vector3 lightAxisY; // 0x30
		::System::Single radiusSq; // 0x3C
		::UnityEngine::Vector3 lightAxisZ; // 0x40
		::System::Single cotan; // 0x4C
		::UnityEngine::Vector3 boxInnerDist; // 0x50
		::System::UInt32 featureFlags; // 0x5C
		::UnityEngine::Vector3 boxInvRange; // 0x60
		::System::Single unused2; // 0x6C
		::UnityEngine::Vector3 boxAxisX; // 0x70
		::UnityEngine::Vector3 boxAxisY; // 0x7C
		::UnityEngine::Vector3 boxAxisZ; // 0x88
		::UnityEngine::Vector3 center; // 0x94
		::UnityEngine::Vector2 scaleXY; // 0xA0
		::System::Single radius; // 0xA8
	};
}

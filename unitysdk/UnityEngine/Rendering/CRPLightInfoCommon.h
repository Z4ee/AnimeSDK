#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/GameLightType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPLightInfoCommon_TypeDefinitionIndex = 4858;

	struct alignas(4) CRPLightInfoCommon
	{
		::UnityEngine::Rendering::GameLightType InternalLightType; // 0x10
		::UnityEngine::Vector3 Scale; // 0x14
		::System::Single FalloffExp; // 0x20
		::UnityEngine::Vector2 DirectionalBS; // 0x24
		::UnityEngine::Vector4 LightFix; // 0x2C
		::System::Single CharacterAffectRatio; // 0x3C
		::System::Boolean CastVolumetricShadow; // 0x40
		::UnityEngine::Vector4 CustomData0; // 0x44
		::UnityEngine::Vector4 CustomData1; // 0x54
		::System::Single ShadowLightingFactor; // 0x64
		::System::Single SourceRadius; // 0x68
		::System::Single SoftSourceRadius; // 0x6C
		::System::Single RangeCut; // 0x70
		::System::Byte CustomLightQualityFilter; // 0x74
		::System::Byte CustomLightFlag; // 0x75
		::System::Single LightColorScale; // 0x78
		::System::Byte ClipPlaneType; // 0x7C
		::System::UInt32 Flag; // 0x80
	};
}

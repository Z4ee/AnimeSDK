#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/AOCSVersion.h"
#include "unitysdk/UnityEngine/Rendering/AOMethod.h"
#include "unitysdk/UnityEngine/Rendering/AOQuality.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AOSetting_TypeDefinitionIndex = 4823;

	struct alignas(4) AOSetting
	{
		::UnityEngine::Rendering::AOMethod method; // 0x10
		::UnityEngine::Rendering::AOQuality quality; // 0x14
		::System::Single startFadeDistance; // 0x18
		::System::Single fadeOutDistance; // 0x1C
		::System::Single ssaoThreadhold; // 0x20
		::System::Single lerpAmbient; // 0x24
		::System::Single ssaoAmount; // 0x28
		::System::Single ssaoRadius; // 0x2C
		::System::Single hbaoRadiusInMeters; // 0x30
		::System::Single hbaoFalloffRatio; // 0x34
		::System::Single hbaoBias; // 0x38
		::System::Single hbaoStrength; // 0x3C
		::System::Single hbaoFilterWeightInMeters; // 0x40
		::System::Boolean useComputeShader; // 0x44
		::UnityEngine::Rendering::AOCSVersion aoCSVersion; // 0x48
	};
}

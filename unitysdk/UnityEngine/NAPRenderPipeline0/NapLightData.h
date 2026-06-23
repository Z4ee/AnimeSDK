#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapLightData_TypeDefinitionIndex = 5945;

	struct alignas(4) NapLightData
	{
		::UnityEngine::Vector3 positionWS; // 0x10
		::System::UInt32 lightLayers; // 0x1C
		::UnityEngine::Vector4 forward; // 0x20
		::UnityEngine::Vector4 color; // 0x30
		::UnityEngine::Matrix4x4 worldToLightMatrix; // 0x40
		::UnityEngine::Vector4 colorForCharacter; // 0x80
		::UnityEngine::Vector4 distanceAndSpotAttenuation; // 0x90
		::System::Int32 shadowIndex; // 0xA0
		::System::Int32 lightType; // 0xA4
		::UnityEngine::Vector4 additionalLightCharToonParams; // 0xA8
		::System::Single blendWeight; // 0xB8
		::System::Single lockAngle; // 0xBC
		::System::Int32 priority; // 0xC0
		::System::Int32 lightingVersion; // 0xC4
		::System::Single addLightMode; // 0xC8
		::System::Int32 instanceID; // 0xCC
		::System::Single specularMinRoughness; // 0xD0
		::UnityEngine::Matrix4x4 occluderData; // 0xD4
		::UnityEngine::Matrix4x4 lightOccluderMask; // 0x114
		::System::Single avatarRimGlowScale; // 0x154
		::UnityEngine::Vector4 positionWSCapsule; // 0x158
		::UnityEngine::Vector4 rtxColor; // 0x168
	};
}

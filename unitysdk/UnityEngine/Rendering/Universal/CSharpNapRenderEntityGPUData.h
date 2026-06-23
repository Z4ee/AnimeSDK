#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CSharpNapRenderEntityGPUData_TypeDefinitionIndex = 27298;

	struct alignas(4) CSharpNapRenderEntityGPUData
	{
		::UnityEngine::Vector3 mainLightColor; // 0x10
		::System::Single mainLightRadius; // 0x1C
		::UnityEngine::Vector3 mainLightPosition; // 0x20
		::System::Single cloudShadow; // 0x2C
		::System::Single mainLightWeight; // 0x30
		::System::Single shadowmapCoverage; // 0x34
		::System::Int32 additionalLightIndex; // 0x38
		::System::Single additionalLightAngle; // 0x3C
		::System::Single additionalLightAttenuation; // 0x40
		::System::Single facingFactor; // 0x44
		::System::Single facingLight; // 0x48
		::System::Single additionalLightY; // 0x4C
		::System::Int32 isCrossingLine; // 0x50
		::System::Single lastShiftRadians; // 0x54
		::UnityEngine::Vector2 dummy; // 0x58
		::UnityEngine::Vector3 rawLightPosition; // 0x60
		::System::Single dummy2; // 0x6C
		::UnityEngine::Vector4 ambientSkin; // 0x70
		::UnityEngine::Vector4 ambientOther; // 0x80
	};
}

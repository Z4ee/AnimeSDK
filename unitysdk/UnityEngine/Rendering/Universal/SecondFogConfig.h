#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SECONDFOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF7A7190)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SecondFogConfig_TypeDefinitionIndex = 26695;

	class SecondFogConfig : public ::System::Object
	{
	public:
		::System::Boolean enableSecondFog; // 0x10
		::System::Boolean synFogColor; // 0x11
		::UnityEngine::Color fogColorA; // 0x14
		::System::Single fogDensityA; // 0x24
		::System::Single fogScatteringA; // 0x28
		::UnityEngine::Color fogColorB; // 0x2C
		::System::Single fogDensityB; // 0x3C
		::System::Single fogScatteringB; // 0x40
		::System::Single fogFadeHeight; // 0x44
		::System::Single fogFadeRange; // 0x48
		::UnityEngine::Vector2 fogHeightRange; // 0x4C
		::UnityEngine::Vector3 fogDistanceRange; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SECONDFOGCONFIG__CTOR_OFFSET))(this);
		}
	};
}

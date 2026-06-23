#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_EXPHEIGHTFOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B179470)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ExpHeightFogConfig_TypeDefinitionIndex = 26812;

	class ExpHeightFogConfig : public ::System::Object
	{
	public:
		::UnityEngine::Color fogRayColor; // 0x10
		::UnityEngine::Color fogMieColor; // 0x20
		::System::Single fogMieG; // 0x30
		::UnityEngine::Color fogExtinctColor; // 0x34
		::System::Single fogDensity; // 0x44
		::System::Single fogScattering; // 0x48
		::UnityEngine::Vector2 fogHeightRange; // 0x4C
		::System::Single fogStartDistance; // 0x54
		::System::Boolean useMirrorFog; // 0x58
		::System::Single maxSkyFogDistance; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_EXPHEIGHTFOGCONFIG__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENRAINDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6A300)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScreenRainDropConfig_TypeDefinitionIndex = 26649;

	class ScreenRainDropConfig : public ::System::Object
	{
	public:
		::System::Boolean EnableScreenRainDrop; // 0x10
		::UnityEngine::Texture2D* RainDropTexture; // 0x18
		::UnityEngine::AnimationCurve* AnimCurve; // 0x20
		::UnityEngine::Texture2D* RainDropAnimTexture; // 0x28
		::System::Single DropSpeed; // 0x30
		::System::Single DistortIntensity; // 0x34
		::System::Single BrightIntensity; // 0x38
		::System::Single ColorShift; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENRAINDROPCONFIG__CTOR_OFFSET))(this);
		}
	};
}

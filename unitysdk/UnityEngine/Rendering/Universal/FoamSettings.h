#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FOAMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F6370)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FoamSettings_TypeDefinitionIndex = 29950;

	class FoamSettings : public ::System::Object
	{
	public:
		::System::Int32 foamType; // 0x10
		::UnityEngine::AnimationCurve* basicFoam; // 0x18
		::UnityEngine::AnimationCurve* liteFoam; // 0x20
		::UnityEngine::AnimationCurve* mediumFoam; // 0x28
		::UnityEngine::AnimationCurve* denseFoam; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FOAMSETTINGS__CTOR_OFFSET))(this);
		}
	};
}

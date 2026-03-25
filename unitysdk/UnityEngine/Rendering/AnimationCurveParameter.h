#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace UnityEngine { class AnimationCurve; }

#define UNITYENGINE_RENDERING_ANIMATIONCURVEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188C5990)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AnimationCurveParameter_TypeDefinitionIndex = 27946;

	class AnimationCurveParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::AnimationCurve*>
	{
	public:
		::System::Void _ctor(::UnityEngine::AnimationCurve* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ANIMATIONCURVEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}

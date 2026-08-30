#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define TMPRO_COLORTWEEN_COLORTWEENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC1DB40)

namespace TMPro
{
	inline static constexpr unsigned int ColorTween_ColorTweenCallback_TypeDefinitionIndex = 43361;

	class ColorTween_ColorTweenCallback : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_COLORTWEENCALLBACK__CTOR_OFFSET))(this);
		}
	};
}

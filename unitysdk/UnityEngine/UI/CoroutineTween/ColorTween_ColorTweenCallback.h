#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_COLORTWEENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B38A350)

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int ColorTween_ColorTweenCallback_TypeDefinitionIndex = 6054;

	class ColorTween_ColorTweenCallback : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_COLORTWEEN_COLORTWEENCALLBACK__CTOR_OFFSET))(this);
		}
	};
}

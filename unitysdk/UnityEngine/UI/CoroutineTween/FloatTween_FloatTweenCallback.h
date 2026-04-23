#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_FLOATTWEENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A53EB50)

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int FloatTween_FloatTweenCallback_TypeDefinitionIndex = 5779;

	class FloatTween_FloatTweenCallback : public ::UnityEngine::Events::UnityEvent_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COROUTINETWEEN_FLOATTWEEN_FLOATTWEENCALLBACK__CTOR_OFFSET))(this);
		}
	};
}

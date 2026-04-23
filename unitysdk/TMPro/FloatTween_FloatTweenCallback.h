#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define TMPRO_FLOATTWEEN_FLOATTWEENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A33DD70)

namespace TMPro
{
	inline static constexpr unsigned int FloatTween_FloatTweenCallback_TypeDefinitionIndex = 40110;

	class FloatTween_FloatTweenCallback : public ::UnityEngine::Events::UnityEvent_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_FLOATTWEENCALLBACK__CTOR_OFFSET))(this);
		}
	};
}

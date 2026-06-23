#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_UI_SLIDER_SLIDEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E49C1A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Slider_SliderEvent_TypeDefinitionIndex = 18955;

	class Slider_SliderEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SLIDEREVENT__CTOR_OFFSET))(this);
		}
	};
}

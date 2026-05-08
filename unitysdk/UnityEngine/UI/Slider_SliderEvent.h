#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_UI_SLIDER_SLIDEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15A590)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Slider_SliderEvent_TypeDefinitionIndex = 8447;

	class Slider_SliderEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SLIDEREVENT__CTOR_OFFSET))(this);
		}
	};
}

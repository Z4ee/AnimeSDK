#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_2.h"

namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_UI_TOGGLE_TOGGLESELECTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D092590)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Toggle_ToggleSelectEvent_TypeDefinitionIndex = 6029;

	class Toggle_ToggleSelectEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityEngine::UI::Toggle*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_TOGGLESELECTEVENT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_UI_TOGGLE_TOGGLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B2800)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Toggle_ToggleEvent_TypeDefinitionIndex = 5746;

	class Toggle_ToggleEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_TOGGLEEVENT__CTOR_OFFSET))(this);
		}
	};
}

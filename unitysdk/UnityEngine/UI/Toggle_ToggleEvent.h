#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_UI_TOGGLE_TOGGLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3FE4F0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Toggle_ToggleEvent_TypeDefinitionIndex = 6023;

	class Toggle_ToggleEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_TOGGLEEVENT__CTOR_OFFSET))(this);
		}
	};
}

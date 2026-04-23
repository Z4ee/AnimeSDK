#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Widget.h"

namespace System { class Action; }

#define UNITYENGINE_RENDERING_DEBUGUI_BUTTON_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1A31B170)
#define UNITYENGINE_RENDERING_DEBUGUI_BUTTON_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1A31B180)
#define UNITYENGINE_RENDERING_DEBUGUI_BUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2FBAD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Button_TypeDefinitionIndex = 33460;

	class DebugUI_Button : public ::UnityEngine::Rendering::DebugUI_Widget
	{
	public:
		::System::Action* _action_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BUTTON__CTOR_OFFSET))(this);
		}

		::System::Action* get_action()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BUTTON_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_action(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BUTTON_SET_ACTION_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/Vector2Control.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D795BB0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1D795B50)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1D795B70)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1D795B90)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_UP_OFFSET UNITYSDK_OFFSET(0x1D795B30)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x1D795B60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x1D795B80)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1D795BA0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_UP_OFFSET UNITYSDK_OFFSET(0x1D795B40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D795CC0)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int StickControl_TypeDefinitionIndex = 32639;

	class StickControl : public ::UnityEngine::InputSystem::Controls::Vector2Control
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _up_k__BackingField; // 0x100
		::UnityEngine::InputSystem::Controls::ButtonControl* _left_k__BackingField; // 0x108
		::UnityEngine::InputSystem::Controls::ButtonControl* _right_k__BackingField; // 0x110
		::UnityEngine::InputSystem::Controls::ButtonControl* _down_k__BackingField; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_up()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_UP_OFFSET))(this);
		}

		::System::Void set_up(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_UP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_down()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_DOWN_OFFSET))(this);
		}

		::System::Void set_down(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_DOWN_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_left()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_left(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_LEFT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_right()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_right(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_RIGHT_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_FINISHSETUP_OFFSET))(this);
		}
	};
}

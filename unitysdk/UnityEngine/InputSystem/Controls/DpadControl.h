#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/Vector2Control.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1DF75360)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1DF75240)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1DF75260)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1DF75280)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_UP_OFFSET UNITYSDK_OFFSET(0x1DF75220)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF758F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_OFFSET UNITYSDK_OFFSET(0x1DF757F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1DF75460)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x1DF75250)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x1DF75270)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1DF75290)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_UP_OFFSET UNITYSDK_OFFSET(0x1DF75230)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1DF758A0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF752A0)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DpadControl_TypeDefinitionIndex = 32013;

	class DpadControl : public ::UnityEngine::InputSystem::Controls::Vector2Control
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _up_k__BackingField; // 0x100
		::UnityEngine::InputSystem::Controls::ButtonControl* _left_k__BackingField; // 0x108
		::UnityEngine::InputSystem::Controls::ButtonControl* _down_k__BackingField; // 0x110
		::UnityEngine::InputSystem::Controls::ButtonControl* _right_k__BackingField; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_up()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_UP_OFFSET))(this);
		}

		::System::Void set_up(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_UP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_down()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_DOWN_OFFSET))(this);
		}

		::System::Void set_down(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_DOWN_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_left()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_left(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_LEFT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_right()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_right(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_RIGHT_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::Vector2 ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::Vector2 value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}

		static ::UnityEngine::Vector2 MakeDpadVector(::System::Boolean up, ::System::Boolean down, ::System::Boolean left, ::System::Boolean right, ::System::Boolean normalize)
		{
			return ((::UnityEngine::Vector2(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_OFFSET))(up, down, left, right, normalize);
		}

		static ::UnityEngine::Vector2 MakeDpadVector_1(::System::Single up, ::System::Single down, ::System::Single left, ::System::Single right)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_1_OFFSET))(up, down, left, right);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchState.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class DoubleControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class TouchPhaseControl; }
namespace UnityEngine::InputSystem::Controls { class TouchPressControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1B4E1190)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1B4E0F70)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_INDIRECTTOUCH_OFFSET UNITYSDK_OFFSET(0x1B4E0FF0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B4E1090)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1B4E0FD0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B4E0F50)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x1B4E0F90)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESS_OFFSET UNITYSDK_OFFSET(0x1B4E0F10)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1B4E0FB0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4E1070)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1B4E1050)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4E1030)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAP_OFFSET UNITYSDK_OFFSET(0x1B4E1010)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x1B4E0F30)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1B4E1320)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x1B4E0F80)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_INDIRECTTOUCH_OFFSET UNITYSDK_OFFSET(0x1B4E1000)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x1B4E0FE0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B4E0F60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x1B4E0FA0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESS_OFFSET UNITYSDK_OFFSET(0x1B4E0F20)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1B4E0FC0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4E1080)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1B4E1060)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4E1040)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAP_OFFSET UNITYSDK_OFFSET(0x1B4E1020)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x1B4E0F40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1B4E1350)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E1160)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int TouchControl_TypeDefinitionIndex = 29364;

	class TouchControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::LowLevel::TouchState>
	{
	public:
		::UnityEngine::InputSystem::Controls::TouchPhaseControl* _phase_k__BackingField; // 0xF0
		::UnityEngine::InputSystem::Controls::TouchPressControl* _press_k__BackingField; // 0xF8
		::UnityEngine::InputSystem::Controls::Vector2Control* _delta_k__BackingField; // 0x100
		::UnityEngine::InputSystem::Controls::AxisControl* _pressure_k__BackingField; // 0x108
		::UnityEngine::InputSystem::Controls::ButtonControl* _tap_k__BackingField; // 0x110
		::UnityEngine::InputSystem::Controls::IntegerControl* _tapCount_k__BackingField; // 0x118
		::UnityEngine::InputSystem::Controls::Vector2Control* _radius_k__BackingField; // 0x120
		::UnityEngine::InputSystem::Controls::DoubleControl* _startTime_k__BackingField; // 0x128
		::UnityEngine::InputSystem::Controls::Vector2Control* _position_k__BackingField; // 0x130
		::UnityEngine::InputSystem::Controls::IntegerControl* _touchId_k__BackingField; // 0x138
		::UnityEngine::InputSystem::Controls::ButtonControl* _indirectTouch_k__BackingField; // 0x140
		::UnityEngine::InputSystem::Controls::Vector2Control* _startPosition_k__BackingField; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::TouchPressControl* get_press()
		{
			return ((::UnityEngine::InputSystem::Controls::TouchPressControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESS_OFFSET))(this);
		}

		::System::Void set_press(::UnityEngine::InputSystem::Controls::TouchPressControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::TouchPressControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESS_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_touchId()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TOUCHID_OFFSET))(this);
		}

		::System::Void set_touchId(::UnityEngine::InputSystem::Controls::IntegerControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TOUCHID_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_position()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_delta()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_DELTA_OFFSET))(this);
		}

		::System::Void set_delta(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_DELTA_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_pressure()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESSURE_OFFSET))(this);
		}

		::System::Void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESSURE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_radius()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_RADIUS_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::TouchPhaseControl* get_phase()
		{
			return ((::UnityEngine::InputSystem::Controls::TouchPhaseControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_phase(::UnityEngine::InputSystem::Controls::TouchPhaseControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::TouchPhaseControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PHASE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_indirectTouch()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_INDIRECTTOUCH_OFFSET))(this);
		}

		::System::Void set_indirectTouch(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_INDIRECTTOUCH_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_tap()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAP_OFFSET))(this);
		}

		::System::Void set_tap(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_tapCount()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAPCOUNT_OFFSET))(this);
		}

		::System::Void set_tapCount(::UnityEngine::InputSystem::Controls::IntegerControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAPCOUNT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::DoubleControl* get_startTime()
		{
			return ((::UnityEngine::InputSystem::Controls::DoubleControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_startTime(::UnityEngine::InputSystem::Controls::DoubleControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::DoubleControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTTIME_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_startPosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTPOSITION_OFFSET))(this);
		}

		::System::Void set_startPosition(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTPOSITION_OFFSET))(this, value);
		}

		::System::Boolean get_isInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_ISINPROGRESS_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::TouchState ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::TouchState(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::LowLevel::TouchState value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::TouchState, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}

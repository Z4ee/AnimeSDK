#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1D74BF60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D74BDE0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_GET_X_OFFSET UNITYSDK_OFFSET(0x1D74BD30)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_GET_Y_OFFSET UNITYSDK_OFFSET(0x1D74BD50)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1D74BE50)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_SET_X_OFFSET UNITYSDK_OFFSET(0x1D74BD40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_SET_Y_OFFSET UNITYSDK_OFFSET(0x1D74BD60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1D74BEE0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D74BD70)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int Vector2Control_TypeDefinitionIndex = 32023;

	class Vector2Control : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField; // 0xF0
		::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_x()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_SET_X_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_y()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_SET_Y_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::Vector2 ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::Vector2 value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}

		::System::Single EvaluateMagnitude(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_EVALUATEMAGNITUDE_OFFSET))(this, statePtr);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1D74C300)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D74C0F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_X_OFFSET UNITYSDK_OFFSET(0x1D74C020)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Y_OFFSET UNITYSDK_OFFSET(0x1D74C040)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Z_OFFSET UNITYSDK_OFFSET(0x1D74C060)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1D74C180)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_X_OFFSET UNITYSDK_OFFSET(0x1D74C030)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Y_OFFSET UNITYSDK_OFFSET(0x1D74C050)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Z_OFFSET UNITYSDK_OFFSET(0x1D74C070)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1D74C250)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D74C080)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int Vector3Control_TypeDefinitionIndex = 32024;

	class Vector3Control : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector3>
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField; // 0xF0
		::UnityEngine::InputSystem::Controls::AxisControl* _z_k__BackingField; // 0xF8
		::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_x()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_X_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_y()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Y_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_z()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Z_OFFSET))(this);
		}

		::System::Void set_z(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Z_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::Vector3 ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::Vector3 value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}

		::System::Single EvaluateMagnitude(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_EVALUATEMAGNITUDE_OFFSET))(this, statePtr);
		}
	};
}

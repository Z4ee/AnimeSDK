#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1B9488D0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_W_OFFSET UNITYSDK_OFFSET(0x1B948840)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_X_OFFSET UNITYSDK_OFFSET(0x1B9487E0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Y_OFFSET UNITYSDK_OFFSET(0x1B948800)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Z_OFFSET UNITYSDK_OFFSET(0x1B948820)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1B948980)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_W_OFFSET UNITYSDK_OFFSET(0x1B948850)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_X_OFFSET UNITYSDK_OFFSET(0x1B9487F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Y_OFFSET UNITYSDK_OFFSET(0x1B948810)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Z_OFFSET UNITYSDK_OFFSET(0x1B948830)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1B948B70)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B948860)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int QuaternionControl_TypeDefinitionIndex = 32018;

	class QuaternionControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Quaternion>
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField; // 0xF0
		::UnityEngine::InputSystem::Controls::AxisControl* _z_k__BackingField; // 0xF8
		::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField; // 0x100
		::UnityEngine::InputSystem::Controls::AxisControl* _w_k__BackingField; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_x()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_X_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_y()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Y_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_z()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Z_OFFSET))(this);
		}

		::System::Void set_z(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Z_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_w()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_W_OFFSET))(this);
		}

		::System::Void set_w(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_W_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::Quaternion ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::Quaternion value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}

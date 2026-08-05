#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/DualShock4GamepadHID.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_CONVERACCEL_OFFSET UNITYSDK_OFFSET(0x1F1649E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_CONVERGYRO2RADPERSECOND_OFFSET UNITYSDK_OFFSET(0x1F164940)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_CUSTOMMERGESENSOR_OFFSET UNITYSDK_OFFSET(0x1F164220)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F164170)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F1640F0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F164130)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_GET_ATTITUDEV2_OFFSET UNITYSDK_OFFSET(0x1F164150)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_GET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F164110)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1F164A80)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1F164AC0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F164100)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F164140)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_SET_ATTITUDEV2_OFFSET UNITYSDK_OFFSET(0x1F164160)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_SET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F164120)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x1F164CB0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1F164C00)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1F164C60)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F164D10)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC___BASE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F164D50)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int DualShock4GamepadPC_TypeDefinitionIndex = 39729;

	class DualShock4GamepadPC : public ::UnityEngine::InputSystem::DualShock::DualShock4GamepadHID
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField; // 0x260
		::UnityEngine::InputSystem::Controls::QuaternionControl* _orientation_k__BackingField; // 0x268
		::UnityEngine::InputSystem::Controls::Vector3Control* _acceleration_k__BackingField; // 0x270
		::System::Int32 _angularVelocityV2; // 0x278
		::System::Nullable_1<::System::Double> _lastTimestamp; // 0x280
		::System::Int32 _lastFrameCount; // 0x290
		::UnityEngine::Quaternion _AttitudeV2_k__BackingField; // 0x294

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_acceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_SET_ACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_orientation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_GET_ORIENTATION_OFFSET))(this);
		}

		::System::Void set_orientation(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_SET_ORIENTATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_SET_ANGULARVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_AttitudeV2()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_GET_ATTITUDEV2_OFFSET))(this);
		}

		::System::Void set_AttitudeV2(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_SET_ATTITUDEV2_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_FINISHSETUP_OFFSET))(this);
		}

		::System::Void CustomMergeSensor(::System::Int16 pitch, ::System::Int16 yaw, ::System::Int16 roll, ::System::Int16 accelX, ::System::Int16 accelY, ::System::Int16 accelZ, ::System::Double currentTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_CUSTOMMERGESENSOR_OFFSET))(this, pitch, yaw, roll, accelX, accelY, accelZ, currentTime);
		}

		::System::Single ConverGyro2RadPerSecond(::System::Int16 gyro)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_CONVERGYRO2RADPERSECOND_OFFSET))(this, gyro);
		}

		::System::Single ConverAccel(::System::Int16 gyro)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_CONVERACCEL_OFFSET))(this, gyro);
		}

		::System::Void OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::UInt32& offset)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET))(this, control, eventPtr, offset);
		}

		::System::Void __base_FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSHOCK4GAMEPADPC___BASE_FINISHSETUP_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"
#include "unitysdk/UnityEngine/InputSystem/XR/PoseState.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1BA70390)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1BA70340)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x1BA702A0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BA702E0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1BA70300)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x1BA702C0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1BA70320)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1BA70470)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1BA70350)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x1BA702B0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BA702F0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1BA70310)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x1BA702D0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1BA70330)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1BA704B0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA70360)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int PoseControl_TypeDefinitionIndex = 29057;

	class PoseControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::PoseState>
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _position_k__BackingField; // 0xF0
		::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField; // 0xF8
		::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField; // 0x100
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rotation_k__BackingField; // 0x108
		::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField; // 0x110
		::UnityEngine::InputSystem::Controls::Vector3Control* _velocity_k__BackingField; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ISTRACKED_OFFSET))(this);
		}

		::System::Void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ISTRACKED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_TRACKINGSTATE_OFFSET))(this);
		}

		::System::Void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_TRACKINGSTATE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_position()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_velocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_VELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ANGULARVELOCITY_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::XR::PoseState ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::UnityEngine::InputSystem::XR::PoseState(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::XR::PoseState value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::XR::PoseState, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}

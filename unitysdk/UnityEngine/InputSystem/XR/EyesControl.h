#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"
#include "unitysdk/UnityEngine/InputSystem/XR/Eyes.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D8E2410)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x1D8E23B0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x1D8E23D0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D8E2330)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x1D8E2350)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x1D8E23F0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D8E2370)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x1D8E2390)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1D8E2510)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x1D8E23C0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x1D8E23E0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D8E2340)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x1D8E2360)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x1D8E2400)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D8E2380)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x1D8E23A0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1D8E2900)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E2C20)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int EyesControl_TypeDefinitionIndex = 31730;

	class EyesControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::Eyes>
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _fixationPoint_k__BackingField; // 0xF0
		::UnityEngine::InputSystem::Controls::AxisControl* _leftEyeOpenAmount_k__BackingField; // 0xF8
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyePosition_k__BackingField; // 0x100
		::UnityEngine::InputSystem::Controls::AxisControl* _rightEyeOpenAmount_k__BackingField; // 0x108
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rightEyeRotation_k__BackingField; // 0x110
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyePosition_k__BackingField; // 0x118
		::UnityEngine::InputSystem::Controls::QuaternionControl* _leftEyeRotation_k__BackingField; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEPOSITION_OFFSET))(this);
		}

		::System::Void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEROTATION_OFFSET))(this);
		}

		::System::Void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEROTATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEPOSITION_OFFSET))(this);
		}

		::System::Void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEROTATION_OFFSET))(this);
		}

		::System::Void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEROTATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_fixationPoint()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_FIXATIONPOINT_OFFSET))(this);
		}

		::System::Void set_fixationPoint(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_FIXATIONPOINT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_leftEyeOpenAmount()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEOPENAMOUNT_OFFSET))(this);
		}

		::System::Void set_leftEyeOpenAmount(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEOPENAMOUNT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_rightEyeOpenAmount()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEOPENAMOUNT_OFFSET))(this);
		}

		::System::Void set_rightEyeOpenAmount(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEOPENAMOUNT_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::XR::Eyes ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::UnityEngine::InputSystem::XR::Eyes(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::XR::Eyes value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::XR::Eyes, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}

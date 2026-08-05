#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/TrackedDevice.h"

namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1EB4E000)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EB4DFC0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEROTATION_OFFSET UNITYSDK_OFFSET(0x1EB4DFE0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EB4DF40)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x1EB4DF60)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EB4DF80)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x1EB4DFA0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EB4DFD0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEROTATION_OFFSET UNITYSDK_OFFSET(0x1EB4DFF0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EB4DF50)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x1EB4DF70)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EB4DF90)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x1EB4DFB0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4E0F0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRHMD_TypeDefinitionIndex = 32334;

	class XRHMD : public ::UnityEngine::InputSystem::TrackedDevice
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyePosition_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyePosition_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::QuaternionControl* _leftEyeRotation_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rightEyeRotation_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::QuaternionControl* _centerEyeRotation_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyePosition_k__BackingField; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEPOSITION_OFFSET))(this);
		}

		::System::Void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEROTATION_OFFSET))(this);
		}

		::System::Void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEROTATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEPOSITION_OFFSET))(this);
		}

		::System::Void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEROTATION_OFFSET))(this);
		}

		::System::Void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEROTATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEPOSITION_OFFSET))(this);
		}

		::System::Void set_centerEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_centerEyeRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEROTATION_OFFSET))(this);
		}

		::System::Void set_centerEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEROTATION_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_FINISHSETUP_OFFSET))(this);
		}
	};
}

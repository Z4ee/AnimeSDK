#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F37B2B0)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F37B270)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEROTATION_OFFSET UNITYSDK_OFFSET(0x1F37B290)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x1F37B250)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x1F37B230)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F37B280)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEROTATION_OFFSET UNITYSDK_OFFSET(0x1F37B2A0)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x1F37B260)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x1F37B240)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F37B360)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int TrackedDevice_TypeDefinitionIndex = 32299;

	class TrackedDevice : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField; // 0x158
		::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField; // 0x160
		::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField; // 0x168
		::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_TRACKINGSTATE_OFFSET))(this);
		}

		::System::Void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_TRACKINGSTATE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_ISTRACKED_OFFSET))(this);
		}

		::System::Void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_ISTRACKED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEPOSITION_OFFSET))(this);
		}

		::System::Void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEROTATION_OFFSET))(this);
		}

		::System::Void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEROTATION_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_FINISHSETUP_OFFSET))(this);
		}
	};
}

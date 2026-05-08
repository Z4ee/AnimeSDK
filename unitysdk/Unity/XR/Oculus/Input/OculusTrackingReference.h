#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/TrackedDevice.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }

#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1BCC2CC0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x1BCC2CA0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x1BCC2C80)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x1BCC2CB0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x1BCC2C90)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC2D30)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusTrackingReference_TypeDefinitionIndex = 28856;

	class OculusTrackingReference : public ::UnityEngine::InputSystem::TrackedDevice
	{
	public:
		::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_TRACKINGSTATE_OFFSET))(this);
		}

		::System::Void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_TRACKINGSTATE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_ISTRACKED_OFFSET))(this);
		}

		::System::Void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_ISTRACKED_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_FINISHSETUP_OFFSET))(this);
		}
	};
}

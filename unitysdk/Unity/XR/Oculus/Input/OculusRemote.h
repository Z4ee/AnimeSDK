#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1BA667B0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1BA66750)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_START_OFFSET UNITYSDK_OFFSET(0x1BA66770)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1BA66790)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_BACK_OFFSET UNITYSDK_OFFSET(0x1BA66760)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_START_OFFSET UNITYSDK_OFFSET(0x1BA66780)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1BA667A0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA66840)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusRemote_TypeDefinitionIndex = 28857;

	class OculusRemote : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _start_k__BackingField; // 0x158
		::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField; // 0x160
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_back()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_BACK_OFFSET))(this);
		}

		::System::Void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_BACK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_start()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_START_OFFSET))(this);
		}

		::System::Void set_start(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_START_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_TOUCHPAD_OFFSET))(this);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_TOUCHPAD_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_FINISHSETUP_OFFSET))(this);
		}
	};
}

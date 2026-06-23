#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1DDE53D0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1DDE5370)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_START_OFFSET UNITYSDK_OFFSET(0x1DDE5390)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1DDE53B0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_BACK_OFFSET UNITYSDK_OFFSET(0x1DDE5380)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_START_OFFSET UNITYSDK_OFFSET(0x1DDE53A0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1DDE53C0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE5460)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusRemote_TypeDefinitionIndex = 31513;

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

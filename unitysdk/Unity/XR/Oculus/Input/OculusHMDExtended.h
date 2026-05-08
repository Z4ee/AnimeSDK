#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/XR/Oculus/Input/OculusHMD.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1B3F2E40)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1B3F2E00)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1B3F2E20)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_BACK_OFFSET UNITYSDK_OFFSET(0x1B3F2E10)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1B3F2E30)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3F2EB0)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusHMDExtended_TypeDefinitionIndex = 28858;

	class OculusHMDExtended : public ::Unity::XR::Oculus::Input::OculusHMD
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField; // 0x210
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x218

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_back()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_BACK_OFFSET))(this);
		}

		::System::Void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_BACK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_TOUCHPAD_OFFSET))(this);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_TOUCHPAD_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_FINISHSETUP_OFFSET))(this);
		}
	};
}

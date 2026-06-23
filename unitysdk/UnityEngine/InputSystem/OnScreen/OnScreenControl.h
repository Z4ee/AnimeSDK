#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/OnScreen/OnScreenControl_OnScreenDeviceInfo.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROLPATH_OFFSET UNITYSDK_OFFSET(0x1CD2AE30)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x1CD2B730)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CD2B8D0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CD2B8C0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SENTDEFAULTVALUETOCONTROL_OFFSET UNITYSDK_OFFSET(0x1CD2B740)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SETUPINPUTCONTROL_OFFSET UNITYSDK_OFFSET(0x1CD2AE80)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SET_CONTROLPATH_OFFSET UNITYSDK_OFFSET(0x1CD2AE40)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD2BBA0)

namespace UnityEngine::InputSystem::OnScreen
{
	inline static constexpr unsigned int OnScreenControl_TypeDefinitionIndex = 31783;

	class OnScreenControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>* StaticGet_s_OnScreenDevices()
		{
			return (::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>*)Il2CppClass::FromTypeDefinitionIndex(OnScreenControl_TypeDefinitionIndex)->GetStaticField(0x265D0);
		}
		::UnityEngine::InputSystem::InputControl* m_Control; // 0x18
		::UnityEngine::InputSystem::OnScreen::OnScreenControl* m_NextControlOnDevice; // 0x20
		::UnityEngine::InputSystem::LowLevel::InputEventPtr m_InputEventPtr; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL__CTOR_OFFSET))(this);
		}

		::System::String* get_controlPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROLPATH_OFFSET))(this);
		}

		::System::Void set_controlPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SET_CONTROLPATH_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROL_OFFSET))(this);
		}

		::System::Void SetupInputControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SETUPINPUTCONTROL_OFFSET))(this);
		}

		::System::Void SentDefaultValueToControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SENTDEFAULTVALUETOCONTROL_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONDISABLE_OFFSET))(this);
		}
	};
}

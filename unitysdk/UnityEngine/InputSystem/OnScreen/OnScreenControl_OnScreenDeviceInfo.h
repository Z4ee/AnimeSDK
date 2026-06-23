#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::OnScreen { class OnScreenControl; }

#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONSCREENDEVICEINFO_ADDCONTROL_OFFSET UNITYSDK_OFFSET(0xA145E0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONSCREENDEVICEINFO_DESTROY_OFFSET UNITYSDK_OFFSET(0xA14640)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONSCREENDEVICEINFO_REMOVECONTROL_OFFSET UNITYSDK_OFFSET(0xA14620)

namespace UnityEngine::InputSystem::OnScreen
{
	inline static constexpr unsigned int OnScreenControl_OnScreenDeviceInfo_TypeDefinitionIndex = 31784;

	struct alignas(8) OnScreenControl_OnScreenDeviceInfo
	{
		::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr; // 0x10
		::Unity::Collections::NativeArray_1<::System::Byte> buffer; // 0x18
		::UnityEngine::InputSystem::InputDevice* device; // 0x28
		::UnityEngine::InputSystem::OnScreen::OnScreenControl* firstControl; // 0x30

		::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo AddControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control)
		{
			return ((::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo(*)(::PVOID, ::UnityEngine::InputSystem::OnScreen::OnScreenControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONSCREENDEVICEINFO_ADDCONTROL_OFFSET))(this, control);
		}

		::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo RemoveControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control)
		{
			return ((::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo(*)(::PVOID, ::UnityEngine::InputSystem::OnScreen::OnScreenControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONSCREENDEVICEINFO_REMOVECONTROL_OFFSET))(this, control);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONSCREENDEVICEINFO_DESTROY_OFFSET))(this);
		}
	};
}

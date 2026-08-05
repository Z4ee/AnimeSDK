#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputSettings_UpdateMode.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_CHECKENABLED_OFFSET UNITYSDK_OFFSET(0x1EAD2CC0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_DISABLE_OFFSET UNITYSDK_OFFSET(0x1EAD25A0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ENABLE_OFFSET UNITYSDK_OFFSET(0x1EAD20D0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1EAD20C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x1EAD2AD0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ONSETTINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x1EAD2BB0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_RESET_OFFSET UNITYSDK_OFFSET(0x1EAD2A20)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_SETUPSTATE_OFFSET UNITYSDK_OFFSET(0x1EAD2280)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_TEARDOWNSTATE_OFFSET UNITYSDK_OFFSET(0x1EAD2770)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int EnhancedTouchSupport_TypeDefinitionIndex = 32428;

	class EnhancedTouchSupport : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_Enabled()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnhancedTouchSupport_TypeDefinitionIndex)->GetStaticField(0x7D00);
		}
		static ::UnityEngine::InputSystem::InputSettings_UpdateMode* StaticGet_s_UpdateMode()
		{
			return (::UnityEngine::InputSystem::InputSettings_UpdateMode*)Il2CppClass::FromTypeDefinitionIndex(EnhancedTouchSupport_TypeDefinitionIndex)->GetStaticField(0x7D04);
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_GET_ENABLED_OFFSET))();
		}

		static ::System::Void Enable()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ENABLE_OFFSET))();
		}

		static ::System::Void Disable()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_DISABLE_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_RESET_OFFSET))();
		}

		static ::System::Void SetUpState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_SETUPSTATE_OFFSET))();
		}

		static ::System::Void TearDownState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_TEARDOWNSTATE_OFFSET))();
		}

		static ::System::Void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ONDEVICECHANGE_OFFSET))(device, change);
		}

		static ::System::Void OnSettingsChange()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ONSETTINGSCHANGE_OFFSET))();
		}

		static ::System::Void CheckEnabled()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_CHECKENABLED_OFFSET))();
		}
	};
}

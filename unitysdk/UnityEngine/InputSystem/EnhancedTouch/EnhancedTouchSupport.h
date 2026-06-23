#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputSettings_UpdateMode.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_CHECKENABLED_OFFSET UNITYSDK_OFFSET(0x1D73C6C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_DISABLE_OFFSET UNITYSDK_OFFSET(0x1D73BFB0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ENABLE_OFFSET UNITYSDK_OFFSET(0x1D73BAE0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1D73BAD0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x1D73C4D0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ONSETTINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D73C5B0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_RESET_OFFSET UNITYSDK_OFFSET(0x1D73C420)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_SETUPSTATE_OFFSET UNITYSDK_OFFSET(0x1D73BC90)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_TEARDOWNSTATE_OFFSET UNITYSDK_OFFSET(0x1D73C180)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int EnhancedTouchSupport_TypeDefinitionIndex = 31808;

	class EnhancedTouchSupport : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_Enabled()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnhancedTouchSupport_TypeDefinitionIndex)->GetStaticField(0x7D10);
		}
		static ::UnityEngine::InputSystem::InputSettings_UpdateMode* StaticGet_s_UpdateMode()
		{
			return (::UnityEngine::InputSystem::InputSettings_UpdateMode*)Il2CppClass::FromTypeDefinitionIndex(EnhancedTouchSupport_TypeDefinitionIndex)->GetStaticField(0x7D14);
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

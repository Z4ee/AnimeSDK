#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputSettings_BackgroundBehavior.h"
#include "unitysdk/UnityEngine/InputSystem/InputSettings_EditorInputBehaviorInPlayMode.h"
#include "unitysdk/UnityEngine/InputSystem/InputSettings_UpdateMode.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_BACKGROUNDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1C0B31A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_BUTTONRELEASETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C0B3080)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_COMPENSATEFORSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x1C0B2F90)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTBUTTONPRESSPOINT_OFFSET UNITYSDK_OFFSET(0x1C0B3030)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTDEADZONEMAX_OFFSET UNITYSDK_OFFSET(0x1C0B3000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTDEADZONEMIN_OFFSET UNITYSDK_OFFSET(0x1C0B2FD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTHOLDTIME_OFFSET UNITYSDK_OFFSET(0x1C0B3110)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTSLOWTAPTIME_OFFSET UNITYSDK_OFFSET(0x1C0B30E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTTAPTIME_OFFSET UNITYSDK_OFFSET(0x1C0B30B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DISABLEREDUNDANTEVENTSMERGING_OFFSET UNITYSDK_OFFSET(0x1C0B3360)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_EDITORINPUTBEHAVIORINPLAYMODE_OFFSET UNITYSDK_OFFSET(0x1C0B31C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_FILTERNOISEONCURRENT_OFFSET UNITYSDK_OFFSET(0x1C0B2FB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MAXEVENTBYTESPERUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0B31E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MAXQUEUEDEVENTSPERUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0B3200)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MULTITAPDELAYTIME_OFFSET UNITYSDK_OFFSET(0x1C0B3170)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_SUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x1C0B3220)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_TAPRADIUS_OFFSET UNITYSDK_OFFSET(0x1C0B3140)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1C0B2DF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_ISFEATUREENABLED_OFFSET UNITYSDK_OFFSET(0x1C0B3540)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x1C0B2E10)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SETINTERNALFEATUREFLAG_OFFSET UNITYSDK_OFFSET(0x1C0B3380)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_BACKGROUNDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1C0B31B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_BUTTONRELEASETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C0B3090)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_COMPENSATEFORSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x1C0B2FA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTBUTTONPRESSPOINT_OFFSET UNITYSDK_OFFSET(0x1C0B3040)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTDEADZONEMAX_OFFSET UNITYSDK_OFFSET(0x1C0B3010)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTDEADZONEMIN_OFFSET UNITYSDK_OFFSET(0x1C0B2FE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTHOLDTIME_OFFSET UNITYSDK_OFFSET(0x1C0B3120)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTSLOWTAPTIME_OFFSET UNITYSDK_OFFSET(0x1C0B30F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTTAPTIME_OFFSET UNITYSDK_OFFSET(0x1C0B30C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DISABLEREDUNDANTEVENTSMERGING_OFFSET UNITYSDK_OFFSET(0x1C0B3370)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_EDITORINPUTBEHAVIORINPLAYMODE_OFFSET UNITYSDK_OFFSET(0x1C0B31D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_FILTERNOISEONCURRENT_OFFSET UNITYSDK_OFFSET(0x1C0B2FC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MAXEVENTBYTESPERUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0B31F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MAXQUEUEDEVENTSPERUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0B3210)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MULTITAPDELAYTIME_OFFSET UNITYSDK_OFFSET(0x1C0B3180)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_SUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x1C0B3250)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_TAPRADIUS_OFFSET UNITYSDK_OFFSET(0x1C0B3150)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1C0B2E00)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B35C0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputSettings_TypeDefinitionIndex = 29035;

	class InputSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::Int32 s_OldUnsupportedFixedAndDynamicUpdateSetting = 0x0; // 0x0
		::Il2CppArray<::System::String*>* m_SupportedDevices; // 0x18
		::UnityEngine::InputSystem::InputSettings_UpdateMode m_UpdateMode; // 0x20
		::System::Int32 m_MaxEventBytesPerUpdate; // 0x24
		::System::Int32 m_MaxQueuedEventsPerUpdate; // 0x28
		::System::Boolean m_CompensateForScreenOrientation; // 0x2C
		::UnityEngine::InputSystem::InputSettings_BackgroundBehavior m_BackgroundBehavior; // 0x30
		::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode m_EditorInputBehaviorInPlayMode; // 0x34
		::System::Single m_DefaultDeadzoneMin; // 0x38
		::System::Single m_DefaultDeadzoneMax; // 0x3C
		::System::Single m_DefaultButtonPressPoint; // 0x40
		::System::Single m_ButtonReleaseThreshold; // 0x44
		::System::Single m_DefaultTapTime; // 0x48
		::System::Single m_DefaultSlowTapTime; // 0x4C
		::System::Single m_DefaultHoldTime; // 0x50
		::System::Single m_TapRadius; // 0x54
		::System::Single m_MultiTapDelayTime; // 0x58
		::System::Boolean m_DisableRedundantEventsMerging; // 0x5C
		::System::Collections::Generic::HashSet_1<::System::String*>* m_FeatureFlags; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputSettings_UpdateMode get_updateMode()
		{
			return ((::UnityEngine::InputSystem::InputSettings_UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_updateMode(::UnityEngine::InputSystem::InputSettings_UpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputSettings_UpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_UPDATEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_compensateForScreenOrientation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_COMPENSATEFORSCREENORIENTATION_OFFSET))(this);
		}

		::System::Void set_compensateForScreenOrientation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_COMPENSATEFORSCREENORIENTATION_OFFSET))(this, value);
		}

		::System::Boolean get_filterNoiseOnCurrent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_FILTERNOISEONCURRENT_OFFSET))(this);
		}

		::System::Void set_filterNoiseOnCurrent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_FILTERNOISEONCURRENT_OFFSET))(this, value);
		}

		::System::Single get_defaultDeadzoneMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTDEADZONEMIN_OFFSET))(this);
		}

		::System::Void set_defaultDeadzoneMin(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTDEADZONEMIN_OFFSET))(this, value);
		}

		::System::Single get_defaultDeadzoneMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTDEADZONEMAX_OFFSET))(this);
		}

		::System::Void set_defaultDeadzoneMax(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTDEADZONEMAX_OFFSET))(this, value);
		}

		::System::Single get_defaultButtonPressPoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTBUTTONPRESSPOINT_OFFSET))(this);
		}

		::System::Void set_defaultButtonPressPoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTBUTTONPRESSPOINT_OFFSET))(this, value);
		}

		::System::Single get_buttonReleaseThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_BUTTONRELEASETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_buttonReleaseThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_BUTTONRELEASETHRESHOLD_OFFSET))(this, value);
		}

		::System::Single get_defaultTapTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTTAPTIME_OFFSET))(this);
		}

		::System::Void set_defaultTapTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTTAPTIME_OFFSET))(this, value);
		}

		::System::Single get_defaultSlowTapTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTSLOWTAPTIME_OFFSET))(this);
		}

		::System::Void set_defaultSlowTapTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTSLOWTAPTIME_OFFSET))(this, value);
		}

		::System::Single get_defaultHoldTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTHOLDTIME_OFFSET))(this);
		}

		::System::Void set_defaultHoldTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTHOLDTIME_OFFSET))(this, value);
		}

		::System::Single get_tapRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_TAPRADIUS_OFFSET))(this);
		}

		::System::Void set_tapRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_TAPRADIUS_OFFSET))(this, value);
		}

		::System::Single get_multiTapDelayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MULTITAPDELAYTIME_OFFSET))(this);
		}

		::System::Void set_multiTapDelayTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MULTITAPDELAYTIME_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputSettings_BackgroundBehavior get_backgroundBehavior()
		{
			return ((::UnityEngine::InputSystem::InputSettings_BackgroundBehavior(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_BACKGROUNDBEHAVIOR_OFFSET))(this);
		}

		::System::Void set_backgroundBehavior(::UnityEngine::InputSystem::InputSettings_BackgroundBehavior value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_BACKGROUNDBEHAVIOR_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode get_editorInputBehaviorInPlayMode()
		{
			return ((::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_EDITORINPUTBEHAVIORINPLAYMODE_OFFSET))(this);
		}

		::System::Void set_editorInputBehaviorInPlayMode(::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_EDITORINPUTBEHAVIORINPLAYMODE_OFFSET))(this, value);
		}

		::System::Int32 get_maxEventBytesPerUpdate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MAXEVENTBYTESPERUPDATE_OFFSET))(this);
		}

		::System::Void set_maxEventBytesPerUpdate(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MAXEVENTBYTESPERUPDATE_OFFSET))(this, value);
		}

		::System::Int32 get_maxQueuedEventsPerUpdate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MAXQUEUEDEVENTSPERUPDATE_OFFSET))(this);
		}

		::System::Void set_maxQueuedEventsPerUpdate(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MAXQUEUEDEVENTSPERUPDATE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::System::String*> get_supportedDevices()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_SUPPORTEDDEVICES_OFFSET))(this);
		}

		::System::Void set_supportedDevices(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::System::String*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::System::String*>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_SUPPORTEDDEVICES_OFFSET))(this, value);
		}

		::System::Boolean get_disableRedundantEventsMerging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DISABLEREDUNDANTEVENTSMERGING_OFFSET))(this);
		}

		::System::Void set_disableRedundantEventsMerging(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DISABLEREDUNDANTEVENTSMERGING_OFFSET))(this, value);
		}

		::System::Void SetInternalFeatureFlag(::System::String* featureName, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SETINTERNALFEATUREFLAG_OFFSET))(this, featureName, enabled);
		}

		::System::Boolean IsFeatureEnabled(::System::String* featureName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_ISFEATUREENABLED_OFFSET))(this, featureName);
		}

		::System::Void OnChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_ONCHANGE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"
#include "unitysdk/UnityEngine/ScreenOrientation.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::InputSystem::LowLevel { class InputUpdateDelegate; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_ALLOCATEDEVICEID_OFFSET UNITYSDK_OFFSET(0x1D8DE2F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_DEVICECOMMAND_OFFSET UNITYSDK_OFFSET(0x1D8DE410)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_CURRENTTIMEFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1D8DEDB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_CURRENTTIMEOFFSETTOREALTIMESINCESTARTUP_OFFSET UNITYSDK_OFFSET(0x1D8DEE20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1D8DED50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ISINBATCHMODE_OFFSET UNITYSDK_OFFSET(0x1D8DEF90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ISPLAYERFOCUSED_OFFSET UNITYSDK_OFFSET(0x1D8DECC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1D8DE5A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0x1D8DE780)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONPLAYERFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D8DEAD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONSHOULDRUNUPDATE_OFFSET UNITYSDK_OFFSET(0x1D8DE690)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1D8DE8E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D8DE4B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_POLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1D8DECD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1D8DEE90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_SCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x1D8DEF80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_SCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1D8DEF50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_UNSCALEDGAMETIME_OFFSET UNITYSDK_OFFSET(0x1D8DEE80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D8DEEF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1D8DEEA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_ONWANTSTOSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1D8DEEC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x1D8DE3B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_REGISTERANALYTICSEVENT_OFFSET UNITYSDK_OFFSET(0x1D8DEFA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SENDANALYTICSEVENT_OFFSET UNITYSDK_OFFSET(0x1D8DEFB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1D8DE5B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0x1D8DE820)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONPLAYERFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D8DEAE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONSHOULDRUNUPDATE_OFFSET UNITYSDK_OFFSET(0x1D8DE6A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1D8DE8F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D8DE4C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_POLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1D8DECE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D8DE350)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8DEFD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DEFC0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int NativeInputRuntime_TypeDefinitionIndex = 31937;

	class NativeInputRuntime : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime** StaticGet_instance()
		{
			return (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime**)Il2CppClass::FromTypeDefinitionIndex(NativeInputRuntime_TypeDefinitionIndex)->GetStaticField(0x26200);
		}
		::System::Action* m_ShutdownMethod; // 0x10
		::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::System::Boolean>* m_OnShouldRunUpdate; // 0x18
		::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* m_OnUpdate; // 0x20
		::System::Action_1<::System::Boolean>* m_FocusChangedMethod; // 0x28
		::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* m_OnBeforeUpdate; // 0x30
		::System::Single m_PollingFrequency; // 0x38
		::System::Boolean m_DidCallOnShutdown; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME__CCTOR_OFFSET))();
		}

		::System::Int32 AllocateDeviceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_ALLOCATEDEVICEID_OFFSET))(this);
		}

		::System::Void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_UPDATE_OFFSET))(this, updateType);
		}

		::System::Void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEvent* ptr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_QUEUEEVENT_OFFSET))(this, ptr);
		}

		::System::Int64 DeviceCommand(::System::Int32 deviceId, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* commandPtr)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_DEVICECOMMAND_OFFSET))(this, deviceId, commandPtr);
		}

		::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* get_onUpdate()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONUPDATE_OFFSET))(this);
		}

		::System::Void set_onUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONUPDATE_OFFSET))(this, value);
		}

		::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* get_onBeforeUpdate()
		{
			return ((::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONBEFOREUPDATE_OFFSET))(this);
		}

		::System::Void set_onBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONBEFOREUPDATE_OFFSET))(this, value);
		}

		::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::System::Boolean>* get_onShouldRunUpdate()
		{
			return ((::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONSHOULDRUNUPDATE_OFFSET))(this);
		}

		::System::Void set_onShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONSHOULDRUNUPDATE_OFFSET))(this, value);
		}

		::System::Action_2<::System::Int32, ::System::String*>* get_onDeviceDiscovered()
		{
			return ((::System::Action_2<::System::Int32, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONDEVICEDISCOVERED_OFFSET))(this);
		}

		::System::Void set_onDeviceDiscovered(::System::Action_2<::System::Int32, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONDEVICEDISCOVERED_OFFSET))(this, value);
		}

		::System::Action* get_onShutdown()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONSHUTDOWN_OFFSET))(this);
		}

		::System::Void set_onShutdown(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONSHUTDOWN_OFFSET))(this, value);
		}

		::System::Action_1<::System::Boolean>* get_onPlayerFocusChanged()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ONPLAYERFOCUSCHANGED_OFFSET))(this);
		}

		::System::Void set_onPlayerFocusChanged(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_ONPLAYERFOCUSCHANGED_OFFSET))(this, value);
		}

		::System::Boolean get_isPlayerFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ISPLAYERFOCUSED_OFFSET))(this);
		}

		::System::Single get_pollingFrequency()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_POLLINGFREQUENCY_OFFSET))(this);
		}

		::System::Void set_pollingFrequency(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SET_POLLINGFREQUENCY_OFFSET))(this, value);
		}

		::System::Double get_currentTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_CURRENTTIME_OFFSET))(this);
		}

		::System::Double get_currentTimeForFixedUpdate()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_CURRENTTIMEFORFIXEDUPDATE_OFFSET))(this);
		}

		::System::Double get_currentTimeOffsetToRealtimeSinceStartup()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_CURRENTTIMEOFFSETTOREALTIMESINCESTARTUP_OFFSET))(this);
		}

		::System::Single get_unscaledGameTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_UNSCALEDGAMETIME_OFFSET))(this);
		}

		::System::Boolean get_runInBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_RUNINBACKGROUND_OFFSET))(this);
		}

		::System::Void OnShutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_ONSHUTDOWN_OFFSET))(this);
		}

		::System::Boolean OnWantsToShutdown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_ONWANTSTOSHUTDOWN_OFFSET))(this);
		}

		::System::Void OnFocusChanged(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_ONFOCUSCHANGED_OFFSET))(this, focus);
		}

		::UnityEngine::Vector2 get_screenSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_SCREENSIZE_OFFSET))(this);
		}

		::UnityEngine::ScreenOrientation get_screenOrientation()
		{
			return ((::UnityEngine::ScreenOrientation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_SCREENORIENTATION_OFFSET))(this);
		}

		::System::Boolean get_isInBatchMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_GET_ISINBATCHMODE_OFFSET))(this);
		}

		::System::Void RegisterAnalyticsEvent(::System::String* name, ::System::Int32 maxPerHour, ::System::Int32 maxPropertiesPerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_REGISTERANALYTICSEVENT_OFFSET))(this, name, maxPerHour, maxPropertiesPerEvent);
		}

		::System::Void SendAnalyticsEvent(::System::String* name, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_NATIVEINPUTRUNTIME_SENDANALYTICSEVENT_OFFSET))(this, name, data);
		}
	};
}

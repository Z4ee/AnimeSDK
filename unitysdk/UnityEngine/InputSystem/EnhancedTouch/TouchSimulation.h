#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/TouchPhase.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class Pointer; }
namespace UnityEngine::InputSystem { class Touchscreen; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ADDPOINTER_OFFSET UNITYSDK_OFFSET(0x1B3862C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B385FA0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_DISABLE_OFFSET UNITYSDK_OFFSET(0x1B385E50)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ENABLE_OFFSET UNITYSDK_OFFSET(0x1B385C20)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B385C10)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_GET_SIMULATEDTOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x1B385BF0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_INSTALLSTATECHANGEMONITORS_OFFSET UNITYSDK_OFFSET(0x1B387F20)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x1B3874F0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B387CB0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B387730)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1B386CA0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONSOURCECONTROLCHANGEDVALUE_OFFSET UNITYSDK_OFFSET(0x1B387F30)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_REMOVEPOINTER_OFFSET UNITYSDK_OFFSET(0x1B386500)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_SET_SIMULATEDTOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x1B385C00)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNINSTALLSTATECHANGEMONITORS_OFFSET UNITYSDK_OFFSET(0x1B387F40)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYCONTROLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1B387F00)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYTIMEREXPIRED_OFFSET UNITYSDK_OFFSET(0x1B387F10)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UPDATETOUCH_OFFSET UNITYSDK_OFFSET(0x1B386820)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B387F50)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int TouchSimulation_TypeDefinitionIndex = 29161;

	class TouchSimulation : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation** StaticGet_s_Instance()
		{
			return (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation**)Il2CppClass::FromTypeDefinitionIndex(TouchSimulation_TypeDefinitionIndex)->GetStaticField(0x22070);
		}
		::UnityEngine::InputSystem::Touchscreen* _simulatedTouchscreen_k__BackingField; // 0x18
		::System::Int32 m_NumPointers; // 0x20
		::Il2CppArray<::UnityEngine::InputSystem::Pointer*>* m_Pointers; // 0x28
		::Il2CppArray<::UnityEngine::Vector2>* m_CurrentPositions; // 0x30
		::Il2CppArray<::UnityEngine::InputSystem::Controls::ButtonControl*>* m_Touches; // 0x38
		::System::Int32 m_LastTouchId; // 0x40
		::System::Int32 m_PrimaryTouchIndex; // 0x44
		::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* m_OnDeviceChange; // 0x48
		::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* m_OnEvent; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Touchscreen* get_simulatedTouchscreen()
		{
			return ((::UnityEngine::InputSystem::Touchscreen*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_GET_SIMULATEDTOUCHSCREEN_OFFSET))(this);
		}

		::System::Void set_simulatedTouchscreen(::UnityEngine::InputSystem::Touchscreen* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Touchscreen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_SET_SIMULATEDTOUCHSCREEN_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* get_instance()
		{
			return ((::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void Enable()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ENABLE_OFFSET))();
		}

		static ::System::Void Disable()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_DISABLE_OFFSET))();
		}

		static ::System::Void Destroy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_DESTROY_OFFSET))();
		}

		::System::Void AddPointer(::UnityEngine::InputSystem::Pointer* pointer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Pointer*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ADDPOINTER_OFFSET))(this, pointer);
		}

		::System::Void RemovePointer(::UnityEngine::InputSystem::Pointer* pointer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Pointer*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_REMOVEPOINTER_OFFSET))(this, pointer);
		}

		::System::Void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONEVENT_OFFSET))(this, eventPtr, device);
		}

		::System::Void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONDEVICECHANGE_OFFSET))(this, device, change);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateTouch(::System::Int32 touchIndex, ::System::Int32 pointerIndex, ::UnityEngine::InputSystem::TouchPhase phase, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::InputSystem::TouchPhase, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UPDATETOUCH_OFFSET))(this, touchIndex, pointerIndex, phase, eventPtr);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, ::System::Double time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::Int64 monitorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYCONTROLSTATECHANGED_OFFSET))(this, control, time, eventPtr, monitorIndex);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, ::System::Double time, ::System::Int64 monitorIndex, ::System::Int32 timerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Double, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYTIMEREXPIRED_OFFSET))(this, control, time, monitorIndex, timerIndex);
		}

		::System::Void InstallStateChangeMonitors(::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_INSTALLSTATECHANGEMONITORS_OFFSET))(this, startIndex);
		}

		::System::Void OnSourceControlChangedValue(::UnityEngine::InputSystem::InputControl* control, ::System::Double time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::Int64 sourceDeviceAndButtonIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONSOURCECONTROLCHANGEDVALUE_OFFSET))(this, control, time, eventPtr, sourceDeviceAndButtonIndex);
		}

		::System::Void UninstallStateChangeMonitors(::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNINSTALLSTATECHANGEMONITORS_OFFSET))(this, startIndex);
		}
	};
}

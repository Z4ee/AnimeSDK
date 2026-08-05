#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData.h"
#include "unitysdk/UnityEngine/InputSystem/UI/UIPointerType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class Pen; }
namespace UnityEngine::InputSystem::Controls { class TouchControl; }

#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GETPENPOINTERID_OFFSET UNITYSDK_OFFSET(0x1F3E15A0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GETTOUCHPOINTERID_OFFSET UNITYSDK_OFFSET(0x1F3E1820)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x1F3E0E40)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1F3E0E60)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x1F3E0EA0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x1F3E0E80)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TRACKEDDEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F3E0F20)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TRACKEDDEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3E0EE0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_UITOOLKITPOINTERID_OFFSET UNITYSDK_OFFSET(0x1F3E0EC0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_MAKEPOINTERIDFORTOUCH_OFFSET UNITYSDK_OFFSET(0x1F3E1480)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_READDEVICESTATE_OFFSET UNITYSDK_OFFSET(0x1F3E14A0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0x1F3E0E50)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1F3E0E70)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x1F3E0EB0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x1F3E0E90)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TRACKEDDEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F3E0F30)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TRACKEDDEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3E0F00)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_UITOOLKITPOINTERID_OFFSET UNITYSDK_OFFSET(0x1F3E0ED0)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3E0F40)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_TOUCHIDFROMPOINTERID_OFFSET UNITYSDK_OFFSET(0x1F3E1490)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E0E30)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int ExtendedPointerEventData_TypeDefinitionIndex = 32384;

	class ExtendedPointerEventData : public ::UnityEngine::EventSystems::PointerEventData
	{
	public:
		::UnityEngine::InputSystem::InputDevice* _device_k__BackingField; // 0x138
		::UnityEngine::InputSystem::InputControl* _control_k__BackingField; // 0x140
		::UnityEngine::InputSystem::UI::UIPointerType _pointerType_k__BackingField; // 0x148
		::System::Int32 _touchId_k__BackingField; // 0x14C
		::UnityEngine::Quaternion _trackedDeviceOrientation_k__BackingField; // 0x150
		::UnityEngine::Vector3 _trackedDevicePosition_k__BackingField; // 0x160
		::System::Int32 _uiToolkitPointerId_k__BackingField; // 0x16C

		::System::Void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA__CTOR_OFFSET))(this, eventSystem);
		}

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_CONTROL_OFFSET))(this);
		}

		::System::Void set_control(::UnityEngine::InputSystem::InputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_CONTROL_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputDevice* get_device()
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_DEVICE_OFFSET))(this);
		}

		::System::Void set_device(::UnityEngine::InputSystem::InputDevice* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_DEVICE_OFFSET))(this, value);
		}

		::System::Int32 get_touchId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TOUCHID_OFFSET))(this);
		}

		::System::Void set_touchId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TOUCHID_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::UI::UIPointerType get_pointerType()
		{
			return ((::UnityEngine::InputSystem::UI::UIPointerType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_POINTERTYPE_OFFSET))(this);
		}

		::System::Void set_pointerType(::UnityEngine::InputSystem::UI::UIPointerType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::UIPointerType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_POINTERTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_uiToolkitPointerId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_UITOOLKITPOINTERID_OFFSET))(this);
		}

		::System::Void set_uiToolkitPointerId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_UITOOLKITPOINTERID_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_trackedDevicePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TRACKEDDEVICEPOSITION_OFFSET))(this);
		}

		::System::Void set_trackedDevicePosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TRACKEDDEVICEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_trackedDeviceOrientation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GET_TRACKEDDEVICEORIENTATION_OFFSET))(this);
		}

		::System::Void set_trackedDeviceOrientation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_SET_TRACKEDDEVICEORIENTATION_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_TOSTRING_OFFSET))(this);
		}

		static ::System::Int32 MakePointerIdForTouch(::System::Int32 deviceId, ::System::Int32 touchId)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_MAKEPOINTERIDFORTOUCH_OFFSET))(deviceId, touchId);
		}

		static ::System::Int32 TouchIdFromPointerId(::System::Int32 pointerId)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_TOUCHIDFROMPOINTERID_OFFSET))(pointerId);
		}

		::System::Void ReadDeviceState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_READDEVICESTATE_OFFSET))(this);
		}

		static ::System::Int32 GetPenPointerId(::UnityEngine::InputSystem::Pen* pen)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::Pen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GETPENPOINTERID_OFFSET))(pen);
		}

		static ::System::Int32 GetTouchPointerId(::UnityEngine::InputSystem::Controls::TouchControl* touchControl)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::Controls::TouchControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDPOINTEREVENTDATA_GETTOUCHPOINTERID_OFFSET))(touchControl);
		}
	};
}

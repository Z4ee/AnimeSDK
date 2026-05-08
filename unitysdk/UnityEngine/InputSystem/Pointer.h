#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITYENGINE_INPUTSYSTEM_POINTER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1BC471F0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BC471A0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1BC47120)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BC47100)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x1BC47160)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESS_OFFSET UNITYSDK_OFFSET(0x1BC47180)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1BC47140)
#define UNITYENGINE_INPUTSYSTEM_POINTER_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1BC471C0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1BC472C0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1BC471D0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1BC472F0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BC471B0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x1BC47130)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BC47110)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x1BC47170)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESS_OFFSET UNITYSDK_OFFSET(0x1BC47190)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1BC47150)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x1BC47400)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1BC47360)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1BC47390)
#define UNITYENGINE_INPUTSYSTEM_POINTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC47410)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Pointer_TypeDefinitionIndex = 28981;

	class Pointer : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		static ::UnityEngine::InputSystem::Pointer** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Pointer**)Il2CppClass::FromTypeDefinitionIndex(Pointer_TypeDefinitionIndex)->GetStaticField(0x224C0);
		}
		::UnityEngine::InputSystem::Controls::Vector2Control* _radius_k__BackingField; // 0x158
		::UnityEngine::InputSystem::Controls::Vector2Control* _delta_k__BackingField; // 0x160
		::UnityEngine::InputSystem::Controls::AxisControl* _pressure_k__BackingField; // 0x168
		::UnityEngine::InputSystem::Controls::Vector2Control* _position_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Controls::ButtonControl* _press_k__BackingField; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_position()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_delta()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_DELTA_OFFSET))(this);
		}

		::System::Void set_delta(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_DELTA_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_radius()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_RADIUS_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_pressure()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESSURE_OFFSET))(this);
		}

		::System::Void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESSURE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_press()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESS_OFFSET))(this);
		}

		::System::Void set_press(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESS_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::Pointer* get_current()
		{
			return ((::UnityEngine::InputSystem::Pointer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Pointer* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Pointer*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_FINISHSETUP_OFFSET))(this);
		}

		::System::Void OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::UInt32& offset)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET))(this, control, eventPtr, offset);
		}
	};
}

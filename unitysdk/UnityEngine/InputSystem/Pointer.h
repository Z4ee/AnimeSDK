#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITYENGINE_INPUTSYSTEM_POINTER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1DF78310)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DF782C0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1DF78240)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1DF78220)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x1DF78280)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESS_OFFSET UNITYSDK_OFFSET(0x1DF782A0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1DF78260)
#define UNITYENGINE_INPUTSYSTEM_POINTER_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1DF782E0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1DF783E0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1DF782F0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1DF78410)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DF782D0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x1DF78250)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1DF78230)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x1DF78290)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESS_OFFSET UNITYSDK_OFFSET(0x1DF782B0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1DF78270)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x1DF78520)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1DF78480)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1DF784B0)
#define UNITYENGINE_INPUTSYSTEM_POINTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF78530)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Pointer_TypeDefinitionIndex = 31637;

	class Pointer : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		static ::UnityEngine::InputSystem::Pointer** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Pointer**)Il2CppClass::FromTypeDefinitionIndex(Pointer_TypeDefinitionIndex)->GetStaticField(0x26250);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _pressure_k__BackingField; // 0x158
		::UnityEngine::InputSystem::Controls::ButtonControl* _press_k__BackingField; // 0x160
		::UnityEngine::InputSystem::Controls::Vector2Control* _position_k__BackingField; // 0x168
		::UnityEngine::InputSystem::Controls::Vector2Control* _radius_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Controls::Vector2Control* _delta_k__BackingField; // 0x178

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchState.h"
#include "unitysdk/UnityEngine/InputSystem/Pointer.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class TouchControl; }

#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D7BE500)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7BE480)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x1D7BE3F0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHCONTROLARRAY_OFFSET UNITYSDK_OFFSET(0x1D7BE430)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x1D7BE410)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1D7BE4A0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x1D7BF570)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7BE910)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1D7BE4C0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1D7BEC90)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7BE490)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x1D7BE400)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHCONTROLARRAY_OFFSET UNITYSDK_OFFSET(0x1D7BE440)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x1D7BE420)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_TRIGGERTAP_OFFSET UNITYSDK_OFFSET(0x1D7BF300)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ICUSTOMDEVICERESET_RESET_OFFSET UNITYSDK_OFFSET(0x1D7AD4F0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x1D7BF5F0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x1D7BF380)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7BF360)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1D7BF370)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BF670)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Touchscreen_TypeDefinitionIndex = 32298;

	class Touchscreen : public ::UnityEngine::InputSystem::Pointer
	{
	public:
		static ::UnityEngine::InputSystem::Touchscreen** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Touchscreen**)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0x27590);
		}
		static ::System::Single* StaticGet_s_TapTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0x7CB0);
		}
		static ::System::Single* StaticGet_s_TapDelayTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0x7CB4);
		}
		static ::System::Single* StaticGet_s_TapRadiusSquared()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0x7CB8);
		}
		::UnityEngine::InputSystem::Controls::TouchControl* _primaryTouch_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> _touches_k__BackingField; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::TouchControl* get_primaryTouch()
		{
			return ((::UnityEngine::InputSystem::Controls::TouchControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_PRIMARYTOUCH_OFFSET))(this);
		}

		::System::Void set_primaryTouch(::UnityEngine::InputSystem::Controls::TouchControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::TouchControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_PRIMARYTOUCH_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> get_touches()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHES_OFFSET))(this);
		}

		::System::Void set_touches(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHES_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>* get_touchControlArray()
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHCONTROLARRAY_OFFSET))(this);
		}

		::System::Void set_touchControlArray(::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHCONTROLARRAY_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::Touchscreen* get_current()
		{
			return ((::UnityEngine::InputSystem::Touchscreen*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Touchscreen* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_FINISHSETUP_OFFSET))(this);
		}

		::System::Void OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::UInt32& offset)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET))(this, control, eventPtr, offset);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ICUSTOMDEVICERESET_RESET_OFFSET))(this);
		}

		static ::System::Boolean MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MERGEFORWARD_OFFSET))(currentEventPtr, nextEventPtr);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET))(this, currentEventPtr, nextEventPtr);
		}

		static ::System::Void TriggerTap(::UnityEngine::InputSystem::Controls::TouchControl* control, ::UnityEngine::InputSystem::LowLevel::TouchState& state, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Controls::TouchControl*, ::UnityEngine::InputSystem::LowLevel::TouchState&, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_TRIGGERTAP_OFFSET))(control, state, eventPtr);
		}
	};
}

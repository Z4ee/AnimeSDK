#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AccelerationEvent.h"
#include "unitysdk/UnityEngine/DeviceOrientation.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/TouchPhase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Compass; }
namespace UnityEngine { class Gyroscope; }
namespace UnityEngine { class LocationService; }

#define UNITYENGINE_INPUT_ENABLEMIHOYOMOBILECLOUDGAMEMODE_OFFSET UNITYSDK_OFFSET(0x1A4C5050)
#define UNITYENGINE_INPUT_GETACCELERATIONEVENT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C48B0)
#define UNITYENGINE_INPUT_GETACCELERATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1A4C4880)
#define UNITYENGINE_INPUT_GETAXISRAW_OFFSET UNITYSDK_OFFSET(0x1A4C4770)
#define UNITYENGINE_INPUT_GETAXIS_OFFSET UNITYSDK_OFFSET(0x1A4C4760)
#define UNITYENGINE_INPUT_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1A4C4790)
#define UNITYENGINE_INPUT_GETBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1A4C47A0)
#define UNITYENGINE_INPUT_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x1A4C4780)
#define UNITYENGINE_INPUT_GETGYROINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4C4D60)
#define UNITYENGINE_INPUT_GETJOYSTICKNAMES_OFFSET UNITYSDK_OFFSET(0x1A4C47F0)
#define UNITYENGINE_INPUT_GETKEYDOWNINT_OFFSET UNITYSDK_OFFSET(0x1A4C4740)
#define UNITYENGINE_INPUT_GETKEYDOWNSTRING_OFFSET UNITYSDK_OFFSET(0x1A4C4750)
#define UNITYENGINE_INPUT_GETKEYDOWN_1_OFFSET UNITYSDK_OFFSET(0x1A4C4940)
#define UNITYENGINE_INPUT_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1A4C4930)
#define UNITYENGINE_INPUT_GETKEYINT_OFFSET UNITYSDK_OFFSET(0x1A4C46F0)
#define UNITYENGINE_INPUT_GETKEYSTRING_OFFSET UNITYSDK_OFFSET(0x1A4C4700)
#define UNITYENGINE_INPUT_GETKEYUPINT_OFFSET UNITYSDK_OFFSET(0x1A4C4710)
#define UNITYENGINE_INPUT_GETKEYUPSTRING_OFFSET UNITYSDK_OFFSET(0x1A4C4730)
#define UNITYENGINE_INPUT_GETKEYUP_1_OFFSET UNITYSDK_OFFSET(0x1A4C4920)
#define UNITYENGINE_INPUT_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1A4C48E0)
#define UNITYENGINE_INPUT_GETKEY_1_OFFSET UNITYSDK_OFFSET(0x1A4C48D0)
#define UNITYENGINE_INPUT_GETKEY_OFFSET UNITYSDK_OFFSET(0x1A4C48C0)
#define UNITYENGINE_INPUT_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1A4C47C0)
#define UNITYENGINE_INPUT_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1A4C47D0)
#define UNITYENGINE_INPUT_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1A4C47B0)
#define UNITYENGINE_INPUT_GETTOUCH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4870)
#define UNITYENGINE_INPUT_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1A4C4800)
#define UNITYENGINE_INPUT_GET_ACCELERATIONEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4C4C40)
#define UNITYENGINE_INPUT_GET_ACCELERATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1A4C4F60)
#define UNITYENGINE_INPUT_GET_ACCELERATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4C10)
#define UNITYENGINE_INPUT_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1A4C4BD0)
#define UNITYENGINE_INPUT_GET_ANYKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1A4C49C0)
#define UNITYENGINE_INPUT_GET_ANYKEY_OFFSET UNITYSDK_OFFSET(0x1A4C49B0)
#define UNITYENGINE_INPUT_GET_BACKBUTTONLEAVESAPP_OFFSET UNITYSDK_OFFSET(0x1A4C4C50)
#define UNITYENGINE_INPUT_GET_COMPASS_OFFSET UNITYSDK_OFFSET(0x1A4C4CF0)
#define UNITYENGINE_INPUT_GET_COMPENSATESENSORS_OFFSET UNITYSDK_OFFSET(0x1A4C4C20)
#define UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4AE0)
#define UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1A4C4AB0)
#define UNITYENGINE_INPUT_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x1A4C4A90)
#define UNITYENGINE_INPUT_GET_DEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1A4C4BC0)
#define UNITYENGINE_INPUT_GET_EATKEYPRESSONTEXTFIELDFOCUS_OFFSET UNITYSDK_OFFSET(0x1A4C4B20)
#define UNITYENGINE_INPUT_GET_GYRO_OFFSET UNITYSDK_OFFSET(0x1A4C4D70)
#define UNITYENGINE_INPUT_GET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1A4C4A70)
#define UNITYENGINE_INPUT_GET_IMEISSELECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4AA0)
#define UNITYENGINE_INPUT_GET_INPUTSTRING_OFFSET UNITYSDK_OFFSET(0x1A4C49D0)
#define UNITYENGINE_INPUT_GET_ISGYROAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A4C4BB0)
#define UNITYENGINE_INPUT_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1A4C4C70)
#define UNITYENGINE_INPUT_GET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4A20)
#define UNITYENGINE_INPUT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A4C49E0)
#define UNITYENGINE_INPUT_GET_MOUSEPRESENT_OFFSET UNITYSDK_OFFSET(0x1A4C4B40)
#define UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4A60)
#define UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1A4C4A30)
#define UNITYENGINE_INPUT_GET_MULTITOUCHENABLED_OFFSET UNITYSDK_OFFSET(0x1A4C4B90)
#define UNITYENGINE_INPUT_GET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1A4C4990)
#define UNITYENGINE_INPUT_GET_STYLUSTOUCHSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A4C4B70)
#define UNITYENGINE_INPUT_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4C4B50)
#define UNITYENGINE_INPUT_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x1A4C4DC0)
#define UNITYENGINE_INPUT_GET_TOUCHPRESSURESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A4C4B60)
#define UNITYENGINE_INPUT_GET_TOUCHSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A4C4B80)
#define UNITYENGINE_INPUT_RESETINPUTAXES_OFFSET UNITYSDK_OFFSET(0x1A4C47E0)
#define UNITYENGINE_INPUT_SETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1A4C4900)
#define UNITYENGINE_INPUT_SETKEYSTATE_OFFSET UNITYSDK_OFFSET(0x1A4C4720)
#define UNITYENGINE_INPUT_SETKEYUP_OFFSET UNITYSDK_OFFSET(0x1A4C4910)
#define UNITYENGINE_INPUT_SETKEY_OFFSET UNITYSDK_OFFSET(0x1A4C48F0)
#define UNITYENGINE_INPUT_SET_BACKBUTTONLEAVESAPP_OFFSET UNITYSDK_OFFSET(0x1A4C4C60)
#define UNITYENGINE_INPUT_SET_COMPENSATESENSORS_OFFSET UNITYSDK_OFFSET(0x1A4C4C30)
#define UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4B10)
#define UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1A4C4AF0)
#define UNITYENGINE_INPUT_SET_EATKEYPRESSONTEXTFIELDFOCUS_OFFSET UNITYSDK_OFFSET(0x1A4C4B30)
#define UNITYENGINE_INPUT_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1A4C4A80)
#define UNITYENGINE_INPUT_SET_MULTITOUCHENABLED_OFFSET UNITYSDK_OFFSET(0x1A4C4BA0)
#define UNITYENGINE_INPUT_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1A4C49A0)
#define UNITYENGINE_INPUT_SIMULATETOUCHINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4980)
#define UNITYENGINE_INPUT_SIMULATETOUCHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4C4960)
#define UNITYENGINE_INPUT_SIMULATETOUCH_OFFSET UNITYSDK_OFFSET(0x1A4C4950)
#define UNITYENGINE_INPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C5060)

namespace UnityEngine
{
	inline static constexpr unsigned int Input_TypeDefinitionIndex = 5166;

	class Input : public ::System::Object
	{
	public:
		static ::UnityEngine::Compass** StaticGet_compassInstance()
		{
			return (::UnityEngine::Compass**)Il2CppClass::FromTypeDefinitionIndex(Input_TypeDefinitionIndex)->GetStaticField(0x260);
		}
		static ::UnityEngine::Gyroscope** StaticGet_s_MainGyro()
		{
			return (::UnityEngine::Gyroscope**)Il2CppClass::FromTypeDefinitionIndex(Input_TypeDefinitionIndex)->GetStaticField(0x268);
		}
		static ::UnityEngine::LocationService** StaticGet_locationServiceInstance()
		{
			return (::UnityEngine::LocationService**)Il2CppClass::FromTypeDefinitionIndex(Input_TypeDefinitionIndex)->GetStaticField(0x270);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT__CTOR_OFFSET))(this);
		}

		static ::System::Boolean GetKeyInt(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYINT_OFFSET))(key);
		}

		static ::System::Boolean GetKeyString(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYSTRING_OFFSET))(name);
		}

		static ::System::Boolean GetKeyUpInt(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUPINT_OFFSET))(key);
		}

		static ::System::Void SetKeyState(::UnityEngine::KeyCode key, ::System::Boolean down)
		{
			return ((::System::Void(*)(::UnityEngine::KeyCode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SETKEYSTATE_OFFSET))(key, down);
		}

		static ::System::Boolean GetKeyUpString(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUPSTRING_OFFSET))(name);
		}

		static ::System::Boolean GetKeyDownInt(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWNINT_OFFSET))(key);
		}

		static ::System::Boolean GetKeyDownString(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWNSTRING_OFFSET))(name);
		}

		static ::System::Single GetAxis(::System::String* axisName)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETAXIS_OFFSET))(axisName);
		}

		static ::System::Single GetAxisRaw(::System::String* axisName)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETAXISRAW_OFFSET))(axisName);
		}

		static ::System::Boolean GetButton(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETBUTTON_OFFSET))(buttonName);
		}

		static ::System::Boolean GetButtonDown(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETBUTTONDOWN_OFFSET))(buttonName);
		}

		static ::System::Boolean GetButtonUp(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETBUTTONUP_OFFSET))(buttonName);
		}

		static ::System::Boolean GetMouseButton(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETMOUSEBUTTON_OFFSET))(button);
		}

		static ::System::Boolean GetMouseButtonDown(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETMOUSEBUTTONDOWN_OFFSET))(button);
		}

		static ::System::Boolean GetMouseButtonUp(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETMOUSEBUTTONUP_OFFSET))(button);
		}

		static ::System::Void ResetInputAxes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_RESETINPUTAXES_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* GetJoystickNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETJOYSTICKNAMES_OFFSET))();
		}

		static ::UnityEngine::Touch GetTouch(::System::Int32 index)
		{
			return ((::UnityEngine::Touch(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETTOUCH_OFFSET))(index);
		}

		static ::UnityEngine::AccelerationEvent GetAccelerationEvent(::System::Int32 index)
		{
			return ((::UnityEngine::AccelerationEvent(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETACCELERATIONEVENT_OFFSET))(index);
		}

		static ::System::Boolean GetKey(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEY_OFFSET))(key);
		}

		static ::System::Boolean GetKey_1(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEY_1_OFFSET))(name);
		}

		static ::System::Boolean GetKeyUp(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUP_OFFSET))(key);
		}

		static ::System::Void SetKey(::UnityEngine::KeyCode key, ::System::Boolean down)
		{
			return ((::System::Void(*)(::UnityEngine::KeyCode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SETKEY_OFFSET))(key, down);
		}

		static ::System::Void SetKeyDown(::UnityEngine::KeyCode key)
		{
			return ((::System::Void(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SETKEYDOWN_OFFSET))(key);
		}

		static ::System::Void SetKeyUp(::UnityEngine::KeyCode key)
		{
			return ((::System::Void(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SETKEYUP_OFFSET))(key);
		}

		static ::System::Boolean GetKeyUp_1(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUP_1_OFFSET))(name);
		}

		static ::System::Boolean GetKeyDown(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWN_OFFSET))(key);
		}

		static ::System::Boolean GetKeyDown_1(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWN_1_OFFSET))(name);
		}

		static ::System::Void SimulateTouch(::System::Int32 id, ::UnityEngine::Vector2 position, ::UnityEngine::TouchPhase action)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::TouchPhase))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SIMULATETOUCH_OFFSET))(id, position, action);
		}

		static ::System::Void SimulateTouchInternal(::System::Int32 id, ::UnityEngine::Vector2 position, ::UnityEngine::TouchPhase action, ::System::Int64 timestamp)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::TouchPhase, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SIMULATETOUCHINTERNAL_OFFSET))(id, position, action, timestamp);
		}

		static ::System::Boolean get_simulateMouseWithTouches()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_SIMULATEMOUSEWITHTOUCHES_OFFSET))();
		}

		static ::System::Void set_simulateMouseWithTouches(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET))(value);
		}

		static ::System::Boolean get_anyKey()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ANYKEY_OFFSET))();
		}

		static ::System::Boolean get_anyKeyDown()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ANYKEYDOWN_OFFSET))();
		}

		static ::System::String* get_inputString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_INPUTSTRING_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_mousePosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSEPOSITION_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_mouseScrollDelta()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_OFFSET))();
		}

		static ::UnityEngine::IMECompositionMode get_imeCompositionMode()
		{
			return ((::UnityEngine::IMECompositionMode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_IMECOMPOSITIONMODE_OFFSET))();
		}

		static ::System::Void set_imeCompositionMode(::UnityEngine::IMECompositionMode value)
		{
			return ((::System::Void(*)(::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_IMECOMPOSITIONMODE_OFFSET))(value);
		}

		static ::System::String* get_compositionString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_COMPOSITIONSTRING_OFFSET))();
		}

		static ::System::Boolean get_imeIsSelected()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_IMEISSELECTED_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_compositionCursorPos()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_OFFSET))();
		}

		static ::System::Void set_compositionCursorPos(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_OFFSET))(value);
		}

		static ::System::Boolean get_eatKeyPressOnTextFieldFocus()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_EATKEYPRESSONTEXTFIELDFOCUS_OFFSET))();
		}

		static ::System::Void set_eatKeyPressOnTextFieldFocus(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_EATKEYPRESSONTEXTFIELDFOCUS_OFFSET))(value);
		}

		static ::System::Boolean get_mousePresent()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSEPRESENT_OFFSET))();
		}

		static ::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_TOUCHCOUNT_OFFSET))();
		}

		static ::System::Boolean get_touchPressureSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_TOUCHPRESSURESUPPORTED_OFFSET))();
		}

		static ::System::Boolean get_stylusTouchSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_STYLUSTOUCHSUPPORTED_OFFSET))();
		}

		static ::System::Boolean get_touchSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_TOUCHSUPPORTED_OFFSET))();
		}

		static ::System::Boolean get_multiTouchEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MULTITOUCHENABLED_OFFSET))();
		}

		static ::System::Void set_multiTouchEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_MULTITOUCHENABLED_OFFSET))(value);
		}

		static ::System::Boolean get_isGyroAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ISGYROAVAILABLE_OFFSET))();
		}

		static ::UnityEngine::DeviceOrientation get_deviceOrientation()
		{
			return ((::UnityEngine::DeviceOrientation(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_DEVICEORIENTATION_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_acceleration()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ACCELERATION_OFFSET))();
		}

		static ::System::Boolean get_compensateSensors()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_COMPENSATESENSORS_OFFSET))();
		}

		static ::System::Void set_compensateSensors(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_COMPENSATESENSORS_OFFSET))(value);
		}

		static ::System::Int32 get_accelerationEventCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ACCELERATIONEVENTCOUNT_OFFSET))();
		}

		static ::System::Boolean get_backButtonLeavesApp()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_BACKBUTTONLEAVESAPP_OFFSET))();
		}

		static ::System::Void set_backButtonLeavesApp(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_BACKBUTTONLEAVESAPP_OFFSET))(value);
		}

		static ::UnityEngine::LocationService* get_location()
		{
			return ((::UnityEngine::LocationService*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_LOCATION_OFFSET))();
		}

		static ::UnityEngine::Compass* get_compass()
		{
			return ((::UnityEngine::Compass*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_COMPASS_OFFSET))();
		}

		static ::System::Int32 GetGyroInternal()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETGYROINTERNAL_OFFSET))();
		}

		static ::UnityEngine::Gyroscope* get_gyro()
		{
			return ((::UnityEngine::Gyroscope*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_GYRO_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Touch>* get_touches()
		{
			return ((::Il2CppArray<::UnityEngine::Touch>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_TOUCHES_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::AccelerationEvent>* get_accelerationEvents()
		{
			return ((::Il2CppArray<::UnityEngine::AccelerationEvent>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ACCELERATIONEVENTS_OFFSET))();
		}

		static ::System::Void EnableMihoyoMobileCloudGameMode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_ENABLEMIHOYOMOBILECLOUDGAMEMODE_OFFSET))();
		}

		static ::System::Void GetTouch_Injected(::System::Int32 index, ::UnityEngine::Touch& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Touch&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETTOUCH_INJECTED_OFFSET))(index, ret);
		}

		static ::System::Void GetAccelerationEvent_Injected(::System::Int32 index, ::UnityEngine::AccelerationEvent& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::AccelerationEvent&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETACCELERATIONEVENT_INJECTED_OFFSET))(index, ret);
		}

		static ::System::Void SimulateTouchInternal_Injected(::System::Int32 id, ::UnityEngine::Vector2& position, ::UnityEngine::TouchPhase action, ::System::Int64 timestamp)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::TouchPhase, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SIMULATETOUCHINTERNAL_INJECTED_OFFSET))(id, position, action, timestamp);
		}

		static ::System::Void get_mousePosition_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSEPOSITION_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_mouseScrollDelta_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_compositionCursorPos_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_compositionCursorPos_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET))(value);
		}

		static ::System::Void get_acceleration_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ACCELERATION_INJECTED_OFFSET))(ret);
		}
	};
}

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

#define UNITYENGINE_INPUT_ENABLEMIHOYOMOBILECLOUDGAMEMODE_OFFSET UNITYSDK_OFFSET(0x1EDA7890)
#define UNITYENGINE_INPUT_GETACCELERATIONEVENT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7110)
#define UNITYENGINE_INPUT_GETACCELERATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1EDA70E0)
#define UNITYENGINE_INPUT_GETAXISRAW_OFFSET UNITYSDK_OFFSET(0x1EDA6FD0)
#define UNITYENGINE_INPUT_GETAXIS_OFFSET UNITYSDK_OFFSET(0x1EDA6FC0)
#define UNITYENGINE_INPUT_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1EDA6FF0)
#define UNITYENGINE_INPUT_GETBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1EDA7000)
#define UNITYENGINE_INPUT_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x1EDA6FE0)
#define UNITYENGINE_INPUT_GETGYROINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDA75C0)
#define UNITYENGINE_INPUT_GETJOYSTICKNAMES_OFFSET UNITYSDK_OFFSET(0x1EDA7050)
#define UNITYENGINE_INPUT_GETKEYDOWNINT_OFFSET UNITYSDK_OFFSET(0x1EDA6FA0)
#define UNITYENGINE_INPUT_GETKEYDOWNSTRING_OFFSET UNITYSDK_OFFSET(0x1EDA6FB0)
#define UNITYENGINE_INPUT_GETKEYDOWN_1_OFFSET UNITYSDK_OFFSET(0x1EDA71A0)
#define UNITYENGINE_INPUT_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1EDA7190)
#define UNITYENGINE_INPUT_GETKEYINT_OFFSET UNITYSDK_OFFSET(0x1EDA6F50)
#define UNITYENGINE_INPUT_GETKEYSTRING_OFFSET UNITYSDK_OFFSET(0x1EDA6F60)
#define UNITYENGINE_INPUT_GETKEYUPINT_OFFSET UNITYSDK_OFFSET(0x1EDA6F70)
#define UNITYENGINE_INPUT_GETKEYUPSTRING_OFFSET UNITYSDK_OFFSET(0x1EDA6F90)
#define UNITYENGINE_INPUT_GETKEYUP_1_OFFSET UNITYSDK_OFFSET(0x1EDA7180)
#define UNITYENGINE_INPUT_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1EDA7140)
#define UNITYENGINE_INPUT_GETKEY_1_OFFSET UNITYSDK_OFFSET(0x1EDA7130)
#define UNITYENGINE_INPUT_GETKEY_OFFSET UNITYSDK_OFFSET(0x1EDA7120)
#define UNITYENGINE_INPUT_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1EDA7020)
#define UNITYENGINE_INPUT_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1EDA7030)
#define UNITYENGINE_INPUT_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1EDA7010)
#define UNITYENGINE_INPUT_GETTOUCH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA70D0)
#define UNITYENGINE_INPUT_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1EDA7060)
#define UNITYENGINE_INPUT_GET_ACCELERATIONEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EDA74A0)
#define UNITYENGINE_INPUT_GET_ACCELERATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1EDA77B0)
#define UNITYENGINE_INPUT_GET_ACCELERATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7470)
#define UNITYENGINE_INPUT_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1EDA7430)
#define UNITYENGINE_INPUT_GET_ANYKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1EDA7220)
#define UNITYENGINE_INPUT_GET_ANYKEY_OFFSET UNITYSDK_OFFSET(0x1EDA7210)
#define UNITYENGINE_INPUT_GET_BACKBUTTONLEAVESAPP_OFFSET UNITYSDK_OFFSET(0x1EDA74B0)
#define UNITYENGINE_INPUT_GET_COMPASS_OFFSET UNITYSDK_OFFSET(0x1EDA7550)
#define UNITYENGINE_INPUT_GET_COMPENSATESENSORS_OFFSET UNITYSDK_OFFSET(0x1EDA7480)
#define UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7340)
#define UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1EDA7310)
#define UNITYENGINE_INPUT_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x1EDA72F0)
#define UNITYENGINE_INPUT_GET_DEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1EDA7420)
#define UNITYENGINE_INPUT_GET_EATKEYPRESSONTEXTFIELDFOCUS_OFFSET UNITYSDK_OFFSET(0x1EDA7380)
#define UNITYENGINE_INPUT_GET_GYRO_OFFSET UNITYSDK_OFFSET(0x1EDA75D0)
#define UNITYENGINE_INPUT_GET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1EDA72D0)
#define UNITYENGINE_INPUT_GET_IMEISSELECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7300)
#define UNITYENGINE_INPUT_GET_INPUTSTRING_OFFSET UNITYSDK_OFFSET(0x1EDA7230)
#define UNITYENGINE_INPUT_GET_ISGYROAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1EDA7410)
#define UNITYENGINE_INPUT_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1EDA74D0)
#define UNITYENGINE_INPUT_GET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7280)
#define UNITYENGINE_INPUT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EDA7240)
#define UNITYENGINE_INPUT_GET_MOUSEPRESENT_OFFSET UNITYSDK_OFFSET(0x1EDA73A0)
#define UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA72C0)
#define UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1EDA7290)
#define UNITYENGINE_INPUT_GET_MULTITOUCHENABLED_OFFSET UNITYSDK_OFFSET(0x1EDA73F0)
#define UNITYENGINE_INPUT_GET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1EDA71F0)
#define UNITYENGINE_INPUT_GET_STYLUSTOUCHSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EDA73D0)
#define UNITYENGINE_INPUT_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1EDA73B0)
#define UNITYENGINE_INPUT_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x1EDA7620)
#define UNITYENGINE_INPUT_GET_TOUCHPRESSURESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EDA73C0)
#define UNITYENGINE_INPUT_GET_TOUCHSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EDA73E0)
#define UNITYENGINE_INPUT_RESETINPUTAXES_OFFSET UNITYSDK_OFFSET(0x1EDA7040)
#define UNITYENGINE_INPUT_SETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1EDA7160)
#define UNITYENGINE_INPUT_SETKEYSTATE_OFFSET UNITYSDK_OFFSET(0x1EDA6F80)
#define UNITYENGINE_INPUT_SETKEYUP_OFFSET UNITYSDK_OFFSET(0x1EDA7170)
#define UNITYENGINE_INPUT_SETKEY_OFFSET UNITYSDK_OFFSET(0x1EDA7150)
#define UNITYENGINE_INPUT_SET_BACKBUTTONLEAVESAPP_OFFSET UNITYSDK_OFFSET(0x1EDA74C0)
#define UNITYENGINE_INPUT_SET_COMPENSATESENSORS_OFFSET UNITYSDK_OFFSET(0x1EDA7490)
#define UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7370)
#define UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1EDA7350)
#define UNITYENGINE_INPUT_SET_EATKEYPRESSONTEXTFIELDFOCUS_OFFSET UNITYSDK_OFFSET(0x1EDA7390)
#define UNITYENGINE_INPUT_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1EDA72E0)
#define UNITYENGINE_INPUT_SET_MULTITOUCHENABLED_OFFSET UNITYSDK_OFFSET(0x1EDA7400)
#define UNITYENGINE_INPUT_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1EDA7200)
#define UNITYENGINE_INPUT_SIMULATETOUCHINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA71E0)
#define UNITYENGINE_INPUT_SIMULATETOUCHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDA71C0)
#define UNITYENGINE_INPUT_SIMULATETOUCH_OFFSET UNITYSDK_OFFSET(0x1EDA71B0)
#define UNITYENGINE_INPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDA78A0)

namespace UnityEngine
{
	inline static constexpr unsigned int Input_TypeDefinitionIndex = 5780;

	class Input : public ::System::Object
	{
	public:
		static ::UnityEngine::LocationService** StaticGet_locationServiceInstance()
		{
			return (::UnityEngine::LocationService**)Il2CppClass::FromTypeDefinitionIndex(Input_TypeDefinitionIndex)->GetStaticField(0x320);
		}
		static ::UnityEngine::Compass** StaticGet_compassInstance()
		{
			return (::UnityEngine::Compass**)Il2CppClass::FromTypeDefinitionIndex(Input_TypeDefinitionIndex)->GetStaticField(0x328);
		}
		static ::UnityEngine::Gyroscope** StaticGet_s_MainGyro()
		{
			return (::UnityEngine::Gyroscope**)Il2CppClass::FromTypeDefinitionIndex(Input_TypeDefinitionIndex)->GetStaticField(0x330);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT__CTOR_OFFSET))(this);
		}

		static ::System::Boolean GetKeyInt(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYINT_OFFSET))(a1);
		}

		static ::System::Boolean GetKeyString(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYSTRING_OFFSET))(a1);
		}

		static ::System::Boolean GetKeyUpInt(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUPINT_OFFSET))(a1);
		}

		static ::System::Void SetKeyState(::UnityEngine::KeyCode a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::KeyCode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SETKEYSTATE_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetKeyUpString(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUPSTRING_OFFSET))(a1);
		}

		static ::System::Boolean GetKeyDownInt(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWNINT_OFFSET))(a1);
		}

		static ::System::Boolean GetKeyDownString(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWNSTRING_OFFSET))(a1);
		}

		static ::System::Single GetAxis(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETAXIS_OFFSET))(a1);
		}

		static ::System::Single GetAxisRaw(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETAXISRAW_OFFSET))(a1);
		}

		static ::System::Boolean GetButton(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETBUTTON_OFFSET))(a1);
		}

		static ::System::Boolean GetButtonDown(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETBUTTONDOWN_OFFSET))(a1);
		}

		static ::System::Boolean GetButtonUp(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETBUTTONUP_OFFSET))(a1);
		}

		static ::System::Boolean GetMouseButton(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETMOUSEBUTTON_OFFSET))(a1);
		}

		static ::System::Boolean GetMouseButtonDown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETMOUSEBUTTONDOWN_OFFSET))(a1);
		}

		static ::System::Boolean GetMouseButtonUp(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETMOUSEBUTTONUP_OFFSET))(a1);
		}

		static ::System::Void ResetInputAxes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_RESETINPUTAXES_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* GetJoystickNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETJOYSTICKNAMES_OFFSET))();
		}

		static ::UnityEngine::Touch GetTouch(::System::Int32 a1)
		{
			return ((::UnityEngine::Touch(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETTOUCH_OFFSET))(a1);
		}

		static ::UnityEngine::AccelerationEvent GetAccelerationEvent(::System::Int32 a1)
		{
			return ((::UnityEngine::AccelerationEvent(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETACCELERATIONEVENT_OFFSET))(a1);
		}

		static ::System::Boolean GetKey(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEY_OFFSET))(a1);
		}

		static ::System::Boolean GetKey_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEY_1_OFFSET))(a1);
		}

		static ::System::Boolean GetKeyUp(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUP_OFFSET))(a1);
		}

		static ::System::Void SetKey(::UnityEngine::KeyCode a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::KeyCode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SETKEY_OFFSET))(a1, a2);
		}

		static ::System::Void SetKeyDown(::UnityEngine::KeyCode a1)
		{
			return ((::System::Void(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SETKEYDOWN_OFFSET))(a1);
		}

		static ::System::Void SetKeyUp(::UnityEngine::KeyCode a1)
		{
			return ((::System::Void(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SETKEYUP_OFFSET))(a1);
		}

		static ::System::Boolean GetKeyUp_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUP_1_OFFSET))(a1);
		}

		static ::System::Boolean GetKeyDown(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWN_OFFSET))(a1);
		}

		static ::System::Boolean GetKeyDown_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWN_1_OFFSET))(a1);
		}

		static ::System::Void SimulateTouch(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::TouchPhase a3)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::TouchPhase))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SIMULATETOUCH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SimulateTouchInternal(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::TouchPhase a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::TouchPhase, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SIMULATETOUCHINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean get_simulateMouseWithTouches()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_SIMULATEMOUSEWITHTOUCHES_OFFSET))();
		}

		static ::System::Void set_simulateMouseWithTouches(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET))(a1);
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

		static ::System::Void set_imeCompositionMode(::UnityEngine::IMECompositionMode a1)
		{
			return ((::System::Void(*)(::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_IMECOMPOSITIONMODE_OFFSET))(a1);
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

		static ::System::Void set_compositionCursorPos(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_OFFSET))(a1);
		}

		static ::System::Boolean get_eatKeyPressOnTextFieldFocus()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_EATKEYPRESSONTEXTFIELDFOCUS_OFFSET))();
		}

		static ::System::Void set_eatKeyPressOnTextFieldFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_EATKEYPRESSONTEXTFIELDFOCUS_OFFSET))(a1);
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

		static ::System::Void set_multiTouchEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_MULTITOUCHENABLED_OFFSET))(a1);
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

		static ::System::Void set_compensateSensors(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_COMPENSATESENSORS_OFFSET))(a1);
		}

		static ::System::Int32 get_accelerationEventCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ACCELERATIONEVENTCOUNT_OFFSET))();
		}

		static ::System::Boolean get_backButtonLeavesApp()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_BACKBUTTONLEAVESAPP_OFFSET))();
		}

		static ::System::Void set_backButtonLeavesApp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_BACKBUTTONLEAVESAPP_OFFSET))(a1);
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

		static ::System::Void GetTouch_Injected(::System::Int32 a1, ::UnityEngine::Touch& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Touch&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETTOUCH_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void GetAccelerationEvent_Injected(::System::Int32 a1, ::UnityEngine::AccelerationEvent& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::AccelerationEvent&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETACCELERATIONEVENT_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SimulateTouchInternal_Injected(::System::Int32 a1, ::UnityEngine::Vector2& a2, ::UnityEngine::TouchPhase a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::TouchPhase, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SIMULATETOUCHINTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void get_mousePosition_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSEPOSITION_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_mouseScrollDelta_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_compositionCursorPos_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_compositionCursorPos_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_acceleration_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ACCELERATION_INJECTED_OFFSET))(a1);
		}
	};
}

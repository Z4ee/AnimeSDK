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

#define UNITYENGINE_INPUT_ENABLEMIHOYOMOBILECLOUDGAMEMODE_OFFSET UNITYSDK_OFFSET(0x1EFF5D20)
#define UNITYENGINE_INPUT_GETACCELERATIONEVENT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFF55A0)
#define UNITYENGINE_INPUT_GETACCELERATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1EFF5570)
#define UNITYENGINE_INPUT_GETAXISRAW_OFFSET UNITYSDK_OFFSET(0x1EFF5460)
#define UNITYENGINE_INPUT_GETAXIS_OFFSET UNITYSDK_OFFSET(0x1EFF5450)
#define UNITYENGINE_INPUT_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1EFF5480)
#define UNITYENGINE_INPUT_GETBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1EFF5490)
#define UNITYENGINE_INPUT_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x1EFF5470)
#define UNITYENGINE_INPUT_GETGYROINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFF5A50)
#define UNITYENGINE_INPUT_GETJOYSTICKNAMES_OFFSET UNITYSDK_OFFSET(0x1EFF54E0)
#define UNITYENGINE_INPUT_GETKEYDOWNINT_OFFSET UNITYSDK_OFFSET(0x1EFF5430)
#define UNITYENGINE_INPUT_GETKEYDOWNSTRING_OFFSET UNITYSDK_OFFSET(0x1EFF5440)
#define UNITYENGINE_INPUT_GETKEYDOWN_1_OFFSET UNITYSDK_OFFSET(0x1EFF5630)
#define UNITYENGINE_INPUT_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1EFF5620)
#define UNITYENGINE_INPUT_GETKEYINT_OFFSET UNITYSDK_OFFSET(0x1EFF53E0)
#define UNITYENGINE_INPUT_GETKEYSTRING_OFFSET UNITYSDK_OFFSET(0x1EFF53F0)
#define UNITYENGINE_INPUT_GETKEYUPINT_OFFSET UNITYSDK_OFFSET(0x1EFF5400)
#define UNITYENGINE_INPUT_GETKEYUPSTRING_OFFSET UNITYSDK_OFFSET(0x1EFF5420)
#define UNITYENGINE_INPUT_GETKEYUP_1_OFFSET UNITYSDK_OFFSET(0x1EFF5610)
#define UNITYENGINE_INPUT_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1EFF55D0)
#define UNITYENGINE_INPUT_GETKEY_1_OFFSET UNITYSDK_OFFSET(0x1EFF55C0)
#define UNITYENGINE_INPUT_GETKEY_OFFSET UNITYSDK_OFFSET(0x1EFF55B0)
#define UNITYENGINE_INPUT_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1EFF54B0)
#define UNITYENGINE_INPUT_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1EFF54C0)
#define UNITYENGINE_INPUT_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1EFF54A0)
#define UNITYENGINE_INPUT_GETTOUCH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFF5560)
#define UNITYENGINE_INPUT_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1EFF54F0)
#define UNITYENGINE_INPUT_GET_ACCELERATIONEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EFF5930)
#define UNITYENGINE_INPUT_GET_ACCELERATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1EFF5C40)
#define UNITYENGINE_INPUT_GET_ACCELERATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFF5900)
#define UNITYENGINE_INPUT_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1EFF58C0)
#define UNITYENGINE_INPUT_GET_ANYKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1EFF56B0)
#define UNITYENGINE_INPUT_GET_ANYKEY_OFFSET UNITYSDK_OFFSET(0x1EFF56A0)
#define UNITYENGINE_INPUT_GET_BACKBUTTONLEAVESAPP_OFFSET UNITYSDK_OFFSET(0x1EFF5940)
#define UNITYENGINE_INPUT_GET_COMPASS_OFFSET UNITYSDK_OFFSET(0x1EFF59E0)
#define UNITYENGINE_INPUT_GET_COMPENSATESENSORS_OFFSET UNITYSDK_OFFSET(0x1EFF5910)
#define UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFF57D0)
#define UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1EFF57A0)
#define UNITYENGINE_INPUT_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x1EFF5780)
#define UNITYENGINE_INPUT_GET_DEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1EFF58B0)
#define UNITYENGINE_INPUT_GET_EATKEYPRESSONTEXTFIELDFOCUS_OFFSET UNITYSDK_OFFSET(0x1EFF5810)
#define UNITYENGINE_INPUT_GET_GYRO_OFFSET UNITYSDK_OFFSET(0x1EFF5A60)
#define UNITYENGINE_INPUT_GET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1EFF5760)
#define UNITYENGINE_INPUT_GET_IMEISSELECTED_OFFSET UNITYSDK_OFFSET(0x1EFF5790)
#define UNITYENGINE_INPUT_GET_INPUTSTRING_OFFSET UNITYSDK_OFFSET(0x1EFF56C0)
#define UNITYENGINE_INPUT_GET_ISGYROAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1EFF58A0)
#define UNITYENGINE_INPUT_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1EFF5960)
#define UNITYENGINE_INPUT_GET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFF5710)
#define UNITYENGINE_INPUT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EFF56D0)
#define UNITYENGINE_INPUT_GET_MOUSEPRESENT_OFFSET UNITYSDK_OFFSET(0x1EFF5830)
#define UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFF5750)
#define UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1EFF5720)
#define UNITYENGINE_INPUT_GET_MULTITOUCHENABLED_OFFSET UNITYSDK_OFFSET(0x1EFF5880)
#define UNITYENGINE_INPUT_GET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1EFF5680)
#define UNITYENGINE_INPUT_GET_STYLUSTOUCHSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EFF5860)
#define UNITYENGINE_INPUT_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1EFF5840)
#define UNITYENGINE_INPUT_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x1EFF5AB0)
#define UNITYENGINE_INPUT_GET_TOUCHPRESSURESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EFF5850)
#define UNITYENGINE_INPUT_GET_TOUCHSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EFF5870)
#define UNITYENGINE_INPUT_RESETINPUTAXES_OFFSET UNITYSDK_OFFSET(0x1EFF54D0)
#define UNITYENGINE_INPUT_SETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1EFF55F0)
#define UNITYENGINE_INPUT_SETKEYSTATE_OFFSET UNITYSDK_OFFSET(0x1EFF5410)
#define UNITYENGINE_INPUT_SETKEYUP_OFFSET UNITYSDK_OFFSET(0x1EFF5600)
#define UNITYENGINE_INPUT_SETKEY_OFFSET UNITYSDK_OFFSET(0x1EFF55E0)
#define UNITYENGINE_INPUT_SET_BACKBUTTONLEAVESAPP_OFFSET UNITYSDK_OFFSET(0x1EFF5950)
#define UNITYENGINE_INPUT_SET_COMPENSATESENSORS_OFFSET UNITYSDK_OFFSET(0x1EFF5920)
#define UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFF5800)
#define UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1EFF57E0)
#define UNITYENGINE_INPUT_SET_EATKEYPRESSONTEXTFIELDFOCUS_OFFSET UNITYSDK_OFFSET(0x1EFF5820)
#define UNITYENGINE_INPUT_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1EFF5770)
#define UNITYENGINE_INPUT_SET_MULTITOUCHENABLED_OFFSET UNITYSDK_OFFSET(0x1EFF5890)
#define UNITYENGINE_INPUT_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1EFF5690)
#define UNITYENGINE_INPUT_SIMULATETOUCHINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFF5670)
#define UNITYENGINE_INPUT_SIMULATETOUCHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFF5650)
#define UNITYENGINE_INPUT_SIMULATETOUCH_OFFSET UNITYSDK_OFFSET(0x1EFF5640)
#define UNITYENGINE_INPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFF5D30)

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

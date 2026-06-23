#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Gyroscope; }

#define UNITYENGINE_INPUT_GETAXISRAW_OFFSET UNITYSDK_OFFSET(0x1E815120)
#define UNITYENGINE_INPUT_GETAXIS_OFFSET UNITYSDK_OFFSET(0x1E815110)
#define UNITYENGINE_INPUT_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1E815140)
#define UNITYENGINE_INPUT_GETBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1E815150)
#define UNITYENGINE_INPUT_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x1E815130)
#define UNITYENGINE_INPUT_GETGYROINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E815430)
#define UNITYENGINE_INPUT_GETKEYDOWNINT_OFFSET UNITYSDK_OFFSET(0x1E815100)
#define UNITYENGINE_INPUT_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1E815230)
#define UNITYENGINE_INPUT_GETKEYINT_OFFSET UNITYSDK_OFFSET(0x1E8150E0)
#define UNITYENGINE_INPUT_GETKEYUPINT_OFFSET UNITYSDK_OFFSET(0x1E8150F0)
#define UNITYENGINE_INPUT_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1E815220)
#define UNITYENGINE_INPUT_GETKEY_OFFSET UNITYSDK_OFFSET(0x1E815210)
#define UNITYENGINE_INPUT_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1E815170)
#define UNITYENGINE_INPUT_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1E815180)
#define UNITYENGINE_INPUT_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1E815160)
#define UNITYENGINE_INPUT_GETTOUCH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E815200)
#define UNITYENGINE_INPUT_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1E815190)
#define UNITYENGINE_INPUT_GET_ACCELERATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E815420)
#define UNITYENGINE_INPUT_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1E8153E0)
#define UNITYENGINE_INPUT_GET_ANYKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1E815260)
#define UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E815360)
#define UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1E815330)
#define UNITYENGINE_INPUT_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x1E815320)
#define UNITYENGINE_INPUT_GET_GYRO_OFFSET UNITYSDK_OFFSET(0x1E815440)
#define UNITYENGINE_INPUT_GET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1E815300)
#define UNITYENGINE_INPUT_GET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8152B0)
#define UNITYENGINE_INPUT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E815270)
#define UNITYENGINE_INPUT_GET_MOUSEPRESENT_OFFSET UNITYSDK_OFFSET(0x1E8153A0)
#define UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8152F0)
#define UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1E8152C0)
#define UNITYENGINE_INPUT_GET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1E815240)
#define UNITYENGINE_INPUT_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1E8153B0)
#define UNITYENGINE_INPUT_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x1E8154C0)
#define UNITYENGINE_INPUT_GET_TOUCHSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1E8153C0)
#define UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E815390)
#define UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1E815370)
#define UNITYENGINE_INPUT_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1E815310)
#define UNITYENGINE_INPUT_SET_MULTITOUCHENABLED_OFFSET UNITYSDK_OFFSET(0x1E8153D0)
#define UNITYENGINE_INPUT_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1E815250)
#define UNITYENGINE_INPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E815660)

namespace UnityEngine
{
	inline static constexpr unsigned int Input_TypeDefinitionIndex = 7690;

	class Input : public ::System::Object
	{
	public:
		static ::UnityEngine::Gyroscope** StaticGet_s_MainGyro()
		{
			return (::UnityEngine::Gyroscope**)Il2CppClass::FromTypeDefinitionIndex(Input_TypeDefinitionIndex)->GetStaticField(0x6670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT__CTOR_OFFSET))(this);
		}

		static ::System::Boolean GetKeyInt(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYINT_OFFSET))(key);
		}

		static ::System::Boolean GetKeyUpInt(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUPINT_OFFSET))(key);
		}

		static ::System::Boolean GetKeyDownInt(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWNINT_OFFSET))(key);
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

		static ::UnityEngine::Touch GetTouch(::System::Int32 index)
		{
			return ((::UnityEngine::Touch(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETTOUCH_OFFSET))(index);
		}

		static ::System::Boolean GetKey(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEY_OFFSET))(key);
		}

		static ::System::Boolean GetKeyUp(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUP_OFFSET))(key);
		}

		static ::System::Boolean GetKeyDown(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWN_OFFSET))(key);
		}

		static ::System::Boolean get_simulateMouseWithTouches()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_SIMULATEMOUSEWITHTOUCHES_OFFSET))();
		}

		static ::System::Void set_simulateMouseWithTouches(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET))(value);
		}

		static ::System::Boolean get_anyKeyDown()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ANYKEYDOWN_OFFSET))();
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

		static ::UnityEngine::Vector2 get_compositionCursorPos()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_OFFSET))();
		}

		static ::System::Void set_compositionCursorPos(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_OFFSET))(value);
		}

		static ::System::Boolean get_mousePresent()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSEPRESENT_OFFSET))();
		}

		static ::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_TOUCHCOUNT_OFFSET))();
		}

		static ::System::Boolean get_touchSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_TOUCHSUPPORTED_OFFSET))();
		}

		static ::System::Void set_multiTouchEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_MULTITOUCHENABLED_OFFSET))(value);
		}

		static ::UnityEngine::Vector3 get_acceleration()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ACCELERATION_OFFSET))();
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

		static ::System::Void GetTouch_Injected(::System::Int32 index, ::UnityEngine::Touch& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Touch&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETTOUCH_INJECTED_OFFSET))(index, ret);
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

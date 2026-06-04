#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETAXISRAW_OFFSET UNITYSDK_OFFSET(0x1B374490)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1B3744A0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1B374010)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1B374020)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1B374030)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1B374210)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1B373FB0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x1B373F80)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1B373F90)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B374040)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSEPRESENT_OFFSET UNITYSDK_OFFSET(0x1B374000)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1B374050)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1B374090)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_TOUCHSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B374080)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_SET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1B373FE0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1B373FA0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3744B0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseInput_TypeDefinitionIndex = 6094;

	class BaseInput : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT__CTOR_OFFSET))(this);
		}

		::System::String* get_compositionString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_COMPOSITIONSTRING_OFFSET))(this);
		}

		::UnityEngine::IMECompositionMode get_imeCompositionMode()
		{
			return ((::UnityEngine::IMECompositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_IMECOMPOSITIONMODE_OFFSET))(this);
		}

		::System::Void set_imeCompositionMode(::UnityEngine::IMECompositionMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_SET_IMECOMPOSITIONMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_compositionCursorPos()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_COMPOSITIONCURSORPOS_OFFSET))(this);
		}

		::System::Void set_compositionCursorPos(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_SET_COMPOSITIONCURSORPOS_OFFSET))(this, a1);
		}

		::System::Boolean get_mousePresent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSEPRESENT_OFFSET))(this);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTONDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTONUP_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButton(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETMOUSEBUTTON_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_mousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_mouseScrollDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_MOUSESCROLLDELTA_OFFSET))(this);
		}

		::System::Boolean get_touchSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_TOUCHSUPPORTED_OFFSET))(this);
		}

		::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GET_TOUCHCOUNT_OFFSET))(this);
		}

		::UnityEngine::Touch GetTouch(::System::Int32 a1)
		{
			return ((::UnityEngine::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETTOUCH_OFFSET))(this, a1);
		}

		::System::Single GetAxisRaw(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETAXISRAW_OFFSET))(this, a1);
		}

		::System::Boolean GetButtonDown(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUT_GETBUTTONDOWN_OFFSET))(this, a1);
		}
	};
}

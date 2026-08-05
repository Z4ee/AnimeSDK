#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventModifiers.h"
#include "unitysdk/UnityEngine/EventType.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/PointerType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_EVENT_COPYFROMPTR_OFFSET UNITYSDK_OFFSET(0x1E41A220)
#define UNITYENGINE_EVENT_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1E41A450)
#define UNITYENGINE_EVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41A680)
#define UNITYENGINE_EVENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E41A3D0)
#define UNITYENGINE_EVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41A5E0)
#define UNITYENGINE_EVENT_GETTYPEFORCONTROL_OFFSET UNITYSDK_OFFSET(0x1E41A210)
#define UNITYENGINE_EVENT_GET_ALT_OFFSET UNITYSDK_OFFSET(0x1E41A4C0)
#define UNITYENGINE_EVENT_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x1E41A0F0)
#define UNITYENGINE_EVENT_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1E41A130)
#define UNITYENGINE_EVENT_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1E41A120)
#define UNITYENGINE_EVENT_GET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0x1E41A1B0)
#define UNITYENGINE_EVENT_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0x1E41A4E0)
#define UNITYENGINE_EVENT_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x1E41A4A0)
#define UNITYENGINE_EVENT_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E41A500)
#define UNITYENGINE_EVENT_GET_DELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E41A0D0)
#define UNITYENGINE_EVENT_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1E41A0A0)
#define UNITYENGINE_EVENT_GET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x1E41A170)
#define UNITYENGINE_EVENT_GET_ISDIRECTMANIPULATIONDEVICE_OFFSET UNITYSDK_OFFSET(0x1E41A5B0)
#define UNITYENGINE_EVENT_GET_ISKEY_OFFSET UNITYSDK_OFFSET(0x1E41A560)
#define UNITYENGINE_EVENT_GET_ISMOUSE_OFFSET UNITYSDK_OFFSET(0x1E41A580)
#define UNITYENGINE_EVENT_GET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x1E41A150)
#define UNITYENGINE_EVENT_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x1E41A100)
#define UNITYENGINE_EVENT_GET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E41A060)
#define UNITYENGINE_EVENT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E41A030)
#define UNITYENGINE_EVENT_GET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x1E41A0E0)
#define UNITYENGINE_EVENT_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x1E41A110)
#define UNITYENGINE_EVENT_GET_RAWTYPE_OFFSET UNITYSDK_OFFSET(0x1E41A020)
#define UNITYENGINE_EVENT_GET_SHIFT_OFFSET UNITYSDK_OFFSET(0x1E41A480)
#define UNITYENGINE_EVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E41A190)
#define UNITYENGINE_EVENT_INTERNAL_COPY_OFFSET UNITYSDK_OFFSET(0x1E41A200)
#define UNITYENGINE_EVENT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1E41A1E0)
#define UNITYENGINE_EVENT_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E41A1F0)
#define UNITYENGINE_EVENT_INTERNAL_MAKEMASTEREVENTCURRENT_OFFSET UNITYSDK_OFFSET(0x1E41A250)
#define UNITYENGINE_EVENT_INTERNAL_SETNATIVEEVENT_OFFSET UNITYSDK_OFFSET(0x1E41A240)
#define UNITYENGINE_EVENT_INTERNAL_USE_OFFSET UNITYSDK_OFFSET(0x1E41A1D0)
#define UNITYENGINE_EVENT_POPEVENT_OFFSET UNITYSDK_OFFSET(0x1E41A230)
#define UNITYENGINE_EVENT_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1E41A140)
#define UNITYENGINE_EVENT_SET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0x1E41A1C0)
#define UNITYENGINE_EVENT_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E41A510)
#define UNITYENGINE_EVENT_SET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x1E41A180)
#define UNITYENGINE_EVENT_SET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x1E41A160)
#define UNITYENGINE_EVENT_SET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E41A090)
#define UNITYENGINE_EVENT_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E41A070)
#define UNITYENGINE_EVENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E41A1A0)
#define UNITYENGINE_EVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41A800)
#define UNITYENGINE_EVENT_USE_OFFSET UNITYSDK_OFFSET(0x1E41B2D0)
#define UNITYENGINE_EVENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41A310)
#define UNITYENGINE_EVENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E41A350)
#define UNITYENGINE_EVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E41A330)

namespace UnityEngine
{
	inline static constexpr unsigned int Event_TypeDefinitionIndex = 6398;

	class Event : public ::System::Object
	{
	public:
		static ::UnityEngine::Event** StaticGet_s_MasterEvent()
		{
			return (::UnityEngine::Event**)Il2CppClass::FromTypeDefinitionIndex(Event_TypeDefinitionIndex)->GetStaticField(0x5900);
		}
		static ::UnityEngine::Event** StaticGet_s_Current()
		{
			return (::UnityEngine::Event**)Il2CppClass::FromTypeDefinitionIndex(Event_TypeDefinitionIndex)->GetStaticField(0x5908);
		}
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 displayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT__CTOR_1_OFFSET))(this, displayIndex);
		}

		::System::Void _ctor_2(::UnityEngine::Event* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT__CTOR_2_OFFSET))(this, other);
		}

		::UnityEngine::EventType get_rawType()
		{
			return ((::UnityEngine::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_RAWTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_mousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::System::Void set_mousePosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_MOUSEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_delta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_DELTA_OFFSET))(this);
		}

		::UnityEngine::PointerType get_pointerType()
		{
			return ((::UnityEngine::PointerType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_POINTERTYPE_OFFSET))(this);
		}

		::System::Int32 get_button()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_BUTTON_OFFSET))(this);
		}

		::UnityEngine::EventModifiers get_modifiers()
		{
			return ((::UnityEngine::EventModifiers(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_MODIFIERS_OFFSET))(this);
		}

		::System::Single get_pressure()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_PRESSURE_OFFSET))(this);
		}

		::System::Int32 get_clickCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_CLICKCOUNT_OFFSET))(this);
		}

		::System::Char get_character()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_CHARACTER_OFFSET))(this);
		}

		::System::Void set_character(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_CHARACTER_OFFSET))(this, value);
		}

		::UnityEngine::KeyCode get_keyCode()
		{
			return ((::UnityEngine::KeyCode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_KEYCODE_OFFSET))(this);
		}

		::System::Void set_keyCode(::UnityEngine::KeyCode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_KEYCODE_OFFSET))(this, value);
		}

		::System::Int32 get_displayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_DISPLAYINDEX_OFFSET))(this);
		}

		::System::Void set_displayIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_DISPLAYINDEX_OFFSET))(this, value);
		}

		::UnityEngine::EventType get_type()
		{
			return ((::UnityEngine::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::EventType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventType))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_TYPE_OFFSET))(this, value);
		}

		::System::String* get_commandName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_COMMANDNAME_OFFSET))(this);
		}

		::System::Void set_commandName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_COMMANDNAME_OFFSET))(this, value);
		}

		::System::Void Internal_Use()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_USE_OFFSET))(this);
		}

		static ::System::IntPtr Internal_Create(::System::Int32 displayIndex)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_CREATE_OFFSET))(displayIndex);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_DESTROY_OFFSET))(ptr);
		}

		static ::System::IntPtr Internal_Copy(::System::IntPtr otherPtr)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_COPY_OFFSET))(otherPtr);
		}

		::UnityEngine::EventType GetTypeForControl(::System::Int32 controlID)
		{
			return ((::UnityEngine::EventType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GETTYPEFORCONTROL_OFFSET))(this, controlID);
		}

		::System::Void CopyFromPtr(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_COPYFROMPTR_OFFSET))(this, ptr);
		}

		static ::System::Boolean PopEvent(::UnityEngine::Event* outEvent)
		{
			return ((::System::Boolean(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_POPEVENT_OFFSET))(outEvent);
		}

		static ::System::Void Internal_SetNativeEvent(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_SETNATIVEEVENT_OFFSET))(ptr);
		}

		static ::System::Void Internal_MakeMasterEventCurrent(::System::Int32 displayIndex)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_MAKEMASTEREVENTCURRENT_OFFSET))(displayIndex);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_FINALIZE_OFFSET))(this);
		}

		::System::Void CopyFrom(::UnityEngine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_COPYFROM_OFFSET))(this, e);
		}

		::System::Boolean get_shift()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_SHIFT_OFFSET))(this);
		}

		::System::Boolean get_control()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_CONTROL_OFFSET))(this);
		}

		::System::Boolean get_alt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_ALT_OFFSET))(this);
		}

		::System::Boolean get_command()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_COMMAND_OFFSET))(this);
		}

		static ::UnityEngine::Event* get_current()
		{
			return ((::UnityEngine::Event*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::Event* value)
		{
			return ((::System::Void(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_CURRENT_OFFSET))(value);
		}

		::System::Boolean get_isKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_ISKEY_OFFSET))(this);
		}

		::System::Boolean get_isMouse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_ISMOUSE_OFFSET))(this);
		}

		::System::Boolean get_isDirectManipulationDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_ISDIRECTMANIPULATIONDEVICE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_EQUALS_OFFSET))(this, obj);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_TOSTRING_OFFSET))(this);
		}

		::System::Void Use()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_USE_OFFSET))(this);
		}

		::System::Void get_mousePosition_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_MOUSEPOSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_mousePosition_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_MOUSEPOSITION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_delta_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_DELTA_INJECTED_OFFSET))(this, ret);
		}
	};
}

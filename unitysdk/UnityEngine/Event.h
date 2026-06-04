#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventModifiers.h"
#include "unitysdk/UnityEngine/EventType.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/PointerType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_EVENT_COPYFROMPTR_OFFSET UNITYSDK_OFFSET(0x1B2EB320)
#define UNITYENGINE_EVENT_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1B2EB580)
#define UNITYENGINE_EVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B2ECC80)
#define UNITYENGINE_EVENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B2EB500)
#define UNITYENGINE_EVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B2ECBE0)
#define UNITYENGINE_EVENT_GETTYPEFORCONTROL_OFFSET UNITYSDK_OFFSET(0x1B2EB310)
#define UNITYENGINE_EVENT_GET_ALT_OFFSET UNITYSDK_OFFSET(0x1B2EB5F0)
#define UNITYENGINE_EVENT_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x1B2EB1E0)
#define UNITYENGINE_EVENT_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1B2EB230)
#define UNITYENGINE_EVENT_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2EB220)
#define UNITYENGINE_EVENT_GET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0x1B2EB2B0)
#define UNITYENGINE_EVENT_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0x1B2EB610)
#define UNITYENGINE_EVENT_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x1B2EB5D0)
#define UNITYENGINE_EVENT_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B2EB630)
#define UNITYENGINE_EVENT_GET_DELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2EB1C0)
#define UNITYENGINE_EVENT_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1B2EB190)
#define UNITYENGINE_EVENT_GET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x1B2EB270)
#define UNITYENGINE_EVENT_GET_ISDIRECTMANIPULATIONDEVICE_OFFSET UNITYSDK_OFFSET(0x1B2EB6E0)
#define UNITYENGINE_EVENT_GET_ISKEY_OFFSET UNITYSDK_OFFSET(0x1B2EB690)
#define UNITYENGINE_EVENT_GET_ISMOUSE_OFFSET UNITYSDK_OFFSET(0x1B2EB6B0)
#define UNITYENGINE_EVENT_GET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x1B2EB250)
#define UNITYENGINE_EVENT_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x1B2EB1F0)
#define UNITYENGINE_EVENT_GET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2EB150)
#define UNITYENGINE_EVENT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B2EB120)
#define UNITYENGINE_EVENT_GET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x1B2EB1D0)
#define UNITYENGINE_EVENT_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x1B2EB210)
#define UNITYENGINE_EVENT_GET_RAWTYPE_OFFSET UNITYSDK_OFFSET(0x1B2EB110)
#define UNITYENGINE_EVENT_GET_SHIFT_OFFSET UNITYSDK_OFFSET(0x1B2EB5B0)
#define UNITYENGINE_EVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B2EB290)
#define UNITYENGINE_EVENT_INTERNAL_COPY_OFFSET UNITYSDK_OFFSET(0x1B2EB300)
#define UNITYENGINE_EVENT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2EB2E0)
#define UNITYENGINE_EVENT_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B2EB2F0)
#define UNITYENGINE_EVENT_INTERNAL_MAKEMASTEREVENTCURRENT_OFFSET UNITYSDK_OFFSET(0x1B2EB3C0)
#define UNITYENGINE_EVENT_INTERNAL_SETNATIVEEVENT_OFFSET UNITYSDK_OFFSET(0x1B2EB3B0)
#define UNITYENGINE_EVENT_INTERNAL_USE_OFFSET UNITYSDK_OFFSET(0x1B2EB2D0)
#define UNITYENGINE_EVENT_KEYBOARDEVENT_OFFSET UNITYSDK_OFFSET(0x1B2EB710)
#define UNITYENGINE_EVENT_POPEVENT_OFFSET UNITYSDK_OFFSET(0x1B2EB330)
#define UNITYENGINE_EVENT_PUSHGUIEVENT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2EB3A0)
#define UNITYENGINE_EVENT_PUSHGUIEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2EB370)
#define UNITYENGINE_EVENT_PUSHGUIEVENT_OFFSET UNITYSDK_OFFSET(0x1B2EB340)
#define UNITYENGINE_EVENT_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1B2EB240)
#define UNITYENGINE_EVENT_SET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0x1B2EB2C0)
#define UNITYENGINE_EVENT_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B2EB640)
#define UNITYENGINE_EVENT_SET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x1B2EB280)
#define UNITYENGINE_EVENT_SET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x1B2EB260)
#define UNITYENGINE_EVENT_SET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x1B2EB200)
#define UNITYENGINE_EVENT_SET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2EB180)
#define UNITYENGINE_EVENT_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B2EB160)
#define UNITYENGINE_EVENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B2EB2A0)
#define UNITYENGINE_EVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B2ECDE0)
#define UNITYENGINE_EVENT_USE_OFFSET UNITYSDK_OFFSET(0x1B2ED590)
#define UNITYENGINE_EVENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2EB440)
#define UNITYENGINE_EVENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B2EB480)
#define UNITYENGINE_EVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EB460)

namespace UnityEngine
{
	inline static constexpr unsigned int Event_TypeDefinitionIndex = 5203;

	class Event : public ::System::Object
	{
	public:
		static ::UnityEngine::Event** StaticGet_s_Current()
		{
			return (::UnityEngine::Event**)Il2CppClass::FromTypeDefinitionIndex(Event_TypeDefinitionIndex)->GetStaticField(0x36880);
		}
		static ::UnityEngine::Event** StaticGet_s_MasterEvent()
		{
			return (::UnityEngine::Event**)Il2CppClass::FromTypeDefinitionIndex(Event_TypeDefinitionIndex)->GetStaticField(0x36888);
		}
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::UnityEngine::Event* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT__CTOR_2_OFFSET))(this, a1);
		}

		::UnityEngine::EventType get_rawType()
		{
			return ((::UnityEngine::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_RAWTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_mousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::System::Void set_mousePosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_MOUSEPOSITION_OFFSET))(this, a1);
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

		::System::Void set_modifiers(::UnityEngine::EventModifiers a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventModifiers))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_MODIFIERS_OFFSET))(this, a1);
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

		::System::Void set_character(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_CHARACTER_OFFSET))(this, a1);
		}

		::UnityEngine::KeyCode get_keyCode()
		{
			return ((::UnityEngine::KeyCode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_KEYCODE_OFFSET))(this);
		}

		::System::Void set_keyCode(::UnityEngine::KeyCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_KEYCODE_OFFSET))(this, a1);
		}

		::System::Int32 get_displayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_DISPLAYINDEX_OFFSET))(this);
		}

		::System::Void set_displayIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_DISPLAYINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::EventType get_type()
		{
			return ((::UnityEngine::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::EventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventType))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_TYPE_OFFSET))(this, a1);
		}

		::System::String* get_commandName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_COMMANDNAME_OFFSET))(this);
		}

		::System::Void set_commandName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_COMMANDNAME_OFFSET))(this, a1);
		}

		::System::Void Internal_Use()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_USE_OFFSET))(this);
		}

		static ::System::IntPtr Internal_Create(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_CREATE_OFFSET))(a1);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_DESTROY_OFFSET))(a1);
		}

		static ::System::IntPtr Internal_Copy(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_COPY_OFFSET))(a1);
		}

		::UnityEngine::EventType GetTypeForControl(::System::Int32 a1)
		{
			return ((::UnityEngine::EventType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GETTYPEFORCONTROL_OFFSET))(this, a1);
		}

		::System::Void CopyFromPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_COPYFROMPTR_OFFSET))(this, a1);
		}

		static ::System::Boolean PopEvent(::UnityEngine::Event* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_POPEVENT_OFFSET))(a1);
		}

		static ::System::Void PushGUIEvent(::UnityEngine::EventType a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::UnityEngine::EventType, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_PUSHGUIEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PushGUIEvent_Internal(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_PUSHGUIEVENT_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Internal_SetNativeEvent(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_SETNATIVEEVENT_OFFSET))(a1);
		}

		static ::System::Void Internal_MakeMasterEventCurrent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_INTERNAL_MAKEMASTEREVENTCURRENT_OFFSET))(a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_FINALIZE_OFFSET))(this);
		}

		::System::Void CopyFrom(::UnityEngine::Event* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_COPYFROM_OFFSET))(this, a1);
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

		static ::System::Void set_current(::UnityEngine::Event* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_CURRENT_OFFSET))(a1);
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

		static ::UnityEngine::Event* KeyboardEvent(::System::String* a1)
		{
			return ((::UnityEngine::Event*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_KEYBOARDEVENT_OFFSET))(a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_TOSTRING_OFFSET))(this);
		}

		::System::Void Use()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_USE_OFFSET))(this);
		}

		::System::Void get_mousePosition_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_MOUSEPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_mousePosition_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_MOUSEPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_delta_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_GET_DELTA_INJECTED_OFFSET))(this, a1);
		}

		static ::System::Void PushGUIEvent_Internal_Injected(::System::Int32 a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_PUSHGUIEVENT_INTERNAL_INJECTED_OFFSET))(a1, a2, a3);
		}
	};
}

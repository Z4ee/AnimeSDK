#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventModifiers.h"
#include "unitysdk/UnityEngine/EventType.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/PointerType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_EVENT_COPYFROMPTR_OFFSET UNITYSDK_OFFSET(0x18A64CB0)
#define UNITYENGINE_EVENT_COPYFROM_OFFSET UNITYSDK_OFFSET(0x18A64F10)
#define UNITYENGINE_EVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x18A665F0)
#define UNITYENGINE_EVENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18A64E90)
#define UNITYENGINE_EVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18A66550)
#define UNITYENGINE_EVENT_GETTYPEFORCONTROL_OFFSET UNITYSDK_OFFSET(0x18A64CA0)
#define UNITYENGINE_EVENT_GET_ALT_OFFSET UNITYSDK_OFFSET(0x18A64F80)
#define UNITYENGINE_EVENT_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x18A64B70)
#define UNITYENGINE_EVENT_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x18A64BC0)
#define UNITYENGINE_EVENT_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x18A64BB0)
#define UNITYENGINE_EVENT_GET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0x18A64C40)
#define UNITYENGINE_EVENT_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0x18A64FA0)
#define UNITYENGINE_EVENT_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x18A64F60)
#define UNITYENGINE_EVENT_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18A64FC0)
#define UNITYENGINE_EVENT_GET_DELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A64B50)
#define UNITYENGINE_EVENT_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x18A64B20)
#define UNITYENGINE_EVENT_GET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x18A64C00)
#define UNITYENGINE_EVENT_GET_ISDIRECTMANIPULATIONDEVICE_OFFSET UNITYSDK_OFFSET(0x18A65070)
#define UNITYENGINE_EVENT_GET_ISKEY_OFFSET UNITYSDK_OFFSET(0x18A65020)
#define UNITYENGINE_EVENT_GET_ISMOUSE_OFFSET UNITYSDK_OFFSET(0x18A65040)
#define UNITYENGINE_EVENT_GET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x18A64BE0)
#define UNITYENGINE_EVENT_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x18A64B80)
#define UNITYENGINE_EVENT_GET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A64AE0)
#define UNITYENGINE_EVENT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x18A64AB0)
#define UNITYENGINE_EVENT_GET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x18A64B60)
#define UNITYENGINE_EVENT_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x18A64BA0)
#define UNITYENGINE_EVENT_GET_RAWTYPE_OFFSET UNITYSDK_OFFSET(0x18A64AA0)
#define UNITYENGINE_EVENT_GET_SHIFT_OFFSET UNITYSDK_OFFSET(0x18A64F40)
#define UNITYENGINE_EVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18A64C20)
#define UNITYENGINE_EVENT_INTERNAL_COPY_OFFSET UNITYSDK_OFFSET(0x18A64C90)
#define UNITYENGINE_EVENT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x18A64C70)
#define UNITYENGINE_EVENT_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x18A64C80)
#define UNITYENGINE_EVENT_INTERNAL_MAKEMASTEREVENTCURRENT_OFFSET UNITYSDK_OFFSET(0x18A64D50)
#define UNITYENGINE_EVENT_INTERNAL_SETNATIVEEVENT_OFFSET UNITYSDK_OFFSET(0x18A64D40)
#define UNITYENGINE_EVENT_INTERNAL_USE_OFFSET UNITYSDK_OFFSET(0x18A64C60)
#define UNITYENGINE_EVENT_KEYBOARDEVENT_OFFSET UNITYSDK_OFFSET(0x18A650A0)
#define UNITYENGINE_EVENT_POPEVENT_OFFSET UNITYSDK_OFFSET(0x18A64CC0)
#define UNITYENGINE_EVENT_PUSHGUIEVENT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A64D30)
#define UNITYENGINE_EVENT_PUSHGUIEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18A64D00)
#define UNITYENGINE_EVENT_PUSHGUIEVENT_OFFSET UNITYSDK_OFFSET(0x18A64CD0)
#define UNITYENGINE_EVENT_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x18A64BD0)
#define UNITYENGINE_EVENT_SET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0x18A64C50)
#define UNITYENGINE_EVENT_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18A64FD0)
#define UNITYENGINE_EVENT_SET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x18A64C10)
#define UNITYENGINE_EVENT_SET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x18A64BF0)
#define UNITYENGINE_EVENT_SET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x18A64B90)
#define UNITYENGINE_EVENT_SET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A64B10)
#define UNITYENGINE_EVENT_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x18A64AF0)
#define UNITYENGINE_EVENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x18A64C30)
#define UNITYENGINE_EVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18A66750)
#define UNITYENGINE_EVENT_USE_OFFSET UNITYSDK_OFFSET(0x18A67070)
#define UNITYENGINE_EVENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A64DD0)
#define UNITYENGINE_EVENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18A64E10)
#define UNITYENGINE_EVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A64DF0)

namespace UnityEngine
{
	inline static constexpr unsigned int Event_TypeDefinitionIndex = 5101;

	class Event : public ::System::Object
	{
	public:
		static ::UnityEngine::Event** StaticGet_s_MasterEvent()
		{
			return (::UnityEngine::Event**)Il2CppClass::FromTypeDefinitionIndex(Event_TypeDefinitionIndex)->GetStaticField(0x15C60);
		}
		static ::UnityEngine::Event** StaticGet_s_Current()
		{
			return (::UnityEngine::Event**)Il2CppClass::FromTypeDefinitionIndex(Event_TypeDefinitionIndex)->GetStaticField(0x15C68);
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

		::System::Void set_modifiers(::UnityEngine::EventModifiers value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventModifiers))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_SET_MODIFIERS_OFFSET))(this, value);
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

		static ::System::Void PushGUIEvent(::UnityEngine::EventType type, ::UnityEngine::Vector2 mousePosition, ::UnityEngine::Vector2 delta)
		{
			return ((::System::Void(*)(::UnityEngine::EventType, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_PUSHGUIEVENT_OFFSET))(type, mousePosition, delta);
		}

		static ::System::Void PushGUIEvent_Internal(::System::Int32 type, ::UnityEngine::Vector2 mousePosition, ::UnityEngine::Vector2 delta)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_PUSHGUIEVENT_INTERNAL_OFFSET))(type, mousePosition, delta);
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

		static ::UnityEngine::Event* KeyboardEvent(::System::String* key)
		{
			return ((::UnityEngine::Event*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_KEYBOARDEVENT_OFFSET))(key);
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

		static ::System::Void PushGUIEvent_Internal_Injected(::System::Int32 type, ::UnityEngine::Vector2& mousePosition, ::UnityEngine::Vector2& delta)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENT_PUSHGUIEVENT_INTERNAL_INJECTED_OFFSET))(type, mousePosition, delta);
		}
	};
}

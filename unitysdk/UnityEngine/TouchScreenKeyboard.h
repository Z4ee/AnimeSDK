#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RangeInt.h"
#include "unitysdk/UnityEngine/TouchScreenKeyboardType.h"
#include "unitysdk/UnityEngine/TouchScreenKeyboard_InternalConstructorHelperArguments.h"
#include "unitysdk/UnityEngine/TouchScreenKeyboard_Status.h"

namespace System { class String; }

#define UNITYENGINE_TOUCHSCREENKEYBOARD_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B2E7290)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B2E7340)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GETSELECTION_OFFSET UNITYSDK_OFFSET(0x1B2E7760)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B2E76D0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_CANGETSELECTION_OFFSET UNITYSDK_OFFSET(0x1B2E7710)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_CANSETSELECTION_OFFSET UNITYSDK_OFFSET(0x1B2E7720)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_DISABLEINPLACEEDITING_OFFSET UNITYSDK_OFFSET(0x1B2E7580)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISINPLACEEDITINGALLOWED_OFFSET UNITYSDK_OFFSET(0x1B2E7590)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B2E7520)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0x1B2E7730)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B2E76F0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B2E76A0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B2E7280)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_OPEN_OFFSET UNITYSDK_OFFSET(0x1B2E75A0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SETSELECTION_OFFSET UNITYSDK_OFFSET(0x1B2E7820)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B2E76E0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_CHARACTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1B2E7700)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_HIDEINPUT_OFFSET UNITYSDK_OFFSET(0x1B2E76C0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_SELECTION_OFFSET UNITYSDK_OFFSET(0x1B2E7770)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B2E76B0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPER_OFFSET UNITYSDK_OFFSET(0x1B2E7510)
#define UNITYENGINE_TOUCHSCREENKEYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E7440)

namespace UnityEngine
{
	inline static constexpr unsigned int TouchScreenKeyboard_TypeDefinitionIndex = 5403;

	class TouchScreenKeyboard : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__disableInPlaceEditing_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TouchScreenKeyboard_TypeDefinitionIndex)->GetStaticField(0x2E90);
		}
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::String* text, ::UnityEngine::TouchScreenKeyboardType keyboardType, ::System::Boolean autocorrection, ::System::Boolean multiline, ::System::Boolean secure, ::System::Boolean alert, ::System::String* textPlaceholder, ::System::Int32 characterLimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::TouchScreenKeyboardType, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD__CTOR_OFFSET))(this, text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_INTERNAL_DESTROY_OFFSET))(ptr);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_DESTROY_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr TouchScreenKeyboard_InternalConstructorHelper(::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments& arguments, ::System::String* text, ::System::String* textPlaceholder)
		{
			return ((::System::IntPtr(*)(::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPER_OFFSET))(arguments, text, textPlaceholder);
		}

		static ::System::Boolean get_isSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISSUPPORTED_OFFSET))();
		}

		static ::System::Boolean get_disableInPlaceEditing()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_DISABLEINPLACEEDITING_OFFSET))();
		}

		static ::System::Boolean get_isInPlaceEditingAllowed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISINPLACEEDITINGALLOWED_OFFSET))();
		}

		static ::UnityEngine::TouchScreenKeyboard* Open(::System::String* text, ::UnityEngine::TouchScreenKeyboardType keyboardType, ::System::Boolean autocorrection, ::System::Boolean multiline, ::System::Boolean secure, ::System::Boolean alert, ::System::String* textPlaceholder, ::System::Int32 characterLimit)
		{
			return ((::UnityEngine::TouchScreenKeyboard*(*)(::System::String*, ::UnityEngine::TouchScreenKeyboardType, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_OPEN_OFFSET))(text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_TEXT_OFFSET))(this, value);
		}

		static ::System::Void set_hideInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_HIDEINPUT_OFFSET))(value);
		}

		::System::Boolean get_active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_active(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_ACTIVE_OFFSET))(this, value);
		}

		::UnityEngine::TouchScreenKeyboard_Status get_status()
		{
			return ((::UnityEngine::TouchScreenKeyboard_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_characterLimit(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_CHARACTERLIMIT_OFFSET))(this, value);
		}

		::System::Boolean get_canGetSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_CANGETSELECTION_OFFSET))(this);
		}

		::System::Boolean get_canSetSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_CANSETSELECTION_OFFSET))(this);
		}

		::UnityEngine::RangeInt get_selection()
		{
			return ((::UnityEngine::RangeInt(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_SELECTION_OFFSET))(this);
		}

		::System::Void set_selection(::UnityEngine::RangeInt value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RangeInt))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_SELECTION_OFFSET))(this, value);
		}

		static ::System::Void GetSelection(::System::Int32& start, ::System::Int32& length)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GETSELECTION_OFFSET))(start, length);
		}

		static ::System::Void SetSelection(::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SETSELECTION_OFFSET))(start, length);
		}
	};
}

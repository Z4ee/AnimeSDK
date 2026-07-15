#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RangeInt.h"
#include "unitysdk/UnityEngine/TouchScreenKeyboardType.h"
#include "unitysdk/UnityEngine/TouchScreenKeyboard_InternalConstructorHelperArguments.h"
#include "unitysdk/UnityEngine/TouchScreenKeyboard_Status.h"

namespace System { class String; }

#define UNITYENGINE_TOUCHSCREENKEYBOARD_DESTROY_OFFSET UNITYSDK_OFFSET(0x1D0D7120)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0D71A0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GETSELECTION_OFFSET UNITYSDK_OFFSET(0x1D0D76A0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1D0D7610)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_CANGETSELECTION_OFFSET UNITYSDK_OFFSET(0x1D0D7650)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_CANSETSELECTION_OFFSET UNITYSDK_OFFSET(0x1D0D7660)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_DISABLEINPLACEEDITING_OFFSET UNITYSDK_OFFSET(0x1D0D73B0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISINPLACEEDITINGALLOWED_OFFSET UNITYSDK_OFFSET(0x1D0D73C0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISREQUIREDTOFORCEOPEN_OFFSET UNITYSDK_OFFSET(0x1D0D73D0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D0D7350)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0x1D0D7670)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D0D7630)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1D0D75E0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1D0D7110)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_ISREQUIREDTOFORCEOPEN_OFFSET UNITYSDK_OFFSET(0x1D0D73E0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_OPEN_1_OFFSET UNITYSDK_OFFSET(0x1D0D74F0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_OPEN_OFFSET UNITYSDK_OFFSET(0x1D0D73F0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SETSELECTION_OFFSET UNITYSDK_OFFSET(0x1D0D7760)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1D0D7620)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_CHARACTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1D0D7640)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_HIDEINPUT_OFFSET UNITYSDK_OFFSET(0x1D0D7600)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_SELECTION_OFFSET UNITYSDK_OFFSET(0x1D0D76B0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1D0D75F0)
#define UNITYENGINE_TOUCHSCREENKEYBOARD_TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPER_OFFSET UNITYSDK_OFFSET(0x1D0D7340)
#define UNITYENGINE_TOUCHSCREENKEYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D7270)

namespace UnityEngine
{
	inline static constexpr unsigned int TouchScreenKeyboard_TypeDefinitionIndex = 4384;

	class TouchScreenKeyboard : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__disableInPlaceEditing_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TouchScreenKeyboard_TypeDefinitionIndex)->GetStaticField(0x9BF0);
		}
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::String* a1, ::UnityEngine::TouchScreenKeyboardType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::String* a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::TouchScreenKeyboardType, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_INTERNAL_DESTROY_OFFSET))(a1);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_DESTROY_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr TouchScreenKeyboard_InternalConstructorHelper(::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments& a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPER_OFFSET))(a1, a2, a3);
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

		static ::System::Boolean get_isRequiredToForceOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ISREQUIREDTOFORCEOPEN_OFFSET))();
		}

		static ::System::Boolean IsRequiredToForceOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_ISREQUIREDTOFORCEOPEN_OFFSET))();
		}

		static ::UnityEngine::TouchScreenKeyboard* Open(::System::String* a1, ::UnityEngine::TouchScreenKeyboardType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::String* a7, ::System::Int32 a8)
		{
			return ((::UnityEngine::TouchScreenKeyboard*(*)(::System::String*, ::UnityEngine::TouchScreenKeyboardType, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_OPEN_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::UnityEngine::TouchScreenKeyboard* Open_1(::System::String* a1, ::UnityEngine::TouchScreenKeyboardType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::TouchScreenKeyboard*(*)(::System::String*, ::UnityEngine::TouchScreenKeyboardType, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_OPEN_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_TEXT_OFFSET))(this, a1);
		}

		static ::System::Void set_hideInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_HIDEINPUT_OFFSET))(a1);
		}

		::System::Boolean get_active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_active(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_ACTIVE_OFFSET))(this, a1);
		}

		::UnityEngine::TouchScreenKeyboard_Status get_status()
		{
			return ((::UnityEngine::TouchScreenKeyboard_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_characterLimit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_CHARACTERLIMIT_OFFSET))(this, a1);
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

		::System::Void set_selection(::UnityEngine::RangeInt a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RangeInt))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SET_SELECTION_OFFSET))(this, a1);
		}

		static ::System::Void GetSelection(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_GETSELECTION_OFFSET))(a1, a2);
		}

		static ::System::Void SetSelection(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCHSCREENKEYBOARD_SETSELECTION_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GUISettings; }
namespace UnityEngine { class GUISkin_SkinChangedDelegate; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUISKIN_APPLY_OFFSET UNITYSDK_OFFSET(0x1E42DCD0)
#define UNITYENGINE_GUISKIN_BUILDSTYLECACHE_OFFSET UNITYSDK_OFFSET(0x1E42EAE0)
#define UNITYENGINE_GUISKIN_CLEANUPROOTS_OFFSET UNITYSDK_OFFSET(0x1E42DD40)
#define UNITYENGINE_GUISKIN_FINDSTYLE_OFFSET UNITYSDK_OFFSET(0x1E430750)
#define UNITYENGINE_GUISKIN_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E430AB0)
#define UNITYENGINE_GUISKIN_GETSTYLE_OFFSET UNITYSDK_OFFSET(0x1E420090)
#define UNITYENGINE_GUISKIN_GET_BOX_OFFSET UNITYSDK_OFFSET(0x1E41E270)
#define UNITYENGINE_GUISKIN_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x1E41E8C0)
#define UNITYENGINE_GUISKIN_GET_CUSTOMSTYLES_OFFSET UNITYSDK_OFFSET(0x1E42E960)
#define UNITYENGINE_GUISKIN_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1E42E9F0)
#define UNITYENGINE_GUISKIN_GET_FONT_OFFSET UNITYSDK_OFFSET(0x1E42DD60)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x1E42E600)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x1E42E680)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0x1E42E580)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1E4215B0)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0x1E41FB90)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0x1E41FB80)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x1E41FB70)
#define UNITYENGINE_GUISKIN_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x1E41C970)
#define UNITYENGINE_GUISKIN_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1E4215D0)
#define UNITYENGINE_GUISKIN_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1E42E9E0)
#define UNITYENGINE_GUISKIN_GET_TEXTAREA_OFFSET UNITYSDK_OFFSET(0x1E42E060)
#define UNITYENGINE_GUISKIN_GET_TEXTFIELD_OFFSET UNITYSDK_OFFSET(0x1E42DFE0)
#define UNITYENGINE_GUISKIN_GET_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1E42E150)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARDOWNBUTTON_OFFSET UNITYSDK_OFFSET(0x1E42E870)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0x1E42E770)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARUPBUTTON_OFFSET UNITYSDK_OFFSET(0x1E42E7F0)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1E4215C0)
#define UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0x1E42E490)
#define UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0x1E42E410)
#define UNITYENGINE_GUISKIN_GET_VERTICALSLIDER_OFFSET UNITYSDK_OFFSET(0x1E42E390)
#define UNITYENGINE_GUISKIN_GET_WINDOW_OFFSET UNITYSDK_OFFSET(0x1E422EC0)
#define UNITYENGINE_GUISKIN_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1E41C5D0)
#define UNITYENGINE_GUISKIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E42DC60)
#define UNITYENGINE_GUISKIN_SET_BOX_OFFSET UNITYSDK_OFFSET(0x1E42DF00)
#define UNITYENGINE_GUISKIN_SET_BUTTON_OFFSET UNITYSDK_OFFSET(0x1E42E0E0)
#define UNITYENGINE_GUISKIN_SET_CUSTOMSTYLES_OFFSET UNITYSDK_OFFSET(0x1E42E970)
#define UNITYENGINE_GUISKIN_SET_FONT_OFFSET UNITYSDK_OFFSET(0x1E42DD70)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x1E42E610)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x1E42E690)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0x1E42E590)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1E42E510)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0x1E42E320)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0x1E42E2B0)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x1E42E240)
#define UNITYENGINE_GUISKIN_SET_LABEL_OFFSET UNITYSDK_OFFSET(0x1E42DF70)
#define UNITYENGINE_GUISKIN_SET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1E42E8F0)
#define UNITYENGINE_GUISKIN_SET_TEXTAREA_OFFSET UNITYSDK_OFFSET(0x1E42E070)
#define UNITYENGINE_GUISKIN_SET_TEXTFIELD_OFFSET UNITYSDK_OFFSET(0x1E42DFF0)
#define UNITYENGINE_GUISKIN_SET_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1E42E160)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARDOWNBUTTON_OFFSET UNITYSDK_OFFSET(0x1E42E880)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0x1E42E780)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARUPBUTTON_OFFSET UNITYSDK_OFFSET(0x1E42E800)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1E42E700)
#define UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0x1E42E4A0)
#define UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0x1E42E420)
#define UNITYENGINE_GUISKIN_SET_VERTICALSLIDER_OFFSET UNITYSDK_OFFSET(0x1E42E3A0)
#define UNITYENGINE_GUISKIN_SET_WINDOW_OFFSET UNITYSDK_OFFSET(0x1E42E1D0)
#define UNITYENGINE_GUISKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E42DB80)

namespace UnityEngine
{
	inline static constexpr unsigned int GUISkin_TypeDefinitionIndex = 6419;

	class GUISkin : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::GUISkin** StaticGet_current()
		{
			return (::UnityEngine::GUISkin**)Il2CppClass::FromTypeDefinitionIndex(GUISkin_TypeDefinitionIndex)->GetStaticField(0x59B0);
		}
		static ::UnityEngine::GUISkin_SkinChangedDelegate** StaticGet_m_SkinChanged()
		{
			return (::UnityEngine::GUISkin_SkinChangedDelegate**)Il2CppClass::FromTypeDefinitionIndex(GUISkin_TypeDefinitionIndex)->GetStaticField(0x59B8);
		}
		static ::UnityEngine::GUIStyle** StaticGet_ms_Error()
		{
			return (::UnityEngine::GUIStyle**)Il2CppClass::FromTypeDefinitionIndex(GUISkin_TypeDefinitionIndex)->GetStaticField(0x59C0);
		}
		::UnityEngine::Font* m_Font; // 0x18
		::UnityEngine::GUIStyle* m_box; // 0x20
		::UnityEngine::GUIStyle* m_button; // 0x28
		::UnityEngine::GUIStyle* m_toggle; // 0x30
		::UnityEngine::GUIStyle* m_label; // 0x38
		::UnityEngine::GUIStyle* m_textField; // 0x40
		::UnityEngine::GUIStyle* m_textArea; // 0x48
		::UnityEngine::GUIStyle* m_window; // 0x50
		::UnityEngine::GUIStyle* m_horizontalSlider; // 0x58
		::UnityEngine::GUIStyle* m_horizontalSliderThumb; // 0x60
		::UnityEngine::GUIStyle* m_horizontalSliderThumbExtent; // 0x68
		::UnityEngine::GUIStyle* m_verticalSlider; // 0x70
		::UnityEngine::GUIStyle* m_verticalSliderThumb; // 0x78
		::UnityEngine::GUIStyle* m_verticalSliderThumbExtent; // 0x80
		::UnityEngine::GUIStyle* m_horizontalScrollbar; // 0x88
		::UnityEngine::GUIStyle* m_horizontalScrollbarThumb; // 0x90
		::UnityEngine::GUIStyle* m_horizontalScrollbarLeftButton; // 0x98
		::UnityEngine::GUIStyle* m_horizontalScrollbarRightButton; // 0xA0
		::UnityEngine::GUIStyle* m_verticalScrollbar; // 0xA8
		::UnityEngine::GUIStyle* m_verticalScrollbarThumb; // 0xB0
		::UnityEngine::GUIStyle* m_verticalScrollbarUpButton; // 0xB8
		::UnityEngine::GUIStyle* m_verticalScrollbarDownButton; // 0xC0
		::UnityEngine::GUIStyle* m_ScrollView; // 0xC8
		::Il2CppArray<::UnityEngine::GUIStyle*>* m_CustomStyles; // 0xD0
		::UnityEngine::GUISettings* m_Settings; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GUIStyle*>* m_Styles; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_ONENABLE_OFFSET))(this);
		}

		static ::System::Void CleanupRoots()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_CLEANUPROOTS_OFFSET))();
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_FONT_OFFSET))(this);
		}

		::System::Void set_font(::UnityEngine::Font* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_FONT_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_box()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_BOX_OFFSET))(this);
		}

		::System::Void set_box(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_BOX_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_label()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_LABEL_OFFSET))(this);
		}

		::System::Void set_label(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_LABEL_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_textField()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_TEXTFIELD_OFFSET))(this);
		}

		::System::Void set_textField(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_TEXTFIELD_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_textArea()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_TEXTAREA_OFFSET))(this);
		}

		::System::Void set_textArea(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_TEXTAREA_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_button()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_BUTTON_OFFSET))(this);
		}

		::System::Void set_button(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_BUTTON_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_toggle()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_TOGGLE_OFFSET))(this);
		}

		::System::Void set_toggle(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_TOGGLE_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_window()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_WINDOW_OFFSET))(this);
		}

		::System::Void set_window(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_WINDOW_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_horizontalSlider()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDER_OFFSET))(this);
		}

		::System::Void set_horizontalSlider(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDER_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_horizontalSliderThumb()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMB_OFFSET))(this);
		}

		::System::Void set_horizontalSliderThumb(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMB_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_horizontalSliderThumbExtent()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET))(this);
		}

		::System::Void set_horizontalSliderThumbExtent(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_verticalSlider()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSLIDER_OFFSET))(this);
		}

		::System::Void set_verticalSlider(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSLIDER_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_verticalSliderThumb()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMB_OFFSET))(this);
		}

		::System::Void set_verticalSliderThumb(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMB_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_verticalSliderThumbExtent()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMBEXTENT_OFFSET))(this);
		}

		::System::Void set_verticalSliderThumbExtent(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMBEXTENT_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbar()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBAR_OFFSET))(this);
		}

		::System::Void set_horizontalScrollbar(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBAR_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbarThumb()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARTHUMB_OFFSET))(this);
		}

		::System::Void set_horizontalScrollbarThumb(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARTHUMB_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbarLeftButton()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET))(this);
		}

		::System::Void set_horizontalScrollbarLeftButton(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbarRightButton()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET))(this);
		}

		::System::Void set_horizontalScrollbarRightButton(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbar()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBAR_OFFSET))(this);
		}

		::System::Void set_verticalScrollbar(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBAR_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbarThumb()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARTHUMB_OFFSET))(this);
		}

		::System::Void set_verticalScrollbarThumb(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARTHUMB_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbarUpButton()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARUPBUTTON_OFFSET))(this);
		}

		::System::Void set_verticalScrollbarUpButton(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARUPBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbarDownButton()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARDOWNBUTTON_OFFSET))(this);
		}

		::System::Void set_verticalScrollbarDownButton(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARDOWNBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::GUIStyle* get_scrollView()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_SCROLLVIEW_OFFSET))(this);
		}

		::System::Void set_scrollView(::UnityEngine::GUIStyle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_SCROLLVIEW_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::GUIStyle*>* get_customStyles()
		{
			return ((::Il2CppArray<::UnityEngine::GUIStyle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_CUSTOMSTYLES_OFFSET))(this);
		}

		::System::Void set_customStyles(::Il2CppArray<::UnityEngine::GUIStyle*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GUIStyle*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_CUSTOMSTYLES_OFFSET))(this, value);
		}

		::UnityEngine::GUISettings* get_settings()
		{
			return ((::UnityEngine::GUISettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_SETTINGS_OFFSET))(this);
		}

		static ::UnityEngine::GUIStyle* get_error()
		{
			return ((::UnityEngine::GUIStyle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_ERROR_OFFSET))();
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_APPLY_OFFSET))(this);
		}

		::System::Void BuildStyleCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_BUILDSTYLECACHE_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* GetStyle(::System::String* styleName)
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GETSTYLE_OFFSET))(this, styleName);
		}

		::UnityEngine::GUIStyle* FindStyle(::System::String* styleName)
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_FINDSTYLE_OFFSET))(this, styleName);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_MAKECURRENT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GETENUMERATOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/FloatTween.h"
#include "unitysdk/UnityEngine/UI/Selectable.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Dropdown_DropdownEvent; }
namespace TMPro { class TMP_Dropdown_DropdownItem; }
namespace TMPro { class TMP_Dropdown_OptionData; }
namespace TMPro { class TMP_Dropdown_OptionDataList; }
namespace TMPro { class TMP_Text; }
namespace TMPro { template <typename T> class TweenRunner_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Toggle; }

#define TMPRO_TMP_DROPDOWN_ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C30B0F0)
#define TMPRO_TMP_DROPDOWN_ADDOPTIONS_1_OFFSET UNITYSDK_OFFSET(0x1C308670)
#define TMPRO_TMP_DROPDOWN_ADDOPTIONS_2_OFFSET UNITYSDK_OFFSET(0x1C308750)
#define TMPRO_TMP_DROPDOWN_ADDOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C3085D0)
#define TMPRO_TMP_DROPDOWN_ALPHAFADELIST_1_OFFSET UNITYSDK_OFFSET(0x1C30B710)
#define TMPRO_TMP_DROPDOWN_ALPHAFADELIST_OFFSET UNITYSDK_OFFSET(0x1C30C280)
#define TMPRO_TMP_DROPDOWN_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C307DA0)
#define TMPRO_TMP_DROPDOWN_CLEAROPTIONS_OFFSET UNITYSDK_OFFSET(0x1C308830)
#define TMPRO_TMP_DROPDOWN_CREATEBLOCKER_OFFSET UNITYSDK_OFFSET(0x1C30B860)
#define TMPRO_TMP_DROPDOWN_CREATEDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1C30C100)
#define TMPRO_TMP_DROPDOWN_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x1C30C210)
#define TMPRO_TMP_DROPDOWN_DELAYEDDESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1C30C570)
#define TMPRO_TMP_DROPDOWN_DESTROYBLOCKER_OFFSET UNITYSDK_OFFSET(0x1C30C050)
#define TMPRO_TMP_DROPDOWN_DESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1C30C160)
#define TMPRO_TMP_DROPDOWN_DESTROYITEM_OFFSET UNITYSDK_OFFSET(0x1C30C270)
#define TMPRO_TMP_DROPDOWN_GET_ALPHAFADESPEED_OFFSET UNITYSDK_OFFSET(0x1C3078A0)
#define TMPRO_TMP_DROPDOWN_GET_CAPTIONIMAGE_OFFSET UNITYSDK_OFFSET(0x1C3077B0)
#define TMPRO_TMP_DROPDOWN_GET_CAPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1C307790)
#define TMPRO_TMP_DROPDOWN_GET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x1C307B00)
#define TMPRO_TMP_DROPDOWN_GET_ITEMIMAGE_OFFSET UNITYSDK_OFFSET(0x1C307810)
#define TMPRO_TMP_DROPDOWN_GET_ITEMTEXT_OFFSET UNITYSDK_OFFSET(0x1C3077F0)
#define TMPRO_TMP_DROPDOWN_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1C307880)
#define TMPRO_TMP_DROPDOWN_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1C307830)
#define TMPRO_TMP_DROPDOWN_GET_PLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x1C3077D0)
#define TMPRO_TMP_DROPDOWN_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1C3071F0)
#define TMPRO_TMP_DROPDOWN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C3078C0)
#define TMPRO_TMP_DROPDOWN_HIDE_OFFSET UNITYSDK_OFFSET(0x1C30ACB0)
#define TMPRO_TMP_DROPDOWN_IMMEDIATEDESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1C3082E0)
#define TMPRO_TMP_DROPDOWN_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1C30ACA0)
#define TMPRO_TMP_DROPDOWN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C308190)
#define TMPRO_TMP_DROPDOWN_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1C309630)
#define TMPRO_TMP_DROPDOWN_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x1C30C5D0)
#define TMPRO_TMP_DROPDOWN_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1C30AC90)
#define TMPRO_TMP_DROPDOWN_REFRESHSHOWNVALUE_OFFSET UNITYSDK_OFFSET(0x1C307210)
#define TMPRO_TMP_DROPDOWN_SETALPHA_OFFSET UNITYSDK_OFFSET(0x1C30C380)
#define TMPRO_TMP_DROPDOWN_SETUPTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1C3089B0)
#define TMPRO_TMP_DROPDOWN_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C307AF0)
#define TMPRO_TMP_DROPDOWN_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C3078E0)
#define TMPRO_TMP_DROPDOWN_SET_ALPHAFADESPEED_OFFSET UNITYSDK_OFFSET(0x1C3078B0)
#define TMPRO_TMP_DROPDOWN_SET_CAPTIONIMAGE_OFFSET UNITYSDK_OFFSET(0x1C3077C0)
#define TMPRO_TMP_DROPDOWN_SET_CAPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1C3077A0)
#define TMPRO_TMP_DROPDOWN_SET_ITEMIMAGE_OFFSET UNITYSDK_OFFSET(0x1C307820)
#define TMPRO_TMP_DROPDOWN_SET_ITEMTEXT_OFFSET UNITYSDK_OFFSET(0x1C307800)
#define TMPRO_TMP_DROPDOWN_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1C307890)
#define TMPRO_TMP_DROPDOWN_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1C307850)
#define TMPRO_TMP_DROPDOWN_SET_PLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x1C3077E0)
#define TMPRO_TMP_DROPDOWN_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1C307200)
#define TMPRO_TMP_DROPDOWN_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C3078D0)
#define TMPRO_TMP_DROPDOWN_SHOW_OFFSET UNITYSDK_OFFSET(0x1C309640)
#define TMPRO_TMP_DROPDOWN_START_OFFSET UNITYSDK_OFFSET(0x1C308100)
#define TMPRO_TMP_DROPDOWN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C30C7E0)
#define TMPRO_TMP_DROPDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C307C30)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Dropdown_TypeDefinitionIndex = 37494;

	class TMP_Dropdown : public ::UnityEngine::UI::Selectable
	{
	public:
		static ::TMPro::TMP_Dropdown_OptionData** StaticGet_s_NoOptionData()
		{
			return (::TMPro::TMP_Dropdown_OptionData**)Il2CppClass::FromTypeDefinitionIndex(TMP_Dropdown_TypeDefinitionIndex)->GetStaticField(0x291D0);
		}
		::UnityEngine::RectTransform* m_Template; // 0xF8
		::TMPro::TMP_Text* m_CaptionText; // 0x100
		::UnityEngine::UI::Image* m_CaptionImage; // 0x108
		::UnityEngine::UI::Graphic* m_Placeholder; // 0x110
		::TMPro::TMP_Text* m_ItemText; // 0x118
		::UnityEngine::UI::Image* m_ItemImage; // 0x120
		::System::Int32 m_Value; // 0x128
		::TMPro::TMP_Dropdown_OptionDataList* m_Options; // 0x130
		::TMPro::TMP_Dropdown_DropdownEvent* m_OnValueChanged; // 0x138
		::System::Single m_AlphaFadeSpeed; // 0x140
		::UnityEngine::GameObject* m_Dropdown; // 0x148
		::UnityEngine::GameObject* m_Blocker; // 0x150
		::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_DropdownItem*>* m_Items; // 0x158
		::TMPro::TweenRunner_1<::TMPro::FloatTween>* m_AlphaTweenRunner; // 0x160
		::System::Boolean validTemplate; // 0x168
		::UnityEngine::Coroutine* m_Coroutine; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN__CCTOR_OFFSET))();
		}

		::UnityEngine::RectTransform* get_template()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_TEMPLATE_OFFSET))(this, value);
		}

		::TMPro::TMP_Text* get_captionText()
		{
			return ((::TMPro::TMP_Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_CAPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_captionText(::TMPro::TMP_Text* value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_CAPTIONTEXT_OFFSET))(this, value);
		}

		::UnityEngine::UI::Image* get_captionImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_CAPTIONIMAGE_OFFSET))(this);
		}

		::System::Void set_captionImage(::UnityEngine::UI::Image* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_CAPTIONIMAGE_OFFSET))(this, value);
		}

		::UnityEngine::UI::Graphic* get_placeholder()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_PLACEHOLDER_OFFSET))(this);
		}

		::System::Void set_placeholder(::UnityEngine::UI::Graphic* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_PLACEHOLDER_OFFSET))(this, value);
		}

		::TMPro::TMP_Text* get_itemText()
		{
			return ((::TMPro::TMP_Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_ITEMTEXT_OFFSET))(this);
		}

		::System::Void set_itemText(::TMPro::TMP_Text* value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_ITEMTEXT_OFFSET))(this, value);
		}

		::UnityEngine::UI::Image* get_itemImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_ITEMIMAGE_OFFSET))(this);
		}

		::System::Void set_itemImage(::UnityEngine::UI::Image* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_ITEMIMAGE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* get_options()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_options(::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_OPTIONS_OFFSET))(this, value);
		}

		::TMPro::TMP_Dropdown_DropdownEvent* get_onValueChanged()
		{
			return ((::TMPro::TMP_Dropdown_DropdownEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_onValueChanged(::TMPro::TMP_Dropdown_DropdownEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Dropdown_DropdownEvent*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_ONVALUECHANGED_OFFSET))(this, value);
		}

		::System::Single get_alphaFadeSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_ALPHAFADESPEED_OFFSET))(this);
		}

		::System::Void set_alphaFadeSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_ALPHAFADESPEED_OFFSET))(this, value);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void SetValueWithoutNotify(::System::Int32 input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SETVALUEWITHOUTNOTIFY_OFFSET))(this, input);
		}

		::System::Void SetValue(::System::Int32 value, ::System::Boolean sendCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SETVALUE_OFFSET))(this, value, sendCallback);
		}

		::System::Boolean get_IsExpanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_ISEXPANDED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ONDISABLE_OFFSET))(this);
		}

		::System::Void RefreshShownValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_REFRESHSHOWNVALUE_OFFSET))(this);
		}

		::System::Void AddOptions(::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ADDOPTIONS_OFFSET))(this, options);
		}

		::System::Void AddOptions_1(::System::Collections::Generic::List_1<::System::String*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ADDOPTIONS_1_OFFSET))(this, options);
		}

		::System::Void AddOptions_2(::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ADDOPTIONS_2_OFFSET))(this, options);
		}

		::System::Void ClearOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_CLEAROPTIONS_OFFSET))(this);
		}

		::System::Void SetupTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SETUPTEMPLATE_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ONCANCEL_OFFSET))(this, eventData);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SHOW_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateBlocker(::UnityEngine::Canvas* rootCanvas)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_CREATEBLOCKER_OFFSET))(this, rootCanvas);
		}

		::System::Void DestroyBlocker(::UnityEngine::GameObject* blocker)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_DESTROYBLOCKER_OFFSET))(this, blocker);
		}

		::UnityEngine::GameObject* CreateDropdownList(::UnityEngine::GameObject* template_)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_CREATEDROPDOWNLIST_OFFSET))(this, template_);
		}

		::System::Void DestroyDropdownList(::UnityEngine::GameObject* dropdownList)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_DESTROYDROPDOWNLIST_OFFSET))(this, dropdownList);
		}

		::TMPro::TMP_Dropdown_DropdownItem* CreateItem(::TMPro::TMP_Dropdown_DropdownItem* itemTemplate)
		{
			return ((::TMPro::TMP_Dropdown_DropdownItem*(*)(::PVOID, ::TMPro::TMP_Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_CREATEITEM_OFFSET))(this, itemTemplate);
		}

		::System::Void DestroyItem(::TMPro::TMP_Dropdown_DropdownItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_DESTROYITEM_OFFSET))(this, item);
		}

		::TMPro::TMP_Dropdown_DropdownItem* AddItem(::TMPro::TMP_Dropdown_OptionData* data, ::System::Boolean selected, ::TMPro::TMP_Dropdown_DropdownItem* itemTemplate, ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_DropdownItem*>* items)
		{
			return ((::TMPro::TMP_Dropdown_DropdownItem*(*)(::PVOID, ::TMPro::TMP_Dropdown_OptionData*, ::System::Boolean, ::TMPro::TMP_Dropdown_DropdownItem*, ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_DropdownItem*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ADDITEM_OFFSET))(this, data, selected, itemTemplate, items);
		}

		::System::Void AlphaFadeList(::System::Single duration, ::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ALPHAFADELIST_OFFSET))(this, duration, alpha);
		}

		::System::Void AlphaFadeList_1(::System::Single duration, ::System::Single start, ::System::Single end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ALPHAFADELIST_1_OFFSET))(this, duration, start, end);
		}

		::System::Void SetAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SETALPHA_OFFSET))(this, alpha);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_HIDE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DelayedDestroyDropdownList(::System::Single delay)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_DELAYEDDESTROYDROPDOWNLIST_OFFSET))(this, delay);
		}

		::System::Void ImmediateDestroyDropdownList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_IMMEDIATEDESTROYDROPDOWNLIST_OFFSET))(this);
		}

		::System::Void OnSelectItem(::UnityEngine::UI::Toggle* toggle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ONSELECTITEM_OFFSET))(this, toggle);
		}
	};
}

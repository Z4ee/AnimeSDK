#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/CoroutineTween/FloatTween.h"
#include "unitysdk/UnityEngine/UI/Selectable.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Dropdown_DropdownEvent; }
namespace UnityEngine::UI { class Dropdown_DropdownItem; }
namespace UnityEngine::UI { class Dropdown_OptionData; }
namespace UnityEngine::UI { class Dropdown_OptionDataList; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }
namespace UnityEngine::UI::CoroutineTween { template <typename T> class TweenRunner_1; }

#define UNITYENGINE_UI_DROPDOWN_ADDITEM_OFFSET UNITYSDK_OFFSET(0x1BBCADC0)
#define UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_1_OFFSET UNITYSDK_OFFSET(0x1BBC8310)
#define UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_2_OFFSET UNITYSDK_OFFSET(0x1BBC8420)
#define UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_OFFSET UNITYSDK_OFFSET(0x1BBC8240)
#define UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_1_OFFSET UNITYSDK_OFFSET(0x1BBCB730)
#define UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_OFFSET UNITYSDK_OFFSET(0x1BBCC430)
#define UNITYENGINE_UI_DROPDOWN_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BBC7700)
#define UNITYENGINE_UI_DROPDOWN_CLEAROPTIONS_OFFSET UNITYSDK_OFFSET(0x1BBC8530)
#define UNITYENGINE_UI_DROPDOWN_CREATEBLOCKER_OFFSET UNITYSDK_OFFSET(0x1BBCB8A0)
#define UNITYENGINE_UI_DROPDOWN_CREATEDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1BBCC1D0)
#define UNITYENGINE_UI_DROPDOWN_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x1BBCC350)
#define UNITYENGINE_UI_DROPDOWN_DELAYEDDESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1BBCC790)
#define UNITYENGINE_UI_DROPDOWN_DESTROYBLOCKER_OFFSET UNITYSDK_OFFSET(0x1BBCC0E0)
#define UNITYENGINE_UI_DROPDOWN_DESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1BBCC260)
#define UNITYENGINE_UI_DROPDOWN_DESTROYITEM_OFFSET UNITYSDK_OFFSET(0x1BBCC3E0)
#define UNITYENGINE_UI_DROPDOWN_GET_ALPHAFADESPEED_OFFSET UNITYSDK_OFFSET(0x1BBC70B0)
#define UNITYENGINE_UI_DROPDOWN_GET_CAPTIONIMAGE_OFFSET UNITYSDK_OFFSET(0x1BBC6EB0)
#define UNITYENGINE_UI_DROPDOWN_GET_CAPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1BBC6E40)
#define UNITYENGINE_UI_DROPDOWN_GET_ITEMIMAGE_OFFSET UNITYSDK_OFFSET(0x1BBC6F90)
#define UNITYENGINE_UI_DROPDOWN_GET_ITEMTEXT_OFFSET UNITYSDK_OFFSET(0x1BBC6F20)
#define UNITYENGINE_UI_DROPDOWN_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1BBC7090)
#define UNITYENGINE_UI_DROPDOWN_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1BBC7000)
#define UNITYENGINE_UI_DROPDOWN_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1BBC6920)
#define UNITYENGINE_UI_DROPDOWN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BBC70D0)
#define UNITYENGINE_UI_DROPDOWN_HIDE_OFFSET UNITYSDK_OFFSET(0x1BBCA9F0)
#define UNITYENGINE_UI_DROPDOWN_IMMEDIATEDESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1BBC7D00)
#define UNITYENGINE_UI_DROPDOWN_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1BBCA9A0)
#define UNITYENGINE_UI_DROPDOWN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BBC7B70)
#define UNITYENGINE_UI_DROPDOWN_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1BBC9290)
#define UNITYENGINE_UI_DROPDOWN_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x1BBCC820)
#define UNITYENGINE_UI_DROPDOWN_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1BBCA950)
#define UNITYENGINE_UI_DROPDOWN_REFRESHSHOWNVALUE_OFFSET UNITYSDK_OFFSET(0x1BBC6990)
#define UNITYENGINE_UI_DROPDOWN_SETALPHA_OFFSET UNITYSDK_OFFSET(0x1BBCC570)
#define UNITYENGINE_UI_DROPDOWN_SETUPTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1BBC85C0)
#define UNITYENGINE_UI_DROPDOWN_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1BBC7280)
#define UNITYENGINE_UI_DROPDOWN_SET_ALPHAFADESPEED_OFFSET UNITYSDK_OFFSET(0x1BBC70C0)
#define UNITYENGINE_UI_DROPDOWN_SET_CAPTIONIMAGE_OFFSET UNITYSDK_OFFSET(0x1BBC6EC0)
#define UNITYENGINE_UI_DROPDOWN_SET_CAPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1BBC6E50)
#define UNITYENGINE_UI_DROPDOWN_SET_ITEMIMAGE_OFFSET UNITYSDK_OFFSET(0x1BBC6FA0)
#define UNITYENGINE_UI_DROPDOWN_SET_ITEMTEXT_OFFSET UNITYSDK_OFFSET(0x1BBC6F30)
#define UNITYENGINE_UI_DROPDOWN_SET_OFFSET UNITYSDK_OFFSET(0x1BBC7130)
#define UNITYENGINE_UI_DROPDOWN_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1BBC70A0)
#define UNITYENGINE_UI_DROPDOWN_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1BBC7020)
#define UNITYENGINE_UI_DROPDOWN_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1BBC6930)
#define UNITYENGINE_UI_DROPDOWN_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BBC70E0)
#define UNITYENGINE_UI_DROPDOWN_SHOW_OFFSET UNITYSDK_OFFSET(0x1BBC92E0)
#define UNITYENGINE_UI_DROPDOWN_START_OFFSET UNITYSDK_OFFSET(0x1BBC7AB0)
#define UNITYENGINE_UI_DROPDOWN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBCCAA0)
#define UNITYENGINE_UI_DROPDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC72D0)
#define UNITYENGINE_UI_DROPDOWN___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BBCCAE0)
#define UNITYENGINE_UI_DROPDOWN___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BBCCCC0)
#define UNITYENGINE_UI_DROPDOWN___BASE_START_OFFSET UNITYSDK_OFFSET(0x1BBCCCD0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_TypeDefinitionIndex = 8353;

	class Dropdown : public ::UnityEngine::UI::Selectable
	{
	public:
		static ::UnityEngine::UI::Dropdown_OptionData** StaticGet_s_NoOptionData()
		{
			return (::UnityEngine::UI::Dropdown_OptionData**)Il2CppClass::FromTypeDefinitionIndex(Dropdown_TypeDefinitionIndex)->GetStaticField(0x7760);
		}
		::UnityEngine::RectTransform* m_Template; // 0xF8
		::UnityEngine::UI::Text* m_CaptionText; // 0x100
		::UnityEngine::UI::Image* m_CaptionImage; // 0x108
		::UnityEngine::UI::Text* m_ItemText; // 0x110
		::UnityEngine::UI::Image* m_ItemImage; // 0x118
		::System::Int32 m_Value; // 0x120
		::UnityEngine::UI::Dropdown_OptionDataList* m_Options; // 0x128
		::UnityEngine::UI::Dropdown_DropdownEvent* m_OnValueChanged; // 0x130
		::System::Single m_AlphaFadeSpeed; // 0x138
		::UnityEngine::GameObject* m_Dropdown; // 0x140
		::UnityEngine::GameObject* m_Blocker; // 0x148
		::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_DropdownItem*>* m_Items; // 0x150
		::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* m_AlphaTweenRunner; // 0x158
		::System::Boolean validTemplate; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN__CCTOR_OFFSET))();
		}

		::UnityEngine::RectTransform* get_template()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_TEMPLATE_OFFSET))(this, value);
		}

		::UnityEngine::UI::Text* get_captionText()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_CAPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_captionText(::UnityEngine::UI::Text* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_CAPTIONTEXT_OFFSET))(this, value);
		}

		::UnityEngine::UI::Image* get_captionImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_CAPTIONIMAGE_OFFSET))(this);
		}

		::System::Void set_captionImage(::UnityEngine::UI::Image* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_CAPTIONIMAGE_OFFSET))(this, value);
		}

		::UnityEngine::UI::Text* get_itemText()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ITEMTEXT_OFFSET))(this);
		}

		::System::Void set_itemText(::UnityEngine::UI::Text* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ITEMTEXT_OFFSET))(this, value);
		}

		::UnityEngine::UI::Image* get_itemImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ITEMIMAGE_OFFSET))(this);
		}

		::System::Void set_itemImage(::UnityEngine::UI::Image* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ITEMIMAGE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* get_options()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_options(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_OPTIONS_OFFSET))(this, value);
		}

		::UnityEngine::UI::Dropdown_DropdownEvent* get_onValueChanged()
		{
			return ((::UnityEngine::UI::Dropdown_DropdownEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_onValueChanged(::UnityEngine::UI::Dropdown_DropdownEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Dropdown_DropdownEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ONVALUECHANGED_OFFSET))(this, value);
		}

		::System::Single get_alphaFadeSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ALPHAFADESPEED_OFFSET))(this);
		}

		::System::Void set_alphaFadeSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ALPHAFADESPEED_OFFSET))(this, value);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void SetValueWithoutNotify(::System::Int32 input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SETVALUEWITHOUTNOTIFY_OFFSET))(this, input);
		}

		::System::Void Set(::System::Int32 value, ::System::Boolean sendCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_OFFSET))(this, value, sendCallback);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONDISABLE_OFFSET))(this);
		}

		::System::Void RefreshShownValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_REFRESHSHOWNVALUE_OFFSET))(this);
		}

		::System::Void AddOptions(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_OFFSET))(this, options);
		}

		::System::Void AddOptions_1(::System::Collections::Generic::List_1<::System::String*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_1_OFFSET))(this, options);
		}

		::System::Void AddOptions_2(::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_2_OFFSET))(this, options);
		}

		::System::Void ClearOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CLEAROPTIONS_OFFSET))(this);
		}

		::System::Void SetupTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SETUPTEMPLATE_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONCANCEL_OFFSET))(this, eventData);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SHOW_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateBlocker(::UnityEngine::Canvas* rootCanvas)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CREATEBLOCKER_OFFSET))(this, rootCanvas);
		}

		::System::Void DestroyBlocker(::UnityEngine::GameObject* blocker)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DESTROYBLOCKER_OFFSET))(this, blocker);
		}

		::UnityEngine::GameObject* CreateDropdownList(::UnityEngine::GameObject* template_)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CREATEDROPDOWNLIST_OFFSET))(this, template_);
		}

		::System::Void DestroyDropdownList(::UnityEngine::GameObject* dropdownList)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DESTROYDROPDOWNLIST_OFFSET))(this, dropdownList);
		}

		::UnityEngine::UI::Dropdown_DropdownItem* CreateItem(::UnityEngine::UI::Dropdown_DropdownItem* itemTemplate)
		{
			return ((::UnityEngine::UI::Dropdown_DropdownItem*(*)(::PVOID, ::UnityEngine::UI::Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CREATEITEM_OFFSET))(this, itemTemplate);
		}

		::System::Void DestroyItem(::UnityEngine::UI::Dropdown_DropdownItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DESTROYITEM_OFFSET))(this, item);
		}

		::UnityEngine::UI::Dropdown_DropdownItem* AddItem(::UnityEngine::UI::Dropdown_OptionData* data, ::System::Boolean selected, ::UnityEngine::UI::Dropdown_DropdownItem* itemTemplate, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_DropdownItem*>* items)
		{
			return ((::UnityEngine::UI::Dropdown_DropdownItem*(*)(::PVOID, ::UnityEngine::UI::Dropdown_OptionData*, ::System::Boolean, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_DropdownItem*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDITEM_OFFSET))(this, data, selected, itemTemplate, items);
		}

		::System::Void AlphaFadeList(::System::Single duration, ::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_OFFSET))(this, duration, alpha);
		}

		::System::Void AlphaFadeList_1(::System::Single duration, ::System::Single start, ::System::Single end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_1_OFFSET))(this, duration, start, end);
		}

		::System::Void SetAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SETALPHA_OFFSET))(this, alpha);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_HIDE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DelayedDestroyDropdownList(::System::Single delay)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DELAYEDDESTROYDROPDOWNLIST_OFFSET))(this, delay);
		}

		::System::Void ImmediateDestroyDropdownList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_IMMEDIATEDESTROYDROPDOWNLIST_OFFSET))(this);
		}

		::System::Void OnSelectItem(::UnityEngine::UI::Toggle* toggle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONSELECTITEM_OFFSET))(this, toggle);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN___BASE_START_OFFSET))(this);
		}
	};
}

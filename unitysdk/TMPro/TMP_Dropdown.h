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

#define TMPRO_TMP_DROPDOWN_ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EC29F20)
#define TMPRO_TMP_DROPDOWN_ADDOPTIONS_1_OFFSET UNITYSDK_OFFSET(0x1EC27C90)
#define TMPRO_TMP_DROPDOWN_ADDOPTIONS_2_OFFSET UNITYSDK_OFFSET(0x1EC27E10)
#define TMPRO_TMP_DROPDOWN_ADDOPTIONS_OFFSET UNITYSDK_OFFSET(0x1EC27BF0)
#define TMPRO_TMP_DROPDOWN_ALPHAFADELIST_1_OFFSET UNITYSDK_OFFSET(0x1EC2A260)
#define TMPRO_TMP_DROPDOWN_ALPHAFADELIST_OFFSET UNITYSDK_OFFSET(0x1EC2A990)
#define TMPRO_TMP_DROPDOWN_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EC277E0)
#define TMPRO_TMP_DROPDOWN_CLEAROPTIONS_OFFSET UNITYSDK_OFFSET(0x1EC27F90)
#define TMPRO_TMP_DROPDOWN_CREATEBLOCKER_OFFSET UNITYSDK_OFFSET(0x1EC2A3E0)
#define TMPRO_TMP_DROPDOWN_CREATEDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1EC2A920)
#define TMPRO_TMP_DROPDOWN_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x1EC2A940)
#define TMPRO_TMP_DROPDOWN_DELAYEDDESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1EC2AB00)
#define TMPRO_TMP_DROPDOWN_DESTROYBLOCKER_OFFSET UNITYSDK_OFFSET(0x1EC2A910)
#define TMPRO_TMP_DROPDOWN_DESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1EC2A930)
#define TMPRO_TMP_DROPDOWN_DESTROYITEM_OFFSET UNITYSDK_OFFSET(0x1EC2A980)
#define TMPRO_TMP_DROPDOWN_GET_ALPHAFADESPEED_OFFSET UNITYSDK_OFFSET(0x1EC27410)
#define TMPRO_TMP_DROPDOWN_GET_CAPTIONIMAGE_OFFSET UNITYSDK_OFFSET(0x1EC27350)
#define TMPRO_TMP_DROPDOWN_GET_CAPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1EC27340)
#define TMPRO_TMP_DROPDOWN_GET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x1EC27560)
#define TMPRO_TMP_DROPDOWN_GET_ITEMIMAGE_OFFSET UNITYSDK_OFFSET(0x1EC273A0)
#define TMPRO_TMP_DROPDOWN_GET_ITEMTEXT_OFFSET UNITYSDK_OFFSET(0x1EC27390)
#define TMPRO_TMP_DROPDOWN_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1EC273F0)
#define TMPRO_TMP_DROPDOWN_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1EC27060)
#define TMPRO_TMP_DROPDOWN_GET_PLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x1EC27370)
#define TMPRO_TMP_DROPDOWN_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1EC27330)
#define TMPRO_TMP_DROPDOWN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EC27430)
#define TMPRO_TMP_DROPDOWN_HIDE_OFFSET UNITYSDK_OFFSET(0x1EC29D30)
#define TMPRO_TMP_DROPDOWN_IMMEDIATEDESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1EC27980)
#define TMPRO_TMP_DROPDOWN_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1EC29D20)
#define TMPRO_TMP_DROPDOWN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EC278D0)
#define TMPRO_TMP_DROPDOWN_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1EC28700)
#define TMPRO_TMP_DROPDOWN_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x1EC2AB70)
#define TMPRO_TMP_DROPDOWN_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1EC29D10)
#define TMPRO_TMP_DROPDOWN_REFRESHSHOWNVALUE_OFFSET UNITYSDK_OFFSET(0x1EC27090)
#define TMPRO_TMP_DROPDOWN_SETALPHA_OFFSET UNITYSDK_OFFSET(0x1EC2AA50)
#define TMPRO_TMP_DROPDOWN_SETUPTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1EC28030)
#define TMPRO_TMP_DROPDOWN_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1EC27550)
#define TMPRO_TMP_DROPDOWN_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1EC27450)
#define TMPRO_TMP_DROPDOWN_SET_ALPHAFADESPEED_OFFSET UNITYSDK_OFFSET(0x1EC27420)
#define TMPRO_TMP_DROPDOWN_SET_CAPTIONIMAGE_OFFSET UNITYSDK_OFFSET(0x1EC27360)
#define TMPRO_TMP_DROPDOWN_SET_CAPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1EC27040)
#define TMPRO_TMP_DROPDOWN_SET_ITEMIMAGE_OFFSET UNITYSDK_OFFSET(0x1EC273B0)
#define TMPRO_TMP_DROPDOWN_SET_ITEMTEXT_OFFSET UNITYSDK_OFFSET(0x1EC27050)
#define TMPRO_TMP_DROPDOWN_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1EC27400)
#define TMPRO_TMP_DROPDOWN_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1EC273C0)
#define TMPRO_TMP_DROPDOWN_SET_PLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x1EC27380)
#define TMPRO_TMP_DROPDOWN_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1EC27030)
#define TMPRO_TMP_DROPDOWN_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EC27440)
#define TMPRO_TMP_DROPDOWN_SHOW_OFFSET UNITYSDK_OFFSET(0x1EC28710)
#define TMPRO_TMP_DROPDOWN_START_OFFSET UNITYSDK_OFFSET(0x1EC27860)
#define TMPRO_TMP_DROPDOWN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC2AC50)
#define TMPRO_TMP_DROPDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC27580)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Dropdown_TypeDefinitionIndex = 43368;

	class TMP_Dropdown : public ::UnityEngine::UI::Selectable
	{
	public:
		static ::TMPro::TMP_Dropdown_OptionData** StaticGet_s_NoOptionData()
		{
			return (::TMPro::TMP_Dropdown_OptionData**)Il2CppClass::FromTypeDefinitionIndex(TMP_Dropdown_TypeDefinitionIndex)->GetStaticField(0x2FC0);
		}
		::UnityEngine::RectTransform* m_Template; // 0x108
		::TMPro::TMP_Text* m_CaptionText; // 0x110
		::UnityEngine::UI::Image* m_CaptionImage; // 0x118
		::UnityEngine::UI::Graphic* m_Placeholder; // 0x120
		::TMPro::TMP_Text* m_ItemText; // 0x128
		::UnityEngine::UI::Image* m_ItemImage; // 0x130
		::System::Int32 m_Value; // 0x138
		::TMPro::TMP_Dropdown_OptionDataList* m_Options; // 0x140
		::TMPro::TMP_Dropdown_DropdownEvent* m_OnValueChanged; // 0x148
		::System::Single m_AlphaFadeSpeed; // 0x150
		::UnityEngine::GameObject* m_Dropdown; // 0x158
		::UnityEngine::GameObject* m_Blocker; // 0x160
		::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_DropdownItem*>* m_Items; // 0x168
		::TMPro::TweenRunner_1<::TMPro::FloatTween>* m_AlphaTweenRunner; // 0x170
		::System::Boolean validTemplate; // 0x178
		::UnityEngine::Coroutine* m_Coroutine; // 0x180

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

		::System::Void set_template(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_TEMPLATE_OFFSET))(this, a1);
		}

		::TMPro::TMP_Text* get_captionText()
		{
			return ((::TMPro::TMP_Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_CAPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_captionText(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_CAPTIONTEXT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Image* get_captionImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_CAPTIONIMAGE_OFFSET))(this);
		}

		::System::Void set_captionImage(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_CAPTIONIMAGE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Graphic* get_placeholder()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_PLACEHOLDER_OFFSET))(this);
		}

		::System::Void set_placeholder(::UnityEngine::UI::Graphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_PLACEHOLDER_OFFSET))(this, a1);
		}

		::TMPro::TMP_Text* get_itemText()
		{
			return ((::TMPro::TMP_Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_ITEMTEXT_OFFSET))(this);
		}

		::System::Void set_itemText(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_ITEMTEXT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Image* get_itemImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_ITEMIMAGE_OFFSET))(this);
		}

		::System::Void set_itemImage(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_ITEMIMAGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* get_options()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_options(::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_OPTIONS_OFFSET))(this, a1);
		}

		::TMPro::TMP_Dropdown_DropdownEvent* get_onValueChanged()
		{
			return ((::TMPro::TMP_Dropdown_DropdownEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_onValueChanged(::TMPro::TMP_Dropdown_DropdownEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Dropdown_DropdownEvent*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_ONVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Single get_alphaFadeSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_ALPHAFADESPEED_OFFSET))(this);
		}

		::System::Void set_alphaFadeSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_ALPHAFADESPEED_OFFSET))(this, a1);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void SetValueWithoutNotify(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SETVALUEWITHOUTNOTIFY_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SETVALUE_OFFSET))(this, a1, a2);
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

		::System::Void AddOptions(::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ADDOPTIONS_OFFSET))(this, a1);
		}

		::System::Void AddOptions_1(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ADDOPTIONS_1_OFFSET))(this, a1);
		}

		::System::Void AddOptions_2(::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ADDOPTIONS_2_OFFSET))(this, a1);
		}

		::System::Void ClearOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_CLEAROPTIONS_OFFSET))(this);
		}

		::System::Void SetupTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SETUPTEMPLATE_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ONCANCEL_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SHOW_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateBlocker(::UnityEngine::Canvas* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_CREATEBLOCKER_OFFSET))(this, a1);
		}

		::System::Void DestroyBlocker(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_DESTROYBLOCKER_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* CreateDropdownList(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_CREATEDROPDOWNLIST_OFFSET))(this, a1);
		}

		::System::Void DestroyDropdownList(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_DESTROYDROPDOWNLIST_OFFSET))(this, a1);
		}

		::TMPro::TMP_Dropdown_DropdownItem* CreateItem(::TMPro::TMP_Dropdown_DropdownItem* a1)
		{
			return ((::TMPro::TMP_Dropdown_DropdownItem*(*)(::PVOID, ::TMPro::TMP_Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_CREATEITEM_OFFSET))(this, a1);
		}

		::System::Void DestroyItem(::TMPro::TMP_Dropdown_DropdownItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_DESTROYITEM_OFFSET))(this, a1);
		}

		::TMPro::TMP_Dropdown_DropdownItem* AddItem(::TMPro::TMP_Dropdown_OptionData* a1, ::System::Boolean a2, ::TMPro::TMP_Dropdown_DropdownItem* a3, ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_DropdownItem*>* a4)
		{
			return ((::TMPro::TMP_Dropdown_DropdownItem*(*)(::PVOID, ::TMPro::TMP_Dropdown_OptionData*, ::System::Boolean, ::TMPro::TMP_Dropdown_DropdownItem*, ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_DropdownItem*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ADDITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AlphaFadeList(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ALPHAFADELIST_OFFSET))(this, a1, a2);
		}

		::System::Void AlphaFadeList_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ALPHAFADELIST_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_SETALPHA_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_HIDE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DelayedDestroyDropdownList(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_DELAYEDDESTROYDROPDOWNLIST_OFFSET))(this, a1);
		}

		::System::Void ImmediateDestroyDropdownList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_IMMEDIATEDESTROYDROPDOWNLIST_OFFSET))(this);
		}

		::System::Void OnSelectItem(::UnityEngine::UI::Toggle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_ONSELECTITEM_OFFSET))(this, a1);
		}
	};
}

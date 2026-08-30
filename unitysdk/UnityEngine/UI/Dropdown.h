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

#define UNITYENGINE_UI_DROPDOWN_ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B78A110)
#define UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_1_OFFSET UNITYSDK_OFFSET(0x1B787250)
#define UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_2_OFFSET UNITYSDK_OFFSET(0x1B7873A0)
#define UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B7871D0)
#define UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_1_OFFSET UNITYSDK_OFFSET(0x1B7899E0)
#define UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_OFFSET UNITYSDK_OFFSET(0x1B78A450)
#define UNITYENGINE_UI_DROPDOWN_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B786E50)
#define UNITYENGINE_UI_DROPDOWN_CLEAROPTIONS_OFFSET UNITYSDK_OFFSET(0x1B7874F0)
#define UNITYENGINE_UI_DROPDOWN_CREATEBLOCKER_OFFSET UNITYSDK_OFFSET(0x1B789B60)
#define UNITYENGINE_UI_DROPDOWN_CREATEDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1B78A0A0)
#define UNITYENGINE_UI_DROPDOWN_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x1B78A0C0)
#define UNITYENGINE_UI_DROPDOWN_DELAYEDDESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1B78A5C0)
#define UNITYENGINE_UI_DROPDOWN_DESTROYBLOCKER_OFFSET UNITYSDK_OFFSET(0x1B78A090)
#define UNITYENGINE_UI_DROPDOWN_DESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1B78A0B0)
#define UNITYENGINE_UI_DROPDOWN_DESTROYITEM_OFFSET UNITYSDK_OFFSET(0x1B78A100)
#define UNITYENGINE_UI_DROPDOWN_GET_ALPHAFADESPEED_OFFSET UNITYSDK_OFFSET(0x1B7869E0)
#define UNITYENGINE_UI_DROPDOWN_GET_AUTOSCROLL_OFFSET UNITYSDK_OFFSET(0x1B786930)
#define UNITYENGINE_UI_DROPDOWN_GET_CAPTIONIMAGE_OFFSET UNITYSDK_OFFSET(0x1B786740)
#define UNITYENGINE_UI_DROPDOWN_GET_CAPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1B786730)
#define UNITYENGINE_UI_DROPDOWN_GET_CURRENTITEM_OFFSET UNITYSDK_OFFSET(0x1B7868A0)
#define UNITYENGINE_UI_DROPDOWN_GET_FIRSTITEM_OFFSET UNITYSDK_OFFSET(0x1B7867E0)
#define UNITYENGINE_UI_DROPDOWN_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1B786910)
#define UNITYENGINE_UI_DROPDOWN_GET_ITEMIMAGE_OFFSET UNITYSDK_OFFSET(0x1B786770)
#define UNITYENGINE_UI_DROPDOWN_GET_ITEMTEXT_OFFSET UNITYSDK_OFFSET(0x1B786760)
#define UNITYENGINE_UI_DROPDOWN_GET_LASTITEM_OFFSET UNITYSDK_OFFSET(0x1B786840)
#define UNITYENGINE_UI_DROPDOWN_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B7869C0)
#define UNITYENGINE_UI_DROPDOWN_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1B7855C0)
#define UNITYENGINE_UI_DROPDOWN_GET_PAUSEREFRESH_OFFSET UNITYSDK_OFFSET(0x1B786790)
#define UNITYENGINE_UI_DROPDOWN_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1B786720)
#define UNITYENGINE_UI_DROPDOWN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B786A00)
#define UNITYENGINE_UI_DROPDOWN_HIDE_OFFSET UNITYSDK_OFFSET(0x1B7897F0)
#define UNITYENGINE_UI_DROPDOWN_IMMEDIATEDESTROYDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1B786FF0)
#define UNITYENGINE_UI_DROPDOWN_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1B7897E0)
#define UNITYENGINE_UI_DROPDOWN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B7871B0)
#define UNITYENGINE_UI_DROPDOWN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B786F40)
#define UNITYENGINE_UI_DROPDOWN_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1B787C50)
#define UNITYENGINE_UI_DROPDOWN_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x1B78A630)
#define UNITYENGINE_UI_DROPDOWN_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1B7897D0)
#define UNITYENGINE_UI_DROPDOWN_ONTOGGLEFOCUS_OFFSET UNITYSDK_OFFSET(0x1B78A770)
#define UNITYENGINE_UI_DROPDOWN_REFRESHSHOWNVALUE_OFFSET UNITYSDK_OFFSET(0x1B7855F0)
#define UNITYENGINE_UI_DROPDOWN_SETALPHA_OFFSET UNITYSDK_OFFSET(0x1B78A510)
#define UNITYENGINE_UI_DROPDOWN_SETUPTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1B787580)
#define UNITYENGINE_UI_DROPDOWN_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B786AA0)
#define UNITYENGINE_UI_DROPDOWN_SET_ALPHAFADESPEED_OFFSET UNITYSDK_OFFSET(0x1B7869F0)
#define UNITYENGINE_UI_DROPDOWN_SET_AUTOSCROLL_OFFSET UNITYSDK_OFFSET(0x1B7869B0)
#define UNITYENGINE_UI_DROPDOWN_SET_CAPTIONIMAGE_OFFSET UNITYSDK_OFFSET(0x1B786750)
#define UNITYENGINE_UI_DROPDOWN_SET_CAPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1B7855A0)
#define UNITYENGINE_UI_DROPDOWN_SET_ITEMIMAGE_OFFSET UNITYSDK_OFFSET(0x1B786780)
#define UNITYENGINE_UI_DROPDOWN_SET_ITEMTEXT_OFFSET UNITYSDK_OFFSET(0x1B7855B0)
#define UNITYENGINE_UI_DROPDOWN_SET_OFFSET UNITYSDK_OFFSET(0x1B786B30)
#define UNITYENGINE_UI_DROPDOWN_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B7869D0)
#define UNITYENGINE_UI_DROPDOWN_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1B7867B0)
#define UNITYENGINE_UI_DROPDOWN_SET_PAUSEREFRESH_OFFSET UNITYSDK_OFFSET(0x1B7867A0)
#define UNITYENGINE_UI_DROPDOWN_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1B785590)
#define UNITYENGINE_UI_DROPDOWN_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B786A10)
#define UNITYENGINE_UI_DROPDOWN_SHOW_OFFSET UNITYSDK_OFFSET(0x1B787C60)
#define UNITYENGINE_UI_DROPDOWN_START_OFFSET UNITYSDK_OFFSET(0x1B786EF0)
#define UNITYENGINE_UI_DROPDOWN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B78A920)
#define UNITYENGINE_UI_DROPDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B786C10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_TypeDefinitionIndex = 6698;

	class Dropdown : public ::UnityEngine::UI::Selectable
	{
	public:
		static ::UnityEngine::UI::Dropdown_OptionData** StaticGet_s_NoOptionData()
		{
			return (::UnityEngine::UI::Dropdown_OptionData**)Il2CppClass::FromTypeDefinitionIndex(Dropdown_TypeDefinitionIndex)->GetStaticField(0x2B560);
		}
		::UnityEngine::RectTransform* m_Template; // 0x108
		::UnityEngine::UI::Text* m_CaptionText; // 0x110
		::UnityEngine::UI::Image* m_CaptionImage; // 0x118
		::UnityEngine::UI::Text* m_ItemText; // 0x120
		::UnityEngine::UI::Image* m_ItemImage; // 0x128
		::System::Int32 m_Value; // 0x130
		::UnityEngine::UI::Dropdown_OptionDataList* m_Options; // 0x138
		::System::Boolean _PauseRefresh_k__BackingField; // 0x140
		::System::Boolean _autoScroll; // 0x141
		::UnityEngine::UI::Dropdown_DropdownEvent* m_OnValueChanged; // 0x148
		::System::Single m_AlphaFadeSpeed; // 0x150
		::UnityEngine::GameObject* m_Dropdown; // 0x158
		::UnityEngine::GameObject* m_Blocker; // 0x160
		::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_DropdownItem*>* m_Items; // 0x168
		::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* m_AlphaTweenRunner; // 0x170
		::System::Boolean validTemplate; // 0x178
		::System::Boolean TurnOffCheck; // 0x179

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

		::System::Void set_template(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_TEMPLATE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Text* get_captionText()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_CAPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_captionText(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_CAPTIONTEXT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Image* get_captionImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_CAPTIONIMAGE_OFFSET))(this);
		}

		::System::Void set_captionImage(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_CAPTIONIMAGE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Text* get_itemText()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ITEMTEXT_OFFSET))(this);
		}

		::System::Void set_itemText(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ITEMTEXT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Image* get_itemImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ITEMIMAGE_OFFSET))(this);
		}

		::System::Void set_itemImage(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ITEMIMAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_PauseRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_PAUSEREFRESH_OFFSET))(this);
		}

		::System::Void set_PauseRefresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_PAUSEREFRESH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* get_options()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_options(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_OPTIONS_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_firstItem()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_FIRSTITEM_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_lastItem()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_LASTITEM_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_currentItem()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_CURRENTITEM_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_autoScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_AUTOSCROLL_OFFSET))(this);
		}

		::System::Void set_autoScroll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_AUTOSCROLL_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Dropdown_DropdownEvent* get_onValueChanged()
		{
			return ((::UnityEngine::UI::Dropdown_DropdownEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_onValueChanged(::UnityEngine::UI::Dropdown_DropdownEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Dropdown_DropdownEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ONVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Single get_alphaFadeSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_ALPHAFADESPEED_OFFSET))(this);
		}

		::System::Void set_alphaFadeSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_ALPHAFADESPEED_OFFSET))(this, a1);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void SetValueWithoutNotify(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SETVALUEWITHOUTNOTIFY_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SET_OFFSET))(this, a1, a2);
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

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONDESTROY_OFFSET))(this);
		}

		::System::Void RefreshShownValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_REFRESHSHOWNVALUE_OFFSET))(this);
		}

		::System::Void AddOptions(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_OFFSET))(this, a1);
		}

		::System::Void AddOptions_1(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_1_OFFSET))(this, a1);
		}

		::System::Void AddOptions_2(::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDOPTIONS_2_OFFSET))(this, a1);
		}

		::System::Void ClearOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CLEAROPTIONS_OFFSET))(this);
		}

		::System::Void SetupTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SETUPTEMPLATE_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONCANCEL_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SHOW_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateBlocker(::UnityEngine::Canvas* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CREATEBLOCKER_OFFSET))(this, a1);
		}

		::System::Void DestroyBlocker(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DESTROYBLOCKER_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* CreateDropdownList(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CREATEDROPDOWNLIST_OFFSET))(this, a1);
		}

		::System::Void DestroyDropdownList(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DESTROYDROPDOWNLIST_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Dropdown_DropdownItem* CreateItem(::UnityEngine::UI::Dropdown_DropdownItem* a1)
		{
			return ((::UnityEngine::UI::Dropdown_DropdownItem*(*)(::PVOID, ::UnityEngine::UI::Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_CREATEITEM_OFFSET))(this, a1);
		}

		::System::Void DestroyItem(::UnityEngine::UI::Dropdown_DropdownItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DESTROYITEM_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Dropdown_DropdownItem* AddItem(::UnityEngine::UI::Dropdown_OptionData* a1, ::System::Boolean a2, ::UnityEngine::UI::Dropdown_DropdownItem* a3, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_DropdownItem*>* a4)
		{
			return ((::UnityEngine::UI::Dropdown_DropdownItem*(*)(::PVOID, ::UnityEngine::UI::Dropdown_OptionData*, ::System::Boolean, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_DropdownItem*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ADDITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AlphaFadeList(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_OFFSET))(this, a1, a2);
		}

		::System::Void AlphaFadeList_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ALPHAFADELIST_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_SETALPHA_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_HIDE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DelayedDestroyDropdownList(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DELAYEDDESTROYDROPDOWNLIST_OFFSET))(this, a1);
		}

		::System::Void ImmediateDestroyDropdownList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_IMMEDIATEDESTROYDROPDOWNLIST_OFFSET))(this);
		}

		::System::Void OnSelectItem(::UnityEngine::UI::Toggle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONSELECTITEM_OFFSET))(this, a1);
		}

		::System::Void OnToggleFocus(::UnityEngine::UI::Toggle* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_ONTOGGLEFOCUS_OFFSET))(this, a1, a2);
		}
	};
}

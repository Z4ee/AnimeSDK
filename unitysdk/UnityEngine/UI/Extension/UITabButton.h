#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F019D5BE4A3284F8.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonBase.h"

class Class_1_1EA8435E138F2E03;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class ITabButtonGroup; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_ADDBUTTONCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1C3F8FF0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C3F5920)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_BINDNOTIFICATIONNODE_1_OFFSET UNITYSDK_OFFSET(0x1C3F8520)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x1C3F8370)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_DOCLICK_OFFSET UNITYSDK_OFFSET(0x1C3F6180)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_ENABLEBADGE_OFFSET UNITYSDK_OFFSET(0x1C3F96A0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_GET_ISSELECT_OFFSET UNITYSDK_OFFSET(0x1C3F5910)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_HANDLEPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1C3F5A90)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_HANDLEPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1C3F6790)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_HANDLEPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1C3F6B70)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_HANDLEPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1C3F5D80)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_INIT_1_OFFSET UNITYSDK_OFFSET(0x1C3F5A20)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_INIT_OFFSET UNITYSDK_OFFSET(0x1C3F59B0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_PLAYCLICKSOUND_OFFSET UNITYSDK_OFFSET(0x1C3F6EA0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_PRECHECKCLICK_OFFSET UNITYSDK_OFFSET(0x1C3F7450)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_REMOVEBUTTONCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1C3F90A0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETASSETLOADPROXY_OFFSET UNITYSDK_OFFSET(0x1C3F6BC0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETCLICKCHECKSELECTED_OFFSET UNITYSDK_OFFSET(0x1C3F8940)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETCLICKPRECHECK_OFFSET UNITYSDK_OFFSET(0x1C3F7390)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x1C3F74E0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETFINISH_OFFSET UNITYSDK_OFFSET(0x1C3F7550)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETFORCETRIGGER_OFFSET UNITYSDK_OFFSET(0x1C3F8FA0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETICON_1_OFFSET UNITYSDK_OFFSET(0x1C3F8300)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETICON_OFFSET UNITYSDK_OFFSET(0x1C3F8170)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETNORMALTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C3F70B0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETREDPOINT_1_OFFSET UNITYSDK_OFFSET(0x1C3F94F0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETREDPOINT_OFFSET UNITYSDK_OFFSET(0x1C3F9150)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETSELECTEDANIM_OFFSET UNITYSDK_OFFSET(0x1C3F75C0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x1C3F6C10)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABLOCK_1_OFFSET UNITYSDK_OFFSET(0x1C3F8B20)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABLOCK_OFFSET UNITYSDK_OFFSET(0x1C3F8990)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABNAMEBYTEXTKEY_1_OFFSET UNITYSDK_OFFSET(0x1C3F8EE0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABNAMEBYTEXTKEY_OFFSET UNITYSDK_OFFSET(0x1C3F8E20)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABNAME_OFFSET UNITYSDK_OFFSET(0x1C3F8590)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABSELECTED_OFFSET UNITYSDK_OFFSET(0x1C3F7340)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3F9A30)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F9A20)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C3F9A70)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTON___BASE_HANDLEPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1C3F9B30)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITabButton_TypeDefinitionIndex = 47282;

	class UITabButton : public ::UnityEngine::UI::Extension::UIButtonBase
	{
	public:
		static ::System::String** StaticGet_SelectedAnimBoolParams()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITabButton_TypeDefinitionIndex)->GetStaticField(0x51D60);
		}
		::System::Int32 Index; // 0x120
		::UnityEngine::UI::Text* TabName; // 0x128
		::UnityEngine::UI::Text* TabNameLock; // 0x130
		::UnityEngine::UI::Text* TabNameSelected; // 0x138
		::UnityEngine::UI::Image* Icon; // 0x140
		::MoleMole::NotificationBadge* Badge; // 0x148
		::UnityEngine::UI::Image* SelectImage; // 0x150
		::MoleMole::NotificationBadgeEx* BadgeEx; // 0x158
		::UnityEngine::GameObject* LockRoot; // 0x160
		::UnityEngine::UI::Extension::UITimeWidget* LockTime; // 0x168
		::UnityEngine::GameObject* SelectRoot; // 0x170
		::UnityEngine::GameObject* UnSelectRoot; // 0x178
		::UnityEngine::GameObject* EmptyRoot; // 0x180
		::UnityEngine::GameObject* FinishRoot; // 0x188
		::Class_2_A4D62D05D5EA8464* _assetLoadProxy; // 0x190
		::System::String* clickSoundEvent; // 0x198
		::System::Boolean clickCheckSelectable; // 0x1A0
		::UnityEngine::UI::Extension::ITabButtonGroup* _tabButtonGroup; // 0x1A8
		::System::Boolean _isTabSelected; // 0x1B0
		::System::Boolean _isPointerIn; // 0x1B1
		::System::Boolean _isForceTrigger; // 0x1B2
		::UnityEngine::Events::UnityAction* OnPressedCB; // 0x1B8
		::System::Action_1<::System::Int32>* OnPressCB; // 0x1C0
		::System::Func_2<::System::Int32, ::System::Boolean>* _clickPreCheckInToggle; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_GET_ISSELECT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_AWAKE_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 index, ::UnityEngine::UI::Extension::ITabButtonGroup* tabButtonGroup, ::UnityEngine::Events::UnityAction* onPresseCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::ITabButtonGroup*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_INIT_OFFSET))(this, index, tabButtonGroup, onPresseCB);
		}

		::System::Void Init_1(::System::Int32 index, ::UnityEngine::UI::Extension::ITabButtonGroup* tabButtonGroup, ::System::Action_1<::System::Int32>* onPresseCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::ITabButtonGroup*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_INIT_1_OFFSET))(this, index, tabButtonGroup, onPresseCB);
		}

		::System::Boolean HandlePointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_HANDLEPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_HANDLEPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_HANDLEPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_HANDLEPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void SetAssetLoadProxy(::Class_2_A4D62D05D5EA8464* assetLoadProxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETASSETLOADPROXY_OFFSET))(this, assetLoadProxy);
		}

		::System::Void DoClick(::System::Boolean forceTriggerCB, ::System::Boolean ignoreCB, ::System::Boolean isInitCal, ::System::Boolean forceCheckCD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_DOCLICK_OFFSET))(this, forceTriggerCB, ignoreCB, isInitCal, forceCheckCD);
		}

		::System::Void SetNormalTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETNORMALTRIGGER_OFFSET))(this);
		}

		::System::Void SetTabSelected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABSELECTED_OFFSET))(this, value);
		}

		::System::Void SetClickPreCheck(::System::Func_2<::System::Int32, ::System::Boolean>* clickPreCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETCLICKPRECHECK_OFFSET))(this, clickPreCheck);
		}

		::System::Boolean PreCheckClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_PRECHECKCLICK_OFFSET))(this);
		}

		::System::Void SetEmpty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETEMPTY_OFFSET))(this, value);
		}

		::System::Void SetFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETFINISH_OFFSET))(this, value);
		}

		::System::Void SetSelectedAnim(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETSELECTEDANIM_OFFSET))(this, v);
		}

		::System::Void SetSelected(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETSELECTED_OFFSET))(this, v);
		}

		::System::Void PlayClickSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_PLAYCLICKSOUND_OFFSET))(this);
		}

		::System::Void SetIcon(::UnityEngine::Sprite* sprite)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETICON_OFFSET))(this, sprite);
		}

		::System::Void SetIcon_1(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETICON_1_OFFSET))(this, path);
		}

		::System::Void BindNotificationNode(::Share::ENotificationBadgeType notificationBadgeType, ::NodeGraph::VariantUnion subKey)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_BINDNOTIFICATIONNODE_OFFSET))(this, notificationBadgeType, subKey);
		}

		::System::Void BindNotificationNode_1(::Class_1_1EA8435E138F2E03* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_BINDNOTIFICATIONNODE_1_OFFSET))(this, node);
		}

		::System::Void SetTabName(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABNAME_OFFSET))(this, str);
		}

		::System::Void SetClickCheckSelected(::System::Boolean isCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETCLICKCHECKSELECTED_OFFSET))(this, isCheck);
		}

		::System::Void SetTabLock(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABLOCK_OFFSET))(this, isLock);
		}

		::System::Void SetTabLock_1(::System::Boolean isLock, ::System::Int64 unLockTime, ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>* timeEndAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int64, ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABLOCK_1_OFFSET))(this, isLock, unLockTime, timeEndAction);
		}

		::System::Void SetTabNameByTextKey(::System::String* key, ::Il2CppArray<::System::String*>* parms)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABNAMEBYTEXTKEY_OFFSET))(this, key, parms);
		}

		::System::Void SetTabNameByTextKey_1(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETTABNAMEBYTEXTKEY_1_OFFSET))(this, key);
		}

		::System::Void SetForceTrigger(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETFORCETRIGGER_OFFSET))(this, state);
		}

		::System::Void AddButtonClickListener(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_ADDBUTTONCLICKLISTENER_OFFSET))(this, action);
		}

		::System::Void RemoveButtonClickListener(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_REMOVEBUTTONCLICKLISTENER_OFFSET))(this, action);
		}

		::System::Void SetRedPoint(::Share::ENotificationBadgeType type, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETREDPOINT_OFFSET))(this, type, id);
		}

		::System::Void SetRedPoint_1(::Share::ENotificationBadgeType type)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_SETREDPOINT_1_OFFSET))(this, type);
		}

		::System::Void EnableBadge(::Enum_3_F019D5BE4A3284F8 showType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F019D5BE4A3284F8))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON_ENABLEBADGE_OFFSET))(this, showType);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_HandlePointerEnter(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTON___BASE_HANDLEPOINTERENTER_OFFSET))(this, P0);
		}
	};
}

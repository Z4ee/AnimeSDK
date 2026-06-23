#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUIHideItem_HandleSource.h"
#include "unitysdk/MonoUIHideItem_ShowStatus.h"
#include "unitysdk/System/Object.h"

class Class_3_B20F2CFBAA024FE3;
class MonoUIHideItem;
namespace MoleMole::Config { class AnimatorZoneHideUI; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UIHIDEITEMMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AADD2B0)
#define UIHIDEITEMMANAGER_HANDLESETUPUIANIMLENGTHMAX_OFFSET UNITYSDK_OFFSET(0x1AADE1F0)
#define UIHIDEITEMMANAGER_HANDLESETUPUIFINISHCB_OFFSET UNITYSDK_OFFSET(0x1AADE290)
#define UIHIDEITEMMANAGER_INTERRUPTSETUPUIBYTYPE_OFFSET UNITYSDK_OFFSET(0x1AADFD30)
#define UIHIDEITEMMANAGER_INTERRUPTSETUPUI_OFFSET UNITYSDK_OFFSET(0x1AADF980)
#define UIHIDEITEMMANAGER_ISITEMSHOW_OFFSET UNITYSDK_OFFSET(0x1AAE0120)
#define UIHIDEITEMMANAGER_POP_OFFSET UNITYSDK_OFFSET(0x1AADD7A0)
#define UIHIDEITEMMANAGER_PUSH_OFFSET UNITYSDK_OFFSET(0x1AADD440)
#define UIHIDEITEMMANAGER_RESETHIDEITEMS_OFFSET UNITYSDK_OFFSET(0x1AAE0250)
#define UIHIDEITEMMANAGER_SETUPUIBYACTION_OFFSET UNITYSDK_OFFSET(0x1AADEAB0)
#define UIHIDEITEMMANAGER_SETUPUIBYZONE_OFFSET UNITYSDK_OFFSET(0x1AADF880)
#define UIHIDEITEMMANAGER_SETUPUI_1_OFFSET UNITYSDK_OFFSET(0x1AADE360)
#define UIHIDEITEMMANAGER_SETUPUI_2_OFFSET UNITYSDK_OFFSET(0x1AADEB40)
#define UIHIDEITEMMANAGER_SETUPUI_OFFSET UNITYSDK_OFFSET(0x1AADD9D0)
#define UIHIDEITEMMANAGER_TRYGETHIDEITEM_OFFSET UNITYSDK_OFFSET(0x1AAE0680)
#define UIHIDEITEMMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADD3B0)

inline static constexpr unsigned int UIHideItemManager_TypeDefinitionIndex = 46612;

class UIHideItemManager : public ::System::Object
{
public:
	static ::UIHideItemManager** StaticGet__instance()
	{
		return (::UIHideItemManager**)Il2CppClass::FromTypeDefinitionIndex(UIHideItemManager_TypeDefinitionIndex)->GetStaticField(0x41ED0);
	}
	// static const ::System::String* HIDE_UI_ZONE_SETUP_TAG; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MonoUIHideItem*>*>* _itemDic; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* _handledTags; // 0x18
	::System::Int32 _hideUIZoneRuntimeID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER__CTOR_OFFSET))(this);
	}

	static ::UIHideItemManager* get_Instance()
	{
		return ((::UIHideItemManager*(*)())((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_GET_INSTANCE_OFFSET))();
	}

	::System::Void Push(::MonoUIHideItem* item)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIHideItem*))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_PUSH_OFFSET))(this, item);
	}

	::System::Void Pop(::MonoUIHideItem* item)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIHideItem*))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_POP_OFFSET))(this, item);
	}

	::System::Void SetupUI(::MonoUIHideItem_HandleSource handleSource, ::System::Action* setupFinishCB, ::System::String* setupTag, ::MonoUIHideItem_ShowStatus showStatus, ::System::Boolean ignoreAnimation, ::Il2CppArray<::System::String*>* uiTags)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIHideItem_HandleSource, ::System::Action*, ::System::String*, ::MonoUIHideItem_ShowStatus, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_SETUPUI_OFFSET))(this, handleSource, setupFinishCB, setupTag, showStatus, ignoreAnimation, uiTags);
	}

	::System::Void HandleSetupUIAnimLengthMax(::MonoUIHideItem* hideItem, ::MonoUIHideItem_ShowStatus showStatus, ::System::Boolean setupSuccess, ::System::Boolean ignoreAnimation, ::System::Single& curMaxDuration)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIHideItem*, ::MonoUIHideItem_ShowStatus, ::System::Boolean, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_HANDLESETUPUIANIMLENGTHMAX_OFFSET))(this, hideItem, showStatus, setupSuccess, ignoreAnimation, curMaxDuration);
	}

	::System::Void HandleSetupUIFinishCB(::System::Single setupUIAnimLengthMax, ::System::Action* setupFinishCB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_HANDLESETUPUIFINISHCB_OFFSET))(this, setupUIAnimLengthMax, setupFinishCB);
	}

	::System::Void SetupUI_1(::MonoUIHideItem_HandleSource handleSource, ::System::String* setupTag, ::MonoUIHideItem_ShowStatus showStatus, ::System::Boolean ignoreAnimation, ::System::Collections::Generic::List_1<::System::String*>* uiTags, ::System::Int32 priority, ::System::Action* setupFinishCB)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIHideItem_HandleSource, ::System::String*, ::MonoUIHideItem_ShowStatus, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_SETUPUI_1_OFFSET))(this, handleSource, setupTag, showStatus, ignoreAnimation, uiTags, priority, setupFinishCB);
	}

	::System::Void SetupUIByAction(::Class_3_B20F2CFBAA024FE3* setupUIAction, ::System::Action* setupFinishCB)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B20F2CFBAA024FE3*, ::System::Action*))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_SETUPUIBYACTION_OFFSET))(this, setupUIAction, setupFinishCB);
	}

	::System::Void SetupUI_2(::MonoUIHideItem_HandleSource handleSource, ::System::String* setupTag, ::System::Int32 priority, ::System::Collections::Generic::List_1<::System::String*>* showTags, ::System::Collections::Generic::List_1<::System::String*>* hideTags, ::System::Collections::Generic::List_1<::System::String*>* highlightTags, ::System::Boolean ignoreAnimation, ::System::Action* setupFinishCB)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIHideItem_HandleSource, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_SETUPUI_2_OFFSET))(this, handleSource, setupTag, priority, showTags, hideTags, highlightTags, ignoreAnimation, setupFinishCB);
	}

	::System::String* SetupUIByZone(::MoleMole::Config::AnimatorZoneHideUI* setupUIZone, ::System::Action* setupFinishCB)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::Config::AnimatorZoneHideUI*, ::System::Action*))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_SETUPUIBYZONE_OFFSET))(this, setupUIZone, setupFinishCB);
	}

	::System::Void InterruptSetupUI(::MonoUIHideItem_HandleSource handleSource, ::System::String* setupTag, ::System::Boolean ignoreAnimation, ::System::Action* setupFinishCB)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIHideItem_HandleSource, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_INTERRUPTSETUPUI_OFFSET))(this, handleSource, setupTag, ignoreAnimation, setupFinishCB);
	}

	::System::Void InterruptSetupUIByType(::System::String* itemType, ::MonoUIHideItem_HandleSource handleSource, ::System::String* setupTag, ::System::Boolean ignoreAnimation, ::System::Action* setupFinishCB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MonoUIHideItem_HandleSource, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_INTERRUPTSETUPUIBYTYPE_OFFSET))(this, itemType, handleSource, setupTag, ignoreAnimation, setupFinishCB);
	}

	::System::Boolean IsItemShow(::System::String* itemTag)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_ISITEMSHOW_OFFSET))(this, itemTag);
	}

	::System::Void ResetHideItems()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_RESETHIDEITEMS_OFFSET))(this);
	}

	::System::Boolean TryGetHideItem(::System::String* key, ::System::Collections::Generic::List_1<::MonoUIHideItem*>*& value)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MonoUIHideItem*>*&))((::PBYTE)hIl2Cpp + UIHIDEITEMMANAGER_TRYGETHIDEITEM_OFFSET))(this, key, value);
	}
};

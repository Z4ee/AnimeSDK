#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Sirenix/Serialization/SerializationData.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonBase.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonEx_ButtonState.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonEx_ClickSoundType.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonEx_LongPressState.h"

namespace MoleMole::Config { class ConfigSoundActionIntending; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx_UIButtonExEvent; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_ScrollCallback; }

#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ADDBUTTONCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1F1D5870)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_AFTERPRESSEDUPANIM_OFFSET UNITYSDK_OFFSET(0x1F1D4C50)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F1D5BD0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLEARPOINTERSTATE_OFFSET UNITYSDK_OFFSET(0x1F1D40F0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DEALBUTTONEXCLICK_OFFSET UNITYSDK_OFFSET(0x1F1D5E30)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ENABLE_OFFSET UNITYSDK_OFFSET(0x1F1D5280)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GETLONGPRESSTIME_OFFSET UNITYSDK_OFFSET(0x1F1D63B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_BUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1F1D3340)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x1F1D46C0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1F1D46B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1F1D3750)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1F1D3360)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1F1D3F20)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1F1D4170)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1F1D3800)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERDOWNACTION_OFFSET UNITYSDK_OFFSET(0x1F1D4A10)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERENTERACTION_OFFSET UNITYSDK_OFFSET(0x1F1D4AD0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTEREXITACTION_OFFSET UNITYSDK_OFFSET(0x1F1D4B30)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERUPACTION_OFFSET UNITYSDK_OFFSET(0x1F1D4A70)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F1D65B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F1D6430)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1F1D43B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F1D4B90)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F1D50C0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1F1D4450)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDROP_OFFSET UNITYSDK_OFFSET(0x1F1D4340)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F1D5720)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1F1D44F0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1F1D6930)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1D5A00)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_PLAYCLICKSOUND_OFFSET UNITYSDK_OFFSET(0x1F1D6130)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_PREPARECLICKSOUND_OFFSET UNITYSDK_OFFSET(0x1F1D5F70)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x1F1D36B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REMOVEBUTTONCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1F1D58D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REMOVECLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1F1D5960)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1F1D5550)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SELECT_OFFSET UNITYSDK_OFFSET(0x1F1D4CF0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETLONGPRESSTRIGGERTIMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F1D5010)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETNORMALIFINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1F1D48D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETNORMAL_OFFSET UNITYSDK_OFFSET(0x1F1D4800)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETPRESSED_OFFSET UNITYSDK_OFFSET(0x1F1D4720)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x1F1D4EC0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETSELECT_OFFSET UNITYSDK_OFFSET(0x1F1D4930)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SET_BUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1F1D3350)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SIRENIX_SERIALIZATION_ISUPPORTSPREFABSERIALIZATION_GET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x1F1D4590)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SIRENIX_SERIALIZATION_ISUPPORTSPREFABSERIALIZATION_SET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x1F1D4610)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_START_OFFSET UNITYSDK_OFFSET(0x1F1D5CE0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_STOPLONGPRESS_OFFSET UNITYSDK_OFFSET(0x1F1D5070)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRIGGERPRESSEDUP_OFFSET UNITYSDK_OFFSET(0x1F1D3A10)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERDOWNACTION_OFFSET UNITYSDK_OFFSET(0x1F1D3610)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERENTERACTION_OFFSET UNITYSDK_OFFSET(0x1F1D4050)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTEREXITACTION_OFFSET UNITYSDK_OFFSET(0x1F1D42A0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERUPACTION_OFFSET UNITYSDK_OFFSET(0x1F1D3970)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UPDATELONGPRESSSTATE_OFFSET UNITYSDK_OFFSET(0x1F1D5A60)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1D6BB0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX__RESETTRIGGER_G__CHECKRESET_100_0_OFFSET UNITYSDK_OFFSET(0x1F1D6730)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F1D6E70)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_HANDLEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1F1D6F30)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_HANDLEPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1F1D6FC0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1F1D7050)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F1D7060)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F1D70F0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1F1D7100)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F1D7110)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1F1D7120)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_SELECT_OFFSET UNITYSDK_OFFSET(0x1F1D7130)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_START_OFFSET UNITYSDK_OFFSET(0x1F1D7140)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_TRIGGERPRESSEDUP_OFFSET UNITYSDK_OFFSET(0x1F1D71D0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_TypeDefinitionIndex = 85040;

	class UIButtonEx : public ::UnityEngine::UI::Extension::UIButtonBase
	{
	public:
		// static const ::System::String* SelectedAnimBoolParams; // 0x0
		::UnityEngine::UI::Extension::UIButtonEx_ButtonState _buttonState_k__BackingField; // 0x120
		::System::Boolean _isSelect; // 0x124
		::Sirenix::Serialization::SerializationData serializationData; // 0x128
		::System::Boolean IgnoreButtonStateOnSelect; // 0x168
		::System::Boolean enableLongPressClickCheck; // 0x169
		::System::Single longPressTriggerTime; // 0x16C
		::System::Single _longPressTriggerTimeOverride; // 0x170
		::System::Single longPressInterval; // 0x174
		::UnityEngine::UI::Extension::UIButtonEx_LongPressState _longPressState; // 0x178
		::System::Single _longPressIntervalTimer; // 0x17C
		::System::Single _longPressTimer; // 0x180
		::System::Action_1<::UnityEngine::UI::Extension::UIButtonEx*>* beforeClickedAction; // 0x188
		::UnityEngine::Events::UnityEvent* onPointDownAction; // 0x190
		::UnityEngine::Events::UnityEvent* onPointUpAction; // 0x198
		::UnityEngine::Events::UnityEvent* onPointEnterAction; // 0x1A0
		::UnityEngine::Events::UnityEvent* onPointExitAction; // 0x1A8
		::UnityEngine::Events::UnityEvent* onDropAction; // 0x1B0
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* onPointDownActionAdvance; // 0x1B8
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* onPointUpActionAdvance; // 0x1C0
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* onPointEnterActionAdvance; // 0x1C8
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* onPointExitActionAdvance; // 0x1D0
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* OnBeginDragAction; // 0x1D8
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* OnDragAction; // 0x1E0
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* OnEndDragAction; // 0x1E8
		::System::Action_1<::UnityEngine::UI::Extension::UIButtonEx_ButtonState>* _onStateChange; // 0x1F0
		::System::Action_2<::System::Single, ::System::Single>* OnLongPressIntervalAction; // 0x1F8
		::UnityEngine::Events::UnityEvent* OnLongPressTriggerAction; // 0x200
		::UnityEngine::Events::UnityEvent* OnLongPressPointClickAction; // 0x208
		::UnityEngine::Events::UnityEvent* OnLongPressPointUpAction; // 0x210
		::UnityEngine::Events::UnityEvent* OnPressAction; // 0x218
		::System::Object* buttonData; // 0x220
		::System::Boolean muteClick; // 0x228
		::System::Int32 clickSoundID; // 0x22C
		::UnityEngine::UI::Extension::UIButtonEx_ClickSoundType oriSoundType; // 0x230
		::UnityEngine::UI::Text* text; // 0x238
		::UnityEngine::UI::Extension::UIButtonEx_ClickSoundType _curSoundType; // 0x240
		::MoleMole::Config::ConfigSoundActionIntending* soundAction; // 0x248
		::Foundation::Coroutine::CoroutineHandle _delayPressedUpHandle; // 0x250
		::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* onScrollCallback; // 0x258

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIButtonEx_ButtonState get_buttonState()
		{
			return ((::UnityEngine::UI::Extension::UIButtonEx_ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_BUTTONSTATE_OFFSET))(this);
		}

		::System::Void set_buttonState(::UnityEngine::UI::Extension::UIButtonEx_ButtonState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx_ButtonState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SET_BUTTONSTATE_OFFSET))(this, value);
		}

		::System::Boolean HandlePointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void ClearPointerState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLEARPOINTERSTATE_OFFSET))(this);
		}

		::System::Void HandlePointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDROP_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONENDDRAG_OFFSET))(this, eventData);
		}

		::Sirenix::Serialization::SerializationData Sirenix_Serialization_ISupportsPrefabSerialization_get_SerializationData()
		{
			return ((::Sirenix::Serialization::SerializationData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SIRENIX_SERIALIZATION_ISUPPORTSPREFABSERIALIZATION_GET_SERIALIZATIONDATA_OFFSET))(this);
		}

		::System::Void Sirenix_Serialization_ISupportsPrefabSerialization_set_SerializationData(::Sirenix::Serialization::SerializationData value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationData))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SIRENIX_SERIALIZATION_ISUPPORTSPREFABSERIALIZATION_SET_SERIALIZATIONDATA_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void SetPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETPRESSED_OFFSET))(this);
		}

		::System::Void SetNormal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETNORMAL_OFFSET))(this);
		}

		::System::Void SetNormalIfInteractable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETNORMALIFINTERACTABLE_OFFSET))(this);
		}

		::System::Void SetSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETSELECT_OFFSET))(this);
		}

		::System::Void TryInvokeOnPointerDownAction(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERDOWNACTION_OFFSET))(this, eventData);
		}

		::System::Void TryInvokeOnPointerUpAction(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERUPACTION_OFFSET))(this, eventData);
		}

		::System::Void TryInvokeOnPointerEnterAction(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERENTERACTION_OFFSET))(this, eventData);
		}

		::System::Void TryInvokeOnPointerExitAction(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTEREXITACTION_OFFSET))(this, eventData);
		}

		::System::Boolean HasOnPointerDownAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERDOWNACTION_OFFSET))(this);
		}

		::System::Boolean HasOnPointerUpAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERUPACTION_OFFSET))(this);
		}

		::System::Boolean HasOnPointerEnterAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERENTERACTION_OFFSET))(this);
		}

		::System::Boolean HasOnPointerExitAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTEREXITACTION_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* AfterPressedUpAnim(::System::Single length)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_AFTERPRESSEDUPANIM_OFFSET))(this, length);
		}

		::System::Void Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SELECT_OFFSET))(this);
		}

		::System::Void SetSelectState(::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETSELECTSTATE_OFFSET))(this, select);
		}

		::System::Void TriggerPressedUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRIGGERPRESSEDUP_OFFSET))(this);
		}

		::System::Void SetLongPressTriggerTimeOverride(::System::Single newTriggerTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETLONGPRESSTRIGGERTIMEOVERRIDE_OFFSET))(this, newTriggerTime);
		}

		::System::Void StopLongPress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_STOPLONGPRESS_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDISABLE_OFFSET))(this);
		}

		::System::Void Enable(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ENABLE_OFFSET))(this, v);
		}

		::System::Void AddButtonClickListener(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ADDBUTTONCLICKLISTENER_OFFSET))(this, action);
		}

		::System::Void RemoveButtonClickListener(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REMOVEBUTTONCLICKLISTENER_OFFSET))(this, action);
		}

		::System::Void RemoveClickListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REMOVECLICKLISTENER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONENABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONUPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_START_OFFSET))(this);
		}

		::System::Void DealButtonExClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DEALBUTTONEXCLICK_OFFSET))(this);
		}

		::System::UInt32 PrepareClickSound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_PREPARECLICKSOUND_OFFSET))(this);
		}

		::System::Void PlayClickSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_PLAYCLICKSOUND_OFFSET))(this);
		}

		::System::Single GetLongPressTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GETLONGPRESSTIME_OFFSET))(this);
		}

		::System::Void UpdateLongPressState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UPDATELONGPRESSSTATE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void RefreshState(::UnityEngine::UI::Extension::UIButtonEx_ButtonState buttonState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx_ButtonState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REFRESHSTATE_OFFSET))(this, buttonState);
		}

		::System::Void ResetTrigger(::System::String* curSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_RESETTRIGGER_OFFSET))(this, curSelect);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Void _ResetTrigger_g__CheckReset_100_0(::System::String* triggerName, ::System::String* select)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX__RESETTRIGGER_G__CHECKRESET_100_0_OFFSET))(this, triggerName, select);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_HandlePointerClick(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_HANDLEPOINTERCLICK_OFFSET))(this, P0);
		}

		::System::Void __base_HandlePointerEnter(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_HANDLEPOINTERENTER_OFFSET))(this, P0);
		}

		::System::Void __base_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONBEGINDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONENDDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_SELECT_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_START_OFFSET))(this);
		}

		::System::Void __base_TriggerPressedUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_TRIGGERPRESSEDUP_OFFSET))(this);
		}
	};
}

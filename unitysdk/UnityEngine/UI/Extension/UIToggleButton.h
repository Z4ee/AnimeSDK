#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/SerializationData.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonBase.h"
#include "unitysdk/UnityEngine/UI/Extension/UIToggleButton_ButtonState.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_ADDBUTTONCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1C6B96D0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_ADDCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1C6B9280)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C6B9B90)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_DEALBUTTONEXCLICK_OFFSET UNITYSDK_OFFSET(0x1C6B9E30)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_DOSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1C6B9360)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_GET_ISON_OFFSET UNITYSDK_OFFSET(0x1C6B8C70)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_GET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x1C6B8D90)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x1C6B8E00)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C6B8DF0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_HANDLEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1C6BA470)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_HANDLEPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1C6BA320)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_HANDLEPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1C6BA4C0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_HANDLEPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1C6BA530)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_HANDLEPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1C6BA390)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6BA640)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6BA5B0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_PLAYTOGGLESOUND_OFFSET UNITYSDK_OFFSET(0x1C6B9F30)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REFRESHSTATE_1_OFFSET UNITYSDK_OFFSET(0x1C6B9410)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x1C6B8D20)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REGISTERSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1C6B9100)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REMOVEBUTTONCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1C6B9730)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REMOVECLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1C6B9000)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REMOVESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1C6B91C0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C6B97C0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_SET_ISON_OFFSET UNITYSDK_OFFSET(0x1C6B8C80)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_SET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x1C6B8DC0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_START_OFFSET UNITYSDK_OFFSET(0x1C6B9CC0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_SWALLOWBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1C6BA250)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_SWALLOWCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1C6B8E60)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BA6D0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON__RESETTRIGGER_G__CHECKRESET_31_0_OFFSET UNITYSDK_OFFSET(0x1C6B9990)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C6BA6E0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON___BASE_DOSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1C6BA7A0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON___BASE_HANDLEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1C6BA7B0)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON___BASE_HANDLEPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1C6BA840)
#define UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON___BASE_START_OFFSET UNITYSDK_OFFSET(0x1C6BA8D0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIToggleButton_TypeDefinitionIndex = 75345;

	class UIToggleButton : public ::UnityEngine::UI::Extension::UIButtonBase
	{
	public:
		::System::Boolean m_IsOn; // 0x120
		::System::Boolean _allowDeal; // 0x121
		::System::Boolean _isPointerIn; // 0x122
		::System::Action_1<::UnityEngine::UI::Extension::UIToggleButton_ButtonState>* _onStateChange; // 0x128
		::UnityEngine::UI::Extension::UIToggleButton_ButtonState _buttonState; // 0x130
		::System::Boolean muteClick; // 0x134
		::MoleMole::Config::ConfigSoundActionGeneral* soundToggleOn; // 0x138
		::MoleMole::Config::ConfigSoundActionGeneral* soundToggleOff; // 0x140
		::Sirenix::Serialization::SerializationData serializationData; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_GET_ISON_OFFSET))(this);
		}

		::System::Void set_isOn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_SET_ISON_OFFSET))(this, value);
		}

		::Sirenix::Serialization::SerializationData get_SerializationData()
		{
			return ((::Sirenix::Serialization::SerializationData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_GET_SERIALIZATIONDATA_OFFSET))(this);
		}

		::System::Void set_SerializationData(::Sirenix::Serialization::SerializationData value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationData))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_SET_SERIALIZATIONDATA_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void SwallowClickListener(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_SWALLOWCLICKLISTENER_OFFSET))(this, callback);
		}

		::System::Void RemoveClickListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REMOVECLICKLISTENER_OFFSET))(this);
		}

		::System::Void RegisterStateChange(::System::Action_1<::UnityEngine::UI::Extension::UIToggleButton_ButtonState>* onStateChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::UI::Extension::UIToggleButton_ButtonState>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REGISTERSTATECHANGE_OFFSET))(this, onStateChange);
		}

		::System::Void RemoveStateChange(::System::Action_1<::UnityEngine::UI::Extension::UIToggleButton_ButtonState>* onStateChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::UI::Extension::UIToggleButton_ButtonState>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REMOVESTATECHANGE_OFFSET))(this, onStateChange);
		}

		::System::Void AddClickListener(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_ADDCLICKLISTENER_OFFSET))(this, callback);
		}

		::System::Void DoStateTransition(::System::Boolean instant, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_DOSTATETRANSITION_OFFSET))(this, instant, force);
		}

		::System::Void RefreshState(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REFRESHSTATE_OFFSET))(this, force);
		}

		::System::Void AddButtonClickListener(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_ADDBUTTONCLICKLISTENER_OFFSET))(this, action);
		}

		::System::Void RemoveButtonClickListener(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REMOVEBUTTONCLICKLISTENER_OFFSET))(this, action);
		}

		::System::Void RefreshState_1(::UnityEngine::UI::Extension::UIToggleButton_ButtonState buttonState, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIToggleButton_ButtonState, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_REFRESHSTATE_1_OFFSET))(this, buttonState, force);
		}

		::System::Void ResetTrigger(::System::String* curSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_RESETTRIGGER_OFFSET))(this, curSelect);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_START_OFFSET))(this);
		}

		::System::Void DealButtonExClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_DEALBUTTONEXCLICK_OFFSET))(this);
		}

		::System::Void SwallowButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_SWALLOWBUTTONCLICK_OFFSET))(this);
		}

		::System::Void PlayToggleSound(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_PLAYTOGGLESOUND_OFFSET))(this, isOn);
		}

		::System::Boolean HandlePointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_HANDLEPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_HANDLEPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_HANDLEPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_HANDLEPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_HANDLEPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void _ResetTrigger_g__CheckReset_31_0(::System::String* triggerName, ::System::String* select)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON__RESETTRIGGER_G__CHECKRESET_31_0_OFFSET))(this, triggerName, select);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_DoStateTransition(::System::Boolean P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON___BASE_DOSTATETRANSITION_OFFSET))(this, P0, P1);
		}

		::System::Void __base_HandlePointerClick(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON___BASE_HANDLEPOINTERCLICK_OFFSET))(this, P0);
		}

		::System::Void __base_HandlePointerEnter(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON___BASE_HANDLEPOINTERENTER_OFFSET))(this, P0);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITOGGLEBUTTON___BASE_START_OFFSET))(this);
		}
	};
}

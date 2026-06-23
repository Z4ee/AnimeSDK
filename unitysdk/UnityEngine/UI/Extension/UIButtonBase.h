#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E781B20)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CHECKCOLDDOWN_OFFSET UNITYSDK_OFFSET(0x1E782630)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CHECKPROTECT_OFFSET UNITYSDK_OFFSET(0x1E782F40)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_GET_CANINTERACTFORMONOINPUTKEY_OFFSET UNITYSDK_OFFSET(0x11EB31C0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_GET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x11EB31A0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_HANDLEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1E782EA0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_HANDLEPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1E782EF0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1E781F80)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_MAYINTERACT_OFFSET UNITYSDK_OFFSET(0x1E781E50)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x11EB31E0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x11EB34B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E781B90)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1E781790)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1E781AC0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1E782A40)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1E782820)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1E782AE0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1E782BD0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1E782940)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1E782D60)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1E782CC0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1E782E00)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1E782E50)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1E782D10)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_PASSCLICKPRECHECK_OFFSET UNITYSDK_OFFSET(0x1E7830F0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETCANTCLICKWHENHASDRAGED_OFFSET UNITYSDK_OFFSET(0x1E781A60)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETCLICKPRECHECK_OFFSET UNITYSDK_OFFSET(0x1E7828F0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETGAMEPADMODULELOSTFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0x1E781D00)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETPOINTERDOWNINNER_OFFSET UNITYSDK_OFFSET(0x1E7821D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETPOINTERUPINNER_OFFSET UNITYSDK_OFFSET(0x1E7823C0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SET_CANINTERACTFORMONOINPUTKEY_OFFSET UNITYSDK_OFFSET(0x11EB31D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x11EB31B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1E782410)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1E782020)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1E782230)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_TRIGGERPRESSEDUP_OFFSET UNITYSDK_OFFSET(0x1E7830B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E783180)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E783250)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1E783260)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E783310)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1E783320)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1E7833D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1E7833E0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1E7833F0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1E783400)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonBase_TypeDefinitionIndex = 73934;

	class UIButtonBase : public ::UnityEngine::UI::Button
	{
	public:
		static ::System::Single* StaticGet__lastPressStamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIButtonBase_TypeDefinitionIndex)->GetStaticField(0x12910);
		}
		// static const ::System::String* LostFocusAnimBoolParams; // 0x0
		::UnityEngine::Events::UnityEvent* clickedEvent; // 0x100
		::System::Boolean _CanInteract_k__BackingField; // 0x108
		::System::Boolean _CanInteractForMonoInputKey_k__BackingField; // 0x109
		::System::Boolean isClickProtect; // 0x10A
		::System::Boolean immediatelyDrag; // 0x10B
		::System::Boolean _isPointerDown; // 0x10C
		::System::Boolean _canClick; // 0x10D
		::System::Boolean _isLostFocus; // 0x10E
		::System::Func_1<::System::Boolean>* _clickPreCheck; // 0x110
		::System::Boolean IgnoreFading; // 0x118
		::System::Boolean DisableDragPass; // 0x119

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_GET_CANINTERACT_OFFSET))(this);
		}

		::System::Void set_CanInteract(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SET_CANINTERACT_OFFSET))(this, value);
		}

		::System::Boolean get_CanInteractForMonoInputKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_GET_CANINTERACTFORMONOINPUTKEY_OFFSET))(this);
		}

		::System::Void set_CanInteractForMonoInputKey(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SET_CANINTERACTFORMONOINPUTKEY_OFFSET))(this, value);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void SetCantClickWhenHasDraged(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETCANTCLICKWHENHASDRAGED_OFFSET))(this, eventData);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, eventData);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONENABLE_OFFSET))(this);
		}

		::System::Boolean MayInteract(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_MAYINTERACT_OFFSET))(this, eventData);
		}

		::System::Boolean SimulatePointerDown(::System::Boolean isSkipCDCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERDOWN_OFFSET))(this, isSkipCDCheck);
		}

		::System::Boolean SimulatePointerUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERUP_OFFSET))(this);
		}

		::System::Boolean SimulatePointerClick(::System::Boolean isSkipCDCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERCLICK_OFFSET))(this, isSkipCDCheck);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void SetClickPreCheck(::System::Func_1<::System::Boolean>* checkCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETCLICKPRECHECK_OFFSET))(this, checkCB);
		}

		::System::Boolean IsInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ISINTERACTABLE_OFFSET))(this);
		}

		::System::Void SetPointerDownInner(::System::Boolean isPointerDown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETPOINTERDOWNINNER_OFFSET))(this, isPointerDown);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void SetPointerUpInner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETPOINTERUPINNER_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void SetGamepadModuleLostFocusState(::System::Boolean isLostFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETGAMEPADMODULELOSTFOCUSSTATE_OFFSET))(this, isLostFocus);
		}

		::System::Void OnRawPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnRawPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnRawPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnRawPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnRawPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_HANDLEPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_HANDLEPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Boolean CheckColdDown(::System::Boolean isSkipCDCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CHECKCOLDDOWN_OFFSET))(this, isSkipCDCheck);
		}

		static ::System::Boolean CheckProtect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CHECKPROTECT_OFFSET))();
		}

		::System::Void TriggerPressedUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_TRIGGERPRESSEDUP_OFFSET))(this);
		}

		::System::Boolean PassClickPreCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_PASSCLICKPRECHECK_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_AWAKE_OFFSET))(this);
		}

		::System::Boolean __base_IsInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ISINTERACTABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERCLICK_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERDOWN_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERENTER_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTEREXIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERUP_OFFSET))(this, P0);
		}
	};
}

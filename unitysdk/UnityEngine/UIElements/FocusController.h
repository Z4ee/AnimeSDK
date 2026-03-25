#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/FocusController_FocusedElement.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class IFocusRing; }

#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTOGRABFOCUS_OFFSET UNITYSDK_OFFSET(0x18AD0D70)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTORELEASEFOCUS_OFFSET UNITYSDK_OFFSET(0x18AD0980)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_DOFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x18AC9B10)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GETLEAFFOCUSEDELEMENT_OFFSET UNITYSDK_OFFSET(0x18ACA2C0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_FOCUSRING_OFFSET UNITYSDK_OFFSET(0x18AD0950)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_IMGUIKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x18AD1680)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GRABFOCUS_OFFSET UNITYSDK_OFFSET(0x18AD0F00)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_RELEASEFOCUS_OFFSET UNITYSDK_OFFSET(0x18AD0BE0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SET_IMGUIKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x18AD1690)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUSONEVENT_OFFSET UNITYSDK_OFFSET(0x18AD13E0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUS_OFFSET UNITYSDK_OFFSET(0x18AD1090)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SYNCIMGUIFOCUS_OFFSET UNITYSDK_OFFSET(0x18AD16A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusController_TypeDefinitionIndex = 5843;

	class FocusController : public ::System::Object
	{
	public:
		::UnityEngine::UIElements::IFocusRing* _focusRing_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>* m_FocusedElements; // 0x18
		::System::Int32 _imguiKeyboardControl_k__BackingField; // 0x20

		::UnityEngine::UIElements::IFocusRing* get_focusRing()
		{
			return ((::UnityEngine::UIElements::IFocusRing*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_FOCUSRING_OFFSET))(this);
		}

		::UnityEngine::UIElements::Focusable* GetLeafFocusedElement()
		{
			return ((::UnityEngine::UIElements::Focusable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GETLEAFFOCUSEDELEMENT_OFFSET))(this);
		}

		::System::Void DoFocusChange(::UnityEngine::UIElements::Focusable* f)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_DOFOCUSCHANGE_OFFSET))(this, f);
		}

		::System::Void AboutToReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection* direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTORELEASEFOCUS_OFFSET))(this, focusable, willGiveFocusTo, direction);
		}

		::System::Void ReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection* direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_RELEASEFOCUS_OFFSET))(this, focusable, willGiveFocusTo, direction);
		}

		::System::Void AboutToGrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection* direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTOGRABFOCUS_OFFSET))(this, focusable, willTakeFocusFrom, direction);
		}

		::System::Void GrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection* direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GRABFOCUS_OFFSET))(this, focusable, willTakeFocusFrom, direction);
		}

		::System::Void SwitchFocus(::UnityEngine::UIElements::Focusable* newFocusedElement, ::UnityEngine::UIElements::FocusChangeDirection* direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUS_OFFSET))(this, newFocusedElement, direction);
		}

		::UnityEngine::UIElements::Focusable* SwitchFocusOnEvent(::UnityEngine::UIElements::EventBase* e)
		{
			return ((::UnityEngine::UIElements::Focusable*(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUSONEVENT_OFFSET))(this, e);
		}

		::System::Int32 get_imguiKeyboardControl()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_IMGUIKEYBOARDCONTROL_OFFSET))(this);
		}

		::System::Void set_imguiKeyboardControl(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SET_IMGUIKEYBOARDCONTROL_OFFSET))(this, value);
		}

		::System::Void SyncIMGUIFocus(::System::Int32 imguiKeyboardControlID, ::UnityEngine::UIElements::Focusable* imguiContainerHavingKeyboardControl, ::System::Boolean forceSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UIElements::Focusable*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SYNCIMGUIFOCUS_OFFSET))(this, imguiKeyboardControlID, imguiContainerHavingKeyboardControl, forceSwitch);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/FocusController_FocusedElement.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class IFocusRing; }

#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTOGRABFOCUS_OFFSET UNITYSDK_OFFSET(0x1D60F4B0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTORELEASEFOCUS_OFFSET UNITYSDK_OFFSET(0x1D60F0C0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_DOFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D6072B0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GETLEAFFOCUSEDELEMENT_OFFSET UNITYSDK_OFFSET(0x1D607E50)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_FOCUSRING_OFFSET UNITYSDK_OFFSET(0x1D60F090)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_IMGUIKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x1D60FF80)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GRABFOCUS_OFFSET UNITYSDK_OFFSET(0x1D60F640)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_RELEASEFOCUS_OFFSET UNITYSDK_OFFSET(0x1D60F320)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SET_IMGUIKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x1D60FF90)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUSONEVENT_OFFSET UNITYSDK_OFFSET(0x1D60FBE0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUS_OFFSET UNITYSDK_OFFSET(0x1D60F7D0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SYNCIMGUIFOCUS_OFFSET UNITYSDK_OFFSET(0x1D60FFA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusController_TypeDefinitionIndex = 5870;

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

		::System::Void DoFocusChange(::UnityEngine::UIElements::Focusable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_DOFOCUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void AboutToReleaseFocus(::UnityEngine::UIElements::Focusable* a1, ::UnityEngine::UIElements::Focusable* a2, ::UnityEngine::UIElements::FocusChangeDirection* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTORELEASEFOCUS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReleaseFocus(::UnityEngine::UIElements::Focusable* a1, ::UnityEngine::UIElements::Focusable* a2, ::UnityEngine::UIElements::FocusChangeDirection* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_RELEASEFOCUS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AboutToGrabFocus(::UnityEngine::UIElements::Focusable* a1, ::UnityEngine::UIElements::Focusable* a2, ::UnityEngine::UIElements::FocusChangeDirection* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTOGRABFOCUS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GrabFocus(::UnityEngine::UIElements::Focusable* a1, ::UnityEngine::UIElements::Focusable* a2, ::UnityEngine::UIElements::FocusChangeDirection* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GRABFOCUS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SwitchFocus(::UnityEngine::UIElements::Focusable* a1, ::UnityEngine::UIElements::FocusChangeDirection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::UIElements::Focusable* SwitchFocusOnEvent(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::UnityEngine::UIElements::Focusable*(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUSONEVENT_OFFSET))(this, a1);
		}

		::System::Int32 get_imguiKeyboardControl()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_IMGUIKEYBOARDCONTROL_OFFSET))(this);
		}

		::System::Void set_imguiKeyboardControl(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SET_IMGUIKEYBOARDCONTROL_OFFSET))(this, a1);
		}

		::System::Void SyncIMGUIFocus(::System::Int32 a1, ::UnityEngine::UIElements::Focusable* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UIElements::Focusable*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SYNCIMGUIFOCUS_OFFSET))(this, a1, a2, a3);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/CallbackEventHandler.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_FOCUSABLE_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x1BBE34F0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_FOCUS_OFFSET UNITYSDK_OFFSET(0x1BBE2CF0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GETFIRSTFOCUSABLECHILD_OFFSET UNITYSDK_OFFSET(0x1BBE30B0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GETFOCUSDELEGATE_OFFSET UNITYSDK_OFFSET(0x1BBE3030)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_CANGRABFOCUS_OFFSET UNITYSDK_OFFSET(0x1BBE2CE0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_DELEGATESFOCUS_OFFSET UNITYSDK_OFFSET(0x1BBE2CD0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_FOCUSABLE_OFFSET UNITYSDK_OFFSET(0x1BBE2CA0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_FOCUSABLE_OFFSET UNITYSDK_OFFSET(0x1BBE2CB0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_TABINDEX_OFFSET UNITYSDK_OFFSET(0x1BBE2CC0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE2C90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Focusable_TypeDefinitionIndex = 27445;

	class Focusable : public ::UnityEngine::UIElements::CallbackEventHandler
	{
	public:
		::System::Boolean _focusable_k__BackingField; // 0x18
		::System::Int32 _tabIndex_k__BackingField; // 0x1C
		::System::Boolean m_DelegatesFocus; // 0x20
		::System::Boolean isIMGUIContainer; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_focusable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_FOCUSABLE_OFFSET))(this);
		}

		::System::Void set_focusable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_FOCUSABLE_OFFSET))(this, value);
		}

		::System::Void set_tabIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_TABINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_delegatesFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_DELEGATESFOCUS_OFFSET))(this);
		}

		::System::Boolean get_canGrabFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_CANGRABFOCUS_OFFSET))(this);
		}

		::System::Void Focus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_FOCUS_OFFSET))(this);
		}

		::UnityEngine::UIElements::Focusable* GetFocusDelegate()
		{
			return ((::UnityEngine::UIElements::Focusable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GETFOCUSDELEGATE_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::Focusable* GetFirstFocusableChild(::UnityEngine::UIElements::VisualElement* ve)
		{
			return ((::UnityEngine::UIElements::Focusable*(*)(::UnityEngine::UIElements::VisualElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GETFIRSTFOCUSABLECHILD_OFFSET))(ve);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_EXECUTEDEFAULTACTION_OFFSET))(this, evt);
		}
	};
}

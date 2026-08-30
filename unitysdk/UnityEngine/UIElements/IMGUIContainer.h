#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIElements/ContextType.h"
#include "unitysdk/UnityEngine/UIElements/IMGUIContainer_GUIGlobals.h"
#include "unitysdk/UnityEngine/UIElements/VisualElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class GUILayoutUtility_LayoutCache; }
namespace UnityEngine { class ObjectGUIState; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class FocusChangeDirection; }

#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D6133B0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D6132D0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOONGUI_OFFSET UNITYSDK_OFFSET(0x1D610A30)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GETCURRENTTRANSFORMANDCLIP_OFFSET UNITYSDK_OFFSET(0x1D6126B0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x1D610460)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1D610560)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_FOCUSONLYIFHASFOCUSABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x1D610570)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_GUISTATE_OFFSET UNITYSDK_OFFSET(0x1D610340)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LASTWORLDCLIP_OFFSET UNITYSDK_OFFSET(0x1D610450)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D610500)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1D6104A0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1D610330)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_1_OFFSET UNITYSDK_OFFSET(0x1D6125C0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_2_OFFSET UNITYSDK_OFFSET(0x1D612900)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_OFFSET UNITYSDK_OFFSET(0x1D6124D0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_MARKDIRTYLAYOUT_OFFSET UNITYSDK_OFFSET(0x1D612490)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_RESTOREGLOBALS_OFFSET UNITYSDK_OFFSET(0x1D6107F0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SAVEGLOBALS_OFFSET UNITYSDK_OFFSET(0x1D610580)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SENDEVENTTOIMGUI_OFFSET UNITYSDK_OFFSET(0x1D607F00)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D613440)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMGUIContainer_TypeDefinitionIndex = 5872;

	class IMGUIContainer : public ::UnityEngine::UIElements::VisualElement
	{
	public:
		static ::System::String** StaticGet_ussClassName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(IMGUIContainer_TypeDefinitionIndex)->GetStaticField(0x1B4E0);
		}
		::System::Action* m_OnGUIHandler; // 0x160
		::UnityEngine::ObjectGUIState* m_ObjectGUIState; // 0x168
		::System::Boolean useOwnerObjectGUIState; // 0x170
		::UnityEngine::Rect _lastWorldClip_k__BackingField; // 0x174
		::UnityEngine::GUILayoutUtility_LayoutCache* m_Cache; // 0x188
		::UnityEngine::Rect m_CachedClippingRect; // 0x190
		::UnityEngine::Matrix4x4 m_CachedTransform; // 0x1A0
		::UnityEngine::UIElements::ContextType _contextType_k__BackingField; // 0x1E0
		::System::Boolean lostFocus; // 0x1E4
		::System::Boolean receivedFocus; // 0x1E5
		::UnityEngine::UIElements::FocusChangeDirection* focusChangeDirection; // 0x1E8
		::System::Boolean hasFocusableControls; // 0x1F0
		::System::Int32 newKeyboardFocusControlID; // 0x1F4
		::System::Boolean _focusOnlyIfHasFocusableControls_k__BackingField; // 0x1F8
		::UnityEngine::UIElements::IMGUIContainer_GUIGlobals m_GUIGlobals; // 0x1FC

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER__CCTOR_OFFSET))();
		}

		::System::Action* get_onGUIHandler()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_ONGUIHANDLER_OFFSET))(this);
		}

		::UnityEngine::ObjectGUIState* get_guiState()
		{
			return ((::UnityEngine::ObjectGUIState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_GUISTATE_OFFSET))(this);
		}

		::UnityEngine::Rect get_lastWorldClip()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LASTWORLDCLIP_OFFSET))(this);
		}

		::UnityEngine::GUILayoutUtility_LayoutCache* get_cache()
		{
			return ((::UnityEngine::GUILayoutUtility_LayoutCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CACHE_OFFSET))(this);
		}

		::System::Single get_layoutMeasuredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDWIDTH_OFFSET))(this);
		}

		::System::Single get_layoutMeasuredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDHEIGHT_OFFSET))(this);
		}

		::UnityEngine::UIElements::ContextType get_contextType()
		{
			return ((::UnityEngine::UIElements::ContextType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CONTEXTTYPE_OFFSET))(this);
		}

		::System::Boolean get_focusOnlyIfHasFocusableControls()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_FOCUSONLYIFHASFOCUSABLECONTROLS_OFFSET))(this);
		}

		::System::Void SaveGlobals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SAVEGLOBALS_OFFSET))(this);
		}

		::System::Void RestoreGlobals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_RESTOREGLOBALS_OFFSET))(this);
		}

		::System::Void DoOnGUI(::UnityEngine::Event* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Rect a3, ::System::Boolean a4, ::UnityEngine::Rect a5, ::System::Action* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, ::System::Boolean, ::UnityEngine::Rect, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOONGUI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void MarkDirtyLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_MARKDIRTYLAYOUT_OFFSET))(this);
		}

		::System::Boolean SendEventToIMGUI(::UnityEngine::UIElements::EventBase* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SENDEVENTTOIMGUI_OFFSET))(this, a1, a2);
		}

		::System::Boolean HandleIMGUIEvent(::UnityEngine::Event* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Event*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean HandleIMGUIEvent_1(::UnityEngine::Event* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Event*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HandleIMGUIEvent_2(::UnityEngine::Event* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Rect a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void GetCurrentTransformAndClip(::UnityEngine::UIElements::IMGUIContainer* a1, ::UnityEngine::Event* a2, ::UnityEngine::Matrix4x4& a3, ::UnityEngine::Rect& a4)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IMGUIContainer*, ::UnityEngine::Event*, ::UnityEngine::Matrix4x4&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GETCURRENTTRANSFORMANDCLIP_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_1_OFFSET))(this, a1);
		}
	};
}

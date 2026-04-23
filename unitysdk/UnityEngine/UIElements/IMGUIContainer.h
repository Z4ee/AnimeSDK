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

#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A510510)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5104C0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOONGUI_OFFSET UNITYSDK_OFFSET(0x1A50DB10)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GETCURRENTTRANSFORMANDCLIP_OFFSET UNITYSDK_OFFSET(0x1A50F970)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x1A50D540)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1A50D640)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_FOCUSONLYIFHASFOCUSABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x1A50D650)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_GUISTATE_OFFSET UNITYSDK_OFFSET(0x1A50D420)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LASTWORLDCLIP_OFFSET UNITYSDK_OFFSET(0x1A50D530)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A50D5E0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A50D580)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1A50D410)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_1_OFFSET UNITYSDK_OFFSET(0x1A50F880)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_2_OFFSET UNITYSDK_OFFSET(0x1A50FB50)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_OFFSET UNITYSDK_OFFSET(0x1A50F790)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_MARKDIRTYLAYOUT_OFFSET UNITYSDK_OFFSET(0x1A50F750)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_RESTOREGLOBALS_OFFSET UNITYSDK_OFFSET(0x1A50D8D0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SAVEGLOBALS_OFFSET UNITYSDK_OFFSET(0x1A50D660)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SENDEVENTTOIMGUI_OFFSET UNITYSDK_OFFSET(0x1A505DD0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A510580)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMGUIContainer_TypeDefinitionIndex = 5857;

	class IMGUIContainer : public ::UnityEngine::UIElements::VisualElement
	{
	public:
		static ::System::String** StaticGet_ussClassName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(IMGUIContainer_TypeDefinitionIndex)->GetStaticField(0x1CFE0);
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

		::System::Void DoOnGUI(::UnityEngine::Event* evt, ::UnityEngine::Matrix4x4 parentTransform, ::UnityEngine::Rect clippingRect, ::System::Boolean isComputingLayout, ::UnityEngine::Rect layoutSize, ::System::Action* onGUIHandler, ::System::Boolean canAffectFocus)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, ::System::Boolean, ::UnityEngine::Rect, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOONGUI_OFFSET))(this, evt, parentTransform, clippingRect, isComputingLayout, layoutSize, onGUIHandler, canAffectFocus);
		}

		::System::Void MarkDirtyLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_MARKDIRTYLAYOUT_OFFSET))(this);
		}

		::System::Boolean SendEventToIMGUI(::UnityEngine::UIElements::EventBase* evt, ::System::Boolean canAffectFocus)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SENDEVENTTOIMGUI_OFFSET))(this, evt, canAffectFocus);
		}

		::System::Boolean HandleIMGUIEvent(::UnityEngine::Event* e, ::System::Boolean canAffectFocus)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Event*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_OFFSET))(this, e, canAffectFocus);
		}

		::System::Boolean HandleIMGUIEvent_1(::UnityEngine::Event* e, ::System::Action* onGUIHandler, ::System::Boolean canAffectFocus)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Event*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_1_OFFSET))(this, e, onGUIHandler, canAffectFocus);
		}

		::System::Boolean HandleIMGUIEvent_2(::UnityEngine::Event* e, ::UnityEngine::Matrix4x4 worldTransform, ::UnityEngine::Rect clippingRect, ::System::Action* onGUIHandler, ::System::Boolean canAffectFocus)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_2_OFFSET))(this, e, worldTransform, clippingRect, onGUIHandler, canAffectFocus);
		}

		static ::System::Void GetCurrentTransformAndClip(::UnityEngine::UIElements::IMGUIContainer* container, ::UnityEngine::Event* evt, ::UnityEngine::Matrix4x4& transform, ::UnityEngine::Rect& clipRect)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::IMGUIContainer*, ::UnityEngine::Event*, ::UnityEngine::Matrix4x4&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GETCURRENTTRANSFORMANDCLIP_OFFSET))(container, evt, transform, clipRect);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposeManaged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_1_OFFSET))(this, disposeManaged);
		}
	};
}

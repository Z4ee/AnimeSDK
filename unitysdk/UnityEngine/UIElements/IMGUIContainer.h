#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIElements/ContextType.h"
#include "unitysdk/UnityEngine/UIElements/IMGUIContainer_GUIGlobals.h"
#include "unitysdk/UnityEngine/UIElements/VisualElement.h"
#include "unitysdk/UnityEngine/UIElements/VisualElement_MeasureMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class GUILayoutUtility_LayoutCache; }
namespace UnityEngine { class ObjectGUIState; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class MeshGenerationContext; }

#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1CFFF3B0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CFFF300)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOIMGUIREPAINT_OFFSET UNITYSDK_OFFSET(0x1CFFDB70)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOMEASURE_OFFSET UNITYSDK_OFFSET(0x1CFFED20)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOONGUI_OFFSET UNITYSDK_OFFSET(0x1CFFBE00)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x1CFFEAC0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GETCURRENTTRANSFORMANDCLIP_OFFSET UNITYSDK_OFFSET(0x1CFFE770)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x1CFFACA0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CANGRABFOCUS_OFFSET UNITYSDK_OFFSET(0x1CFFAE60)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1CFFAE30)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_FOCUSONLYIFHASFOCUSABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x1CFFAE50)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_GUISTATE_OFFSET UNITYSDK_OFFSET(0x1CFFABE0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LASTWORLDCLIP_OFFSET UNITYSDK_OFFSET(0x1CFFAC80)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1CFFADA0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LAYOUTMEASUREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1CFFAD10)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1CFFAB20)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1CFFDB00)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_1_OFFSET UNITYSDK_OFFSET(0x1CFFE680)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_2_OFFSET UNITYSDK_OFFSET(0x1CFFE060)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEIMGUIEVENT_OFFSET UNITYSDK_OFFSET(0x1CFFE590)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_MARKDIRTYLAYOUT_OFFSET UNITYSDK_OFFSET(0x1CFFDAC0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ONGENERATEVISUALCONTENT_OFFSET UNITYSDK_OFFSET(0x1CFFB800)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_RESTOREGLOBALS_OFFSET UNITYSDK_OFFSET(0x1CFFBBC0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SAVEGLOBALS_OFFSET UNITYSDK_OFFSET(0x1CFFB950)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SENDEVENTTOIMGUI_OFFSET UNITYSDK_OFFSET(0x1CFF24F0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1CFFAE40)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_LASTWORLDCLIP_OFFSET UNITYSDK_OFFSET(0x1CFFAC90)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1CFFAB30)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFFF3D0)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFFAF60)
#define UNITYENGINE_UIELEMENTS_IMGUICONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFAF50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMGUIContainer_TypeDefinitionIndex = 28052;

	class IMGUIContainer : public ::UnityEngine::UIElements::VisualElement
	{
	public:
		static ::System::String** StaticGet_ussClassName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(IMGUIContainer_TypeDefinitionIndex)->GetStaticField(0x23C90);
		}
		::System::Action* m_OnGUIHandler; // 0x2F0
		::UnityEngine::ObjectGUIState* m_ObjectGUIState; // 0x2F8
		::System::Boolean useOwnerObjectGUIState; // 0x300
		::UnityEngine::Rect _lastWorldClip_k__BackingField; // 0x304
		::UnityEngine::GUILayoutUtility_LayoutCache* m_Cache; // 0x318
		::UnityEngine::Rect m_CachedClippingRect; // 0x320
		::UnityEngine::Matrix4x4 m_CachedTransform; // 0x330
		::UnityEngine::UIElements::ContextType _contextType_k__BackingField; // 0x370
		::System::Boolean lostFocus; // 0x374
		::System::Boolean receivedFocus; // 0x375
		::UnityEngine::UIElements::FocusChangeDirection* focusChangeDirection; // 0x378
		::System::Boolean hasFocusableControls; // 0x380
		::System::Int32 newKeyboardFocusControlID; // 0x384
		::System::Boolean _focusOnlyIfHasFocusableControls_k__BackingField; // 0x388
		::UnityEngine::UIElements::IMGUIContainer_GUIGlobals m_GUIGlobals; // 0x38C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Action* onGUIHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER__CTOR_1_OFFSET))(this, onGUIHandler);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER__CCTOR_OFFSET))();
		}

		::System::Action* get_onGUIHandler()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_ONGUIHANDLER_OFFSET))(this);
		}

		::System::Void set_onGUIHandler(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_ONGUIHANDLER_OFFSET))(this, value);
		}

		::UnityEngine::ObjectGUIState* get_guiState()
		{
			return ((::UnityEngine::ObjectGUIState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_GUISTATE_OFFSET))(this);
		}

		::UnityEngine::Rect get_lastWorldClip()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_LASTWORLDCLIP_OFFSET))(this);
		}

		::System::Void set_lastWorldClip(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_LASTWORLDCLIP_OFFSET))(this, value);
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

		::System::Void set_contextType(::UnityEngine::UIElements::ContextType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::ContextType))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_SET_CONTEXTTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_focusOnlyIfHasFocusableControls()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_FOCUSONLYIFHASFOCUSABLECONTROLS_OFFSET))(this);
		}

		::System::Boolean get_canGrabFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_GET_CANGRABFOCUS_OFFSET))(this);
		}

		::System::Void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* mgc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::MeshGenerationContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_ONGENERATEVISUALCONTENT_OFFSET))(this, mgc);
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

		::System::Void HandleEvent(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_HANDLEEVENT_OFFSET))(this, evt);
		}

		::System::Void DoIMGUIRepaint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOIMGUIREPAINT_OFFSET))(this);
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

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_EXECUTEDEFAULTACTION_OFFSET))(this, evt);
		}

		::UnityEngine::Vector2 DoMeasure(::System::Single desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, ::System::Single desiredHeight, ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::UIElements::VisualElement_MeasureMode, ::System::Single, ::UnityEngine::UIElements::VisualElement_MeasureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUICONTAINER_DOMEASURE_OFFSET))(this, desiredWidth, widthMode, desiredHeight, heightMode);
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

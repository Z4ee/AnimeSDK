#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UI/ColorBlock.h"
#include "unitysdk/UnityEngine/UI/Navigation.h"
#include "unitysdk/UnityEngine/UI/Selectable_SelectionState.h"
#include "unitysdk/UnityEngine/UI/Selectable_Transition.h"
#include "unitysdk/UnityEngine/UI/SpriteState.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class AnimationTriggers; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class Image; }

#define UNITYENGINE_UI_SELECTABLE_ALLSELECTABLESNOALLOC_OFFSET UNITYSDK_OFFSET(0x1B3EC1D0)
#define UNITYENGINE_UI_SELECTABLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B3ECB10)
#define UNITYENGINE_UI_SELECTABLE_CLEARONNAVIHANDLER_OFFSET UNITYSDK_OFFSET(0x1B3EDCF0)
#define UNITYENGINE_UI_SELECTABLE_DOSPRITESWAP_OFFSET UNITYSDK_OFFSET(0x1B3ED090)
#define UNITYENGINE_UI_SELECTABLE_DOSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1B3BFC70)
#define UNITYENGINE_UI_SELECTABLE_EVALUATEANDTRANSITIONTOSELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1B3EDDC0)
#define UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1B3EB8F0)
#define UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1B3EB410)
#define UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1B3EB5B0)
#define UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1B3EB750)
#define UNITYENGINE_UI_SELECTABLE_FINDSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1B3ED4D0)
#define UNITYENGINE_UI_SELECTABLE_GETHASSELECTION_OFFSET UNITYSDK_OFFSET(0x1B3EE100)
#define UNITYENGINE_UI_SELECTABLE_GETISPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1B3EE0E0)
#define UNITYENGINE_UI_SELECTABLE_GETPOINTONRECTEDGE_OFFSET UNITYSDK_OFFSET(0x1B3EDB00)
#define UNITYENGINE_UI_SELECTABLE_GET_ALLSELECTABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1B3EC0E0)
#define UNITYENGINE_UI_SELECTABLE_GET_ALLSELECTABLESARRAY_OFFSET UNITYSDK_OFFSET(0x1B3EC080)
#define UNITYENGINE_UI_SELECTABLE_GET_ALLSELECTABLES_OFFSET UNITYSDK_OFFSET(0x1B3EC110)
#define UNITYENGINE_UI_SELECTABLE_GET_ANIMATIONTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1B3EC6D0)
#define UNITYENGINE_UI_SELECTABLE_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1B3ECAA0)
#define UNITYENGINE_UI_SELECTABLE_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x1B3EC4F0)
#define UNITYENGINE_UI_SELECTABLE_GET_CURRENTSELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1B3ECEA0)
#define UNITYENGINE_UI_SELECTABLE_GET_HASSELECTION_OFFSET UNITYSDK_OFFSET(0x1B3ECA30)
#define UNITYENGINE_UI_SELECTABLE_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1B3ECA50)
#define UNITYENGINE_UI_SELECTABLE_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B3EC8D0)
#define UNITYENGINE_UI_SELECTABLE_GET_ISIGNORENAVI_OFFSET UNITYSDK_OFFSET(0x1B3EDD00)
#define UNITYENGINE_UI_SELECTABLE_GET_ISPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1B3ECA10)
#define UNITYENGINE_UI_SELECTABLE_GET_ISPOINTERINSIDE_OFFSET UNITYSDK_OFFSET(0x1B3EC9F0)
#define UNITYENGINE_UI_SELECTABLE_GET_NAVIGATION_OFFSET UNITYSDK_OFFSET(0x1B3EC270)
#define UNITYENGINE_UI_SELECTABLE_GET_SPRITESTATE_OFFSET UNITYSDK_OFFSET(0x1B3EC600)
#define UNITYENGINE_UI_SELECTABLE_GET_TARGETGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B3EC7D0)
#define UNITYENGINE_UI_SELECTABLE_GET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x1B3EC3C0)
#define UNITYENGINE_UI_SELECTABLE_INSTANTCLEARSTATE_OFFSET UNITYSDK_OFFSET(0x1B3ECF90)
#define UNITYENGINE_UI_SELECTABLE_ISHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x1B3EDD20)
#define UNITYENGINE_UI_SELECTABLE_ISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B3B77E0)
#define UNITYENGINE_UI_SELECTABLE_ISPOINTERINSIDE_OFFSET UNITYSDK_OFFSET(0x1B3EE0F0)
#define UNITYENGINE_UI_SELECTABLE_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x1B3EDD80)
#define UNITYENGINE_UI_SELECTABLE_NAVIGATE_OFFSET UNITYSDK_OFFSET(0x1B3EDC30)
#define UNITYENGINE_UI_SELECTABLE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3ECBA0)
#define UNITYENGINE_UI_SELECTABLE_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1B3BFB40)
#define UNITYENGINE_UI_SELECTABLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B3ECE20)
#define UNITYENGINE_UI_SELECTABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3B40A0)
#define UNITYENGINE_UI_SELECTABLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3B3810)
#define UNITYENGINE_UI_SELECTABLE_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B3ECF10)
#define UNITYENGINE_UI_SELECTABLE_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1B3EB280)
#define UNITYENGINE_UI_SELECTABLE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1B3B82D0)
#define UNITYENGINE_UI_SELECTABLE_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1B3EDE70)
#define UNITYENGINE_UI_SELECTABLE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1B3EDF20)
#define UNITYENGINE_UI_SELECTABLE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1B3EADE0)
#define UNITYENGINE_UI_SELECTABLE_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1B3BF9A0)
#define UNITYENGINE_UI_SELECTABLE_ONSETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B3EC340)
#define UNITYENGINE_UI_SELECTABLE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3ECF00)
#define UNITYENGINE_UI_SELECTABLE_REDIRECTSTATE_OFFSET UNITYSDK_OFFSET(0x1B3EE120)
#define UNITYENGINE_UI_SELECTABLE_SELECT_OFFSET UNITYSDK_OFFSET(0x1B3EDFD0)
#define UNITYENGINE_UI_SELECTABLE_SETHASSELECTION_OFFSET UNITYSDK_OFFSET(0x1B3EE110)
#define UNITYENGINE_UI_SELECTABLE_SETISPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1B3EE0D0)
#define UNITYENGINE_UI_SELECTABLE_SET_ANIMATIONTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1B3EC6E0)
#define UNITYENGINE_UI_SELECTABLE_SET_COLORS_OFFSET UNITYSDK_OFFSET(0x1B3EC530)
#define UNITYENGINE_UI_SELECTABLE_SET_HASSELECTION_OFFSET UNITYSDK_OFFSET(0x1B3ECA40)
#define UNITYENGINE_UI_SELECTABLE_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1B3ECA90)
#define UNITYENGINE_UI_SELECTABLE_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B3EC8E0)
#define UNITYENGINE_UI_SELECTABLE_SET_ISIGNORENAVI_OFFSET UNITYSDK_OFFSET(0x1B3EDD10)
#define UNITYENGINE_UI_SELECTABLE_SET_ISPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1B3ECA20)
#define UNITYENGINE_UI_SELECTABLE_SET_ISPOINTERINSIDE_OFFSET UNITYSDK_OFFSET(0x1B3ECA00)
#define UNITYENGINE_UI_SELECTABLE_SET_NAVIGATION_OFFSET UNITYSDK_OFFSET(0x1B3EC290)
#define UNITYENGINE_UI_SELECTABLE_SET_SPRITESTATE_OFFSET UNITYSDK_OFFSET(0x1B3EC620)
#define UNITYENGINE_UI_SELECTABLE_SET_TARGETGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B3EC7E0)
#define UNITYENGINE_UI_SELECTABLE_SET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x1B3EC3D0)
#define UNITYENGINE_UI_SELECTABLE_STARTCOLORTWEEN_OFFSET UNITYSDK_OFFSET(0x1B3ED030)
#define UNITYENGINE_UI_SELECTABLE_TRIGGERANIMATION_OFFSET UNITYSDK_OFFSET(0x1B3ED1A0)
#define UNITYENGINE_UI_SELECTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3EE130)
#define UNITYENGINE_UI_SELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3B0D10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Selectable_TypeDefinitionIndex = 5994;

	class Selectable : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::UI::Selectable*>** StaticGet_s_Selectables()
		{
			return (::Il2CppArray<::UnityEngine::UI::Selectable*>**)Il2CppClass::FromTypeDefinitionIndex(Selectable_TypeDefinitionIndex)->GetStaticField(0x42520);
		}
		static ::System::Int32* StaticGet_s_SelectableCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Selectable_TypeDefinitionIndex)->GetStaticField(0xBD50);
		}
		::System::Boolean m_EnableCalled; // 0x18
		::UnityEngine::UI::Navigation m_Navigation; // 0x20
		::UnityEngine::UI::Selectable_Transition m_Transition; // 0x48
		::UnityEngine::UI::ColorBlock m_Colors; // 0x4C
		::UnityEngine::UI::SpriteState m_SpriteState; // 0xA8
		::UnityEngine::UI::AnimationTriggers* m_AnimationTriggers; // 0xC8
		::System::Boolean m_Interactable; // 0xD0
		::UnityEngine::UI::Graphic* m_TargetGraphic; // 0xD8
		::System::Boolean m_GroupsAllowInteraction; // 0xE0
		::System::Int32 m_CurrentIndex; // 0xE4
		::System::Boolean _isPointerInside_k__BackingField; // 0xE8
		::System::Boolean _isPointerDown_k__BackingField; // 0xE9
		::System::Boolean _hasSelection_k__BackingField; // 0xEA
		::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* m_CanvasGroupCache; // 0xF0
		::System::Action_3<::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*, ::System::Boolean>* OnNaviHandler; // 0xF8
		::System::Boolean isIgnoreNavi; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::UI::Selectable*>* get_allSelectablesArray()
		{
			return ((::Il2CppArray<::UnityEngine::UI::Selectable*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_ALLSELECTABLESARRAY_OFFSET))();
		}

		static ::System::Int32 get_allSelectableCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_ALLSELECTABLECOUNT_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Selectable*>* get_allSelectables()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Selectable*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_ALLSELECTABLES_OFFSET))();
		}

		static ::System::Int32 AllSelectablesNoAlloc(::Il2CppArray<::UnityEngine::UI::Selectable*>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::UI::Selectable*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ALLSELECTABLESNOALLOC_OFFSET))(a1);
		}

		::UnityEngine::UI::Navigation get_navigation()
		{
			return ((::UnityEngine::UI::Navigation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_NAVIGATION_OFFSET))(this);
		}

		::System::Void set_navigation(::UnityEngine::UI::Navigation a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Navigation))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_NAVIGATION_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Selectable_Transition get_transition()
		{
			return ((::UnityEngine::UI::Selectable_Transition(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_TRANSITION_OFFSET))(this);
		}

		::System::Void set_transition(::UnityEngine::UI::Selectable_Transition a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable_Transition))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_TRANSITION_OFFSET))(this, a1);
		}

		::UnityEngine::UI::ColorBlock get_colors()
		{
			return ((::UnityEngine::UI::ColorBlock(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_COLORS_OFFSET))(this);
		}

		::System::Void set_colors(::UnityEngine::UI::ColorBlock a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ColorBlock))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_COLORS_OFFSET))(this, a1);
		}

		::UnityEngine::UI::SpriteState get_spriteState()
		{
			return ((::UnityEngine::UI::SpriteState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_SPRITESTATE_OFFSET))(this);
		}

		::System::Void set_spriteState(::UnityEngine::UI::SpriteState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SpriteState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_SPRITESTATE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::AnimationTriggers* get_animationTriggers()
		{
			return ((::UnityEngine::UI::AnimationTriggers*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_ANIMATIONTRIGGERS_OFFSET))(this);
		}

		::System::Void set_animationTriggers(::UnityEngine::UI::AnimationTriggers* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::AnimationTriggers*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_ANIMATIONTRIGGERS_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Graphic* get_targetGraphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_TARGETGRAPHIC_OFFSET))(this);
		}

		::System::Void set_targetGraphic(::UnityEngine::UI::Graphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_TARGETGRAPHIC_OFFSET))(this, a1);
		}

		::System::Boolean get_interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_interactable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_INTERACTABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_isPointerInside()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_ISPOINTERINSIDE_OFFSET))(this);
		}

		::System::Void set_isPointerInside(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_ISPOINTERINSIDE_OFFSET))(this, a1);
		}

		::System::Boolean get_isPointerDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_ISPOINTERDOWN_OFFSET))(this);
		}

		::System::Void set_isPointerDown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_ISPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Boolean get_hasSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_HASSELECTION_OFFSET))(this);
		}

		::System::Void set_hasSelection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_HASSELECTION_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Image* get_image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_IMAGE_OFFSET))(this);
		}

		::System::Void set_image(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_IMAGE_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* get_animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_AWAKE_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Boolean IsInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ISINTERACTABLE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnSetProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONSETPROPERTY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable_SelectionState get_currentSelectionState()
		{
			return ((::UnityEngine::UI::Selectable_SelectionState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_CURRENTSELECTIONSTATE_OFFSET))(this);
		}

		::System::Void InstantClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_INSTANTCLEARSTATE_OFFSET))(this);
		}

		::System::Void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable_SelectionState, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_DOSTATETRANSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::UI::Selectable* FindSelectable(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_FINDSELECTABLE_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 GetPointOnRectEdge(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GETPOINTONRECTEDGE_OFFSET))(a1, a2);
		}

		::System::Void Navigate(::UnityEngine::EventSystems::AxisEventData* a1, ::UnityEngine::UI::Selectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_NAVIGATE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearOnNaviHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_CLEARONNAVIHANDLER_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreNavi()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_ISIGNORENAVI_OFFSET))(this);
		}

		::System::Void set_IsIgnoreNavi(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_ISIGNORENAVI_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnLeft()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONLEFT_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnRight()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONRIGHT_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnUp()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONUP_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnDown()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONDOWN_OFFSET))(this);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONMOVE_OFFSET))(this, a1);
		}

		::System::Void StartColorTween(::UnityEngine::Color a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_STARTCOLORTWEEN_OFFSET))(this, a1, a2);
		}

		::System::Void DoSpriteSwap(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_DOSPRITESWAP_OFFSET))(this, a1);
		}

		::System::Void TriggerAnimation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_TRIGGERANIMATION_OFFSET))(this, a1);
		}

		::System::Boolean IsHighlighted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ISHIGHLIGHTED_OFFSET))(this);
		}

		::System::Boolean IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ISPRESSED_OFFSET))(this);
		}

		::System::Void EvaluateAndTransitionToSelectionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_EVALUATEANDTRANSITIONTOSELECTIONSTATE_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SELECT_OFFSET))(this);
		}

		::System::Void SetIsPointerDown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SETISPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetIsPointerDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GETISPOINTERDOWN_OFFSET))(this);
		}

		::System::Boolean IsPointerInside()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ISPOINTERINSIDE_OFFSET))(this);
		}

		::System::Boolean GetHasSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GETHASSELECTION_OFFSET))(this);
		}

		::System::Void SetHasSelection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SETHASSELECTION_OFFSET))(this, a1);
		}

		::System::Int32 RedirectState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_REDIRECTSTATE_OFFSET))(this);
		}
	};
}

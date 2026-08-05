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

#define UNITYENGINE_UI_SELECTABLE_ALLSELECTABLESNOALLOC_OFFSET UNITYSDK_OFFSET(0x1F324400)
#define UNITYENGINE_UI_SELECTABLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F323790)
#define UNITYENGINE_UI_SELECTABLE_DOSPRITESWAP_OFFSET UNITYSDK_OFFSET(0x1F325A90)
#define UNITYENGINE_UI_SELECTABLE_DOSTATETRANSITION_1_OFFSET UNITYSDK_OFFSET(0x1F326560)
#define UNITYENGINE_UI_SELECTABLE_DOSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1F326490)
#define UNITYENGINE_UI_SELECTABLE_EVALUATEANDTRANSITIONTOSELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1F3256E0)
#define UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0x1F327880)
#define UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0x1F3272E0)
#define UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0x1F3274C0)
#define UNITYENGINE_UI_SELECTABLE_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0x1F3276A0)
#define UNITYENGINE_UI_SELECTABLE_FINDSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1F326740)
#define UNITYENGINE_UI_SELECTABLE_GETPOINTONRECTEDGE_OFFSET UNITYSDK_OFFSET(0x1F326E50)
#define UNITYENGINE_UI_SELECTABLE_GET_ALLSELECTABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1F324320)
#define UNITYENGINE_UI_SELECTABLE_GET_ALLSELECTABLESARRAY_OFFSET UNITYSDK_OFFSET(0x1F324270)
#define UNITYENGINE_UI_SELECTABLE_GET_ALLSELECTABLES_OFFSET UNITYSDK_OFFSET(0x1F324380)
#define UNITYENGINE_UI_SELECTABLE_GET_ANIMATIONTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1F3248F0)
#define UNITYENGINE_UI_SELECTABLE_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1F324EE0)
#define UNITYENGINE_UI_SELECTABLE_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x1F324680)
#define UNITYENGINE_UI_SELECTABLE_GET_CURRENTSELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1F3257A0)
#define UNITYENGINE_UI_SELECTABLE_GET_HASSELECTION_OFFSET UNITYSDK_OFFSET(0x1F324E30)
#define UNITYENGINE_UI_SELECTABLE_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1F324E50)
#define UNITYENGINE_UI_SELECTABLE_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1F324B10)
#define UNITYENGINE_UI_SELECTABLE_GET_ISPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1F324E10)
#define UNITYENGINE_UI_SELECTABLE_GET_ISPOINTERINSIDE_OFFSET UNITYSDK_OFFSET(0x1F324DF0)
#define UNITYENGINE_UI_SELECTABLE_GET_NAVIGATION_OFFSET UNITYSDK_OFFSET(0x1F324520)
#define UNITYENGINE_UI_SELECTABLE_GET_SPRITESTATE_OFFSET UNITYSDK_OFFSET(0x1F324800)
#define UNITYENGINE_UI_SELECTABLE_GET_TARGETGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F324A00)
#define UNITYENGINE_UI_SELECTABLE_GET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x1F3245A0)
#define UNITYENGINE_UI_SELECTABLE_INSTANTCLEARSTATE_OFFSET UNITYSDK_OFFSET(0x1F325820)
#define UNITYENGINE_UI_SELECTABLE_ISHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x1F327B20)
#define UNITYENGINE_UI_SELECTABLE_ISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1F321A00)
#define UNITYENGINE_UI_SELECTABLE_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x1F327BE0)
#define UNITYENGINE_UI_SELECTABLE_NAVIGATE_OFFSET UNITYSDK_OFFSET(0x1F3270C0)
#define UNITYENGINE_UI_SELECTABLE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1F324F70)
#define UNITYENGINE_UI_SELECTABLE_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1F3283A0)
#define UNITYENGINE_UI_SELECTABLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F3252B0)
#define UNITYENGINE_UI_SELECTABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F31ECC0)
#define UNITYENGINE_UI_SELECTABLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F325320)
#define UNITYENGINE_UI_SELECTABLE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1F325600)
#define UNITYENGINE_UI_SELECTABLE_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1F327A60)
#define UNITYENGINE_UI_SELECTABLE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1F327C80)
#define UNITYENGINE_UI_SELECTABLE_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1F328070)
#define UNITYENGINE_UI_SELECTABLE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1F328180)
#define UNITYENGINE_UI_SELECTABLE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1F327F50)
#define UNITYENGINE_UI_SELECTABLE_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1F328290)
#define UNITYENGINE_UI_SELECTABLE_ONSETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1F324540)
#define UNITYENGINE_UI_SELECTABLE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F325590)
#define UNITYENGINE_UI_SELECTABLE_SELECT_OFFSET UNITYSDK_OFFSET(0x1F3220E0)
#define UNITYENGINE_UI_SELECTABLE_SET_ANIMATIONTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1F324900)
#define UNITYENGINE_UI_SELECTABLE_SET_COLORS_OFFSET UNITYSDK_OFFSET(0x1F3246C0)
#define UNITYENGINE_UI_SELECTABLE_SET_HASSELECTION_OFFSET UNITYSDK_OFFSET(0x1F324E40)
#define UNITYENGINE_UI_SELECTABLE_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1F324ED0)
#define UNITYENGINE_UI_SELECTABLE_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1F324B20)
#define UNITYENGINE_UI_SELECTABLE_SET_ISPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1F324E20)
#define UNITYENGINE_UI_SELECTABLE_SET_ISPOINTERINSIDE_OFFSET UNITYSDK_OFFSET(0x1F324E00)
#define UNITYENGINE_UI_SELECTABLE_SET_NAVIGATION_OFFSET UNITYSDK_OFFSET(0x1F3222F0)
#define UNITYENGINE_UI_SELECTABLE_SET_SPRITESTATE_OFFSET UNITYSDK_OFFSET(0x1F324820)
#define UNITYENGINE_UI_SELECTABLE_SET_TARGETGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F324A10)
#define UNITYENGINE_UI_SELECTABLE_SET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x1F3245B0)
#define UNITYENGINE_UI_SELECTABLE_STARTCOLORTWEEN_OFFSET UNITYSDK_OFFSET(0x1F3258D0)
#define UNITYENGINE_UI_SELECTABLE_TRIGGERANIMATION_OFFSET UNITYSDK_OFFSET(0x1F325CF0)
#define UNITYENGINE_UI_SELECTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3284B0)
#define UNITYENGINE_UI_SELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F31E0F0)
#define UNITYENGINE_UI_SELECTABLE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F328590)
#define UNITYENGINE_UI_SELECTABLE___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1F3286B0)
#define UNITYENGINE_UI_SELECTABLE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F328740)
#define UNITYENGINE_UI_SELECTABLE___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F328500)
#define UNITYENGINE_UI_SELECTABLE___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F328620)
#define UNITYENGINE_UI_SELECTABLE___BASE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1F3287D0)
#define UNITYENGINE_UI_SELECTABLE___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F328860)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Selectable_TypeDefinitionIndex = 19290;

	class Selectable : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::UI::Selectable*>** StaticGet_s_Selectables()
		{
			return (::Il2CppArray<::UnityEngine::UI::Selectable*>**)Il2CppClass::FromTypeDefinitionIndex(Selectable_TypeDefinitionIndex)->GetStaticField(0x89F0);
		}
		static ::System::Int32* StaticGet_s_SelectableCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Selectable_TypeDefinitionIndex)->GetStaticField(0x4440);
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

		static ::System::Int32 AllSelectablesNoAlloc(::Il2CppArray<::UnityEngine::UI::Selectable*>* selectables)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::UI::Selectable*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ALLSELECTABLESNOALLOC_OFFSET))(selectables);
		}

		::UnityEngine::UI::Navigation get_navigation()
		{
			return ((::UnityEngine::UI::Navigation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_NAVIGATION_OFFSET))(this);
		}

		::System::Void set_navigation(::UnityEngine::UI::Navigation value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Navigation))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_NAVIGATION_OFFSET))(this, value);
		}

		::UnityEngine::UI::Selectable_Transition get_transition()
		{
			return ((::UnityEngine::UI::Selectable_Transition(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_TRANSITION_OFFSET))(this);
		}

		::System::Void set_transition(::UnityEngine::UI::Selectable_Transition value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable_Transition))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_TRANSITION_OFFSET))(this, value);
		}

		::UnityEngine::UI::ColorBlock get_colors()
		{
			return ((::UnityEngine::UI::ColorBlock(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_COLORS_OFFSET))(this);
		}

		::System::Void set_colors(::UnityEngine::UI::ColorBlock value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ColorBlock))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_COLORS_OFFSET))(this, value);
		}

		::UnityEngine::UI::SpriteState get_spriteState()
		{
			return ((::UnityEngine::UI::SpriteState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_SPRITESTATE_OFFSET))(this);
		}

		::System::Void set_spriteState(::UnityEngine::UI::SpriteState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SpriteState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_SPRITESTATE_OFFSET))(this, value);
		}

		::UnityEngine::UI::AnimationTriggers* get_animationTriggers()
		{
			return ((::UnityEngine::UI::AnimationTriggers*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_ANIMATIONTRIGGERS_OFFSET))(this);
		}

		::System::Void set_animationTriggers(::UnityEngine::UI::AnimationTriggers* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::AnimationTriggers*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_ANIMATIONTRIGGERS_OFFSET))(this, value);
		}

		::UnityEngine::UI::Graphic* get_targetGraphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_TARGETGRAPHIC_OFFSET))(this);
		}

		::System::Void set_targetGraphic(::UnityEngine::UI::Graphic* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_TARGETGRAPHIC_OFFSET))(this, value);
		}

		::System::Boolean get_interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Boolean get_isPointerInside()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_ISPOINTERINSIDE_OFFSET))(this);
		}

		::System::Void set_isPointerInside(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_ISPOINTERINSIDE_OFFSET))(this, value);
		}

		::System::Boolean get_isPointerDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_ISPOINTERDOWN_OFFSET))(this);
		}

		::System::Void set_isPointerDown(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_ISPOINTERDOWN_OFFSET))(this, value);
		}

		::System::Boolean get_hasSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_HASSELECTION_OFFSET))(this);
		}

		::System::Void set_hasSelection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_HASSELECTION_OFFSET))(this, value);
		}

		::UnityEngine::UI::Image* get_image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_IMAGE_OFFSET))(this);
		}

		::System::Void set_image(::UnityEngine::UI::Image* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SET_IMAGE_OFFSET))(this, value);
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

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnSetProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONSETPROPERTY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable_SelectionState get_currentSelectionState()
		{
			return ((::UnityEngine::UI::Selectable_SelectionState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GET_CURRENTSELECTIONSTATE_OFFSET))(this);
		}

		::System::Void InstantClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_INSTANTCLEARSTATE_OFFSET))(this);
		}

		::System::Void DoStateTransition(::System::Boolean instant, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_DOSTATETRANSITION_OFFSET))(this, instant, force);
		}

		::System::Void DoStateTransition_1(::UnityEngine::UI::Selectable_SelectionState state, ::System::Boolean instant)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable_SelectionState, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_DOSTATETRANSITION_1_OFFSET))(this, state, instant);
		}

		::UnityEngine::UI::Selectable* FindSelectable(::UnityEngine::Vector3 dir)
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_FINDSELECTABLE_OFFSET))(this, dir);
		}

		static ::UnityEngine::Vector3 GetPointOnRectEdge(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 dir)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_GETPOINTONRECTEDGE_OFFSET))(rect, dir);
		}

		::System::Void Navigate(::UnityEngine::EventSystems::AxisEventData* eventData, ::UnityEngine::UI::Selectable* sel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_NAVIGATE_OFFSET))(this, eventData, sel);
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

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONMOVE_OFFSET))(this, eventData);
		}

		::System::Void StartColorTween(::UnityEngine::Color targetColor, ::System::Boolean instant)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_STARTCOLORTWEEN_OFFSET))(this, targetColor, instant);
		}

		::System::Void DoSpriteSwap(::UnityEngine::Sprite* newSprite)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_DOSPRITESWAP_OFFSET))(this, newSprite);
		}

		::System::Void TriggerAnimation(::System::String* triggername)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_TRIGGERANIMATION_OFFSET))(this, triggername);
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

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE_SELECT_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE___BASE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SELECTABLE___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}

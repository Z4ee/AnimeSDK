#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PropertyName.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIElements/ComputedStyle.h"
#include "unitysdk/UnityEngine/UIElements/DisplayStyle.h"
#include "unitysdk/UnityEngine/UIElements/Focusable.h"
#include "unitysdk/UnityEngine/UIElements/PickingMode.h"
#include "unitysdk/UnityEngine/UIElements/PseudoStates.h"
#include "unitysdk/UnityEngine/UIElements/VersionChangeType.h"
#include "unitysdk/UnityEngine/UIElements/Visibility.h"
#include "unitysdk/UnityEngine/UIElements/VisualElement_Hierarchy.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class BaseVisualElementPanel; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class IResolvedStyle; }
namespace UnityEngine::UIElements { class ITransform; }
namespace UnityEngine::UIElements::StyleSheets { class InheritedStylesData; }
namespace UnityEngine::UIElements::StyleSheets { class VisualElementStylesData; }
namespace UnityEngine::Yoga { class YogaNode; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_CONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x1BA4AD20)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_BOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1BA49BB0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_COMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0x1BA4AC80)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ELEMENTPANEL_OFFSET UNITYSDK_OFFSET(0x1BA4AE90)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ENABLEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1BA3DF60)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1BA39220)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_HIERARCHY_OFFSET UNITYSDK_OFFSET(0x1BA4AE80)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_INHERITEDSTYLE_OFFSET UNITYSDK_OFFSET(0x1BA305E0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISCOMPOSITEROOT_OFFSET UNITYSDK_OFFSET(0x1BA498F0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISLAYOUTMANUAL_OFFSET UNITYSDK_OFFSET(0x1BA499B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISWORLDTRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x1BA4A640)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISWORLDTRANSFORMINVERSEDIRTY_OFFSET UNITYSDK_OFFSET(0x1BA4A660)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x1BA39D90)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x1BA38F10)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PICKINGMODE_OFFSET UNITYSDK_OFFSET(0x1BA4AC60)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PSEUDOSTATES_OFFSET UNITYSDK_OFFSET(0x1BA4AC50)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_RECT_OFFSET UNITYSDK_OFFSET(0x1BA4A4B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_RESOLVEDSTYLE_OFFSET UNITYSDK_OFFSET(0x1BA3DD90)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_SPECIFIEDSTYLE_OFFSET UNITYSDK_OFFSET(0x1BA305B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BA49900)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1BA3DEC0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1BA3DE10)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDBOUND_OFFSET UNITYSDK_OFFSET(0x1BA39FC0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDTRANSFORMINVERSE_OFFSET UNITYSDK_OFFSET(0x1BA4AB30)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BA3A280)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_YOGANODE_OFFSET UNITYSDK_OFFSET(0x1BA4AC70)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_INCREMENTVERSION_OFFSET UNITYSDK_OFFSET(0x1BA2BE60)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_MULTIPLYMATRIX44POINT2_OFFSET UNITYSDK_OFFSET(0x1BA49B60)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_RETARGETELEMENT_OFFSET UNITYSDK_OFFSET(0x1BA36B70)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1BA36260)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ISWORLDTRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x1BA4A650)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ISWORLDTRANSFORMINVERSEDIRTY_OFFSET UNITYSDK_OFFSET(0x1BA4A670)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SHOULDCLIP_OFFSET UNITYSDK_OFFSET(0x1BA3DE50)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_TRANSFORMALIGNEDRECT_OFFSET UNITYSDK_OFFSET(0x1BA49A00)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_DISPLAY_OFFSET UNITYSDK_OFFSET(0x1BA3DDA0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1BA4AC90)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_ITRANSFORM_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1BA49910)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1BA49BE0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATEWORLDBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1BA4A2C0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BA4A680)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA4AEA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElement_TypeDefinitionIndex = 6161;

	class VisualElement : public ::UnityEngine::UIElements::Focusable
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>** StaticGet_s_EmptyList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>**)Il2CppClass::FromTypeDefinitionIndex(VisualElement_TypeDefinitionIndex)->GetStaticField(0x425B0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_s_EmptyClassList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VisualElement_TypeDefinitionIndex)->GetStaticField(0x425B8);
		}
		static ::System::String** StaticGet_disabledUssClassName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VisualElement_TypeDefinitionIndex)->GetStaticField(0x425C0);
		}
		static ::UnityEngine::PropertyName* StaticGet_userDataPropertyKey()
		{
			return (::UnityEngine::PropertyName*)Il2CppClass::FromTypeDefinitionIndex(VisualElement_TypeDefinitionIndex)->GetStaticField(0xB440);
		}
		static ::UnityEngine::Rect* StaticGet_s_InfiniteRect()
		{
			return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(VisualElement_TypeDefinitionIndex)->GetStaticField(0xB444);
		}
		::System::Boolean _isCompositeRoot_k__BackingField; // 0x20
		::UnityEngine::Vector3 m_Position; // 0x24
		::UnityEngine::Quaternion m_Rotation; // 0x30
		::UnityEngine::Vector3 m_Scale; // 0x40
		::System::Boolean _isLayoutManual_k__BackingField; // 0x4C
		::UnityEngine::Rect m_Layout; // 0x50
		::System::Boolean isBoundingBoxDirty; // 0x60
		::UnityEngine::Rect m_BoundingBox; // 0x64
		::System::Boolean isWorldBoundingBoxDirty; // 0x74
		::UnityEngine::Rect m_WorldBoundingBox; // 0x78
		::System::Boolean _isWorldTransformDirty_k__BackingField; // 0x88
		::System::Boolean _isWorldTransformInverseDirty_k__BackingField; // 0x89
		::UnityEngine::Matrix4x4 m_WorldTransformCache; // 0x8C
		::UnityEngine::Matrix4x4 m_WorldTransformInverseCache; // 0xCC
		::UnityEngine::UIElements::PseudoStates m_PseudoStates; // 0x10C
		::UnityEngine::UIElements::PickingMode _pickingMode_k__BackingField; // 0x110
		::UnityEngine::Yoga::YogaNode* _yogaNode_k__BackingField; // 0x118
		::UnityEngine::UIElements::StyleSheets::VisualElementStylesData* m_Style; // 0x120
		::UnityEngine::UIElements::StyleSheets::InheritedStylesData* m_InheritedStylesData; // 0x128
		::UnityEngine::UIElements::ComputedStyle _computedStyle_k__BackingField; // 0x130
		::System::Int32 imguiContainerDescendantCount; // 0x138
		::UnityEngine::UIElements::VisualElement_Hierarchy _hierarchy_k__BackingField; // 0x140
		::UnityEngine::UIElements::VisualElement* m_PhysicalParent; // 0x148
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* m_Children; // 0x150
		::UnityEngine::UIElements::BaseVisualElementPanel* _elementPanel_k__BackingField; // 0x158

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT__CCTOR_OFFSET))();
		}

		::System::Boolean get_isCompositeRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISCOMPOSITEROOT_OFFSET))(this);
		}

		::UnityEngine::UIElements::FocusController* get_focusController()
		{
			return ((::UnityEngine::UIElements::FocusController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_FOCUSCONTROLLER_OFFSET))(this);
		}

		::UnityEngine::UIElements::ITransform* get_transform()
		{
			return ((::UnityEngine::UIElements::ITransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 UnityEngine_UIElements_ITransform_get_matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_ITRANSFORM_GET_MATRIX_OFFSET))(this);
		}

		::System::Boolean get_isLayoutManual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISLAYOUTMANUAL_OFFSET))(this);
		}

		::UnityEngine::Rect get_layout()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_LAYOUT_OFFSET))(this);
		}

		static ::UnityEngine::Rect TransformAlignedRect(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Rect a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_TRANSFORMALIGNEDRECT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 MultiplyMatrix44Point2(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_MULTIPLYMATRIX44POINT2_OFFSET))(a1, a2);
		}

		::UnityEngine::Rect get_boundingBox()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_BOUNDINGBOX_OFFSET))(this);
		}

		::UnityEngine::Rect get_worldBoundingBox()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDBOUNDINGBOX_OFFSET))(this);
		}

		::System::Void UpdateBoundingBox()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATEBOUNDINGBOX_OFFSET))(this);
		}

		::System::Void UpdateWorldBoundingBox()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATEWORLDBOUNDINGBOX_OFFSET))(this);
		}

		::UnityEngine::Rect get_worldBound()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDBOUND_OFFSET))(this);
		}

		::UnityEngine::Rect get_rect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_RECT_OFFSET))(this);
		}

		::System::Boolean get_isWorldTransformDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISWORLDTRANSFORMDIRTY_OFFSET))(this);
		}

		::System::Void set_isWorldTransformDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ISWORLDTRANSFORMDIRTY_OFFSET))(this, a1);
		}

		::System::Boolean get_isWorldTransformInverseDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISWORLDTRANSFORMINVERSEDIRTY_OFFSET))(this);
		}

		::System::Void set_isWorldTransformInverseDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ISWORLDTRANSFORMINVERSEDIRTY_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 get_worldTransform()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_worldTransformInverse()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDTRANSFORMINVERSE_OFFSET))(this);
		}

		::System::Void UpdateWorldTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATEWORLDTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::UIElements::PseudoStates get_pseudoStates()
		{
			return ((::UnityEngine::UIElements::PseudoStates(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PSEUDOSTATES_OFFSET))(this);
		}

		::UnityEngine::UIElements::PickingMode get_pickingMode()
		{
			return ((::UnityEngine::UIElements::PickingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PICKINGMODE_OFFSET))(this);
		}

		::UnityEngine::Yoga::YogaNode* get_yogaNode()
		{
			return ((::UnityEngine::Yoga::YogaNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_YOGANODE_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleSheets::VisualElementStylesData* get_specifiedStyle()
		{
			return ((::UnityEngine::UIElements::StyleSheets::VisualElementStylesData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_SPECIFIEDSTYLE_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleSheets::InheritedStylesData* get_inheritedStyle()
		{
			return ((::UnityEngine::UIElements::StyleSheets::InheritedStylesData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_INHERITEDSTYLE_OFFSET))(this);
		}

		::UnityEngine::UIElements::ComputedStyle get_computedStyle()
		{
			return ((::UnityEngine::UIElements::ComputedStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_COMPUTEDSTYLE_OFFSET))(this);
		}

		::System::Void SendEvent(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SENDEVENT_OFFSET))(this, a1);
		}

		::System::Void IncrementVersion(::UnityEngine::UIElements::VersionChangeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VersionChangeType))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_INCREMENTVERSION_OFFSET))(this, a1);
		}

		::System::Boolean get_enabledInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ENABLEDINHIERARCHY_OFFSET))(this);
		}

		::System::Boolean get_visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_VISIBLE_OFFSET))(this);
		}

		::System::Boolean ContainsPoint(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_CONTAINSPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::UIElements::VisualElement_Hierarchy get_hierarchy()
		{
			return ((::UnityEngine::UIElements::VisualElement_Hierarchy(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_HIERARCHY_OFFSET))(this);
		}

		::System::Boolean ShouldClip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SHOULDCLIP_OFFSET))(this);
		}

		::UnityEngine::UIElements::BaseVisualElementPanel* get_elementPanel()
		{
			return ((::UnityEngine::UIElements::BaseVisualElementPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ELEMENTPANEL_OFFSET))(this);
		}

		::UnityEngine::UIElements::IPanel* get_panel()
		{
			return ((::UnityEngine::UIElements::IPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PANEL_OFFSET))(this);
		}

		::UnityEngine::UIElements::VisualElement* RetargetElement(::UnityEngine::UIElements::VisualElement* a1)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_RETARGETELEMENT_OFFSET))(this, a1);
		}

		::UnityEngine::UIElements::IResolvedStyle* get_resolvedStyle()
		{
			return ((::UnityEngine::UIElements::IResolvedStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_RESOLVEDSTYLE_OFFSET))(this);
		}

		::UnityEngine::UIElements::Visibility UnityEngine_UIElements_IResolvedStyle_get_visibility()
		{
			return ((::UnityEngine::UIElements::Visibility(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_VISIBILITY_OFFSET))(this);
		}

		::UnityEngine::UIElements::DisplayStyle UnityEngine_UIElements_IResolvedStyle_get_display()
		{
			return ((::UnityEngine::UIElements::DisplayStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_DISPLAY_OFFSET))(this);
		}
	};
}

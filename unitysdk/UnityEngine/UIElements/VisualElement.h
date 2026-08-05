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
#include "unitysdk/UnityEngine/UIElements/RenderHints.h"
#include "unitysdk/UnityEngine/UIElements/UIR/RenderChainVEData.h"
#include "unitysdk/UnityEngine/UIElements/VersionChangeType.h"
#include "unitysdk/UnityEngine/UIElements/Visibility.h"
#include "unitysdk/UnityEngine/UIElements/VisualElement_Hierarchy.h"
#include "unitysdk/UnityEngine/UIElements/VisualElement_MeasureMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Yoga/YogaMeasureMode.h"
#include "unitysdk/UnityEngine/Yoga/YogaSize.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class BaseVisualElementPanel; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class IResolvedStyle; }
namespace UnityEngine::UIElements { class ITransform; }
namespace UnityEngine::UIElements { class MeshGenerationContext; }
namespace UnityEngine::UIElements { class StyleVariableContext; }
namespace UnityEngine::UIElements::StyleSheets { class InheritedStylesData; }
namespace UnityEngine::UIElements::StyleSheets { class VisualElementStylesData; }
namespace UnityEngine::Yoga { class YogaNode; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_ADDTOCLASSLIST_OFFSET UNITYSDK_OFFSET(0x1CFFB550)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_ASSIGNMEASUREFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D0132B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_COMPUTEAAALIGNEDBOUND_OFFSET UNITYSDK_OFFSET(0x1CFFDF30)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_CONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x1D013140)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_DOMEASURE_OFFSET UNITYSDK_OFFSET(0x1D013400)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x1D012740)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_FOCUS_OFFSET UNITYSDK_OFFSET(0x1D012E40)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_BOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1D0106B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_CANGRABFOCUS_OFFSET UNITYSDK_OFFSET(0x1CFFAE80)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_COMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0x1D0124F0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_CONTENTCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D013B40)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ELEMENTPANEL_OFFSET UNITYSDK_OFFSET(0x1D013B30)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ENABLEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1D0025B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ENABLEDSELF_OFFSET UNITYSDK_OFFSET(0x1D012F70)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1CFFA530)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_GENERATEVISUALCONTENT_OFFSET UNITYSDK_OFFSET(0x1D013120)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_HIERARCHY_OFFSET UNITYSDK_OFFSET(0x1D013B10)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_INHERITEDSTYLE_OFFSET UNITYSDK_OFFSET(0x1CFF3990)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISCOMPOSITEROOT_OFFSET UNITYSDK_OFFSET(0x1D010270)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISLAYOUTMANUAL_OFFSET UNITYSDK_OFFSET(0x1D0103D0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISWORLDCLIPDIRTY_OFFSET UNITYSDK_OFFSET(0x1D011810)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISWORLDTRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x1D0111C0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISWORLDTRANSFORMINVERSEDIRTY_OFFSET UNITYSDK_OFFSET(0x1D0111E0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x1CFFE950)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D012440)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x1CFFD5E0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1D010280)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PICKINGMODE_OFFSET UNITYSDK_OFFSET(0x1D012430)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PSEUDOSTATES_OFFSET UNITYSDK_OFFSET(0x1D0123C0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_RECT_OFFSET UNITYSDK_OFFSET(0x1D011020)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_RESOLVEDSTYLE_OFFSET UNITYSDK_OFFSET(0x1D002350)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_SPECIFIEDSTYLE_OFFSET UNITYSDK_OFFSET(0x1CFF3960)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D010310)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1D002550)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1D002430)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDBOUND_OFFSET UNITYSDK_OFFSET(0x1CFFF090)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDCLIPMINUSGROUP_OFFSET UNITYSDK_OFFSET(0x1D011C40)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDCLIP_OFFSET UNITYSDK_OFFSET(0x1CFFDEF0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDTRANSFORMINVERSE_OFFSET UNITYSDK_OFFSET(0x1D0116F0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1CFFE000)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_YOGANODE_OFFSET UNITYSDK_OFFSET(0x1D0124D0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_INCREMENTVERSION_OFFSET UNITYSDK_OFFSET(0x1CFF0000)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_MEASURE_OFFSET UNITYSDK_OFFSET(0x1D013410)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_MULTIPLYMATRIX44POINT2_OFFSET UNITYSDK_OFFSET(0x1D010660)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_PROPAGATEENABLEDTOCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D013020)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_REMOVEFROMCLASSLIST_OFFSET UNITYSDK_OFFSET(0x1D012F90)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_REMOVEMEASUREFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D013330)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_RETARGETELEMENT_OFFSET UNITYSDK_OFFSET(0x1CFF9A80)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1CFF91F0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SETENABLEDFROMHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1D012E90)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SETENABLED_OFFSET UNITYSDK_OFFSET(0x1D012520)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_COMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0x1D012500)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ENABLEDSELF_OFFSET UNITYSDK_OFFSET(0x1D012F80)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_GENERATEVISUALCONTENT_OFFSET UNITYSDK_OFFSET(0x1D013130)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_HIERARCHY_OFFSET UNITYSDK_OFFSET(0x1D013B20)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ISWORLDCLIPDIRTY_OFFSET UNITYSDK_OFFSET(0x1D011820)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ISWORLDTRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x1D0111D0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ISWORLDTRANSFORMINVERSEDIRTY_OFFSET UNITYSDK_OFFSET(0x1D0111F0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D012450)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_PSEUDOSTATES_OFFSET UNITYSDK_OFFSET(0x1D0123D0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_RENDERHINTS_OFFSET UNITYSDK_OFFSET(0x1D010290)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_REQUIREMEASUREFUNCTION_OFFSET UNITYSDK_OFFSET(0x1CFFB700)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_YOGANODE_OFFSET UNITYSDK_OFFSET(0x1D0124E0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SHOULDCLIP_OFFSET UNITYSDK_OFFSET(0x1D002480)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_SUBSTRACTBORDERPADDING_OFFSET UNITYSDK_OFFSET(0x1D011C80)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D013640)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_TRANSFORMALIGNEDRECT_OFFSET UNITYSDK_OFFSET(0x1D010420)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_BORDERBOTTOMWIDTH_OFFSET UNITYSDK_OFFSET(0x1D0122B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_BORDERLEFTWIDTH_OFFSET UNITYSDK_OFFSET(0x1D0121C0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_BORDERRIGHTWIDTH_OFFSET UNITYSDK_OFFSET(0x1D012260)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_BORDERTOPWIDTH_OFFSET UNITYSDK_OFFSET(0x1D012210)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_DISPLAY_OFFSET UNITYSDK_OFFSET(0x1D002360)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_PADDINGBOTTOM_OFFSET UNITYSDK_OFFSET(0x1D012390)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_PADDINGLEFT_OFFSET UNITYSDK_OFFSET(0x1D012300)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_PADDINGRIGHT_OFFSET UNITYSDK_OFFSET(0x1D012360)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_PADDINGTOP_OFFSET UNITYSDK_OFFSET(0x1D012330)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1D0130D0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_ITRANSFORM_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1D010320)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1D0106F0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATECURSORSTYLE_OFFSET UNITYSDK_OFFSET(0x1D012AB0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATEWORLDBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1D010EF0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATEWORLDCLIP_OFFSET UNITYSDK_OFFSET(0x1D011830)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D011200)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT__ASSIGNMEASUREFUNCTION_B__206_0_OFFSET UNITYSDK_OFFSET(0x1D013CF0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D013BC0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFB200)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElement_TypeDefinitionIndex = 28078;

	class VisualElement : public ::UnityEngine::UIElements::Focusable
	{
	public:
		static ::System::String** StaticGet_disabledUssClassName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VisualElement_TypeDefinitionIndex)->GetStaticField(0x23E00);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>** StaticGet_s_EmptyList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>**)Il2CppClass::FromTypeDefinitionIndex(VisualElement_TypeDefinitionIndex)->GetStaticField(0x23E08);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_s_EmptyClassList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VisualElement_TypeDefinitionIndex)->GetStaticField(0x23E10);
		}
		static ::System::UInt32* StaticGet_s_NextId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(VisualElement_TypeDefinitionIndex)->GetStaticField(0x7790);
		}
		static ::UnityEngine::PropertyName* StaticGet_userDataPropertyKey()
		{
			return (::UnityEngine::PropertyName*)Il2CppClass::FromTypeDefinitionIndex(VisualElement_TypeDefinitionIndex)->GetStaticField(0x7794);
		}
		static ::UnityEngine::Rect* StaticGet_s_InfiniteRect()
		{
			return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(VisualElement_TypeDefinitionIndex)->GetStaticField(0x7798);
		}
		::System::Boolean _isCompositeRoot_k__BackingField; // 0x28
		::System::String* m_Name; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* m_ClassList; // 0x38
		::System::String* m_TypeName; // 0x40
		::System::String* m_FullTypeName; // 0x48
		::UnityEngine::UIElements::RenderHints m_RenderHints; // 0x50
		::UnityEngine::UIElements::UIR::RenderChainVEData renderChainData; // 0x58
		::UnityEngine::Vector3 m_Position; // 0x150
		::UnityEngine::Quaternion m_Rotation; // 0x15C
		::UnityEngine::Vector3 m_Scale; // 0x16C
		::System::Boolean _isLayoutManual_k__BackingField; // 0x178
		::UnityEngine::Rect m_Layout; // 0x17C
		::System::Boolean isBoundingBoxDirty; // 0x18C
		::UnityEngine::Rect m_BoundingBox; // 0x190
		::System::Boolean isWorldBoundingBoxDirty; // 0x1A0
		::UnityEngine::Rect m_WorldBoundingBox; // 0x1A4
		::System::Boolean _isWorldTransformDirty_k__BackingField; // 0x1B4
		::System::Boolean _isWorldTransformInverseDirty_k__BackingField; // 0x1B5
		::UnityEngine::Matrix4x4 m_WorldTransformCache; // 0x1B8
		::UnityEngine::Matrix4x4 m_WorldTransformInverseCache; // 0x1F8
		::System::Boolean _isWorldClipDirty_k__BackingField; // 0x238
		::UnityEngine::Rect m_WorldClip; // 0x23C
		::UnityEngine::Rect m_WorldClipMinusGroup; // 0x24C
		::UnityEngine::UIElements::PseudoStates triggerPseudoMask; // 0x25C
		::UnityEngine::UIElements::PseudoStates dependencyPseudoMask; // 0x260
		::UnityEngine::UIElements::PseudoStates m_PseudoStates; // 0x264
		::UnityEngine::UIElements::PickingMode _pickingMode_k__BackingField; // 0x268
		::UnityEngine::Yoga::YogaNode* _yogaNode_k__BackingField; // 0x270
		::UnityEngine::UIElements::StyleSheets::VisualElementStylesData* m_SharedStyle; // 0x278
		::UnityEngine::UIElements::StyleSheets::VisualElementStylesData* m_Style; // 0x280
		::UnityEngine::UIElements::StyleVariableContext* variableContext; // 0x288
		::UnityEngine::UIElements::StyleSheets::InheritedStylesData* propagatedStyle; // 0x290
		::UnityEngine::UIElements::StyleSheets::InheritedStylesData* m_InheritedStylesData; // 0x298
		::UnityEngine::UIElements::ComputedStyle _computedStyle_k__BackingField; // 0x2A0
		::System::UInt32 controlid; // 0x2A8
		::System::Int32 imguiContainerDescendantCount; // 0x2AC
		::System::Boolean _enabledSelf_k__BackingField; // 0x2B0
		::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* _generateVisualContent_k__BackingField; // 0x2B8
		::System::Boolean m_RequireMeasureFunction; // 0x2C0
		::UnityEngine::UIElements::VisualElement_Hierarchy _hierarchy_k__BackingField; // 0x2C8
		::UnityEngine::UIElements::VisualElement* m_PhysicalParent; // 0x2D0
		::UnityEngine::UIElements::VisualElement* m_LogicalParent; // 0x2D8
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* m_Children; // 0x2E0
		::UnityEngine::UIElements::BaseVisualElementPanel* _elementPanel_k__BackingField; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT__CCTOR_OFFSET))();
		}

		::System::Boolean get_isCompositeRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISCOMPOSITEROOT_OFFSET))(this);
		}

		::System::Boolean get_canGrabFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_CANGRABFOCUS_OFFSET))(this);
		}

		::UnityEngine::UIElements::FocusController* get_focusController()
		{
			return ((::UnityEngine::UIElements::FocusController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_FOCUSCONTROLLER_OFFSET))(this);
		}

		::System::Void set_renderHints(::UnityEngine::UIElements::RenderHints value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::RenderHints))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_RENDERHINTS_OFFSET))(this, value);
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

		static ::UnityEngine::Rect TransformAlignedRect(::UnityEngine::Matrix4x4 lhc, ::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_TRANSFORMALIGNEDRECT_OFFSET))(lhc, rect);
		}

		static ::UnityEngine::Vector2 MultiplyMatrix44Point2(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_MULTIPLYMATRIX44POINT2_OFFSET))(lhs, point);
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

		::System::Void set_isWorldTransformDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ISWORLDTRANSFORMDIRTY_OFFSET))(this, value);
		}

		::System::Boolean get_isWorldTransformInverseDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISWORLDTRANSFORMINVERSEDIRTY_OFFSET))(this);
		}

		::System::Void set_isWorldTransformInverseDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ISWORLDTRANSFORMINVERSEDIRTY_OFFSET))(this, value);
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

		::System::Boolean get_isWorldClipDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ISWORLDCLIPDIRTY_OFFSET))(this);
		}

		::System::Void set_isWorldClipDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ISWORLDCLIPDIRTY_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_worldClip()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDCLIP_OFFSET))(this);
		}

		::UnityEngine::Rect get_worldClipMinusGroup()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_WORLDCLIPMINUSGROUP_OFFSET))(this);
		}

		::System::Void UpdateWorldClip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATEWORLDCLIP_OFFSET))(this);
		}

		::UnityEngine::Rect SubstractBorderPadding(::UnityEngine::Rect worldRect)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SUBSTRACTBORDERPADDING_OFFSET))(this, worldRect);
		}

		static ::UnityEngine::Rect ComputeAAAlignedBound(::UnityEngine::Rect position, ::UnityEngine::Matrix4x4 mat)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_COMPUTEAAALIGNEDBOUND_OFFSET))(position, mat);
		}

		::UnityEngine::UIElements::PseudoStates get_pseudoStates()
		{
			return ((::UnityEngine::UIElements::PseudoStates(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PSEUDOSTATES_OFFSET))(this);
		}

		::System::Void set_pseudoStates(::UnityEngine::UIElements::PseudoStates value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::PseudoStates))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_PSEUDOSTATES_OFFSET))(this, value);
		}

		::UnityEngine::UIElements::PickingMode get_pickingMode()
		{
			return ((::UnityEngine::UIElements::PickingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PICKINGMODE_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_NAME_OFFSET))(this, value);
		}

		::UnityEngine::Yoga::YogaNode* get_yogaNode()
		{
			return ((::UnityEngine::Yoga::YogaNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_YOGANODE_OFFSET))(this);
		}

		::System::Void set_yogaNode(::UnityEngine::Yoga::YogaNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Yoga::YogaNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_YOGANODE_OFFSET))(this, value);
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

		::System::Void set_computedStyle(::UnityEngine::UIElements::ComputedStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::ComputedStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_COMPUTEDSTYLE_OFFSET))(this, value);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_EXECUTEDEFAULTACTION_OFFSET))(this, evt);
		}

		::System::Void Focus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_FOCUS_OFFSET))(this);
		}

		::System::Void SendEvent(::UnityEngine::UIElements::EventBase* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SENDEVENT_OFFSET))(this, e);
		}

		::System::Void IncrementVersion(::UnityEngine::UIElements::VersionChangeType changeType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VersionChangeType))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_INCREMENTVERSION_OFFSET))(this, changeType);
		}

		::System::Boolean SetEnabledFromHierarchy(::System::Boolean state)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SETENABLEDFROMHIERARCHY_OFFSET))(this, state);
		}

		::System::Boolean get_enabledInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ENABLEDINHIERARCHY_OFFSET))(this);
		}

		::System::Boolean get_enabledSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ENABLEDSELF_OFFSET))(this);
		}

		::System::Void set_enabledSelf(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_ENABLEDSELF_OFFSET))(this, value);
		}

		::System::Void SetEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SETENABLED_OFFSET))(this, value);
		}

		::System::Void PropagateEnabledToChildren(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_PROPAGATEENABLEDTOCHILDREN_OFFSET))(this, value);
		}

		::System::Boolean get_visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_VISIBLE_OFFSET))(this);
		}

		::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* get_generateVisualContent()
		{
			return ((::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_GENERATEVISUALCONTENT_OFFSET))(this);
		}

		::System::Void set_generateVisualContent(::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::UIElements::MeshGenerationContext*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_GENERATEVISUALCONTENT_OFFSET))(this, value);
		}

		::System::Boolean ContainsPoint(::UnityEngine::Vector2 localPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_CONTAINSPOINT_OFFSET))(this, localPoint);
		}

		::System::Void set_requireMeasureFunction(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_REQUIREMEASUREFUNCTION_OFFSET))(this, value);
		}

		::System::Void AssignMeasureFunction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_ASSIGNMEASUREFUNCTION_OFFSET))(this);
		}

		::System::Void RemoveMeasureFunction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_REMOVEMEASUREFUNCTION_OFFSET))(this);
		}

		::UnityEngine::Vector2 DoMeasure(::System::Single desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, ::System::Single desiredHeight, ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::UIElements::VisualElement_MeasureMode, ::System::Single, ::UnityEngine::UIElements::VisualElement_MeasureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_DOMEASURE_OFFSET))(this, desiredWidth, widthMode, desiredHeight, heightMode);
		}

		::UnityEngine::Yoga::YogaSize Measure(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, ::System::Single height, ::UnityEngine::Yoga::YogaMeasureMode heightMode)
		{
			return ((::UnityEngine::Yoga::YogaSize(*)(::PVOID, ::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_MEASURE_OFFSET))(this, node, width, widthMode, height, heightMode);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_TOSTRING_OFFSET))(this);
		}

		::System::Void AddToClassList(::System::String* className)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_ADDTOCLASSLIST_OFFSET))(this, className);
		}

		::System::Void RemoveFromClassList(::System::String* className)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_REMOVEFROMCLASSLIST_OFFSET))(this, className);
		}

		::System::Void UpdateCursorStyle(::System::Int64 eventType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UPDATECURSORSTYLE_OFFSET))(this, eventType);
		}

		::UnityEngine::UIElements::VisualElement_Hierarchy get_hierarchy()
		{
			return ((::UnityEngine::UIElements::VisualElement_Hierarchy(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_HIERARCHY_OFFSET))(this);
		}

		::System::Void set_hierarchy(::UnityEngine::UIElements::VisualElement_Hierarchy value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement_Hierarchy))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SET_HIERARCHY_OFFSET))(this, value);
		}

		::System::Boolean ShouldClip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_SHOULDCLIP_OFFSET))(this);
		}

		::UnityEngine::UIElements::VisualElement* get_parent()
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PARENT_OFFSET))(this);
		}

		::UnityEngine::UIElements::BaseVisualElementPanel* get_elementPanel()
		{
			return ((::UnityEngine::UIElements::BaseVisualElementPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_ELEMENTPANEL_OFFSET))(this);
		}

		::UnityEngine::UIElements::IPanel* get_panel()
		{
			return ((::UnityEngine::UIElements::IPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_PANEL_OFFSET))(this);
		}

		::UnityEngine::UIElements::VisualElement* get_contentContainer()
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_CONTENTCONTAINER_OFFSET))(this);
		}

		::UnityEngine::UIElements::VisualElement* RetargetElement(::UnityEngine::UIElements::VisualElement* retargetAgainst)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_RETARGETELEMENT_OFFSET))(this, retargetAgainst);
		}

		::UnityEngine::UIElements::IResolvedStyle* get_resolvedStyle()
		{
			return ((::UnityEngine::UIElements::IResolvedStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_GET_RESOLVEDSTYLE_OFFSET))(this);
		}

		::System::Single UnityEngine_UIElements_IResolvedStyle_get_paddingLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_PADDINGLEFT_OFFSET))(this);
		}

		::System::Single UnityEngine_UIElements_IResolvedStyle_get_paddingTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_PADDINGTOP_OFFSET))(this);
		}

		::System::Single UnityEngine_UIElements_IResolvedStyle_get_paddingRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_PADDINGRIGHT_OFFSET))(this);
		}

		::System::Single UnityEngine_UIElements_IResolvedStyle_get_paddingBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_PADDINGBOTTOM_OFFSET))(this);
		}

		::System::Single UnityEngine_UIElements_IResolvedStyle_get_borderLeftWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_BORDERLEFTWIDTH_OFFSET))(this);
		}

		::System::Single UnityEngine_UIElements_IResolvedStyle_get_borderRightWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_BORDERRIGHTWIDTH_OFFSET))(this);
		}

		::System::Single UnityEngine_UIElements_IResolvedStyle_get_borderTopWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_BORDERTOPWIDTH_OFFSET))(this);
		}

		::System::Single UnityEngine_UIElements_IResolvedStyle_get_borderBottomWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_BORDERBOTTOMWIDTH_OFFSET))(this);
		}

		::UnityEngine::UIElements::Visibility UnityEngine_UIElements_IResolvedStyle_get_visibility()
		{
			return ((::UnityEngine::UIElements::Visibility(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_VISIBILITY_OFFSET))(this);
		}

		::UnityEngine::UIElements::DisplayStyle UnityEngine_UIElements_IResolvedStyle_get_display()
		{
			return ((::UnityEngine::UIElements::DisplayStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_UNITYENGINE_UIELEMENTS_IRESOLVEDSTYLE_GET_DISPLAY_OFFSET))(this);
		}

		::UnityEngine::Yoga::YogaSize _AssignMeasureFunction_b__206_0(::UnityEngine::Yoga::YogaNode* node, ::System::Single f, ::UnityEngine::Yoga::YogaMeasureMode mode, ::System::Single f1, ::UnityEngine::Yoga::YogaMeasureMode heightMode)
		{
			return ((::UnityEngine::Yoga::YogaSize(*)(::PVOID, ::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT__ASSIGNMEASUREFUNCTION_B__206_0_OFFSET))(this, node, f, mode, f1, heightMode);
		}
	};
}

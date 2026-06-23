#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/LayoutRebuilder___c__DisplayClass19_0.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UI_LAYOUTREBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E640E70)
#define UNITYENGINE_UI_LAYOUTREBUILDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E644490)
#define UNITYENGINE_UI_LAYOUTREBUILDER_FINDROOTLAYOUTWITHANCHOR_OFFSET UNITYSDK_OFFSET(0x1E642470)
#define UNITYENGINE_UI_LAYOUTREBUILDER_FINDROOTLAYOUTWITHOUTANCHOR_OFFSET UNITYSDK_OFFSET(0x1E643AE0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_FORCEREBUILDLAYOUTIMMEDIATEV2_OFFSET UNITYSDK_OFFSET(0x1E642230)
#define UNITYENGINE_UI_LAYOUTREBUILDER_FORCEREBUILDLAYOUTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1E641C00)
#define UNITYENGINE_UI_LAYOUTREBUILDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E644450)
#define UNITYENGINE_UI_LAYOUTREBUILDER_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E641980)
#define UNITYENGINE_UI_LAYOUTREBUILDER_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E644410)
#define UNITYENGINE_UI_LAYOUTREBUILDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E640E10)
#define UNITYENGINE_UI_LAYOUTREBUILDER_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x1E641990)
#define UNITYENGINE_UI_LAYOUTREBUILDER_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E644360)
#define UNITYENGINE_UI_LAYOUTREBUILDER_MARKLAYOUTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x1E6410D0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_MARKLAYOUTROOTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x1E6430A0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCALCULATION_OFFSET UNITYSDK_OFFSET(0x1E642530)
#define UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCONTROL_OFFSET UNITYSDK_OFFSET(0x1E642890)
#define UNITYENGINE_UI_LAYOUTREBUILDER_REAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E641050)
#define UNITYENGINE_UI_LAYOUTREBUILDER_REBUILDLAYOUTIMMEDIATEIFNEED_OFFSET UNITYSDK_OFFSET(0x1E643320)
#define UNITYENGINE_UI_LAYOUTREBUILDER_REBUILD_OFFSET UNITYSDK_OFFSET(0x1E641D60)
#define UNITYENGINE_UI_LAYOUTREBUILDER_STRIPDISABLEDBEHAVIOURSFROMLIST_OFFSET UNITYSDK_OFFSET(0x1E641AE0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E644530)
#define UNITYENGINE_UI_LAYOUTREBUILDER_VALIDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1E642CA0)
#define UNITYENGINE_UI_LAYOUTREBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E640EC0)
#define UNITYENGINE_UI_LAYOUTREBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6445A0)
#define UNITYENGINE_UI_LAYOUTREBUILDER__FINDROOTLAYOUTWITHANCHOR_G__INNER_18_0_OFFSET UNITYSDK_OFFSET(0x1E643560)
#define UNITYENGINE_UI_LAYOUTREBUILDER__FINDROOTLAYOUTWITHOUTANCHOR_G__FINDROOT_19_0_OFFSET UNITYSDK_OFFSET(0x1E643EF0)
#define UNITYENGINE_UI_LAYOUTREBUILDER___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6445B0)
#define UNITYENGINE_UI_LAYOUTREBUILDER___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6445C0)
#define UNITYENGINE_UI_LAYOUTREBUILDER___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6445D0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutRebuilder_TypeDefinitionIndex = 18915;

	class LayoutRebuilder : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::ObjectPool_1<::UnityEngine::UI::LayoutRebuilder*>** StaticGet_s_Rebuilders()
		{
			return (::UnityEngine::UI::ObjectPool_1<::UnityEngine::UI::LayoutRebuilder*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder_TypeDefinitionIndex)->GetStaticField(0x88C0);
		}
		::UnityEngine::RectTransform* m_ToRebuild; // 0x10
		::System::Int32 m_CachedHashFromTransform; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::UnityEngine::RectTransform* controller)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_INITIALIZE_OFFSET))(this, controller);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_CLEAR_OFFSET))(this);
		}

		static ::System::Void ReapplyDrivenProperties(::UnityEngine::RectTransform* driven)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_REAPPLYDRIVENPROPERTIES_OFFSET))(driven);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Boolean IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_ISDESTROYED_OFFSET))(this);
		}

		static ::System::Void StripDisabledBehavioursFromList(::System::Collections::Generic::List_1<::UnityEngine::Component*>* components)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_STRIPDISABLEDBEHAVIOURSFROMLIST_OFFSET))(components);
		}

		static ::System::Void ForceRebuildLayoutImmediate(::UnityEngine::RectTransform* layoutRoot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_FORCEREBUILDLAYOUTIMMEDIATE_OFFSET))(layoutRoot);
		}

		static ::System::Void ForceRebuildLayoutImmediateV2(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_FORCEREBUILDLAYOUTIMMEDIATEV2_OFFSET))(rectTransform);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate executing)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_REBUILD_OFFSET))(this, executing);
		}

		::System::Void PerformLayoutControl(::UnityEngine::RectTransform* rect, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCONTROL_OFFSET))(this, rect, action);
		}

		::System::Void PerformLayoutCalculation(::UnityEngine::RectTransform* rect, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCALCULATION_OFFSET))(this, rect, action);
		}

		static ::System::Void MarkLayoutForRebuild(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_MARKLAYOUTFORREBUILD_OFFSET))(rect);
		}

		static ::System::Void RebuildLayoutImmediateIfNeed(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_REBUILDLAYOUTIMMEDIATEIFNEED_OFFSET))(rect);
		}

		static ::System::Void FindRootLayoutWithAnchor(::UnityEngine::RectTransform* rect, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* list)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_FINDROOTLAYOUTWITHANCHOR_OFFSET))(rect, list);
		}

		static ::UnityEngine::RectTransform* FindRootLayoutWithoutAnchor(::UnityEngine::RectTransform* rect)
		{
			return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_FINDROOTLAYOUTWITHOUTANCHOR_OFFSET))(rect);
		}

		static ::System::Boolean ValidController(::UnityEngine::RectTransform* layoutRoot, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* comps)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_VALIDCONTROLLER_OFFSET))(layoutRoot, comps);
		}

		static ::System::Void MarkLayoutRootForRebuild(::UnityEngine::RectTransform* controller)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_MARKLAYOUTROOTFORREBUILD_OFFSET))(controller);
		}

		::System::Void LayoutComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_LAYOUTCOMPLETE_OFFSET))(this);
		}

		::System::Void GraphicUpdateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_GRAPHICUPDATECOMPLETE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_EQUALS_OFFSET))(this, obj);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_TOSTRING_OFFSET))(this);
		}

		static ::System::Void _FindRootLayoutWithAnchor_g__Inner_18_0(::UnityEngine::RectTransform* rect_inner, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* list_inner)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER__FINDROOTLAYOUTWITHANCHOR_G__INNER_18_0_OFFSET))(rect_inner, list_inner);
		}

		static ::UnityEngine::RectTransform* _FindRootLayoutWithoutAnchor_g__FindRoot_19_0(::UnityEngine::UI::LayoutRebuilder___c__DisplayClass19_0& a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::UnityEngine::UI::LayoutRebuilder___c__DisplayClass19_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER__FINDROOTLAYOUTWITHOUTANCHOR_G__FINDROOT_19_0_OFFSET))(a1);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___BASE_TOSTRING_OFFSET))(this);
		}
	};
}

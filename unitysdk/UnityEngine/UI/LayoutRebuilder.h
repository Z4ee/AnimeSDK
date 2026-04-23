#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UI_LAYOUTREBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A5772C0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A578D40)
#define UNITYENGINE_UI_LAYOUTREBUILDER_FORCEREBUILDLAYOUTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1A577590)
#define UNITYENGINE_UI_LAYOUTREBUILDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A578D30)
#define UNITYENGINE_UI_LAYOUTREBUILDER_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A577460)
#define UNITYENGINE_UI_LAYOUTREBUILDER_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A578D20)
#define UNITYENGINE_UI_LAYOUTREBUILDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A577290)
#define UNITYENGINE_UI_LAYOUTREBUILDER_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x1A577470)
#define UNITYENGINE_UI_LAYOUTREBUILDER_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A578CC0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_MARKLAYOUTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x1A570EA0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_MARKLAYOUTROOTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x1A578BC0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCALCULATION_OFFSET UNITYSDK_OFFSET(0x1A5783B0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCONTROL_OFFSET UNITYSDK_OFFSET(0x1A578540)
#define UNITYENGINE_UI_LAYOUTREBUILDER_REAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A577430)
#define UNITYENGINE_UI_LAYOUTREBUILDER_REBUILD_OFFSET UNITYSDK_OFFSET(0x1A577650)
#define UNITYENGINE_UI_LAYOUTREBUILDER_STRIPDISABLEDBEHAVIOURSFROMLIST_OFFSET UNITYSDK_OFFSET(0x1A577490)
#define UNITYENGINE_UI_LAYOUTREBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A578D80)
#define UNITYENGINE_UI_LAYOUTREBUILDER_VALIDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A578A10)
#define UNITYENGINE_UI_LAYOUTREBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5772D0)
#define UNITYENGINE_UI_LAYOUTREBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A578DE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutRebuilder_TypeDefinitionIndex = 5663;

	class LayoutRebuilder : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::ObjectPool_1<::UnityEngine::UI::LayoutRebuilder*>** StaticGet_s_Rebuilders()
		{
			return (::UnityEngine::UI::ObjectPool_1<::UnityEngine::UI::LayoutRebuilder*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder_TypeDefinitionIndex)->GetStaticField(0x1A630);
		}
		static ::System::Type** StaticGet_layoutController()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder_TypeDefinitionIndex)->GetStaticField(0x1A638);
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

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate executing)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_REBUILD_OFFSET))(this, executing);
		}

		::System::Void PerformLayoutControl(::UnityEngine::RectTransform* rect, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* controllers, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCONTROL_OFFSET))(this, rect, controllers, action);
		}

		::System::Void PerformLayoutCalculation(::UnityEngine::RectTransform* rect, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* components, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCALCULATION_OFFSET))(this, rect, components, action);
		}

		static ::System::Void MarkLayoutForRebuild(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_MARKLAYOUTFORREBUILD_OFFSET))(rect);
		}

		static ::System::Boolean ValidController(::UnityEngine::RectTransform* layoutRoot)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_VALIDCONTROLLER_OFFSET))(layoutRoot);
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
	};
}

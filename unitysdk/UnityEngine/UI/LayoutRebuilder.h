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

#define UNITYENGINE_UI_LAYOUTREBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B3C32A0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B3C5370)
#define UNITYENGINE_UI_LAYOUTREBUILDER_FORCEREBUILDLAYOUTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1B3C35E0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B3C5360)
#define UNITYENGINE_UI_LAYOUTREBUILDER_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B3C3480)
#define UNITYENGINE_UI_LAYOUTREBUILDER_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B3C5350)
#define UNITYENGINE_UI_LAYOUTREBUILDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3C3270)
#define UNITYENGINE_UI_LAYOUTREBUILDER_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x1B3C3490)
#define UNITYENGINE_UI_LAYOUTREBUILDER_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B3C52F0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_MARKLAYOUTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x1B3BD2C0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_MARKLAYOUTROOTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x1B3C51F0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCALCULATION_OFFSET UNITYSDK_OFFSET(0x1B3C44F0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCONTROL_OFFSET UNITYSDK_OFFSET(0x1B3C4760)
#define UNITYENGINE_UI_LAYOUTREBUILDER_REAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B3C3450)
#define UNITYENGINE_UI_LAYOUTREBUILDER_REBUILD_OFFSET UNITYSDK_OFFSET(0x1B3C36A0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_STRIPDISABLEDBEHAVIOURSFROMLIST_OFFSET UNITYSDK_OFFSET(0x1B3C34B0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B3C53B0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_VALIDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1B3C4F10)
#define UNITYENGINE_UI_LAYOUTREBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3C32B0)
#define UNITYENGINE_UI_LAYOUTREBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C5410)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutRebuilder_TypeDefinitionIndex = 5940;

	class LayoutRebuilder : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_layoutController()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder_TypeDefinitionIndex)->GetStaticField(0x46DC0);
		}
		static ::UnityEngine::UI::ObjectPool_1<::UnityEngine::UI::LayoutRebuilder*>** StaticGet_s_Rebuilders()
		{
			return (::UnityEngine::UI::ObjectPool_1<::UnityEngine::UI::LayoutRebuilder*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder_TypeDefinitionIndex)->GetStaticField(0x46DC8);
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

		::System::Void Initialize(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_CLEAR_OFFSET))(this);
		}

		static ::System::Void ReapplyDrivenProperties(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_REAPPLYDRIVENPROPERTIES_OFFSET))(a1);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Boolean IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_ISDESTROYED_OFFSET))(this);
		}

		static ::System::Void StripDisabledBehavioursFromList(::System::Collections::Generic::List_1<::UnityEngine::Component*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_STRIPDISABLEDBEHAVIOURSFROMLIST_OFFSET))(a1);
		}

		static ::System::Void ForceRebuildLayoutImmediate(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_FORCEREBUILDLAYOUTIMMEDIATE_OFFSET))(a1);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_REBUILD_OFFSET))(this, a1);
		}

		::System::Void PerformLayoutControl(::UnityEngine::RectTransform* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* a2, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCONTROL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PerformLayoutCalculation(::UnityEngine::RectTransform* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* a2, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_PERFORMLAYOUTCALCULATION_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void MarkLayoutForRebuild(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_MARKLAYOUTFORREBUILD_OFFSET))(a1);
		}

		static ::System::Boolean ValidController(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_VALIDCONTROLLER_OFFSET))(a1);
		}

		static ::System::Void MarkLayoutRootForRebuild(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_MARKLAYOUTROOTFORREBUILD_OFFSET))(a1);
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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_TOSTRING_OFFSET))(this);
		}
	};
}

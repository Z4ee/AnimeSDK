#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class IMouseEvent; }
namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_COMMITELEMENTUNDERPOINTERS_OFFSET UNITYSDK_OFFSET(0x1A503CE0)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETEVENTPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1A508170)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_1_OFFSET UNITYSDK_OFFSET(0x1A503C00)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x1A5080E0)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_1_OFFSET UNITYSDK_OFFSET(0x1A5083A0)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x1A503C60)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETTEMPORARYELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x1A503CA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ElementUnderPointer_TypeDefinitionIndex = 5905;

	class ElementUnderPointer : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UIElements::VisualElement*>* m_PendingTopElementUnderPointer; // 0x10
		::Il2CppArray<::UnityEngine::UIElements::VisualElement*>* m_TopElementUnderPointer; // 0x18
		::Il2CppArray<::UnityEngine::UIElements::IPointerEvent*>* m_TriggerPointerEvent; // 0x20
		::Il2CppArray<::UnityEngine::UIElements::IMouseEvent*>* m_TriggerMouseEvent; // 0x28
		::Il2CppArray<::UnityEngine::Vector2>* m_PickingPointerPositions; // 0x30
		::Il2CppArray<::System::Boolean>* m_IsPickingPointerTemporaries; // 0x38

		::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(::System::Int32 pointerId, ::UnityEngine::Vector2& pickPosition, ::System::Boolean& isTemporary)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_OFFSET))(this, pointerId, pickPosition, isTemporary);
		}

		::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer_1(::System::Int32 pointerId)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_1_OFFSET))(this, pointerId);
		}

		::UnityEngine::Vector2 GetEventPointerPosition(::UnityEngine::UIElements::EventBase* triggerEvent)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETEVENTPOINTERPOSITION_OFFSET))(this, triggerEvent);
		}

		::System::Void SetTemporaryElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, ::UnityEngine::UIElements::EventBase* triggerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETTEMPORARYELEMENTUNDERPOINTER_OFFSET))(this, newElementUnderPointer, triggerEvent);
		}

		::System::Void SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, ::UnityEngine::UIElements::EventBase* triggerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_OFFSET))(this, newElementUnderPointer, triggerEvent);
		}

		::System::Void SetElementUnderPointer_1(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, ::UnityEngine::UIElements::EventBase* triggerEvent, ::System::Boolean temporary)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_1_OFFSET))(this, newElementUnderPointer, triggerEvent, temporary);
		}

		::System::Void CommitElementUnderPointers(::UnityEngine::UIElements::EventDispatcher* dispatcher)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventDispatcher*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_COMMITELEMENTUNDERPOINTERS_OFFSET))(this, dispatcher);
		}
	};
}

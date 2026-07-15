#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class IMouseEvent; }
namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_COMMITELEMENTUNDERPOINTERS_OFFSET UNITYSDK_OFFSET(0x1BA2C3B0)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETEVENTPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1BA316D0)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_1_OFFSET UNITYSDK_OFFSET(0x1BA2C2E0)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x1BA31660)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_1_OFFSET UNITYSDK_OFFSET(0x1BA31A70)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x1BA2C330)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETTEMPORARYELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x1BA2C370)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ElementUnderPointer_TypeDefinitionIndex = 6187;

	class ElementUnderPointer : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UIElements::VisualElement*>* m_PendingTopElementUnderPointer; // 0x10
		::Il2CppArray<::UnityEngine::UIElements::VisualElement*>* m_TopElementUnderPointer; // 0x18
		::Il2CppArray<::UnityEngine::UIElements::IPointerEvent*>* m_TriggerPointerEvent; // 0x20
		::Il2CppArray<::UnityEngine::UIElements::IMouseEvent*>* m_TriggerMouseEvent; // 0x28
		::Il2CppArray<::UnityEngine::Vector2>* m_PickingPointerPositions; // 0x30
		::Il2CppArray<::System::Boolean>* m_IsPickingPointerTemporaries; // 0x38

		::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(::System::Int32 a1, ::UnityEngine::Vector2& a2, ::System::Boolean& a3)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer_1(::System::Int32 a1)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetEventPointerPosition(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETEVENTPOINTERPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetTemporaryElementUnderPointer(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::UIElements::EventBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETTEMPORARYELEMENTUNDERPOINTER_OFFSET))(this, a1, a2);
		}

		::System::Void SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::UIElements::EventBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_OFFSET))(this, a1, a2);
		}

		::System::Void SetElementUnderPointer_1(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::UIElements::EventBase* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CommitElementUnderPointers(::UnityEngine::UIElements::EventDispatcher* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventDispatcher*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_COMMITELEMENTUNDERPOINTERS_OFFSET))(this, a1);
		}
	};
}

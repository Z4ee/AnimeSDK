#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventInterests.h"
#include "unitysdk/UnityEngine/UIElements/ContextType.h"
#include "unitysdk/UnityEngine/UIElements/DispatchMode.h"
#include "unitysdk/UnityEngine/UIElements/VersionChangeType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Event; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::UIElements { class ElementUnderPointer; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class IMGUIContainer; }
namespace UnityEngine::UIElements { class RepaintData; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_CLEARCACHEDELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x18AC81F0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_COMMITELEMENTUNDERPOINTERS_OFFSET UNITYSDK_OFFSET(0x18AC8230)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18AC7B60)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AC7B10)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GETTOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x18AC8130)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x18AC8110)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DURINGLAYOUTPHASE_OFFSET UNITYSDK_OFFSET(0x18AC7DF0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_REPAINTDATA_OFFSET UNITYSDK_OFFSET(0x18AC7E00)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x18AC7E10)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SETELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x18AC81C0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x18AC8120)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_PIXELSPERPOINT_OFFSET UNITYSDK_OFFSET(0x18AC7D10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BaseVisualElementPanel_TypeDefinitionIndex = 5854;

	class BaseVisualElementPanel : public ::System::Object
	{
	public:
		::System::Single m_PixelsPerPoint; // 0x10
		::System::Boolean _duringLayoutPhase_k__BackingField; // 0x14
		::UnityEngine::UIElements::RepaintData* _repaintData_k__BackingField; // 0x18
		::System::Boolean _disposed_k__BackingField; // 0x20
		::UnityEngine::UIElements::ElementUnderPointer* m_TopElementUnderPointers; // 0x28

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void set_pixelsPerPoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_PIXELSPERPOINT_OFFSET))(this, value);
		}

		::System::Boolean get_duringLayoutPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DURINGLAYOUTPHASE_OFFSET))(this);
		}

		::UnityEngine::UIElements::RepaintData* get_repaintData()
		{
			return ((::UnityEngine::UIElements::RepaintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_REPAINTDATA_OFFSET))(this);
		}

		::System::Void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::DispatchMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SENDEVENT_OFFSET))(this, e, dispatchMode);
		}

		::System::Boolean get_disposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DISPOSED_OFFSET))(this);
		}

		::System::Void set_disposed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_DISPOSED_OFFSET))(this, value);
		}

		::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(::System::Int32 pointerId)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GETTOPELEMENTUNDERPOINTER_OFFSET))(this, pointerId);
		}

		::System::Void SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, ::UnityEngine::UIElements::EventBase* triggerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SETELEMENTUNDERPOINTER_OFFSET))(this, newElementUnderPointer, triggerEvent);
		}

		::System::Void ClearCachedElementUnderPointer(::UnityEngine::UIElements::EventBase* triggerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_CLEARCACHEDELEMENTUNDERPOINTER_OFFSET))(this, triggerEvent);
		}

		::System::Void CommitElementUnderPointers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_COMMITELEMENTUNDERPOINTERS_OFFSET))(this);
		}
	};
}

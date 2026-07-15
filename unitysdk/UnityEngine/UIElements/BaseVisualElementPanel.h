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

#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_CLEARCACHEDELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x1BA2C340)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_COMMITELEMENTUNDERPOINTERS_OFFSET UNITYSDK_OFFSET(0x1BA2C380)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1BA2BC10)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BA2BB30)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GETTOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x1BA2C2A0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1BA2C280)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DURINGLAYOUTPHASE_OFFSET UNITYSDK_OFFSET(0x1BA2BEA0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_REPAINTDATA_OFFSET UNITYSDK_OFFSET(0x1BA2BEB0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1BA2BEC0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SETELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x1BA2C310)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1BA2C290)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_PIXELSPERPOINT_OFFSET UNITYSDK_OFFSET(0x1BA2BDC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BaseVisualElementPanel_TypeDefinitionIndex = 6148;

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

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void set_pixelsPerPoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_PIXELSPERPOINT_OFFSET))(this, a1);
		}

		::System::Boolean get_duringLayoutPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DURINGLAYOUTPHASE_OFFSET))(this);
		}

		::UnityEngine::UIElements::RepaintData* get_repaintData()
		{
			return ((::UnityEngine::UIElements::RepaintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_REPAINTDATA_OFFSET))(this);
		}

		::System::Void SendEvent(::UnityEngine::UIElements::EventBase* a1, ::UnityEngine::UIElements::DispatchMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::DispatchMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SENDEVENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_disposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DISPOSED_OFFSET))(this);
		}

		::System::Void set_disposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_DISPOSED_OFFSET))(this, a1);
		}

		::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(::System::Int32 a1)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GETTOPELEMENTUNDERPOINTER_OFFSET))(this, a1);
		}

		::System::Void SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::UIElements::EventBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SETELEMENTUNDERPOINTER_OFFSET))(this, a1, a2);
		}

		::System::Void ClearCachedElementUnderPointer(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_CLEARCACHEDELEMENTUNDERPOINTER_OFFSET))(this, a1);
		}

		::System::Void CommitElementUnderPointers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_COMMITELEMENTUNDERPOINTERS_OFFSET))(this);
		}
	};
}

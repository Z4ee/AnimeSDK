#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/EventInterests.h"
#include "unitysdk/UnityEngine/UIElements/BaseVisualElementPanel.h"
#include "unitysdk/UnityEngine/UIElements/ContextType.h"
#include "unitysdk/UnityEngine/UIElements/VersionChangeType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class IMGUIContainer; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VisualTreeUpdater; }

#define UNITYENGINE_UIELEMENTS_PANEL_GET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1A513040)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_DISPATCHER_OFFSET UNITYSDK_OFFSET(0x1A513020)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A513050)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_IMGUICONTAINERSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A513070)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_IMGUIEVENTINTERESTS_OFFSET UNITYSDK_OFFSET(0x1A513060)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_OWNEROBJECT_OFFSET UNITYSDK_OFFSET(0x1A513030)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_ROOTIMGUICONTAINER_OFFSET UNITYSDK_OFFSET(0x1A513080)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1A513090)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_VISUALTREE_OFFSET UNITYSDK_OFFSET(0x1A503820)
#define UNITYENGINE_UIELEMENTS_PANEL_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1A513C00)
#define UNITYENGINE_UIELEMENTS_PANEL_PERFORMPICK_OFFSET UNITYSDK_OFFSET(0x1A513110)
#define UNITYENGINE_UIELEMENTS_PANEL_PICKALL_OFFSET UNITYSDK_OFFSET(0x1A5130A0)
#define UNITYENGINE_UIELEMENTS_PANEL_PICK_OFFSET UNITYSDK_OFFSET(0x1A511820)
#define UNITYENGINE_UIELEMENTS_PANEL_REPAINT_OFFSET UNITYSDK_OFFSET(0x1A5139E0)
#define UNITYENGINE_UIELEMENTS_PANEL_UPDATEFORREPAINT_OFFSET UNITYSDK_OFFSET(0x1A513950)
#define UNITYENGINE_UIELEMENTS_PANEL_VALIDATELAYOUT_OFFSET UNITYSDK_OFFSET(0x1A5136D0)
#define UNITYENGINE_UIELEMENTS_PANEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A513D80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Panel_TypeDefinitionIndex = 5867;

	class Panel : public ::UnityEngine::UIElements::BaseVisualElementPanel
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_s_MarkerPickAll()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Panel_TypeDefinitionIndex)->GetStaticField(0x77E0);
		}
		::UnityEngine::UIElements::VisualElement* m_RootContainer; // 0x30
		::UnityEngine::UIElements::VisualTreeUpdater* m_VisualTreeUpdater; // 0x38
		::System::UInt32 m_Version; // 0x40
		::System::UInt32 m_RepaintVersion; // 0x44
		::Unity::Profiling::ProfilerMarker m_MarkerUpdate; // 0x48
		::UnityEngine::UIElements::EventDispatcher* _dispatcher_k__BackingField; // 0x50
		::UnityEngine::ScriptableObject* _ownerObject_k__BackingField; // 0x58
		::UnityEngine::UIElements::ContextType _contextType_k__BackingField; // 0x60
		::UnityEngine::UIElements::FocusController* _focusController_k__BackingField; // 0x68
		::UnityEngine::EventInterests _IMGUIEventInterests_k__BackingField; // 0x70
		::System::Int32 _IMGUIContainersCount_k__BackingField; // 0x74
		::UnityEngine::UIElements::IMGUIContainer* _rootIMGUIContainer_k__BackingField; // 0x78
		::System::Boolean m_ValidatingLayout; // 0x80

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL__CCTOR_OFFSET))();
		}

		::UnityEngine::UIElements::VisualElement* get_visualTree()
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_VISUALTREE_OFFSET))(this);
		}

		::UnityEngine::UIElements::EventDispatcher* get_dispatcher()
		{
			return ((::UnityEngine::UIElements::EventDispatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_DISPATCHER_OFFSET))(this);
		}

		::UnityEngine::ScriptableObject* get_ownerObject()
		{
			return ((::UnityEngine::ScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_OWNEROBJECT_OFFSET))(this);
		}

		::UnityEngine::UIElements::ContextType get_contextType()
		{
			return ((::UnityEngine::UIElements::ContextType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_CONTEXTTYPE_OFFSET))(this);
		}

		::UnityEngine::UIElements::FocusController* get_focusController()
		{
			return ((::UnityEngine::UIElements::FocusController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_FOCUSCONTROLLER_OFFSET))(this);
		}

		::UnityEngine::EventInterests get_IMGUIEventInterests()
		{
			return ((::UnityEngine::EventInterests(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_IMGUIEVENTINTERESTS_OFFSET))(this);
		}

		::System::Int32 get_IMGUIContainersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_IMGUICONTAINERSCOUNT_OFFSET))(this);
		}

		::UnityEngine::UIElements::IMGUIContainer* get_rootIMGUIContainer()
		{
			return ((::UnityEngine::UIElements::IMGUIContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_ROOTIMGUICONTAINER_OFFSET))(this);
		}

		::System::UInt32 get_version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_VERSION_OFFSET))(this);
		}

		static ::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_PICKALL_OFFSET))(root, point, picked);
		}

		static ::UnityEngine::UIElements::VisualElement* PerformPick(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Vector2 point, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_PERFORMPICK_OFFSET))(root, point, picked);
		}

		::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_PICK_OFFSET))(this, point);
		}

		::System::Void ValidateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_VALIDATELAYOUT_OFFSET))(this);
		}

		::System::Void UpdateForRepaint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_UPDATEFORREPAINT_OFFSET))(this);
		}

		::System::Void Repaint(::UnityEngine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_REPAINT_OFFSET))(this, e);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_ONVERSIONCHANGED_OFFSET))(this, ve, versionChangeType);
		}
	};
}

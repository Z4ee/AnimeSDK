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

#define UNITYENGINE_UIELEMENTS_PANEL_GET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x197B3DB0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_DISPATCHER_OFFSET UNITYSDK_OFFSET(0x197B3D90)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x197B3DC0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_IMGUICONTAINERSCOUNT_OFFSET UNITYSDK_OFFSET(0x197B3DE0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_IMGUIEVENTINTERESTS_OFFSET UNITYSDK_OFFSET(0x197B3DD0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_OWNEROBJECT_OFFSET UNITYSDK_OFFSET(0x197B3DA0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_ROOTIMGUICONTAINER_OFFSET UNITYSDK_OFFSET(0x197B3E00)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x197B3E10)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_VISUALTREE_OFFSET UNITYSDK_OFFSET(0x197A1D40)
#define UNITYENGINE_UIELEMENTS_PANEL_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0x197B4940)
#define UNITYENGINE_UIELEMENTS_PANEL_PERFORMPICK_OFFSET UNITYSDK_OFFSET(0x197B3E90)
#define UNITYENGINE_UIELEMENTS_PANEL_PICKALL_OFFSET UNITYSDK_OFFSET(0x197B3E20)
#define UNITYENGINE_UIELEMENTS_PANEL_PICK_OFFSET UNITYSDK_OFFSET(0x197B2590)
#define UNITYENGINE_UIELEMENTS_PANEL_REPAINT_OFFSET UNITYSDK_OFFSET(0x197B4780)
#define UNITYENGINE_UIELEMENTS_PANEL_SET_IMGUICONTAINERSCOUNT_OFFSET UNITYSDK_OFFSET(0x197B3DF0)
#define UNITYENGINE_UIELEMENTS_PANEL_UPDATEFORREPAINT_OFFSET UNITYSDK_OFFSET(0x197B46F0)
#define UNITYENGINE_UIELEMENTS_PANEL_VALIDATELAYOUT_OFFSET UNITYSDK_OFFSET(0x197B4470)
#define UNITYENGINE_UIELEMENTS_PANEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x197B4AC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Panel_TypeDefinitionIndex = 24959;

	class Panel : public ::UnityEngine::UIElements::BaseVisualElementPanel
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_s_MarkerPickAll()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Panel_TypeDefinitionIndex)->GetStaticField(0x4700);
		}
		::UnityEngine::UIElements::VisualElement* m_RootContainer; // 0x40
		::UnityEngine::UIElements::VisualTreeUpdater* m_VisualTreeUpdater; // 0x48
		::System::UInt32 m_Version; // 0x50
		::System::UInt32 m_RepaintVersion; // 0x54
		::Unity::Profiling::ProfilerMarker m_MarkerUpdate; // 0x58
		::UnityEngine::UIElements::EventDispatcher* _dispatcher_k__BackingField; // 0x60
		::UnityEngine::ScriptableObject* _ownerObject_k__BackingField; // 0x68
		::UnityEngine::UIElements::ContextType _contextType_k__BackingField; // 0x70
		::UnityEngine::UIElements::FocusController* _focusController_k__BackingField; // 0x78
		::UnityEngine::EventInterests _IMGUIEventInterests_k__BackingField; // 0x80
		::System::Int32 _IMGUIContainersCount_k__BackingField; // 0x84
		::UnityEngine::UIElements::IMGUIContainer* _rootIMGUIContainer_k__BackingField; // 0x88
		::System::Boolean m_ValidatingLayout; // 0x90

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

		::System::Void set_IMGUIContainersCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_SET_IMGUICONTAINERSCOUNT_OFFSET))(this, value);
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

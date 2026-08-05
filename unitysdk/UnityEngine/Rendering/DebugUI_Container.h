#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Widget.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class DebugUI_Panel; }
namespace UnityEngine::Rendering { template <typename T> class ListChangedEventArgs_1; }
namespace UnityEngine::Rendering { template <typename T> class ObservableList_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GENERATEQUERYPATH_OFFSET UNITYSDK_OFFSET(0x1CA76660)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA76EA0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1CA75DE0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x1CA75E00)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_ONITEMADDED_OFFSET UNITYSDK_OFFSET(0x1CA76A60)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_ONITEMREMOVED_OFFSET UNITYSDK_OFFSET(0x1CA76DF0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_SET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1CA75DF0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_SET_PANEL_OFFSET UNITYSDK_OFFSET(0x1CA75E10)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA763F0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA760F0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER___BASE_GENERATEQUERYPATH_OFFSET UNITYSDK_OFFSET(0x1CA77240)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA77250)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER___BASE_SET_PANEL_OFFSET UNITYSDK_OFFSET(0x1CA77420)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Container_TypeDefinitionIndex = 18682;

	class DebugUI_Container : public ::UnityEngine::Rendering::DebugUI_Widget
	{
	public:
		::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* _children_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER__CTOR_1_OFFSET))(this, displayName, children);
		}

		::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* get_children()
		{
			return ((::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_SET_CHILDREN_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::DebugUI_Panel* get_panel()
		{
			return ((::UnityEngine::Rendering::DebugUI_Panel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GET_PANEL_OFFSET))(this);
		}

		::System::Void set_panel(::UnityEngine::Rendering::DebugUI_Panel* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_SET_PANEL_OFFSET))(this, value);
		}

		::System::Void GenerateQueryPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GENERATEQUERYPATH_OFFSET))(this);
		}

		::System::Void OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_ONITEMADDED_OFFSET))(this, sender, e);
		}

		::System::Void OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_ONITEMREMOVED_OFFSET))(this, sender, e);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GETHASHCODE_OFFSET))(this);
		}

		::System::Void __base_GenerateQueryPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER___BASE_GENERATEQUERYPATH_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::Void __base_set_panel(::UnityEngine::Rendering::DebugUI_Panel* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER___BASE_SET_PANEL_OFFSET))(this, P0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Widget.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class DebugUI_Panel; }
namespace UnityEngine::Rendering { template <typename T> class ListChangedEventArgs_1; }
namespace UnityEngine::Rendering { template <typename T> class ObservableList_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GENERATEQUERYPATH_OFFSET UNITYSDK_OFFSET(0x1A31BA30)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A31C160)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1A31B200)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x1A31B220)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_ONITEMADDED_OFFSET UNITYSDK_OFFSET(0x1A31BDD0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_ONITEMREMOVED_OFFSET UNITYSDK_OFFSET(0x1A31C0F0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_SET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1A31B210)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_SET_PANEL_OFFSET UNITYSDK_OFFSET(0x1A31B230)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A31B7C0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31B4C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Container_TypeDefinitionIndex = 33435;

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
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Widget.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class DebugUI_Panel; }
namespace UnityEngine::Rendering { template <typename T> class ListChangedEventArgs_1; }
namespace UnityEngine::Rendering { template <typename T> class ObservableList_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GENERATEQUERYPATH_OFFSET UNITYSDK_OFFSET(0x1B176E90)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B1775C0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1B176280)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x1B1762A0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_ONITEMADDED_OFFSET UNITYSDK_OFFSET(0x1B177230)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_ONITEMREMOVED_OFFSET UNITYSDK_OFFSET(0x1B177550)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_SET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1B176290)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_SET_PANEL_OFFSET UNITYSDK_OFFSET(0x1B1762B0)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B176A30)
#define UNITYENGINE_RENDERING_DEBUGUI_CONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B176540)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Container_TypeDefinitionIndex = 33717;

	class DebugUI_Container : public ::UnityEngine::Rendering::DebugUI_Widget
	{
	public:
		::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* _children_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* get_children()
		{
			return ((::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_SET_CHILDREN_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::DebugUI_Panel* get_panel()
		{
			return ((::UnityEngine::Rendering::DebugUI_Panel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GET_PANEL_OFFSET))(this);
		}

		::System::Void set_panel(::UnityEngine::Rendering::DebugUI_Panel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_SET_PANEL_OFFSET))(this, a1);
		}

		::System::Void GenerateQueryPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GENERATEQUERYPATH_OFFSET))(this);
		}

		::System::Void OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* a1, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_ONITEMADDED_OFFSET))(this, a1, a2);
		}

		::System::Void OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* a1, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_ONITEMREMOVED_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CONTAINER_GETHASHCODE_OFFSET))(this);
		}
	};
}

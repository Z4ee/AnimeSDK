#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Flags.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering { template <typename T> class ListChangedEventArgs_1; }
namespace UnityEngine::Rendering { template <typename T> class ObservableList_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_ADD_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x1F28B800)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F28A9A0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1F292750)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1F2926B0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_EDITORFORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F292740)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1F292690)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1F2926D0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISEDITORONLY_OFFSET UNITYSDK_OFFSET(0x1F292700)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISINACTIVEINEDITOR_OFFSET UNITYSDK_OFFSET(0x1F292720)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISRUNTIMEONLY_OFFSET UNITYSDK_OFFSET(0x1F292710)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_QUERYPATH_OFFSET UNITYSDK_OFFSET(0x1F2926F0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_ONITEMADDED_OFFSET UNITYSDK_OFFSET(0x1F292770)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_ONITEMREMOVED_OFFSET UNITYSDK_OFFSET(0x1F292890)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_REMOVE_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x1F28B010)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1F290E00)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1F292760)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1F2926C0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1F2926A0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1F2926E0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SYSTEM_ICOMPARABLE_UNITYENGINE_RENDERING_DEBUGUI_PANEL__COMPARETO_OFFSET UNITYSDK_OFFSET(0x1F2929B0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F28B1F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Panel_TypeDefinitionIndex = 35543;

	class DebugUI_Panel : public ::System::Object
	{
	public:
		::System::String* _displayName_k__BackingField; // 0x10
		::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* _children_k__BackingField; // 0x18
		::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* onSetDirty; // 0x20
		::UnityEngine::Rendering::DebugUI_Flags _flags_k__BackingField; // 0x28
		::System::Int32 _groupIndex_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::DebugUI_Flags get_flags()
		{
			return ((::UnityEngine::Rendering::DebugUI_Flags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_flags(::UnityEngine::Rendering::DebugUI_Flags a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Flags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_FLAGS_OFFSET))(this, a1);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::System::Int32 get_groupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_GROUPINDEX_OFFSET))(this);
		}

		::System::Void set_groupIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_GROUPINDEX_OFFSET))(this, a1);
		}

		::System::String* get_queryPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_QUERYPATH_OFFSET))(this);
		}

		::System::Boolean get_isEditorOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISEDITORONLY_OFFSET))(this);
		}

		::System::Boolean get_isRuntimeOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISRUNTIMEONLY_OFFSET))(this);
		}

		::System::Boolean get_isInactiveInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISINACTIVEINEDITOR_OFFSET))(this);
		}

		::System::Boolean get_editorForceUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_EDITORFORCEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* get_children()
		{
			return ((::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_CHILDREN_OFFSET))(this, a1);
		}

		::System::Void add_onSetDirty(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_ADD_ONSETDIRTY_OFFSET))(this, a1);
		}

		::System::Void remove_onSetDirty(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_REMOVE_ONSETDIRTY_OFFSET))(this, a1);
		}

		::System::Void OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* a1, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_ONITEMADDED_OFFSET))(this, a1, a2);
		}

		::System::Void OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* a1, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_ONITEMREMOVED_OFFSET))(this, a1, a2);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SETDIRTY_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 System_IComparable_UnityEngine_Rendering_DebugUI_Panel__CompareTo(::UnityEngine::Rendering::DebugUI_Panel* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SYSTEM_ICOMPARABLE_UNITYENGINE_RENDERING_DEBUGUI_PANEL__COMPARETO_OFFSET))(this, a1);
		}
	};
}

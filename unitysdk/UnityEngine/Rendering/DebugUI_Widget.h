#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Flags.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class DebugUI_IContainer; }
namespace UnityEngine::Rendering { class DebugUI_Panel; }

#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GENERATEQUERYPATH_OFFSET UNITYSDK_OFFSET(0x191F3B70)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x191F4590)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x191F6840)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x191F6820)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_ISEDITORONLY_OFFSET UNITYSDK_OFFSET(0x191F6880)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_ISINACTIVEINEDITOR_OFFSET UNITYSDK_OFFSET(0x191F6920)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_ISRUNTIMEONLY_OFFSET UNITYSDK_OFFSET(0x191F68D0)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x191F67E0)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x191F6800)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_QUERYPATH_OFFSET UNITYSDK_OFFSET(0x191F6860)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x191F6850)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x191F6830)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_SET_PANEL_OFFSET UNITYSDK_OFFSET(0x191F67F0)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x191F6810)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET_SET_QUERYPATH_OFFSET UNITYSDK_OFFSET(0x191F6870)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x191F2F70)
#define UNITYENGINE_RENDERING_DEBUGUI_WIDGET___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x191F69A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Widget_TypeDefinitionIndex = 9568;

	class DebugUI_Widget : public ::System::Object
	{
	public:
		::System::String* _queryPath_k__BackingField; // 0x10
		::UnityEngine::Rendering::DebugUI_Panel* m_Panel; // 0x18
		::System::String* _displayName_k__BackingField; // 0x20
		::UnityEngine::Rendering::DebugUI_IContainer* m_Parent; // 0x28
		::UnityEngine::Rendering::DebugUI_Flags _flags_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::DebugUI_Panel* get_panel()
		{
			return ((::UnityEngine::Rendering::DebugUI_Panel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_PANEL_OFFSET))(this);
		}

		::System::Void set_panel(::UnityEngine::Rendering::DebugUI_Panel* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_SET_PANEL_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::DebugUI_IContainer* get_parent()
		{
			return ((::UnityEngine::Rendering::DebugUI_IContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_parent(::UnityEngine::Rendering::DebugUI_IContainer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_IContainer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_SET_PARENT_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::DebugUI_Flags get_flags()
		{
			return ((::UnityEngine::Rendering::DebugUI_Flags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_flags(::UnityEngine::Rendering::DebugUI_Flags value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Flags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_SET_FLAGS_OFFSET))(this, value);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_queryPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_QUERYPATH_OFFSET))(this);
		}

		::System::Void set_queryPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_SET_QUERYPATH_OFFSET))(this, value);
		}

		::System::Boolean get_isEditorOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_ISEDITORONLY_OFFSET))(this);
		}

		::System::Boolean get_isRuntimeOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_ISRUNTIMEONLY_OFFSET))(this);
		}

		::System::Boolean get_isInactiveInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GET_ISINACTIVEINEDITOR_OFFSET))(this);
		}

		::System::Void GenerateQueryPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GENERATEQUERYPATH_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_WIDGET___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}

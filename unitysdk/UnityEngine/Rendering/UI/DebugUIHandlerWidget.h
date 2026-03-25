#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering { class DebugUI_Widget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GETWIDGET_OFFSET UNITYSDK_OFFSET(0x188FBB30)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_NEXTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x188FBAF0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_PARENTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x188FBAB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_PREVIOUSUIHANDLER_OFFSET UNITYSDK_OFFSET(0x188FBAD0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_NEXT_OFFSET UNITYSDK_OFFSET(0x188EFF30)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONACTION_OFFSET UNITYSDK_OFFSET(0x188FBB60)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x188FBB80)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x188FBB50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x188FBB10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x188FBB70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x188FBB40)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x188FBB90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x188FBB20)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_NEXTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x188FBB00)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PARENTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x188FBAC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PREVIOUSUIHANDLER_OFFSET UNITYSDK_OFFSET(0x188FBAE0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x188F0030)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerWidget_TypeDefinitionIndex = 27990;

	class DebugUIHandlerWidget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Color colorDefault; // 0x18
		::UnityEngine::Color colorSelected; // 0x28
		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* _parentUIHandler_k__BackingField; // 0x38
		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* _previousUIHandler_k__BackingField; // 0x40
		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* _nextUIHandler_k__BackingField; // 0x48
		::UnityEngine::Rendering::DebugUI_Widget* m_Widget; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* get_parentUIHandler()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_PARENTUIHANDLER_OFFSET))(this);
		}

		::System::Void set_parentUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PARENTUIHANDLER_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* get_previousUIHandler()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_PREVIOUSUIHANDLER_OFFSET))(this);
		}

		::System::Void set_previousUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PREVIOUSUIHANDLER_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* get_nextUIHandler()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_NEXTUIHANDLER_OFFSET))(this);
		}

		::System::Void set_nextUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_NEXTUIHANDLER_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONENABLE_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SETWIDGET_OFFSET))(this, widget);
		}

		::UnityEngine::Rendering::DebugUI_Widget* GetWidget()
		{
			return ((::UnityEngine::Rendering::DebugUI_Widget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GETWIDGET_OFFSET))(this);
		}

		::System::Boolean OnSelection(::System::Boolean fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONSELECTION_OFFSET))(this, fromNext, previous);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONACTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONINCREMENT_OFFSET))(this, fast);
		}

		::System::Void OnDecrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDECREMENT_OFFSET))(this, fast);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Previous()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_PREVIOUS_OFFSET))(this);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_NEXT_OFFSET))(this);
		}
	};
}

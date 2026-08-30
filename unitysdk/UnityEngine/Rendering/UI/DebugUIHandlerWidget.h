#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering { class DebugUI_Widget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GETWIDGET_OFFSET UNITYSDK_OFFSET(0x1EC14210)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_NEXTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1EC141D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_PARENTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1EC14190)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_PREVIOUSUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1EC141B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_NEXT_OFFSET UNITYSDK_OFFSET(0x1EC062A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONACTION_OFFSET UNITYSDK_OFFSET(0x1EC14240)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x1EC14260)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1EC14230)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EC141F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x1EC14250)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1EC14220)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x1EC14270)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1EC14200)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_NEXTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1EC141E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PARENTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1EC141A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PREVIOUSUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1EC141C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC06390)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerWidget_TypeDefinitionIndex = 35034;

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

		::System::Void set_parentUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PARENTUIHANDLER_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* get_previousUIHandler()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_PREVIOUSUIHANDLER_OFFSET))(this);
		}

		::System::Void set_previousUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PREVIOUSUIHANDLER_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* get_nextUIHandler()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_NEXTUIHANDLER_OFFSET))(this);
		}

		::System::Void set_nextUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_NEXTUIHANDLER_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONENABLE_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SETWIDGET_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::DebugUI_Widget* GetWidget()
		{
			return ((::UnityEngine::Rendering::DebugUI_Widget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GETWIDGET_OFFSET))(this);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONACTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONINCREMENT_OFFSET))(this, a1);
		}

		::System::Void OnDecrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDECREMENT_OFFSET))(this, a1);
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

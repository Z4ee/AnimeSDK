#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_Button; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONACTION_OFFSET UNITYSDK_OFFSET(0x1C07CF40)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1C07CE60)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1C07CD90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1C07CCB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1C07CF80)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerButton_TypeDefinitionIndex = 34237;

	class DebugUIHandlerButton : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::DebugUI_Button* m_Field; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_SETWIDGET_OFFSET))(this, a1);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONACTION_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_BoolField; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONACTION_OFFSET UNITYSDK_OFFSET(0x188F7FE0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x188F7EF0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x188F7E10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x188F7D90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x188F8040)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x188F80A0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerToggle_TypeDefinitionIndex = 27981;

	class DebugUIHandlerToggle : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Toggle* valueToggle; // 0x60
		::UnityEngine::UI::Image* checkmarkImage; // 0x68
		::UnityEngine::Rendering::DebugUI_BoolField* m_Field; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_SETWIDGET_OFFSET))(this, widget);
		}

		::System::Boolean OnSelection(::System::Boolean fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONSELECTION_OFFSET))(this, fromNext, previous);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONACTION_OFFSET))(this);
		}

		::System::Void UpdateValueLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_UPDATEVALUELABEL_OFFSET))(this);
		}
	};
}

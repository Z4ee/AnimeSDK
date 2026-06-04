#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_BoolField; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONACTION_OFFSET UNITYSDK_OFFSET(0x1B18C3F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1B18C300)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1B18C220)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1B18C1A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x1B18C460)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B18C4C0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerToggle_TypeDefinitionIndex = 33887;

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

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_SETWIDGET_OFFSET))(this, a1);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONSELECTION_OFFSET))(this, a1, a2);
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

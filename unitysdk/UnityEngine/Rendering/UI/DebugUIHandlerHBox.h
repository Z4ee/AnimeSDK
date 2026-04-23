#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_NEXT_OFFSET UNITYSDK_OFFSET(0x1A330450)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1A330230)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1A330190)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A330590)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerHBox_TypeDefinitionIndex = 33598;

	class DebugUIHandlerHBox : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_SETWIDGET_OFFSET))(this, widget);
		}

		::System::Boolean OnSelection(::System::Boolean fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_ONSELECTION_OFFSET))(this, fromNext, previous);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_NEXT_OFFSET))(this);
		}
	};
}

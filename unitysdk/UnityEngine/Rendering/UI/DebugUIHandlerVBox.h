#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_NEXT_OFFSET UNITYSDK_OFFSET(0x1A332EE0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1A332CC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1A332C20)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A333020)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerVBox_TypeDefinitionIndex = 33609;

	class DebugUIHandlerVBox : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_SETWIDGET_OFFSET))(this, widget);
		}

		::System::Boolean OnSelection(::System::Boolean fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_ONSELECTION_OFFSET))(this, fromNext, previous);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_NEXT_OFFSET))(this);
		}
	};
}

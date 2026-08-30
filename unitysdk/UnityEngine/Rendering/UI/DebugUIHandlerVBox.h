#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_NEXT_OFFSET UNITYSDK_OFFSET(0x1DE33D50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1DE33C10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1DE33B70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE33E80)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerVBox_TypeDefinitionIndex = 35029;

	class DebugUIHandlerVBox : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_SETWIDGET_OFFSET))(this, a1);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_NEXT_OFFSET))(this);
		}
	};
}

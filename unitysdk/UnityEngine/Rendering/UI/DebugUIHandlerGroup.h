#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class DebugUI_Container; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_NEXT_OFFSET UNITYSDK_OFFSET(0x1EC0DA70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1EC0D930)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1EC0D790)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC0DBA0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerGroup_TypeDefinitionIndex = 35017;

	class DebugUIHandlerGroup : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Transform* header; // 0x60
		::UnityEngine::Rendering::DebugUI_Container* m_Field; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_SETWIDGET_OFFSET))(this, a1);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_NEXT_OFFSET))(this);
		}
	};
}

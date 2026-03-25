#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering { class DebugUI_Panel; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETFIRSTITEM_OFFSET UNITYSDK_OFFSET(0x188F26F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETPANEL_OFFSET UNITYSDK_OFFSET(0x188F7550)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETYPOSINSCROLL_OFFSET UNITYSDK_OFFSET(0x188F7560)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x188F7370)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SCROLLTO_OFFSET UNITYSDK_OFFSET(0x188F0E50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SETPANEL_OFFSET UNITYSDK_OFFSET(0x188F1B00)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x188F7730)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerPanel_TypeDefinitionIndex = 27978;

	class DebugUIHandlerPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x18
		::UnityEngine::UI::ScrollRect* scrollRect; // 0x20
		::UnityEngine::RectTransform* viewport; // 0x28
		::UnityEngine::RectTransform* m_ScrollTransform; // 0x30
		::UnityEngine::RectTransform* m_ContentTransform; // 0x38
		::UnityEngine::RectTransform* m_MaskTransform; // 0x40
		::UnityEngine::Rendering::DebugUI_Panel* m_Panel; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_ONENABLE_OFFSET))(this);
		}

		::System::Void SetPanel(::UnityEngine::Rendering::DebugUI_Panel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SETPANEL_OFFSET))(this, panel);
		}

		::UnityEngine::Rendering::DebugUI_Panel* GetPanel()
		{
			return ((::UnityEngine::Rendering::DebugUI_Panel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETPANEL_OFFSET))(this);
		}

		::System::Void ScrollTo(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SCROLLTO_OFFSET))(this, target);
		}

		::System::Single GetYPosInScroll(::UnityEngine::RectTransform* target)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETYPOSINSCROLL_OFFSET))(this, target);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* GetFirstItem()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETFIRSTITEM_OFFSET))(this);
		}
	};
}

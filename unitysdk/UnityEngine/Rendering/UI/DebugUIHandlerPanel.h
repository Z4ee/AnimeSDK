#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering { class DebugUI_Panel; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETFIRSTITEM_OFFSET UNITYSDK_OFFSET(0x1EC090D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETPANEL_OFFSET UNITYSDK_OFFSET(0x1EC0F1A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETYPOSINSCROLL_OFFSET UNITYSDK_OFFSET(0x1EC0F1B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EC0EFA0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SCROLLTO_OFFSET UNITYSDK_OFFSET(0x1EC073B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SETPANEL_OFFSET UNITYSDK_OFFSET(0x1EC081D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC0F380)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerPanel_TypeDefinitionIndex = 35022;

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

		::System::Void SetPanel(::UnityEngine::Rendering::DebugUI_Panel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SETPANEL_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::DebugUI_Panel* GetPanel()
		{
			return ((::UnityEngine::Rendering::DebugUI_Panel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETPANEL_OFFSET))(this);
		}

		::System::Void ScrollTo(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_SCROLLTO_OFFSET))(this, a1);
		}

		::System::Single GetYPosInScroll(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETYPOSINSCROLL_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* GetFirstItem()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPANEL_GETFIRSTITEM_OFFSET))(this);
		}
	};
}

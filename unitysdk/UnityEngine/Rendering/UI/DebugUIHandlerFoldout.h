#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_Foldout; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_NEXT_OFFSET UNITYSDK_OFFSET(0x1DE30050)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONACTION_OFFSET UNITYSDK_OFFSET(0x1DE30010)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x1DE2FFD0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1DE2FEB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x1DE2FF90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1DE2FC60)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1DE2F610)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1DE2FC20)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE301A0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerFoldout_TypeDefinitionIndex = 35016;

	class DebugUIHandlerFoldout : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		// static const ::System::Single xDecal; // 0x0
		// static const ::System::Single xDecalInit; // 0x0
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		::UnityEngine::Rendering::DebugUI_Foldout* m_Field; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_SETWIDGET_OFFSET))(this, a1);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONINCREMENT_OFFSET))(this, a1);
		}

		::System::Void OnDecrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONDECREMENT_OFFSET))(this, a1);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONACTION_OFFSET))(this);
		}

		::System::Void UpdateValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_UPDATEVALUE_OFFSET))(this);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_NEXT_OFFSET))(this);
		}
	};
}

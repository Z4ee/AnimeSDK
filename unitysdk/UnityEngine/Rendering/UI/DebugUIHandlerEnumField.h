#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_EnumField; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONACTION_OFFSET UNITYSDK_OFFSET(0x188F42F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x188F4490)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x188F4200)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x188F4300)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x188F4120)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x188F40A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x188F46C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x188F47B0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerEnumField_TypeDefinitionIndex = 27968;

	class DebugUIHandlerEnumField : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Text* valueLabel; // 0x60
		::UnityEngine::Rendering::DebugUI_EnumField* m_Field; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_SETWIDGET_OFFSET))(this, widget);
		}

		::System::Boolean OnSelection(::System::Boolean fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONSELECTION_OFFSET))(this, fromNext, previous);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONACTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONINCREMENT_OFFSET))(this, fast);
		}

		::System::Void OnDecrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONDECREMENT_OFFSET))(this, fast);
		}

		::System::Void UpdateValueLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_UPDATEVALUELABEL_OFFSET))(this);
		}
	};
}

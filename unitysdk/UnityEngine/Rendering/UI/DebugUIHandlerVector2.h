#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_Vector2Field; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerIndirectFloatField; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_NEXT_OFFSET UNITYSDK_OFFSET(0x188F9D40)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONACTION_OFFSET UNITYSDK_OFFSET(0x188F9D10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x188F9CE0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x188F9C30)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x188F9CB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x188F9980)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x188F9830)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETVALUE_OFFSET UNITYSDK_OFFSET(0x188F9900)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x188F9610)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x188F9EA0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_0_OFFSET UNITYSDK_OFFSET(0x188FA020)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_1_OFFSET UNITYSDK_OFFSET(0x188FA040)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_2_OFFSET UNITYSDK_OFFSET(0x188FA060)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_0_OFFSET UNITYSDK_OFFSET(0x188F9EC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_1_OFFSET UNITYSDK_OFFSET(0x188F9F00)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_2_OFFSET UNITYSDK_OFFSET(0x188F9F70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_3_OFFSET UNITYSDK_OFFSET(0x188F9FB0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerVector2_TypeDefinitionIndex = 27987;

	class DebugUIHandlerVector2 : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldX; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldY; // 0x70
		::UnityEngine::Rendering::DebugUI_Vector2Field* m_Field; // 0x78
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETWIDGET_OFFSET))(this, widget);
		}

		::System::Void SetValue(::System::Single v, ::System::Boolean x, ::System::Boolean y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETVALUE_OFFSET))(this, v, x, y);
		}

		::System::Void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* field)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETUPSETTINGS_OFFSET))(this, field);
		}

		::System::Boolean OnSelection(::System::Boolean fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONSELECTION_OFFSET))(this, fromNext, previous);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONINCREMENT_OFFSET))(this, fast);
		}

		::System::Void OnDecrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDECREMENT_OFFSET))(this, fast);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONACTION_OFFSET))(this);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_NEXT_OFFSET))(this);
		}

		::System::Single _SetWidget_b__6_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_0_OFFSET))(this);
		}

		::System::Void _SetWidget_b__6_1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_1_OFFSET))(this, x);
		}

		::System::Single _SetWidget_b__6_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_2_OFFSET))(this);
		}

		::System::Void _SetWidget_b__6_3(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_3_OFFSET))(this, x);
		}

		::System::Single _SetupSettings_b__8_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_0_OFFSET))(this);
		}

		::System::Single _SetupSettings_b__8_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_1_OFFSET))(this);
		}

		::System::Single _SetupSettings_b__8_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_2_OFFSET))(this);
		}
	};
}

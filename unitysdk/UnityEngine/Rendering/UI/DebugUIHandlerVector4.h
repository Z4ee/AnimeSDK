#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_Vector4Field; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerIndirectFloatField; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_NEXT_OFFSET UNITYSDK_OFFSET(0x1A335280)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONACTION_OFFSET UNITYSDK_OFFSET(0x1A335250)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x1A335220)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1A335170)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x1A3351F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1A334EC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A334D30)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A334E00)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1A3349C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3353E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1A335740)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_1_OFFSET UNITYSDK_OFFSET(0x1A335760)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_2_OFFSET UNITYSDK_OFFSET(0x1A335780)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_0_OFFSET UNITYSDK_OFFSET(0x1A335400)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_1_OFFSET UNITYSDK_OFFSET(0x1A335440)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_2_OFFSET UNITYSDK_OFFSET(0x1A3354D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_3_OFFSET UNITYSDK_OFFSET(0x1A335510)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_4_OFFSET UNITYSDK_OFFSET(0x1A3355A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_5_OFFSET UNITYSDK_OFFSET(0x1A3355E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_6_OFFSET UNITYSDK_OFFSET(0x1A335670)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_7_OFFSET UNITYSDK_OFFSET(0x1A3356B0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerVector4_TypeDefinitionIndex = 33613;

	class DebugUIHandlerVector4 : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldX; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldY; // 0x70
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldZ; // 0x78
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldW; // 0x80
		::UnityEngine::Rendering::DebugUI_Vector4Field* m_Field; // 0x88
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETWIDGET_OFFSET))(this, widget);
		}

		::System::Void SetValue(::System::Single v, ::System::Boolean x, ::System::Boolean y, ::System::Boolean z, ::System::Boolean w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETVALUE_OFFSET))(this, v, x, y, z, w);
		}

		::System::Void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* field)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETUPSETTINGS_OFFSET))(this, field);
		}

		::System::Boolean OnSelection(::System::Boolean fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONSELECTION_OFFSET))(this, fromNext, previous);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONINCREMENT_OFFSET))(this, fast);
		}

		::System::Void OnDecrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONDECREMENT_OFFSET))(this, fast);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONACTION_OFFSET))(this);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_NEXT_OFFSET))(this);
		}

		::System::Single _SetWidget_b__8_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_0_OFFSET))(this);
		}

		::System::Void _SetWidget_b__8_1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_1_OFFSET))(this, x);
		}

		::System::Single _SetWidget_b__8_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_2_OFFSET))(this);
		}

		::System::Void _SetWidget_b__8_3(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_3_OFFSET))(this, x);
		}

		::System::Single _SetWidget_b__8_4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_4_OFFSET))(this);
		}

		::System::Void _SetWidget_b__8_5(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_5_OFFSET))(this, x);
		}

		::System::Single _SetWidget_b__8_6()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_6_OFFSET))(this);
		}

		::System::Void _SetWidget_b__8_7(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_7_OFFSET))(this, x);
		}

		::System::Single _SetupSettings_b__10_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_0_OFFSET))(this);
		}

		::System::Single _SetupSettings_b__10_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_1_OFFSET))(this);
		}

		::System::Single _SetupSettings_b__10_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_2_OFFSET))(this);
		}
	};
}

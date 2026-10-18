#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_Vector2Field; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerIndirectFloatField; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_NEXT_OFFSET UNITYSDK_OFFSET(0x1F2D9A50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONACTION_OFFSET UNITYSDK_OFFSET(0x1F2D9A20)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x1F2D99F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1F2D98E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x1F2D99C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1F2D9690)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F2D94F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1F2D9610)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1F2D9220)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2D9BB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F2D9D30)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_1_OFFSET UNITYSDK_OFFSET(0x1F2D9D50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_2_OFFSET UNITYSDK_OFFSET(0x1F2D9D70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_0_OFFSET UNITYSDK_OFFSET(0x1F2D9BD0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_1_OFFSET UNITYSDK_OFFSET(0x1F2D9C10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_2_OFFSET UNITYSDK_OFFSET(0x1F2D9C80)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_3_OFFSET UNITYSDK_OFFSET(0x1F2D9CC0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerVector2_TypeDefinitionIndex = 35700;

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

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETWIDGET_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETUPSETTINGS_OFFSET))(this, a1);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONINCREMENT_OFFSET))(this, a1);
		}

		::System::Void OnDecrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDECREMENT_OFFSET))(this, a1);
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

		::System::Void _SetWidget_b__6_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_1_OFFSET))(this, a1);
		}

		::System::Single _SetWidget_b__6_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_2_OFFSET))(this);
		}

		::System::Void _SetWidget_b__6_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_3_OFFSET))(this, a1);
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

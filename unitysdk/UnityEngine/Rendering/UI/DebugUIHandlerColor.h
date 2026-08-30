#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_ColorField; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerIndirectFloatField; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_NEXT_OFFSET UNITYSDK_OFFSET(0x1DE2D190)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONACTION_OFFSET UNITYSDK_OFFSET(0x1DE2D160)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x1DE2D130)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1DE2D020)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x1DE2D100)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1DE2CDD0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x1DE2C9C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1DE2CBF0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1DE2C3F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_UPDATECOLOR_OFFSET UNITYSDK_OFFSET(0x1DE2CAE0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2D2F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1DE2D490)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_1_OFFSET UNITYSDK_OFFSET(0x1DE2D4B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_2_OFFSET UNITYSDK_OFFSET(0x1DE2D4D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_0_OFFSET UNITYSDK_OFFSET(0x1DE2D310)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_1_OFFSET UNITYSDK_OFFSET(0x1DE2D350)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_2_OFFSET UNITYSDK_OFFSET(0x1DE2D370)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_3_OFFSET UNITYSDK_OFFSET(0x1DE2D3B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_4_OFFSET UNITYSDK_OFFSET(0x1DE2D3D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_5_OFFSET UNITYSDK_OFFSET(0x1DE2D410)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_6_OFFSET UNITYSDK_OFFSET(0x1DE2D430)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_7_OFFSET UNITYSDK_OFFSET(0x1DE2D470)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerColor_TypeDefinitionIndex = 35009;

	class DebugUIHandlerColor : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		::UnityEngine::UI::Image* colorImage; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldR; // 0x70
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldG; // 0x78
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldB; // 0x80
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldA; // 0x88
		::UnityEngine::Rendering::DebugUI_ColorField* m_Field; // 0x90
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETWIDGET_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETUPSETTINGS_OFFSET))(this, a1);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONINCREMENT_OFFSET))(this, a1);
		}

		::System::Void OnDecrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONDECREMENT_OFFSET))(this, a1);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONACTION_OFFSET))(this);
		}

		::System::Void UpdateColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_UPDATECOLOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_NEXT_OFFSET))(this);
		}

		::System::Single _SetWidget_b__9_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_0_OFFSET))(this);
		}

		::System::Void _SetWidget_b__9_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_1_OFFSET))(this, a1);
		}

		::System::Single _SetWidget_b__9_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_2_OFFSET))(this);
		}

		::System::Void _SetWidget_b__9_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_3_OFFSET))(this, a1);
		}

		::System::Single _SetWidget_b__9_4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_4_OFFSET))(this);
		}

		::System::Void _SetWidget_b__9_5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_5_OFFSET))(this, a1);
		}

		::System::Single _SetWidget_b__9_6()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_6_OFFSET))(this);
		}

		::System::Void _SetWidget_b__9_7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_7_OFFSET))(this, a1);
		}

		::System::Single _SetupSettings_b__11_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_0_OFFSET))(this);
		}

		::System::Single _SetupSettings_b__11_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_1_OFFSET))(this);
		}

		::System::Single _SetupSettings_b__11_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_2_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_Vector3Field; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerIndirectFloatField; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_NEXT_OFFSET UNITYSDK_OFFSET(0x1B18EDD0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONACTION_OFFSET UNITYSDK_OFFSET(0x1B18EDA0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x1B18ED70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1B18ECC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x1B18ED40)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1B18EA10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B18E820)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1B18E940)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1B18E510)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B18EF30)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1B18F1A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_1_OFFSET UNITYSDK_OFFSET(0x1B18F1C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_2_OFFSET UNITYSDK_OFFSET(0x1B18F1E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B18EF50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_1_OFFSET UNITYSDK_OFFSET(0x1B18EF90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_2_OFFSET UNITYSDK_OFFSET(0x1B18F010)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_3_OFFSET UNITYSDK_OFFSET(0x1B18F050)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_4_OFFSET UNITYSDK_OFFSET(0x1B18F0E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_5_OFFSET UNITYSDK_OFFSET(0x1B18F120)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerVector3_TypeDefinitionIndex = 33894;

	class DebugUIHandlerVector3 : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldX; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldY; // 0x70
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldZ; // 0x78
		::UnityEngine::Rendering::DebugUI_Vector3Field* m_Field; // 0x80
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETWIDGET_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETUPSETTINGS_OFFSET))(this, a1);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONINCREMENT_OFFSET))(this, a1);
		}

		::System::Void OnDecrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDECREMENT_OFFSET))(this, a1);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONACTION_OFFSET))(this);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_NEXT_OFFSET))(this);
		}

		::System::Single _SetWidget_b__7_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_0_OFFSET))(this);
		}

		::System::Void _SetWidget_b__7_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_1_OFFSET))(this, a1);
		}

		::System::Single _SetWidget_b__7_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_2_OFFSET))(this);
		}

		::System::Void _SetWidget_b__7_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_3_OFFSET))(this, a1);
		}

		::System::Single _SetWidget_b__7_4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_4_OFFSET))(this);
		}

		::System::Void _SetWidget_b__7_5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_5_OFFSET))(this, a1);
		}

		::System::Single _SetupSettings_b__9_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_0_OFFSET))(this);
		}

		::System::Single _SetupSettings_b__9_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_1_OFFSET))(this);
		}

		::System::Single _SetupSettings_b__9_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_2_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_Vector3Field; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerIndirectFloatField; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_NEXT_OFFSET UNITYSDK_OFFSET(0x188FA8A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONACTION_OFFSET UNITYSDK_OFFSET(0x188FA870)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x188FA840)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x188FA790)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x188FA810)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x188FA4E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x188FA340)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETVALUE_OFFSET UNITYSDK_OFFSET(0x188FA410)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x188FA080)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x188FAA00)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_0_OFFSET UNITYSDK_OFFSET(0x188FAC70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_1_OFFSET UNITYSDK_OFFSET(0x188FAC90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_2_OFFSET UNITYSDK_OFFSET(0x188FACB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_0_OFFSET UNITYSDK_OFFSET(0x188FAA20)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_1_OFFSET UNITYSDK_OFFSET(0x188FAA60)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_2_OFFSET UNITYSDK_OFFSET(0x188FAAE0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_3_OFFSET UNITYSDK_OFFSET(0x188FAB20)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_4_OFFSET UNITYSDK_OFFSET(0x188FABB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_5_OFFSET UNITYSDK_OFFSET(0x188FABF0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerVector3_TypeDefinitionIndex = 27988;

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

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETWIDGET_OFFSET))(this, widget);
		}

		::System::Void SetValue(::System::Single v, ::System::Boolean x, ::System::Boolean y, ::System::Boolean z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETVALUE_OFFSET))(this, v, x, y, z);
		}

		::System::Void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* field)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETUPSETTINGS_OFFSET))(this, field);
		}

		::System::Boolean OnSelection(::System::Boolean fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONSELECTION_OFFSET))(this, fromNext, previous);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONINCREMENT_OFFSET))(this, fast);
		}

		::System::Void OnDecrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDECREMENT_OFFSET))(this, fast);
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

		::System::Void _SetWidget_b__7_1(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_1_OFFSET))(this, v);
		}

		::System::Single _SetWidget_b__7_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_2_OFFSET))(this);
		}

		::System::Void _SetWidget_b__7_3(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_3_OFFSET))(this, v);
		}

		::System::Single _SetWidget_b__7_4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_4_OFFSET))(this);
		}

		::System::Void _SetWidget_b__7_5(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_5_OFFSET))(this, v);
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

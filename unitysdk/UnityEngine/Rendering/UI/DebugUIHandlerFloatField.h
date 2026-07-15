#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_FloatField; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1C083370)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x1C083400)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1C083140)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x1C0832F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1C082F90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1C082D90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x1C082E70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C083480)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerFloatField_TypeDefinitionIndex = 34248;

	class DebugUIHandlerFloatField : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Text* valueLabel; // 0x60
		::UnityEngine::Rendering::DebugUI_FloatField* m_Field; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_SETWIDGET_OFFSET))(this, a1);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONINCREMENT_OFFSET))(this, a1);
		}

		::System::Void OnDecrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONDECREMENT_OFFSET))(this, a1);
		}

		::System::Void ChangeValue(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_CHANGEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateValueLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_UPDATEVALUELABEL_OFFSET))(this);
		}
	};
}

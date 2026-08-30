#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_UIntField; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1DE33A40)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x1DE33AD0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1DE33820)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x1DE339D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1DE33670)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1DE33480)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x1DE33560)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE33B50)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerUIntField_TypeDefinitionIndex = 35028;

	class DebugUIHandlerUIntField : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Text* valueLabel; // 0x60
		::UnityEngine::Rendering::DebugUI_UIntField* m_Field; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_SETWIDGET_OFFSET))(this, a1);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONINCREMENT_OFFSET))(this, a1);
		}

		::System::Void OnDecrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDECREMENT_OFFSET))(this, a1);
		}

		::System::Void ChangeValue(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_CHANGEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateValueLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_UPDATEVALUELABEL_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::Rendering { class DebugUI_UIntField; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x188F8E00)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x188F8E90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x188F8CA0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x188F8D90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x188F8BC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x188F8A90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x188F8B10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x188F8F10)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerUIntField_TypeDefinitionIndex = 27984;

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

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_SETWIDGET_OFFSET))(this, widget);
		}

		::System::Boolean OnSelection(::System::Boolean fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONSELECTION_OFFSET))(this, fromNext, previous);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONINCREMENT_OFFSET))(this, fast);
		}

		::System::Void OnDecrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDECREMENT_OFFSET))(this, fast);
		}

		::System::Void ChangeValue(::System::Boolean fast, ::System::Int32 multiplier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_CHANGEVALUE_OFFSET))(this, fast, multiplier);
		}

		::System::Void UpdateValueLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_UPDATEVALUELABEL_OFFSET))(this);
		}
	};
}

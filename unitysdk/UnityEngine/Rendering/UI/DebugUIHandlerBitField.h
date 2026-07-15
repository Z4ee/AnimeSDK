#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class DebugUI_BitField; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerIndirectToggle; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1C07C1F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_NEXT_OFFSET UNITYSDK_OFFSET(0x1C07CA40)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONACTION_OFFSET UNITYSDK_OFFSET(0x1C07CA10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x1C07C9E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1C07C8D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x1C07C9B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1C07C520)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C07C270)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1C07BCC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C07CC70)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerBitField_TypeDefinitionIndex = 34236;

	class DebugUIHandlerBitField : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle*>* toggles; // 0x68
		::UnityEngine::Rendering::DebugUI_BitField* m_Field; // 0x70
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_SETWIDGET_OFFSET))(this, a1);
		}

		::System::Boolean GetValue(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_GETVALUE_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONINCREMENT_OFFSET))(this, a1);
		}

		::System::Void OnDecrement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONDECREMENT_OFFSET))(this, a1);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONACTION_OFFSET))(this);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_NEXT_OFFSET))(this);
		}
	};
}

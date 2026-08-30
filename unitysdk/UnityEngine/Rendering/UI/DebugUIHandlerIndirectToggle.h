#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_INIT_OFFSET UNITYSDK_OFFSET(0x1EC058A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONACTION_OFFSET UNITYSDK_OFFSET(0x1EC0E810)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1EC0E660)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1EC0E4B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x1EC05BD0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC0E8B0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerIndirectToggle_TypeDefinitionIndex = 35020;

	class DebugUIHandlerIndirectToggle : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Toggle* valueToggle; // 0x60
		::UnityEngine::UI::Image* checkmarkImage; // 0x68
		::System::Func_2<::System::Int32, ::System::Boolean>* getter; // 0x70
		::System::Action_2<::System::Int32, ::System::Boolean>* setter; // 0x78
		::System::Int32 index; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_INIT_OFFSET))(this);
		}

		::System::Boolean OnSelection(::System::Boolean a1, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONSELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONACTION_OFFSET))(this);
		}

		::System::Void UpdateValueLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_UPDATEVALUELABEL_OFFSET))(this);
		}
	};
}

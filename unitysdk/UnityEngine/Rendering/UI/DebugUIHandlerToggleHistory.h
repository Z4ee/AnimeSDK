#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerToggle.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_REFRESHAFTERSANITIZATION_OFFSET UNITYSDK_OFFSET(0x1A3325F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x1A331DB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x1A3323F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A332650)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerToggleHistory_TypeDefinitionIndex = 33606;

	class DebugUIHandlerToggleHistory : public ::UnityEngine::Rendering::UI::DebugUIHandlerToggle
	{
	public:
		// static const ::System::Single xDecal; // 0x0
		::Il2CppArray<::UnityEngine::UI::Toggle*>* historyToggles; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_SETWIDGET_OFFSET))(this, widget);
		}

		::System::Void UpdateValueLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_UPDATEVALUELABEL_OFFSET))(this);
		}

		::System::Collections::IEnumerator* RefreshAfterSanitization()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLEHISTORY_REFRESHAFTERSANITIZATION_OFFSET))(this);
		}
	};
}

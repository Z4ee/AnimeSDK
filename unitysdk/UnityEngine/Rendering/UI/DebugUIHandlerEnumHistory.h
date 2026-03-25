#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerEnumField.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_REFRESHAFTERSANITIZATION_OFFSET UNITYSDK_OFFSET(0x188F4E50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x188F47D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x188F4BA0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x188F4EB0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerEnumHistory_TypeDefinitionIndex = 27969;

	class DebugUIHandlerEnumHistory : public ::UnityEngine::Rendering::UI::DebugUIHandlerEnumField
	{
	public:
		// static const ::System::Single xDecal; // 0x0
		::Il2CppArray<::UnityEngine::UI::Text*>* historyValues; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY__CTOR_OFFSET))(this);
		}

		::System::Void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_SETWIDGET_OFFSET))(this, widget);
		}

		::System::Void UpdateValueLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_UPDATEVALUELABEL_OFFSET))(this);
		}

		::System::Collections::IEnumerator* RefreshAfterSanitization()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMHISTORY_REFRESHAFTERSANITIZATION_OFFSET))(this);
		}
	};
}

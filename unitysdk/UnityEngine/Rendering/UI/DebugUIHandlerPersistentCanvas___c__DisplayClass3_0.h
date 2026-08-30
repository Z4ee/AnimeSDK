#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class DebugUI_Value; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerValue; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC0F770)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS___C__DISPLAYCLASS3_0__TOGGLE_B__0_OFFSET UNITYSDK_OFFSET(0x1EC0FA30)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerPersistentCanvas___c__DisplayClass3_0_TypeDefinitionIndex = 35024;

	class DebugUIHandlerPersistentCanvas___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::DebugUI_Value* widget; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Toggle_b__0(::UnityEngine::Rendering::UI::DebugUIHandlerValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerValue*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS___C__DISPLAYCLASS3_0__TOGGLE_B__0_OFFSET))(this, a1);
		}
	};
}

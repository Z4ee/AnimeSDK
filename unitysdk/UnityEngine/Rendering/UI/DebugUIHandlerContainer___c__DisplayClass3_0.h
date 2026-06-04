#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B188480)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER___C__DISPLAYCLASS3_0__ISDIRECTCHILD_B__0_OFFSET UNITYSDK_OFFSET(0x1B1884A0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerContainer___c__DisplayClass3_0_TypeDefinitionIndex = 33873;

	class DebugUIHandlerContainer___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsDirectChild_b__0(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER___C__DISPLAYCLASS3_0__ISDIRECTCHILD_B__0_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerPanel; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__ACTIVATEPANEL_B__14_0_OFFSET UNITYSDK_OFFSET(0x1EC09920)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC098B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC098F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__REBUILD_B__11_0_OFFSET UNITYSDK_OFFSET(0x1EC09900)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerCanvas___c_TypeDefinitionIndex = 35007;

	class DebugUIHandlerCanvas___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Rendering::UI::DebugUIHandlerPanel*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::UnityEngine::Rendering::UI::DebugUIHandlerPanel*>**)Il2CppClass::FromTypeDefinitionIndex(DebugUIHandlerCanvas___c_TypeDefinitionIndex)->GetStaticField(0x610F0);
		}
		static ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c**)Il2CppClass::FromTypeDefinitionIndex(DebugUIHandlerCanvas___c_TypeDefinitionIndex)->GetStaticField(0x610F8);
		}
		static ::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DebugUIHandlerCanvas___c_TypeDefinitionIndex)->GetStaticField(0x61100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Rebuild_b__11_0(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__REBUILD_B__11_0_OFFSET))(this, a1);
		}

		::System::Void _ActivatePanel_b__14_0(::UnityEngine::Rendering::UI::DebugUIHandlerPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__ACTIVATEPANEL_B__14_0_OFFSET))(this, a1);
		}
	};
}

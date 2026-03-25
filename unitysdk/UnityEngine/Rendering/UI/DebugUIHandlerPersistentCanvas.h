#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering { class DebugUI_Value; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerValue; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_CLEAR_OFFSET UNITYSDK_OFFSET(0x188F7BA0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_TOGGLE_OFFSET UNITYSDK_OFFSET(0x188F7740)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS__CTOR_OFFSET UNITYSDK_OFFSET(0x188F7D20)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerPersistentCanvas_TypeDefinitionIndex = 27979;

	class DebugUIHandlerPersistentCanvas : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* panel; // 0x18
		::UnityEngine::RectTransform* valuePrefab; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIHandlerValue*>* m_Items; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS__CTOR_OFFSET))(this);
		}

		::System::Void Toggle(::UnityEngine::Rendering::DebugUI_Value* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Value*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_TOGGLE_OFFSET))(this, widget);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_CLEAR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class GUI_WindowFunction; }

#define UNITYENGINE_GUILAYOUT_LAYOUTEDWINDOW_DOWINDOW_OFFSET UNITYSDK_OFFSET(0x1E4273E0)
#define UNITYENGINE_GUILAYOUT_LAYOUTEDWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E427120)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayout_LayoutedWindow_TypeDefinitionIndex = 6412;

	class GUILayout_LayoutedWindow : public ::System::Object
	{
	public:
		::UnityEngine::GUI_WindowFunction* m_Func; // 0x10
		::UnityEngine::Rect m_ScreenRect; // 0x18
		::Il2CppArray<::UnityEngine::GUILayoutOption*>* m_Options; // 0x28
		::UnityEngine::GUIStyle* m_Style; // 0x30

		::System::Void _ctor(::UnityEngine::GUI_WindowFunction* f, ::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_LAYOUTEDWINDOW__CTOR_OFFSET))(this, f, screenRect, content, options, style);
		}

		::System::Void DoWindow(::System::Int32 windowID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_LAYOUTEDWINDOW_DOWINDOW_OFFSET))(this, windowID);
		}
	};
}

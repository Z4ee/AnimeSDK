#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETACTIVECHILDREN_OFFSET UNITYSDK_OFFSET(0x1B188020)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETFIRSTITEM_OFFSET UNITYSDK_OFFSET(0x1B1841C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETLASTITEM_OFFSET UNITYSDK_OFFSET(0x1B183E80)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_ISDIRECTCHILD_OFFSET UNITYSDK_OFFSET(0x1B183D90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B188490)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerContainer_TypeDefinitionIndex = 33872;

	class DebugUIHandlerContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* contentHolder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* GetFirstItem()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETFIRSTITEM_OFFSET))(this);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* GetLastItem()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETLASTITEM_OFFSET))(this);
		}

		::System::Boolean IsDirectChild(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_ISDIRECTCHILD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>* GetActiveChildren()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_GETACTIVECHILDREN_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class DebugUI_IContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerPanel; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }
namespace UnityEngine::Rendering::UI { class DebugUIPrefabBundle; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ACTIVATEPANEL_OFFSET UNITYSDK_OFFSET(0x1EC08B50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ACTIVATESELECTION_OFFSET UNITYSDK_OFFSET(0x1EC097A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_CHANGESELECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1EC095C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_CHANGESELECTION_OFFSET UNITYSDK_OFFSET(0x1EC091D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_GETWIDGETFROMPATH_OFFSET UNITYSDK_OFFSET(0x1EC08F10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_HANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x1EC06D90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EC066A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_REBUILD_OFFSET UNITYSDK_OFFSET(0x1EC077B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_RESETALLHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1EC06930)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTNEXTITEM_OFFSET UNITYSDK_OFFSET(0x1EC09460)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTPREVIOUSITEM_OFFSET UNITYSDK_OFFSET(0x1EC09510)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_TRAVERSE_OFFSET UNITYSDK_OFFSET(0x1EC082C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EC06840)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS__ACTIVATEPANEL_B__14_1_OFFSET UNITYSDK_OFFSET(0x1EC09850)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC09840)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerCanvas_TypeDefinitionIndex = 35006;

	class DebugUIHandlerCanvas : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 m_DebugTreeState; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Transform*>* m_PrefabsMap; // 0x20
		::UnityEngine::Transform* panelPrefab; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>* prefabs; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIHandlerPanel*>* m_UIPanels; // 0x38
		::System::Int32 m_SelectedPanel; // 0x40
		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* m_SelectedWidget; // 0x48
		::System::String* m_CurrentQueryPath; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_UPDATE_OFFSET))(this);
		}

		::System::Void ResetAllHierarchy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_RESETALLHIERARCHY_OFFSET))(this);
		}

		::System::Void Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_REBUILD_OFFSET))(this);
		}

		::System::Void Traverse(::UnityEngine::Rendering::DebugUI_IContainer* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_IContainer*, ::UnityEngine::Transform*, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_TRAVERSE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* GetWidgetFromPath(::System::String* a1)
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_GETWIDGETFROMPATH_OFFSET))(this, a1);
		}

		::System::Void ActivatePanel(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ACTIVATEPANEL_OFFSET))(this, a1, a2);
		}

		::System::Void ChangeSelection(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_CHANGESELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void SelectPreviousItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTPREVIOUSITEM_OFFSET))(this);
		}

		::System::Void SelectNextItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_SELECTNEXTITEM_OFFSET))(this);
		}

		::System::Void ChangeSelectionValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_CHANGESELECTIONVALUE_OFFSET))(this, a1);
		}

		::System::Void ActivateSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_ACTIVATESELECTION_OFFSET))(this);
		}

		::System::Void HandleInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_HANDLEINPUT_OFFSET))(this);
		}

		::System::Boolean _ActivatePanel_b__14_1(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS__ACTIVATEPANEL_B__14_1_OFFSET))(this, a1);
		}
	};
}

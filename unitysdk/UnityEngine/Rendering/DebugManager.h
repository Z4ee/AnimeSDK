#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/DebugAction.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering { class DebugActionDesc; }
namespace UnityEngine::Rendering { class DebugActionState; }
namespace UnityEngine::Rendering { class DebugUI_IContainer; }
namespace UnityEngine::Rendering { class DebugUI_Panel; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering { class IDebugData; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerCanvas; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerPersistentCanvas; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADDACTION_OFFSET UNITYSDK_OFFSET(0x188DAEF0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONDISPLAYRUNTIMEUICHANGED_OFFSET UNITYSDK_OFFSET(0x188DB5D0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x188DB690)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_RESETDATA_OFFSET UNITYSDK_OFFSET(0x188DB750)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_CHANGESELECTION_OFFSET UNITYSDK_OFFSET(0x188DC5B0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_CHECKPERSISTENTCANVAS_OFFSET UNITYSDK_OFFSET(0x188DBAC0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETACTION_OFFSET UNITYSDK_OFFSET(0x188DB480)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_1_OFFSET UNITYSDK_OFFSET(0x188DCDB0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_OFFSET UNITYSDK_OFFSET(0x188DCC90)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETPANEL_OFFSET UNITYSDK_OFFSET(0x188C1B80)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETSTATE_OFFSET UNITYSDK_OFFSET(0x188DC100)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYEDITORUI_OFFSET UNITYSDK_OFFSET(0x188DB810)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x188DBA40)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x188DB830)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x188C1B20)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_PANELS_OFFSET UNITYSDK_OFFSET(0x188DB550)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ONPANELDIRTY_OFFSET UNITYSDK_OFFSET(0x188DC6F0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REDRAWONSCREENDEBUG_OFFSET UNITYSDK_OFFSET(0x188DBEA0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REFRESHEDITOR_OFFSET UNITYSDK_OFFSET(0x188DBE40)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERACTIONS_OFFSET UNITYSDK_OFFSET(0x188DA4F0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERDATA_OFFSET UNITYSDK_OFFSET(0x188DBEE0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERINPUTS_OFFSET UNITYSDK_OFFSET(0x188DB4D0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x188DC580)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_1_OFFSET UNITYSDK_OFFSET(0x188DC790)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_OFFSET UNITYSDK_OFFSET(0x188C1FA0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONDISPLAYRUNTIMEUICHANGED_OFFSET UNITYSDK_OFFSET(0x188DB630)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x188DB6F0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_RESETDATA_OFFSET UNITYSDK_OFFSET(0x188DB7B0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x188DBE50)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_SAMPLEACTION_OFFSET UNITYSDK_OFFSET(0x188DB020)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x188DBA80)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x188DB850)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEEDITORUI_OFFSET UNITYSDK_OFFSET(0x188DB820)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEPERSISTENT_OFFSET UNITYSDK_OFFSET(0x188DC5D0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UNREGISTERDATA_OFFSET UNITYSDK_OFFSET(0x188DBFF0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTIONS_OFFSET UNITYSDK_OFFSET(0x188DB420)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTION_OFFSET UNITYSDK_OFFSET(0x188DB3A0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEREADONLYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x188DB4E0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x188DD1A0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x188DBC60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugManager_TypeDefinitionIndex = 27803;

	class DebugManager : public ::System::Object
	{
	public:
		static ::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>** StaticGet_s_Instance()
		{
			return (::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>**)Il2CppClass::FromTypeDefinitionIndex(DebugManager_TypeDefinitionIndex)->GetStaticField(0x1F4E0);
		}
		// static const ::System::String* kEnableDebugBtn1; // 0x0
		// static const ::System::String* kEnableDebugBtn2; // 0x0
		// static const ::System::String* kDebugPreviousBtn; // 0x0
		// static const ::System::String* kDebugNextBtn; // 0x0
		// static const ::System::String* kValidateBtn; // 0x0
		// static const ::System::String* kPersistentBtn; // 0x0
		// static const ::System::String* kDPadVertical; // 0x0
		// static const ::System::String* kDPadHorizontal; // 0x0
		// static const ::System::String* kMultiplierBtn; // 0x0
		// static const ::System::String* kResetBtn; // 0x0
		::System::Action* onSetDirty; // 0x10
		::System::Action* resetData; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::DebugActionState*>* m_DebugActionStates; // 0x20
		::System::Action_1<::System::Boolean>* onDisplayRuntimeUIChanged; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* m_ReadOnlyPanels; // 0x30
		::Il2CppArray<::UnityEngine::Rendering::DebugActionDesc*>* m_DebugActions; // 0x38
		::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas* m_RootUIPersistentCanvas; // 0x40
		::UnityEngine::GameObject* m_Root; // 0x48
		::UnityEngine::GameObject* m_PersistentRoot; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>* m_Panels; // 0x58
		::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* m_RootUICanvas; // 0x60
		::System::Boolean m_EditorOpen; // 0x68
		::System::Boolean refreshEditorRequested; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER__CCTOR_OFFSET))();
		}

		::System::Void RegisterActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERACTIONS_OFFSET))(this);
		}

		::System::Void AddAction(::UnityEngine::Rendering::DebugAction action, ::UnityEngine::Rendering::DebugActionDesc* desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugAction, ::UnityEngine::Rendering::DebugActionDesc*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADDACTION_OFFSET))(this, action, desc);
		}

		::System::Void SampleAction(::System::Int32 actionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_SAMPLEACTION_OFFSET))(this, actionIndex);
		}

		::System::Void UpdateAction(::System::Int32 actionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTION_OFFSET))(this, actionIndex);
		}

		::System::Void UpdateActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTIONS_OFFSET))(this);
		}

		::System::Single GetAction(::UnityEngine::Rendering::DebugAction action)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Rendering::DebugAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETACTION_OFFSET))(this, action);
		}

		::System::Void RegisterInputs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERINPUTS_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::DebugManager* get_instance()
		{
			return ((::UnityEngine::Rendering::DebugManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void UpdateReadOnlyCollection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEREADONLYCOLLECTION_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* get_panels()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_PANELS_OFFSET))(this);
		}

		::System::Void add_onDisplayRuntimeUIChanged(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONDISPLAYRUNTIMEUICHANGED_OFFSET))(this, value);
		}

		::System::Void remove_onDisplayRuntimeUIChanged(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONDISPLAYRUNTIMEUICHANGED_OFFSET))(this, value);
		}

		::System::Void add_onSetDirty(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONSETDIRTY_OFFSET))(this, value);
		}

		::System::Void remove_onSetDirty(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONSETDIRTY_OFFSET))(this, value);
		}

		::System::Void add_resetData(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_RESETDATA_OFFSET))(this, value);
		}

		::System::Void remove_resetData(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_RESETDATA_OFFSET))(this, value);
		}

		::System::Boolean get_displayEditorUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYEDITORUI_OFFSET))(this);
		}

		::System::Void ToggleEditorUI(::System::Boolean open)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEEDITORUI_OFFSET))(this, open);
		}

		::System::Boolean get_displayRuntimeUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYRUNTIMEUI_OFFSET))(this);
		}

		::System::Void set_displayRuntimeUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYRUNTIMEUI_OFFSET))(this, value);
		}

		::System::Boolean get_displayPersistentRuntimeUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET))(this);
		}

		::System::Void set_displayPersistentRuntimeUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET))(this, value);
		}

		::System::Void RefreshEditor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REFRESHEDITOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_RESET_OFFSET))(this);
		}

		::System::Void ReDrawOnScreenDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REDRAWONSCREENDEBUG_OFFSET))(this);
		}

		::System::Void RegisterData(::UnityEngine::Rendering::IDebugData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::IDebugData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERDATA_OFFSET))(this, data);
		}

		::System::Void UnregisterData(::UnityEngine::Rendering::IDebugData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::IDebugData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UNREGISTERDATA_OFFSET))(this, data);
		}

		::System::Int32 GetState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETSTATE_OFFSET))(this);
		}

		::System::Void RegisterRootCanvas(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERROOTCANVAS_OFFSET))(this, root);
		}

		::System::Void ChangeSelection(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget, ::System::Boolean fromNext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_CHANGESELECTION_OFFSET))(this, widget, fromNext);
		}

		::System::Void CheckPersistentCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_CHECKPERSISTENTCANVAS_OFFSET))(this);
		}

		::System::Void TogglePersistent(::UnityEngine::Rendering::DebugUI_Widget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEPERSISTENT_OFFSET))(this, widget);
		}

		::System::Void OnPanelDirty(::UnityEngine::Rendering::DebugUI_Panel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ONPANELDIRTY_OFFSET))(this, panel);
		}

		::UnityEngine::Rendering::DebugUI_Panel* GetPanel(::System::String* displayName, ::System::Boolean createIfNull, ::System::Int32 groupIndex, ::System::Boolean overrideIfExist)
		{
			return ((::UnityEngine::Rendering::DebugUI_Panel*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETPANEL_OFFSET))(this, displayName, createIfNull, groupIndex, overrideIfExist);
		}

		::System::Void RemovePanel(::System::String* displayName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_OFFSET))(this, displayName);
		}

		::System::Void RemovePanel_1(::UnityEngine::Rendering::DebugUI_Panel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_1_OFFSET))(this, panel);
		}

		::UnityEngine::Rendering::DebugUI_Widget* GetItem(::System::String* queryPath)
		{
			return ((::UnityEngine::Rendering::DebugUI_Widget*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_OFFSET))(this, queryPath);
		}

		::UnityEngine::Rendering::DebugUI_Widget* GetItem_1(::System::String* queryPath, ::UnityEngine::Rendering::DebugUI_IContainer* container)
		{
			return ((::UnityEngine::Rendering::DebugUI_Widget*(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::DebugUI_IContainer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_1_OFFSET))(this, queryPath, container);
		}
	};
}

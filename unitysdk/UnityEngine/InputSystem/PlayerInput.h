#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_CallbackContext.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/PlayerNotifications.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUser.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUserChange.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputValue; }
namespace UnityEngine::InputSystem { class PlayerInput_ActionEvent; }
namespace UnityEngine::InputSystem { class PlayerInput_ControlsChangedEvent; }
namespace UnityEngine::InputSystem { class PlayerInput_DeviceLostEvent; }
namespace UnityEngine::InputSystem { class PlayerInput_DeviceRegainedEvent; }
namespace UnityEngine::InputSystem::UI { class InputSystemUIInputModule; }

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIVATEINPUT_OFFSET UNITYSDK_OFFSET(0x1D7B77D0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1D7B8210)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONCONTROLSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D7B8510)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONDEVICELOST_OFFSET UNITYSDK_OFFSET(0x1D7B8310)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONDEVICEREGAINED_OFFSET UNITYSDK_OFFSET(0x1D7B8410)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ASSIGNPLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1D7BBEC0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ASSIGNUSERANDDEVICES_OFFSET UNITYSDK_OFFSET(0x1D7B6990)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CACHEMESSAGENAMES_OFFSET UNITYSDK_OFFSET(0x1D7BAE00)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CLEARCACHES_OFFSET UNITYSDK_OFFSET(0x1D7B6980)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEACTIVATEINPUT_OFFSET UNITYSDK_OFFSET(0x1D7B90B0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEBUGLOGACTION_OFFSET UNITYSDK_OFFSET(0x1D7BD030)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DOINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1D7BA3A0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_FINDFIRSTPAIREDTODEVICE_OFFSET UNITYSDK_OFFSET(0x1D7B9DF0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GETPLAYERBYINDEX_OFFSET UNITYSDK_OFFSET(0x1D7B9CB0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1D7B7FA0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x1D7B5BF0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1D7B5BC0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ALL_OFFSET UNITYSDK_OFFSET(0x1D7B8C50)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1D7B8610)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CONTROLSCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1D7B81A0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CURRENTACTIONMAP_OFFSET UNITYSDK_OFFSET(0x1D7B7E70)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CURRENTCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x1D7B7990)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEFAULTACTIONMAP_OFFSET UNITYSDK_OFFSET(0x1D7B7F20)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEFAULTCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x1D7B7AB0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICELOSTEVENT_OFFSET UNITYSDK_OFFSET(0x1D7B80C0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICEREGAINEDEVENT_OFFSET UNITYSDK_OFFSET(0x1D7B8130)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x1D7B8A10)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_HASMISSINGREQUIREDDEVICES_OFFSET UNITYSDK_OFFSET(0x1D7B8B40)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_INPUTISACTIVE_OFFSET UNITYSDK_OFFSET(0x1D7B5BB0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ISSINGLEPLAYER_OFFSET UNITYSDK_OFFSET(0x1D7B8CD0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_NEVERAUTOSWITCHCONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0x1D7B7AD0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_NOTIFICATIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1D7B7F40)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_PLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1D7B5BD0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_SPLITSCREENINDEX_OFFSET UNITYSDK_OFFSET(0x1D7B5BE0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_UIINPUTMODULE_OFFSET UNITYSDK_OFFSET(0x1D7B8630)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_USER_OFFSET UNITYSDK_OFFSET(0x1D7B8A00)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLECONTROLSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D7BC980)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLEDEVICELOST_OFFSET UNITYSDK_OFFSET(0x1D7BD090)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLEDEVICEREGAINED_OFFSET UNITYSDK_OFFSET(0x1D7BD160)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HAVEBINDINGFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7BBA70)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INITIALIZEACTIONS_OFFSET UNITYSDK_OFFSET(0x1D7B5C40)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTALLONACTIONTRIGGEREDHOOK_OFFSET UNITYSDK_OFFSET(0x1D7BABF0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x1D7BA980)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1D7BA180)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1D7BB550)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x1D7BE1B0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D7BCAC0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D7BC140)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONPREFILTERUNPAIREDDEVICEUSED_OFFSET UNITYSDK_OFFSET(0x1D7BD410)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONUNPAIREDDEVICEUSED_OFFSET UNITYSDK_OFFSET(0x1D7BD640)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONUSERCHANGE_OFFSET UNITYSDK_OFFSET(0x1D7BD230)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_PASSIVATEINPUT_OFFSET UNITYSDK_OFFSET(0x1D7B90F0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1D7B8290)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONCONTROLSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D7B8590)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONDEVICELOST_OFFSET UNITYSDK_OFFSET(0x1D7B8390)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONDEVICEREGAINED_OFFSET UNITYSDK_OFFSET(0x1D7B8490)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_ACTIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1D7B8040)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x1D7B6490)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1D7B8620)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_CURRENTACTIONMAP_OFFSET UNITYSDK_OFFSET(0x1D7B7E80)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_DEFAULTACTIONMAP_OFFSET UNITYSDK_OFFSET(0x1D7B7F30)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_DEFAULTCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x1D7B7AC0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_NEVERAUTOSWITCHCONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0x1D7B7AE0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_NOTIFICATIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1D7B7F50)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_UIINPUTMODULE_OFFSET UNITYSDK_OFFSET(0x1D7B8640)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STARTLISTENINGFORDEVICECHANGES_OFFSET UNITYSDK_OFFSET(0x1D7BC8E0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STARTLISTENINGFORUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x1D7B7BF0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STOPLISTENINGFORDEVICECHANGES_OFFSET UNITYSDK_OFFSET(0x1D7BCA50)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STOPLISTENINGFORUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x1D7B7DA0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCONTROLSCHEMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7B93E0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTACTIONMAP_OFFSET UNITYSDK_OFFSET(0x1D7B8E40)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTCONTROLSCHEME_1_OFFSET UNITYSDK_OFFSET(0x1D7B9BC0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x1D7B9130)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_TRYTOACTIVATECONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x1D7BB720)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNASSIGNUSERANDDEVICES_OFFSET UNITYSDK_OFFSET(0x1D7BBC30)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNINITIALIZEACTIONS_OFFSET UNITYSDK_OFFSET(0x1D7B6660)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNINSTALLONACTIONTRIGGEREDHOOK_OFFSET UNITYSDK_OFFSET(0x1D7BB370)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7BE3E0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BE380)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInput_TypeDefinitionIndex = 32321;

	class PlayerInput : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>** StaticGet_s_UserChangeDelegate()
		{
			return (::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerInput_TypeDefinitionIndex)->GetStaticField(0x27DA0);
		}
		static ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>** StaticGet_s_InitPairWithDevices()
		{
			return (::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerInput_TypeDefinitionIndex)->GetStaticField(0x27DA8);
		}
		static ::Il2CppArray<::UnityEngine::InputSystem::PlayerInput*>** StaticGet_s_AllActivePlayers()
		{
			return (::Il2CppArray<::UnityEngine::InputSystem::PlayerInput*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerInput_TypeDefinitionIndex)->GetStaticField(0x27DB0);
		}
		static ::System::String** StaticGet_s_InitControlScheme()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerInput_TypeDefinitionIndex)->GetStaticField(0x27DB8);
		}
		static ::System::Int32* StaticGet_s_AllActivePlayersCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlayerInput_TypeDefinitionIndex)->GetStaticField(0x7DE0);
		}
		static ::System::Int32* StaticGet_s_InitPairWithDevicesCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlayerInput_TypeDefinitionIndex)->GetStaticField(0x7DE4);
		}
		static ::System::Int32* StaticGet_s_InitSplitScreenIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlayerInput_TypeDefinitionIndex)->GetStaticField(0x7DE8);
		}
		static ::System::Int32* StaticGet_s_InitPlayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlayerInput_TypeDefinitionIndex)->GetStaticField(0x7DEC);
		}
		static ::System::Boolean* StaticGet_s_DestroyIfDeviceSetupUnsuccessful()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlayerInput_TypeDefinitionIndex)->GetStaticField(0x7DF0);
		}
		// static const ::System::String* DeviceLostMessage; // 0x0
		// static const ::System::String* DeviceRegainedMessage; // 0x0
		// static const ::System::String* ControlsChangedMessage; // 0x0
		::UnityEngine::InputSystem::InputActionAsset* m_Actions; // 0x18
		::UnityEngine::InputSystem::PlayerNotifications m_NotificationBehavior; // 0x20
		::UnityEngine::InputSystem::UI::InputSystemUIInputModule* m_UIInputModule; // 0x28
		::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent* m_DeviceLostEvent; // 0x30
		::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent* m_DeviceRegainedEvent; // 0x38
		::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent* m_ControlsChangedEvent; // 0x40
		::Il2CppArray<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>* m_ActionEvents; // 0x48
		::System::Boolean m_NeverAutoSwitchControlSchemes; // 0x50
		::System::String* m_DefaultControlScheme; // 0x58
		::System::String* m_DefaultActionMap; // 0x60
		::System::Int32 m_SplitScreenIndex; // 0x68
		::UnityEngine::Camera* m_Camera; // 0x70
		::UnityEngine::InputSystem::InputValue* m_InputValueObject; // 0x78
		::UnityEngine::InputSystem::InputActionMap* m_CurrentActionMap; // 0x80
		::System::Int32 m_PlayerIndex; // 0x88
		::System::Boolean m_InputActive; // 0x8C
		::System::Boolean m_Enabled; // 0x8D
		::System::Boolean m_ActionsInitialized; // 0x8E
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* m_ActionMessageNames; // 0x90
		::UnityEngine::InputSystem::Users::InputUser m_InputUser; // 0x98
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_ActionTriggeredDelegate; // 0xA0
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> m_DeviceLostCallbacks; // 0xA8
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> m_DeviceRegainedCallbacks; // 0xF8
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> m_ControlsChangedCallbacks; // 0x148
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> m_ActionTriggeredCallbacks; // 0x198
		::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_UnpairedDeviceUsedDelegate; // 0x1E8
		::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Boolean>* m_PreFilterUnpairedDeviceUsedDelegate; // 0x1F0
		::System::Boolean m_OnUnpairedDeviceUsedHooked; // 0x1F8
		::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* m_DeviceChangeDelegate; // 0x200
		::System::Boolean m_OnDeviceChangeHooked; // 0x208

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT__CCTOR_OFFSET))();
		}

		::System::Boolean get_inputIsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_INPUTISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIVE_OFFSET))(this);
		}

		::System::Int32 get_playerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_PLAYERINDEX_OFFSET))(this);
		}

		::System::Int32 get_splitScreenIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_SPLITSCREENINDEX_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionAsset* get_actions()
		{
			return ((::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIONS_OFFSET))(this);
		}

		::System::Void set_actions(::UnityEngine::InputSystem::InputActionAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_ACTIONS_OFFSET))(this, value);
		}

		::System::String* get_currentControlScheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CURRENTCONTROLSCHEME_OFFSET))(this);
		}

		::System::String* get_defaultControlScheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEFAULTCONTROLSCHEME_OFFSET))(this);
		}

		::System::Void set_defaultControlScheme(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_DEFAULTCONTROLSCHEME_OFFSET))(this, value);
		}

		::System::Boolean get_neverAutoSwitchControlSchemes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_NEVERAUTOSWITCHCONTROLSCHEMES_OFFSET))(this);
		}

		::System::Void set_neverAutoSwitchControlSchemes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_NEVERAUTOSWITCHCONTROLSCHEMES_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionMap* get_currentActionMap()
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CURRENTACTIONMAP_OFFSET))(this);
		}

		::System::Void set_currentActionMap(::UnityEngine::InputSystem::InputActionMap* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_CURRENTACTIONMAP_OFFSET))(this, value);
		}

		::System::String* get_defaultActionMap()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEFAULTACTIONMAP_OFFSET))(this);
		}

		::System::Void set_defaultActionMap(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_DEFAULTACTIONMAP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::PlayerNotifications get_notificationBehavior()
		{
			return ((::UnityEngine::InputSystem::PlayerNotifications(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_NOTIFICATIONBEHAVIOR_OFFSET))(this);
		}

		::System::Void set_notificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::PlayerNotifications))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_NOTIFICATIONBEHAVIOR_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput_ActionEvent*> get_actionEvents()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIONEVENTS_OFFSET))(this);
		}

		::System::Void set_actionEvents(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput_ActionEvent*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_ACTIONEVENTS_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent* get_deviceLostEvent()
		{
			return ((::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICELOSTEVENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent* get_deviceRegainedEvent()
		{
			return ((::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICEREGAINEDEVENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent* get_controlsChangedEvent()
		{
			return ((::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CONTROLSCHANGEDEVENT_OFFSET))(this);
		}

		::System::Void add_onActionTriggered(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONACTIONTRIGGERED_OFFSET))(this, value);
		}

		::System::Void remove_onActionTriggered(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONACTIONTRIGGERED_OFFSET))(this, value);
		}

		::System::Void add_onDeviceLost(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONDEVICELOST_OFFSET))(this, value);
		}

		::System::Void remove_onDeviceLost(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONDEVICELOST_OFFSET))(this, value);
		}

		::System::Void add_onDeviceRegained(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONDEVICEREGAINED_OFFSET))(this, value);
		}

		::System::Void remove_onDeviceRegained(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONDEVICEREGAINED_OFFSET))(this, value);
		}

		::System::Void add_onControlsChanged(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONCONTROLSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_onControlsChanged(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONCONTROLSCHANGED_OFFSET))(this, value);
		}

		::UnityEngine::Camera* get_camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CAMERA_OFFSET))(this);
		}

		::System::Void set_camera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_CAMERA_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::UI::InputSystemUIInputModule* get_uiInputModule()
		{
			return ((::UnityEngine::InputSystem::UI::InputSystemUIInputModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_UIINPUTMODULE_OFFSET))(this);
		}

		::System::Void set_uiInputModule(::UnityEngine::InputSystem::UI::InputSystemUIInputModule* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::InputSystemUIInputModule*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_UIINPUTMODULE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Users::InputUser get_user()
		{
			return ((::UnityEngine::InputSystem::Users::InputUser(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_USER_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_devices()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICES_OFFSET))(this);
		}

		::System::Boolean get_hasMissingRequiredDevices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_HASMISSINGREQUIREDDEVICES_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput*> get_all()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ALL_OFFSET))();
		}

		static ::System::Boolean get_isSinglePlayer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ISSINGLEPLAYER_OFFSET))();
		}

		::System::Void ActivateInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIVATEINPUT_OFFSET))(this);
		}

		::System::Void DeactivateInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEACTIVATEINPUT_OFFSET))(this);
		}

		::System::Void PassivateInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_PASSIVATEINPUT_OFFSET))(this);
		}

		::System::Boolean SwitchCurrentControlScheme(::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTCONTROLSCHEME_OFFSET))(this, devices);
		}

		::System::Void SwitchCurrentControlScheme_1(::System::String* controlScheme, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTCONTROLSCHEME_1_OFFSET))(this, controlScheme, devices);
		}

		::System::Void SwitchCurrentActionMap(::System::String* mapNameOrId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTACTIONMAP_OFFSET))(this, mapNameOrId);
		}

		static ::UnityEngine::InputSystem::PlayerInput* GetPlayerByIndex(::System::Int32 playerIndex)
		{
			return ((::UnityEngine::InputSystem::PlayerInput*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GETPLAYERBYINDEX_OFFSET))(playerIndex);
		}

		static ::UnityEngine::InputSystem::PlayerInput* FindFirstPairedToDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::UnityEngine::InputSystem::PlayerInput*(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_FINDFIRSTPAIREDTODEVICE_OFFSET))(device);
		}

		static ::UnityEngine::InputSystem::PlayerInput* Instantiate(::UnityEngine::GameObject* prefab, ::System::Int32 playerIndex, ::System::String* controlScheme, ::System::Int32 splitScreenIndex, ::UnityEngine::InputSystem::InputDevice* pairWithDevice)
		{
			return ((::UnityEngine::InputSystem::PlayerInput*(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::String*, ::System::Int32, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTANTIATE_OFFSET))(prefab, playerIndex, controlScheme, splitScreenIndex, pairWithDevice);
		}

		static ::UnityEngine::InputSystem::PlayerInput* Instantiate_1(::UnityEngine::GameObject* prefab, ::System::Int32 playerIndex, ::System::String* controlScheme, ::System::Int32 splitScreenIndex, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* pairWithDevices)
		{
			return ((::UnityEngine::InputSystem::PlayerInput*(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTANTIATE_1_OFFSET))(prefab, playerIndex, controlScheme, splitScreenIndex, pairWithDevices);
		}

		static ::UnityEngine::InputSystem::PlayerInput* DoInstantiate(::UnityEngine::GameObject* prefab)
		{
			return ((::UnityEngine::InputSystem::PlayerInput*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DOINSTANTIATE_OFFSET))(prefab);
		}

		::System::Void InitializeActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INITIALIZEACTIONS_OFFSET))(this);
		}

		::System::Void UninitializeActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNINITIALIZEACTIONS_OFFSET))(this);
		}

		::System::Void InstallOnActionTriggeredHook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTALLONACTIONTRIGGEREDHOOK_OFFSET))(this);
		}

		::System::Void UninstallOnActionTriggeredHook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNINSTALLONACTIONTRIGGEREDHOOK_OFFSET))(this);
		}

		::System::Void OnActionTriggered(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONACTIONTRIGGERED_OFFSET))(this, context);
		}

		::System::Void CacheMessageNames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CACHEMESSAGENAMES_OFFSET))(this);
		}

		::System::Void ClearCaches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CLEARCACHES_OFFSET))(this);
		}

		::System::Void AssignUserAndDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ASSIGNUSERANDDEVICES_OFFSET))(this);
		}

		::System::Boolean HaveBindingForDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HAVEBINDINGFORDEVICE_OFFSET))(this, device);
		}

		::System::Void UnassignUserAndDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNASSIGNUSERANDDEVICES_OFFSET))(this);
		}

		::System::Boolean TryToActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme controlScheme)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_TRYTOACTIVATECONTROLSCHEME_OFFSET))(this, controlScheme);
		}

		::System::Void AssignPlayerIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ASSIGNPLAYERINDEX_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONENABLE_OFFSET))(this);
		}

		::System::Void StartListeningForUnpairedDeviceActivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STARTLISTENINGFORUNPAIREDDEVICEACTIVITY_OFFSET))(this);
		}

		::System::Void StopListeningForUnpairedDeviceActivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STOPLISTENINGFORUNPAIREDDEVICEACTIVITY_OFFSET))(this);
		}

		::System::Void StartListeningForDeviceChanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STARTLISTENINGFORDEVICECHANGES_OFFSET))(this);
		}

		::System::Void StopListeningForDeviceChanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STOPLISTENINGFORDEVICECHANGES_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONDISABLE_OFFSET))(this);
		}

		::System::Void DebugLogAction(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEBUGLOGACTION_OFFSET))(this, context);
		}

		::System::Void HandleDeviceLost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLEDEVICELOST_OFFSET))(this);
		}

		::System::Void HandleDeviceRegained()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLEDEVICEREGAINED_OFFSET))(this);
		}

		::System::Void HandleControlsChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLECONTROLSCHANGED_OFFSET))(this);
		}

		static ::System::Void OnUserChange(::UnityEngine::InputSystem::Users::InputUser user, ::UnityEngine::InputSystem::Users::InputUserChange change, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONUSERCHANGE_OFFSET))(user, change, device);
		}

		static ::System::Boolean OnPreFilterUnpairedDeviceUsed(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONPREFILTERUNPAIREDDEVICEUSED_OFFSET))(device, eventPtr);
		}

		::System::Void OnUnpairedDeviceUsed(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONUNPAIREDDEVICEUSED_OFFSET))(this, control, eventPtr);
		}

		::System::Void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONDEVICECHANGE_OFFSET))(this, device, change);
		}

		::System::Void SwitchControlSchemeInternal(::UnityEngine::InputSystem::InputControlScheme& controlScheme, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControlScheme&, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCONTROLSCHEMEINTERNAL_OFFSET))(this, controlScheme, devices);
		}
	};
}

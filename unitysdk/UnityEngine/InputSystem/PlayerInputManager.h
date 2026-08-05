#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionProperty.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_CallbackContext.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/PlayerJoinBehavior.h"
#include "unitysdk/UnityEngine/InputSystem/PlayerNotifications.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class PlayerInput; }
namespace UnityEngine::InputSystem { class PlayerInputManager_PlayerJoinedEvent; }
namespace UnityEngine::InputSystem { class PlayerInputManager_PlayerLeftEvent; }

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ADD_ONPLAYERJOINED_OFFSET UNITYSDK_OFFSET(0x1E0E6600)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ADD_ONPLAYERLEFT_OFFSET UNITYSDK_OFFSET(0x1E0E6700)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_CHECKIFPLAYERCANJOIN_OFFSET UNITYSDK_OFFSET(0x1E0E68C0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_DISABLEJOINING_OFFSET UNITYSDK_OFFSET(0x1E0E6110)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ENABLEJOINING_OFFSET UNITYSDK_OFFSET(0x1E0E6210)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_FIXEDNUMBEROFSPLITSCREENS_OFFSET UNITYSDK_OFFSET(0x1E0E6020)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E0E6820)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOINACTION_OFFSET UNITYSDK_OFFSET(0x1E0E63E0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOINBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1E0E60C0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOININGENABLED_OFFSET UNITYSDK_OFFSET(0x1E0E60B0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MAINTAINASPECTRATIOINSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x1E0E6010)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MAXPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E0E60A0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MESSAGES_OFFSET UNITYSDK_OFFSET(0x1E0E70F0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_NOTIFICATIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1E0E6500)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E0E6040)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERJOINEDEVENT_OFFSET UNITYSDK_OFFSET(0x1E0E6520)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERLEFTEVENT_OFFSET UNITYSDK_OFFSET(0x1E0E6590)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERPREFAB_OFFSET UNITYSDK_OFFSET(0x1E0E6800)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_SPLITSCREENAREA_OFFSET UNITYSDK_OFFSET(0x1E0E6030)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_SPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x1E0E5670)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ISDEVICEUSABLEWITHPLAYERACTIONS_OFFSET UNITYSDK_OFFSET(0x1E0E7280)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMACTIONIFNOTALREADYJOINED_OFFSET UNITYSDK_OFFSET(0x1E0E6E20)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMACTION_OFFSET UNITYSDK_OFFSET(0x1E0E6C90)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMUI_OFFSET UNITYSDK_OFFSET(0x1E0E6850)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYER_1_OFFSET UNITYSDK_OFFSET(0x1E0E7060)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYER_OFFSET UNITYSDK_OFFSET(0x1E0E6D90)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_NOTIFYPLAYERJOINED_OFFSET UNITYSDK_OFFSET(0x1E0E7F10)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_NOTIFYPLAYERLEFT_OFFSET UNITYSDK_OFFSET(0x1E0E8080)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E0E7FF0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E0E78A0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONUNPAIREDDEVICEUSED_OFFSET UNITYSDK_OFFSET(0x1E0E7180)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_REMOVE_ONPLAYERJOINED_OFFSET UNITYSDK_OFFSET(0x1E0E6680)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_REMOVE_ONPLAYERLEFT_OFFSET UNITYSDK_OFFSET(0x1E0E6780)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E0E6830)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_JOINACTION_OFFSET UNITYSDK_OFFSET(0x1E0E6400)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_JOINBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1E0E60D0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_NOTIFICATIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1E0E6510)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_PLAYERPREFAB_OFFSET UNITYSDK_OFFSET(0x1E0E6810)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_SPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x1E0E5680)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_UPDATESPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x1E0E5960)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_VALIDATEINPUTACTIONASSET_OFFSET UNITYSDK_OFFSET(0x1E0E6840)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8160)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInputManager_TypeDefinitionIndex = 32326;

	class PlayerInputManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::InputSystem::PlayerInputManager** StaticGet__instance_k__BackingField()
		{
			return (::UnityEngine::InputSystem::PlayerInputManager**)Il2CppClass::FromTypeDefinitionIndex(PlayerInputManager_TypeDefinitionIndex)->GetStaticField(0x27DC0);
		}
		// static const ::System::String* PlayerJoinedMessage; // 0x0
		// static const ::System::String* PlayerLeftMessage; // 0x0
		::UnityEngine::InputSystem::PlayerNotifications m_NotificationBehavior; // 0x18
		::System::Int32 m_MaxPlayerCount; // 0x1C
		::System::Boolean m_AllowJoining; // 0x20
		::UnityEngine::InputSystem::PlayerJoinBehavior m_JoinBehavior; // 0x24
		::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* m_PlayerJoinedEvent; // 0x28
		::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* m_PlayerLeftEvent; // 0x30
		::UnityEngine::InputSystem::InputActionProperty m_JoinAction; // 0x38
		::UnityEngine::GameObject* m_PlayerPrefab; // 0x50
		::System::Boolean m_SplitScreen; // 0x58
		::System::Boolean m_MaintainAspectRatioInSplitScreen; // 0x59
		::System::Int32 m_FixedNumberOfSplitScreens; // 0x5C
		::UnityEngine::Rect m_SplitScreenRect; // 0x60
		::System::Boolean m_JoinActionDelegateHooked; // 0x70
		::System::Boolean m_UnpairedDeviceUsedDelegateHooked; // 0x71
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_JoinActionDelegate; // 0x78
		::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_UnpairedDeviceUsedDelegate; // 0x80
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> m_PlayerJoinedCallbacks; // 0x88
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> m_PlayerLeftCallbacks; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_splitScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_SPLITSCREEN_OFFSET))(this);
		}

		::System::Void set_splitScreen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_SPLITSCREEN_OFFSET))(this, value);
		}

		::System::Boolean get_maintainAspectRatioInSplitScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MAINTAINASPECTRATIOINSPLITSCREEN_OFFSET))(this);
		}

		::System::Int32 get_fixedNumberOfSplitScreens()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_FIXEDNUMBEROFSPLITSCREENS_OFFSET))(this);
		}

		::UnityEngine::Rect get_splitScreenArea()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_SPLITSCREENAREA_OFFSET))(this);
		}

		::System::Int32 get_playerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_maxPlayerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MAXPLAYERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_joiningEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOININGENABLED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::PlayerJoinBehavior get_joinBehavior()
		{
			return ((::UnityEngine::InputSystem::PlayerJoinBehavior(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOINBEHAVIOR_OFFSET))(this);
		}

		::System::Void set_joinBehavior(::UnityEngine::InputSystem::PlayerJoinBehavior value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::PlayerJoinBehavior))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_JOINBEHAVIOR_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionProperty get_joinAction()
		{
			return ((::UnityEngine::InputSystem::InputActionProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOINACTION_OFFSET))(this);
		}

		::System::Void set_joinAction(::UnityEngine::InputSystem::InputActionProperty value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_JOINACTION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::PlayerNotifications get_notificationBehavior()
		{
			return ((::UnityEngine::InputSystem::PlayerNotifications(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_NOTIFICATIONBEHAVIOR_OFFSET))(this);
		}

		::System::Void set_notificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::PlayerNotifications))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_NOTIFICATIONBEHAVIOR_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* get_playerJoinedEvent()
		{
			return ((::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERJOINEDEVENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* get_playerLeftEvent()
		{
			return ((::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERLEFTEVENT_OFFSET))(this);
		}

		::System::Void add_onPlayerJoined(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ADD_ONPLAYERJOINED_OFFSET))(this, value);
		}

		::System::Void remove_onPlayerJoined(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_REMOVE_ONPLAYERJOINED_OFFSET))(this, value);
		}

		::System::Void add_onPlayerLeft(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ADD_ONPLAYERLEFT_OFFSET))(this, value);
		}

		::System::Void remove_onPlayerLeft(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_REMOVE_ONPLAYERLEFT_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_playerPrefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERPREFAB_OFFSET))(this);
		}

		::System::Void set_playerPrefab(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_PLAYERPREFAB_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::PlayerInputManager* get_instance()
		{
			return ((::UnityEngine::InputSystem::PlayerInputManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_instance(::UnityEngine::InputSystem::PlayerInputManager* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::PlayerInputManager*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void EnableJoining()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ENABLEJOINING_OFFSET))(this);
		}

		::System::Void DisableJoining()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_DISABLEJOINING_OFFSET))(this);
		}

		::System::Void JoinPlayerFromUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMUI_OFFSET))(this);
		}

		::System::Void JoinPlayerFromAction(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMACTION_OFFSET))(this, context);
		}

		::System::Void JoinPlayerFromActionIfNotAlreadyJoined(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMACTIONIFNOTALREADYJOINED_OFFSET))(this, context);
		}

		::UnityEngine::InputSystem::PlayerInput* JoinPlayer(::System::Int32 playerIndex, ::System::Int32 splitScreenIndex, ::System::String* controlScheme, ::UnityEngine::InputSystem::InputDevice* pairWithDevice)
		{
			return ((::UnityEngine::InputSystem::PlayerInput*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYER_OFFSET))(this, playerIndex, splitScreenIndex, controlScheme, pairWithDevice);
		}

		::UnityEngine::InputSystem::PlayerInput* JoinPlayer_1(::System::Int32 playerIndex, ::System::Int32 splitScreenIndex, ::System::String* controlScheme, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* pairWithDevices)
		{
			return ((::UnityEngine::InputSystem::PlayerInput*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYER_1_OFFSET))(this, playerIndex, splitScreenIndex, controlScheme, pairWithDevices);
		}

		static ::Il2CppArray<::System::String*>* get_messages()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MESSAGES_OFFSET))();
		}

		::System::Boolean CheckIfPlayerCanJoin(::System::Int32 playerIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_CHECKIFPLAYERCANJOIN_OFFSET))(this, playerIndex);
		}

		::System::Void OnUnpairedDeviceUsed(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONUNPAIREDDEVICEUSED_OFFSET))(this, control, eventPtr);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateSplitScreen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_UPDATESPLITSCREEN_OFFSET))(this);
		}

		::System::Boolean IsDeviceUsableWithPlayerActions(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ISDEVICEUSABLEWITHPLAYERACTIONS_OFFSET))(this, device);
		}

		::System::Void ValidateInputActionAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_VALIDATEINPUTACTIONASSET_OFFSET))(this);
		}

		::System::Void NotifyPlayerJoined(::UnityEngine::InputSystem::PlayerInput* player)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::PlayerInput*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_NOTIFYPLAYERJOINED_OFFSET))(this, player);
		}

		::System::Void NotifyPlayerLeft(::UnityEngine::InputSystem::PlayerInput* player)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::PlayerInput*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_NOTIFYPLAYERLEFT_OFFSET))(this, player);
		}
	};
}

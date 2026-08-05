#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/EventSystem.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_GET_PLAYERROOT_OFFSET UNITYSDK_OFFSET(0x1F12F670)
#define UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_INITIALIZECANVASGROUP_OFFSET UNITYSDK_OFFSET(0x1F12F690)
#define UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F12F9D0)
#define UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F12F960)
#define UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_SET_PLAYERROOT_OFFSET UNITYSDK_OFFSET(0x1F12F680)
#define UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_UPDATEIMPL_OFFSET UNITYSDK_OFFSET(0x1F12FB80)
#define UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F12FEB0)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int MultiplayerEventSystem_TypeDefinitionIndex = 32389;

	class MultiplayerEventSystem : public ::UnityEngine::EventSystems::EventSystem
	{
	public:
		static ::Il2CppArray<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>** StaticGet_s_MultiplayerEventSystems()
		{
			return (::Il2CppArray<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>**)Il2CppClass::FromTypeDefinitionIndex(MultiplayerEventSystem_TypeDefinitionIndex)->GetStaticField(0x27940);
		}
		static ::System::Int32* StaticGet_s_MultiplayerEventSystemCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MultiplayerEventSystem_TypeDefinitionIndex)->GetStaticField(0x7D30);
		}
		::UnityEngine::GameObject* m_PlayerRoot; // 0x58
		::UnityEngine::CanvasGroup* m_CanvasGroup; // 0x60
		::System::Boolean m_CanvasGroupWasAddedByUs; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_playerRoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_GET_PLAYERROOT_OFFSET))(this);
		}

		::System::Void set_playerRoot(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_SET_PLAYERROOT_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_ONENABLE_OFFSET))(this);
		}

		::System::Void InitializeCanvasGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_INITIALIZECANVASGROUP_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_MULTIPLAYEREVENTSYSTEM_UPDATEIMPL_OFFSET))(this);
		}
	};
}

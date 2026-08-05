#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdate_SerializedState.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdate_UpdateStepCount.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_GETUPDATETYPEFORPLAYER_OFFSET UNITYSDK_OFFSET(0x1D7A6940)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ISPLAYERUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7B2AE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7B0FD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7B2A70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_RESTORE_OFFSET UNITYSDK_OFFSET(0x1D7B0420)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_SAVE_OFFSET UNITYSDK_OFFSET(0x1D7B5AD0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputUpdate_TypeDefinitionIndex = 32554;

	class InputUpdate : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_s_UpdateStepCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InputUpdate_TypeDefinitionIndex)->GetStaticField(0x7CD0);
		}
		static ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount* StaticGet_s_PlayerUpdateStepCount()
		{
			return (::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount*)Il2CppClass::FromTypeDefinitionIndex(InputUpdate_TypeDefinitionIndex)->GetStaticField(0x7CD4);
		}
		static ::UnityEngine::InputSystem::LowLevel::InputUpdateType* StaticGet_s_LatestUpdateType()
		{
			return (::UnityEngine::InputSystem::LowLevel::InputUpdateType*)Il2CppClass::FromTypeDefinitionIndex(InputUpdate_TypeDefinitionIndex)->GetStaticField(0x7CDC);
		}

		static ::System::Void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ONBEFOREUPDATE_OFFSET))(type);
		}

		static ::System::Void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ONUPDATE_OFFSET))(type);
		}

		static ::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState Save()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_SAVE_OFFSET))();
		}

		static ::System::Void Restore(::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState state)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_RESTORE_OFFSET))(state);
		}

		static ::UnityEngine::InputSystem::LowLevel::InputUpdateType GetUpdateTypeForPlayer(::UnityEngine::InputSystem::LowLevel::InputUpdateType mask)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputUpdateType(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_GETUPDATETYPEFORPLAYER_OFFSET))(mask);
		}

		static ::System::Boolean IsPlayerUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ISPLAYERUPDATE_OFFSET))(updateType);
		}
	};
}

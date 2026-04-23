#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LowLevel/PlayerLoopSystem.h"
#include "unitysdk/UnityEngine/LowLevel/PlayerLoopSystemInternal.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOPINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A44E2D0)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOP_OFFSET UNITYSDK_OFFSET(0x1A44E280)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_INTERNALTOPLAYERLOOPSYSTEM_OFFSET UNITYSDK_OFFSET(0x1A44E2E0)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_PLAYERLOOPSYSTEMTOINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A44E550)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOPINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A44E6F0)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOP_OFFSET UNITYSDK_OFFSET(0x1A44E490)

namespace UnityEngine::LowLevel
{
	inline static constexpr unsigned int PlayerLoop_TypeDefinitionIndex = 4349;

	class PlayerLoop : public ::System::Object
	{
	public:
		static ::UnityEngine::LowLevel::PlayerLoopSystem GetCurrentPlayerLoop()
		{
			return ((::UnityEngine::LowLevel::PlayerLoopSystem(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOP_OFFSET))();
		}

		static ::System::Void SetPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem loop)
		{
			return ((::System::Void(*)(::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOP_OFFSET))(loop);
		}

		static ::System::Int32 PlayerLoopSystemToInternal(::UnityEngine::LowLevel::PlayerLoopSystem sys, ::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*& internalSys)
		{
			return ((::System::Int32(*)(::UnityEngine::LowLevel::PlayerLoopSystem, ::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_PLAYERLOOPSYSTEMTOINTERNAL_OFFSET))(sys, internalSys);
		}

		static ::UnityEngine::LowLevel::PlayerLoopSystem InternalToPlayerLoopSystem(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>* internalSys, ::System::Int32& offset)
		{
			return ((::UnityEngine::LowLevel::PlayerLoopSystem(*)(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_INTERNALTOPLAYERLOOPSYSTEM_OFFSET))(internalSys, offset);
		}

		static ::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>* GetCurrentPlayerLoopInternal()
		{
			return ((::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOPINTERNAL_OFFSET))();
		}

		static ::System::Void SetPlayerLoopInternal(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>* loop)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOPINTERNAL_OFFSET))(loop);
		}
	};
}

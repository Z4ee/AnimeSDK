#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LowLevel/PlayerLoopSystem.h"
#include "unitysdk/UnityEngine/LowLevel/PlayerLoopSystemInternal.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOPINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CCC8450)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOP_OFFSET UNITYSDK_OFFSET(0x1CCC8400)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_INTERNALTOPLAYERLOOPSYSTEM_OFFSET UNITYSDK_OFFSET(0x1CCC8460)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_PLAYERLOOPSYSTEMTOINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CCC8780)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOPINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CCC8970)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOP_OFFSET UNITYSDK_OFFSET(0x1CCC8690)

namespace UnityEngine::LowLevel
{
	inline static constexpr unsigned int PlayerLoop_TypeDefinitionIndex = 4528;

	class PlayerLoop : public ::System::Object
	{
	public:
		static ::UnityEngine::LowLevel::PlayerLoopSystem GetCurrentPlayerLoop()
		{
			return ((::UnityEngine::LowLevel::PlayerLoopSystem(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOP_OFFSET))();
		}

		static ::System::Void SetPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem a1)
		{
			return ((::System::Void(*)(::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOP_OFFSET))(a1);
		}

		static ::System::Int32 PlayerLoopSystemToInternal(::UnityEngine::LowLevel::PlayerLoopSystem a1, ::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*& a2)
		{
			return ((::System::Int32(*)(::UnityEngine::LowLevel::PlayerLoopSystem, ::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_PLAYERLOOPSYSTEMTOINTERNAL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::LowLevel::PlayerLoopSystem InternalToPlayerLoopSystem(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>* a1, ::System::Int32& a2)
		{
			return ((::UnityEngine::LowLevel::PlayerLoopSystem(*)(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_INTERNALTOPLAYERLOOPSYSTEM_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>* GetCurrentPlayerLoopInternal()
		{
			return ((::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOPINTERNAL_OFFSET))();
		}

		static ::System::Void SetPlayerLoopInternal(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOPINTERNAL_OFFSET))(a1);
		}
	};
}

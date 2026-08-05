#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS4SUPPORT_INITIALIZATION_OFFSET UNITYSDK_OFFSET(0x1F165970)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS4SUPPORT_INITIALIZEINPLAYER_OFFSET UNITYSDK_OFFSET(0x1F1657E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS4SUPPORT_RUNINITIALIZEINPLAYER_OFFSET UNITYSDK_OFFSET(0x1F165860)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS4SUPPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F165710)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int PS4Support_TypeDefinitionIndex = 39730;

	class PS4Support : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_isInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PS4Support_TypeDefinitionIndex)->GetStaticField(0x9500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS4SUPPORT__CCTOR_OFFSET))();
		}

		static ::System::Void RunInitializeInPlayer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS4SUPPORT_RUNINITIALIZEINPLAYER_OFFSET))();
		}

		static ::System::Void InitializeInPlayer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS4SUPPORT_INITIALIZEINPLAYER_OFFSET))();
		}

		static ::System::Void Initialization()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS4SUPPORT_INITIALIZATION_OFFSET))();
		}
	};
}

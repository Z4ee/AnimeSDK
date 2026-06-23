#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5SUPPORT_INITIALIZATION_OFFSET UNITYSDK_OFFSET(0x1DCFCBE0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5SUPPORT_INITIALIZEINPLAYER_OFFSET UNITYSDK_OFFSET(0x1DCFCA50)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5SUPPORT_RUNINITIALIZEINPLAYER_OFFSET UNITYSDK_OFFSET(0x1DCFCAD0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5SUPPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCFC980)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int PS5Support_TypeDefinitionIndex = 39083;

	class PS5Support : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_isInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PS5Support_TypeDefinitionIndex)->GetStaticField(0x9420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5SUPPORT__CCTOR_OFFSET))();
		}

		static ::System::Void RunInitializeInPlayer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5SUPPORT_RUNINITIALIZEINPLAYER_OFFSET))();
		}

		static ::System::Void InitializeInPlayer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5SUPPORT_INITIALIZEINPLAYER_OFFSET))();
		}

		static ::System::Void Initialization()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_PS5SUPPORT_INITIALIZATION_OFFSET))();
		}
	};
}

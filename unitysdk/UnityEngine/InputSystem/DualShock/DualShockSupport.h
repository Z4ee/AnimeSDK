#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKSUPPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B34D0B0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualShockSupport_TypeDefinitionIndex = 29170;

	class DualShockSupport : public ::System::Object
	{
	public:
		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKSUPPORT_INITIALIZE_OFFSET))();
		}
	};
}

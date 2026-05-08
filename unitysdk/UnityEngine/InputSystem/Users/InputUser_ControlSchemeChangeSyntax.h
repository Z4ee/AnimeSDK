#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_CONTROLSCHEMECHANGESYNTAX_ANDPAIRREMAININGDEVICES_OFFSET UNITYSDK_OFFSET(0x9733B0)

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUser_ControlSchemeChangeSyntax_TypeDefinitionIndex = 29095;

	struct alignas(4) InputUser_ControlSchemeChangeSyntax
	{
		::System::Int32 m_UserIndex; // 0x10

		::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax AndPairRemainingDevices()
		{
			return ((::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_CONTROLSCHEMECHANGESYNTAX_ANDPAIRREMAININGDEVICES_OFFSET))(this);
		}
	};
}

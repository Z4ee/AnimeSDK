#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTSUPPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C0B4490)

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int XInputSupport_TypeDefinitionIndex = 29091;

	class XInputSupport : public ::System::Object
	{
	public:
		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTSUPPORT_INITIALIZE_OFFSET))();
		}
	};
}

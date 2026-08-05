#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRController.h"

#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE_SENDIMPULSE_OFFSET UNITYSDK_OFFSET(0x1F7EA4B0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7EA4F0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRControllerWithRumble_TypeDefinitionIndex = 32336;

	class XRControllerWithRumble : public ::UnityEngine::InputSystem::XR::XRController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE__CTOR_OFFSET))(this);
		}

		::System::Void SendImpulse(::System::Single amplitude, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE_SENDIMPULSE_OFFSET))(this, amplitude, duration);
		}
	};
}

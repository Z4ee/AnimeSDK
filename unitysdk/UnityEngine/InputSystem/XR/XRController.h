#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/TrackedDevice.h"

#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1B400F80)
#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_GET_LEFTHAND_OFFSET UNITYSDK_OFFSET(0x1B400E60)
#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_GET_RIGHTHAND_OFFSET UNITYSDK_OFFSET(0x1B400EF0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B401160)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRController_TypeDefinitionIndex = 29059;

	class XRController : public ::UnityEngine::InputSystem::TrackedDevice
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::XR::XRController* get_leftHand()
		{
			return ((::UnityEngine::InputSystem::XR::XRController*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_GET_LEFTHAND_OFFSET))();
		}

		static ::UnityEngine::InputSystem::XR::XRController* get_rightHand()
		{
			return ((::UnityEngine::InputSystem::XR::XRController*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_GET_RIGHTHAND_OFFSET))();
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLER_FINISHSETUP_OFFSET))(this);
		}
	};
}

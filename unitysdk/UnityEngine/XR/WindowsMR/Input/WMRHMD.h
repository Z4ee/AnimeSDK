#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRHMD.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D8E2CC0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_GET_USERPRESENCE_OFFSET UNITYSDK_OFFSET(0x1D8E2CA0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_SET_USERPRESENCE_OFFSET UNITYSDK_OFFSET(0x1D8E2CB0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E2D10)

namespace UnityEngine::XR::WindowsMR::Input
{
	inline static constexpr unsigned int WMRHMD_TypeDefinitionIndex = 31518;

	class WMRHMD : public ::UnityEngine::InputSystem::XR::XRHMD
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_GET_USERPRESENCE_OFFSET))(this);
		}

		::System::Void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_SET_USERPRESENCE_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRHMD_FINISHSETUP_OFFSET))(this);
		}
	};
}

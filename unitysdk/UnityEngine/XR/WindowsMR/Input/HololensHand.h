#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRController.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1B4013F0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_AIRTAP_OFFSET UNITYSDK_OFFSET(0x1B401390)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B401370)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_SOURCELOSSMITIGATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B4013D0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_SOURCELOSSRISK_OFFSET UNITYSDK_OFFSET(0x1B4013B0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_AIRTAP_OFFSET UNITYSDK_OFFSET(0x1B4013A0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B401380)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_SOURCELOSSMITIGATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B4013E0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_SOURCELOSSRISK_OFFSET UNITYSDK_OFFSET(0x1B4013C0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4014A0)

namespace UnityEngine::XR::WindowsMR::Input
{
	inline static constexpr unsigned int HololensHand_TypeDefinitionIndex = 28863;

	class HololensHand : public ::UnityEngine::InputSystem::XR::XRController
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::Vector3Control* _sourceLossMitigationDirection_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::ButtonControl* _airTap_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::AxisControl* _sourceLossRisk_k__BackingField; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_DEVICEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_airTap()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_AIRTAP_OFFSET))(this);
		}

		::System::Void set_airTap(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_AIRTAP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_sourceLossRisk()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_SOURCELOSSRISK_OFFSET))(this);
		}

		::System::Void set_sourceLossRisk(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_SOURCELOSSRISK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_sourceLossMitigationDirection()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_GET_SOURCELOSSMITIGATIONDIRECTION_OFFSET))(this);
		}

		::System::Void set_sourceLossMitigationDirection(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_SET_SOURCELOSSMITIGATIONDIRECTION_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_HOLOLENSHAND_FINISHSETUP_OFFSET))(this);
		}
	};
}

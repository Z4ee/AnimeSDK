#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerAxis_t.h"

#define ZENFULCRUM_VR_OPENVRBINDING_VRCONTROLLERSTATE_T_PACKED_UNPACK_OFFSET UNITYSDK_OFFSET(0x2131AA0)
#define ZENFULCRUM_VR_OPENVRBINDING_VRCONTROLLERSTATE_T_PACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x2131A70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VRControllerState_t_Packed_TypeDefinitionIndex = 30349;

	struct alignas(4) VRControllerState_t_Packed
	{
		::System::UInt32 unPacketNum; // 0x10
		::System::UInt64 ulButtonPressed; // 0x14
		::System::UInt64 ulButtonTouched; // 0x1C
		::ZenFulcrum::VR::OpenVRBinding::VRControllerAxis_t rAxis0; // 0x24
		::ZenFulcrum::VR::OpenVRBinding::VRControllerAxis_t rAxis1; // 0x2C
		::ZenFulcrum::VR::OpenVRBinding::VRControllerAxis_t rAxis2; // 0x34
		::ZenFulcrum::VR::OpenVRBinding::VRControllerAxis_t rAxis3; // 0x3C
		::ZenFulcrum::VR::OpenVRBinding::VRControllerAxis_t rAxis4; // 0x44

		/*
		::System::Void _ctor(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t unpacked)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_VRCONTROLLERSTATE_T_PACKED__CTOR_OFFSET))(this, unpacked);
		}
		*/

		/*
		::System::Void Unpack(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& unpacked)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_VRCONTROLLERSTATE_T_PACKED_UNPACK_OFFSET))(this, unpacked);
		}
		*/
	};
}

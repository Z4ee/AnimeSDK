#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Data_t.h"

#define ZENFULCRUM_VR_OPENVRBINDING_VREVENT_T_PACKED_UNPACK_OFFSET UNITYSDK_OFFSET(0x3C98E30)
#define ZENFULCRUM_VR_OPENVRBINDING_VREVENT_T_PACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x3C98DE0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_t_Packed_TypeDefinitionIndex = 38006;

	struct alignas(4) VREvent_t_Packed
	{
		::System::UInt32 eventType; // 0x10
		::System::UInt32 trackedDeviceIndex; // 0x14
		::System::Single eventAgeSeconds; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Data_t data; // 0x1C

		/*
		::System::Void _ctor(::ZenFulcrum::VR::OpenVRBinding::VREvent_t a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_VREVENT_T_PACKED__CTOR_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void Unpack(::ZenFulcrum::VR::OpenVRBinding::VREvent_t& a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_VREVENT_T_PACKED_UNPACK_OFFSET))(this, a1);
		}
		*/
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraFrameType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CameraVideoStreamFrameHeader_t_TypeDefinitionIndex = 37153;

	struct alignas(4) CameraVideoStreamFrameHeader_t
	{
		::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraFrameType eFrameType; // 0x10
		::System::UInt32 nWidth; // 0x14
		::System::UInt32 nHeight; // 0x18
		::System::UInt32 nBytesPerPixel; // 0x1C
		::System::UInt32 nFrameSequence; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t standingTrackedDevicePose; // 0x24
	};
}

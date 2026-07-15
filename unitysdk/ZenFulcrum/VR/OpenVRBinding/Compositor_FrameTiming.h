#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int Compositor_FrameTiming_TypeDefinitionIndex = 37155;

	struct alignas(8) Compositor_FrameTiming
	{
		::System::UInt32 m_nSize; // 0x10
		::System::UInt32 m_nFrameIndex; // 0x14
		::System::UInt32 m_nNumFramePresents; // 0x18
		::System::UInt32 m_nNumMisPresented; // 0x1C
		::System::UInt32 m_nNumDroppedFrames; // 0x20
		::System::UInt32 m_nReprojectionFlags; // 0x24
		::System::Double m_flSystemTimeInSeconds; // 0x28
		::System::Single m_flPreSubmitGpuMs; // 0x30
		::System::Single m_flPostSubmitGpuMs; // 0x34
		::System::Single m_flTotalRenderGpuMs; // 0x38
		::System::Single m_flCompositorRenderGpuMs; // 0x3C
		::System::Single m_flCompositorRenderCpuMs; // 0x40
		::System::Single m_flCompositorIdleCpuMs; // 0x44
		::System::Single m_flClientFrameIntervalMs; // 0x48
		::System::Single m_flPresentCallCpuMs; // 0x4C
		::System::Single m_flWaitForPresentCpuMs; // 0x50
		::System::Single m_flSubmitFrameMs; // 0x54
		::System::Single m_flWaitGetPosesCalledMs; // 0x58
		::System::Single m_flNewPosesReadyMs; // 0x5C
		::System::Single m_flNewFrameReadyMs; // 0x60
		::System::Single m_flCompositorUpdateStartMs; // 0x64
		::System::Single m_flCompositorUpdateEndMs; // 0x68
		::System::Single m_flCompositorRenderStartMs; // 0x6C
		::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t m_HmdPose; // 0x70
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int Compositor_CumulativeStats_TypeDefinitionIndex = 37156;

	struct alignas(4) Compositor_CumulativeStats
	{
		::System::UInt32 m_nPid; // 0x10
		::System::UInt32 m_nNumFramePresents; // 0x14
		::System::UInt32 m_nNumDroppedFrames; // 0x18
		::System::UInt32 m_nNumReprojectedFrames; // 0x1C
		::System::UInt32 m_nNumFramePresentsOnStartup; // 0x20
		::System::UInt32 m_nNumDroppedFramesOnStartup; // 0x24
		::System::UInt32 m_nNumReprojectedFramesOnStartup; // 0x28
		::System::UInt32 m_nNumLoading; // 0x2C
		::System::UInt32 m_nNumFramePresentsLoading; // 0x30
		::System::UInt32 m_nNumDroppedFramesLoading; // 0x34
		::System::UInt32 m_nNumReprojectedFramesLoading; // 0x38
		::System::UInt32 m_nNumTimedOut; // 0x3C
		::System::UInt32 m_nNumFramePresentsTimedOut; // 0x40
		::System::UInt32 m_nNumDroppedFramesTimedOut; // 0x44
		::System::UInt32 m_nNumReprojectedFramesTimedOut; // 0x48
	};
}

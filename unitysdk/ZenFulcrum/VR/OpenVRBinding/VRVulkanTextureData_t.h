#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VRVulkanTextureData_t_TypeDefinitionIndex = 37124;

	struct alignas(8) VRVulkanTextureData_t
	{
		::System::UInt64 m_nImage; // 0x10
		::System::IntPtr m_pDevice; // 0x18
		::System::IntPtr m_pPhysicalDevice; // 0x20
		::System::IntPtr m_pInstance; // 0x28
		::System::IntPtr m_pQueue; // 0x30
		::System::UInt32 m_nQueueFamilyIndex; // 0x38
		::System::UInt32 m_nWidth; // 0x3C
		::System::UInt32 m_nHeight; // 0x40
		::System::UInt32 m_nFormat; // 0x44
		::System::UInt32 m_nSampleCount; // 0x48
	};
}

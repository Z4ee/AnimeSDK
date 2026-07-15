#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int COpenVRContext_TypeDefinitionIndex = 37170;

	struct alignas(8) COpenVRContext
	{
		::System::IntPtr m_pVRSystem; // 0x10
		::System::IntPtr m_pVRChaperone; // 0x18
		::System::IntPtr m_pVRChaperoneSetup; // 0x20
		::System::IntPtr m_pVRCompositor; // 0x28
		::System::IntPtr m_pVROverlay; // 0x30
		::System::IntPtr m_pVRResources; // 0x38
		::System::IntPtr m_pVRRenderModels; // 0x40
		::System::IntPtr m_pVRExtendedDisplay; // 0x48
		::System::IntPtr m_pVRSettings; // 0x50
		::System::IntPtr m_pVRApplications; // 0x58
		::System::IntPtr m_pVRTrackedCamera; // 0x60
		::System::IntPtr m_pVRScreenshots; // 0x68
		::System::IntPtr m_pVRDriverManager; // 0x70
	};
}

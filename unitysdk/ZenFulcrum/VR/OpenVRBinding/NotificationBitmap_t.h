#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int NotificationBitmap_t_TypeDefinitionIndex = 37169;

	struct alignas(8) NotificationBitmap_t
	{
		::System::IntPtr m_pImageData; // 0x10
		::System::Int32 m_nWidth; // 0x18
		::System::Int32 m_nHeight; // 0x1C
		::System::Int32 m_nBytesPerPixel; // 0x20
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EColorSpace.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETextureType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int Texture_t_TypeDefinitionIndex = 37120;

	struct alignas(8) Texture_t
	{
		::System::IntPtr handle; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::ETextureType eType; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::EColorSpace eColorSpace; // 0x1C
	};
}

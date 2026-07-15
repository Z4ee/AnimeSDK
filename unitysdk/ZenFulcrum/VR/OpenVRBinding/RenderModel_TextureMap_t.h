#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int RenderModel_TextureMap_t_TypeDefinitionIndex = 37164;

	struct alignas(8) RenderModel_TextureMap_t
	{
		::System::Char unWidth; // 0x10
		::System::Char unHeight; // 0x12
		::System::IntPtr rubTextureMapData; // 0x18
	};
}

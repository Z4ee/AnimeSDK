#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXResource_TextureInfo_TypeDefinitionIndex = 4081;

	struct alignas(4) AstraFXResource_TextureInfo
	{
		::UnityEngine::Rendering::TextureDimension dim; // 0x10
		::UnityEngine::Experimental::Rendering::GraphicsFormat format; // 0x14
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C
		::System::Int32 depth; // 0x20
		::System::Int32 mipLevels; // 0x24
	};
}

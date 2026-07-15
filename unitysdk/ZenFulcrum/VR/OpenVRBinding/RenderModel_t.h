#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int RenderModel_t_TypeDefinitionIndex = 37166;

	struct alignas(8) RenderModel_t
	{
		::System::IntPtr rVertexData; // 0x10
		::System::UInt32 unVertexCount; // 0x18
		::System::IntPtr rIndexData; // 0x20
		::System::UInt32 unTriangleCount; // 0x28
		::System::Int32 diffuseTextureId; // 0x2C
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int HiddenAreaMesh_t_TypeDefinitionIndex = 37148;

	struct alignas(8) HiddenAreaMesh_t
	{
		::System::IntPtr pVertexData; // 0x10
		::System::UInt32 unTriangleCount; // 0x18
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector3_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int RenderModel_Vertex_t_TypeDefinitionIndex = 37163;

	struct alignas(4) RenderModel_Vertex_t
	{
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vPosition; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::HmdVector3_t vNormal; // 0x1C
		::System::Single rfTextureCoord0; // 0x28
		::System::Single rfTextureCoord1; // 0x2C
	};
}

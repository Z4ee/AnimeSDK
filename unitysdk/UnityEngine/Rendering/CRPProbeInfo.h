#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPProbeInfo_TypeDefinitionIndex = 4865;

	struct alignas(4) CRPProbeInfo
	{
		::UnityEngine::Matrix4x4 probe2World; // 0x10
		::UnityEngine::Matrix4x4 world2probeNoScale; // 0x50
		::UnityEngine::Matrix4x4 probeRot; // 0x90
		::UnityEngine::Vector4 probeParam; // 0xD0
		::System::Int32 rampTexID; // 0xE0
		::UnityEngine::Matrix4x4 stencil2World; // 0xE4
		::System::Int32 baseProbeId; // 0x124
		::System::Int32 probeRangeMode; // 0x128
		::System::Boolean blendOnBase; // 0x12C
		::System::Int32 customProbeQualityFilter; // 0x130
	};
}

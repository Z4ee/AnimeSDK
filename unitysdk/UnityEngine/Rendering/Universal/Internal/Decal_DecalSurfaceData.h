#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Decal_DecalSurfaceData_TypeDefinitionIndex = 27081;

	struct alignas(4) Decal_DecalSurfaceData
	{
		::UnityEngine::Vector4 baseColor; // 0x10
		::UnityEngine::Vector4 normalWS; // 0x20
		::UnityEngine::Vector4 mask; // 0x30
		::UnityEngine::Vector3 emissive; // 0x40
		::UnityEngine::Vector2 MAOSBlend; // 0x4C
		::System::UInt32 HTileMask; // 0x54
	};
}

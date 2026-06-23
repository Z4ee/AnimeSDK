#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WaterGen_Vector4Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterGen_RenderPatch_TypeDefinitionIndex = 26766;

	struct alignas(4) WaterGen_RenderPatch
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::UInt32 lod; // 0x1C
		::UnityEngine::Rendering::Universal::WaterGen_Vector4Int lodTrans; // 0x20
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPPreConfig_TypeDefinitionIndex = 4849;

	struct alignas(8) CRPPreConfig
	{
		::System::Int32 HalfResTransparent; // 0x10
		::System::Single EyeHairDistance; // 0x14
		::System::Single OutlineDistance; // 0x18
		::System::Single OutlineMinScreenSize; // 0x1C
		::System::Single MotionVectorDistance; // 0x20
		::System::Single DecalDistance; // 0x24
		::System::Single DecalMinScreenSize; // 0x28
		::System::UInt64 _Flag; // 0x30
	};
}

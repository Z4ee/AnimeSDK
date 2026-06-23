#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAP::Rendering
{
	inline static constexpr unsigned int PrepareLightingDataResults_TypeDefinitionIndex = 6134;

	struct alignas(4) PrepareLightingDataResults
	{
		::System::Int32 LightCount; // 0x10
		::System::Int32 LightCountForChar; // 0x14
		::System::Int32 EnvLightCount; // 0x18
		::System::Int32 WorldLightCount; // 0x1C
		::System::Int32 WorldLightCountForChar; // 0x20
	};
}

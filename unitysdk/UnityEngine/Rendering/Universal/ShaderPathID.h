#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderPathID_TypeDefinitionIndex = 26992;

	enum class ShaderPathID : ::System::Int32
	{
		Count = 8,
		Unlit = 2,
		Lit = 0,
		ParticlesSimpleLit = 5,
		TerrainLit = 3,
		SimpleLit = 1,
		ParticlesLit = 4,
		ParticlesUnlit = 6,
		BakedLit = 7,
	};
}

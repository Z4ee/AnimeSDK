#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderPathID_TypeDefinitionIndex = 30227;

	enum class ShaderPathID : ::System::Int32
	{
		Lit = 0,
		SimpleLit = 1,
		Unlit = 2,
		TerrainLit = 3,
		ParticlesLit = 4,
		ParticlesSimpleLit = 5,
		ParticlesUnlit = 6,
		BakedLit = 7,
		Count = 8,
	};
}

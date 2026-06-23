#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderPathID_TypeDefinitionIndex = 26882;

	enum class ShaderPathID : ::System::Int32
	{
		Count = 8,
		Lit = 0,
		ParticlesLit = 4,
		SimpleLit = 1,
		Unlit = 2,
		ParticlesSimpleLit = 5,
		BakedLit = 7,
		ParticlesUnlit = 6,
		TerrainLit = 3,
	};
}

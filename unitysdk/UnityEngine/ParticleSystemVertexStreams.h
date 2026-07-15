#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemVertexStreams_TypeDefinitionIndex = 5796;

	enum class ParticleSystemVertexStreams : ::System::Int32
	{
		Position = 1,
		Normal = 2,
		Tangent = 4,
		Color = 8,
		UV = 16,
		UV2BlendAndFrame = 32,
		CenterAndVertexID = 64,
		Size = 128,
		Rotation = 256,
		Velocity = 512,
		Lifetime = 1024,
		Custom1 = 2048,
		Custom2 = 4096,
		Random = 8192,
		None = 0,
		All = 2147483647,
	};
}

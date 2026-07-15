#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemShapeType_TypeDefinitionIndex = 5765;

	enum class ParticleSystemShapeType : ::System::Int32
	{
		Sphere = 0,
		SphereShell = 1,
		Hemisphere = 2,
		HemisphereShell = 3,
		Cone = 4,
		Box = 5,
		Mesh = 6,
		ConeShell = 7,
		ConeVolume = 8,
		ConeVolumeShell = 9,
		Circle = 10,
		CircleEdge = 11,
		SingleSidedEdge = 12,
		MeshRenderer = 13,
		SkinnedMeshRenderer = 14,
		BoxShell = 15,
		BoxEdge = 16,
		Donut = 17,
		Rectangle = 18,
		Sprite = 19,
		SpriteRenderer = 20,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int EngineRendererType_TypeDefinitionIndex = 6154;

	enum class EngineRendererType : ::System::Int32
	{
		Unknown = 0,
		Mesh = 1,
		SkinnedMesh = 2,
		Sprite = 3,
		Tilemap = 4,
		Trail = 5,
		Line = 6,
		ParticleSystem = 7,
		Billboard = 8,
		SpriteMask = 9,
		SpriteShape = 10,
		VFX = 11,
		PBDDeform = 12,
		PBDSkinnedMesh = 13,
	};
}

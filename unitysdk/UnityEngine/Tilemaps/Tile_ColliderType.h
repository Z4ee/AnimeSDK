#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int Tile_ColliderType_TypeDefinitionIndex = 89790;

	enum class Tile_ColliderType : ::System::Int32
	{
		None = 0,
		Sprite = 1,
		Grid = 2,
	};
}

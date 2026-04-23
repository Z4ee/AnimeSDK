#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TILECOORD__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TerrainMap_TileCoord_TypeDefinitionIndex = 5255;

	struct alignas(4) TerrainUtility_TerrainMap_TileCoord
	{
		::System::Int32 tileX; // 0x10
		::System::Int32 tileZ; // 0x14

		::System::Void _ctor(::System::Int32 tileX, ::System::Int32 tileZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TILECOORD__CTOR_OFFSET))(this, tileX, tileZ);
		}
	};
}

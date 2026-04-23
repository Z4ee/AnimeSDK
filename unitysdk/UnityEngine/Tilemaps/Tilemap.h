#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GridLayout.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A503390)
#define UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_OFFSET UNITYSDK_OFFSET(0x1A502F90)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int Tilemap_TypeDefinitionIndex = 5558;

	class Tilemap : public ::UnityEngine::GridLayout
	{
	public:
		::System::Void RefreshTile(::UnityEngine::Vector3Int position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_OFFSET))(this, position);
		}

		::System::Void RefreshTile_Injected(::UnityEngine::Vector3Int& position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int&))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_INJECTED_OFFSET))(this, position);
		}
	};
}

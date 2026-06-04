#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GridLayout.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B34E3D0)
#define UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_OFFSET UNITYSDK_OFFSET(0x1B34DFD0)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int Tilemap_TypeDefinitionIndex = 5835;

	class Tilemap : public ::UnityEngine::GridLayout
	{
	public:
		::System::Void RefreshTile(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_OFFSET))(this, a1);
		}

		::System::Void RefreshTile_Injected(::UnityEngine::Vector3Int& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int&))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_INJECTED_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GridLayout.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8817A0)
#define UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_OFFSET UNITYSDK_OFFSET(0x1E881300)
#define UNITYENGINE_TILEMAPS_TILEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8817B0)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int Tilemap_TypeDefinitionIndex = 89792;

	class Tilemap : public ::UnityEngine::GridLayout
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAP__CTOR_OFFSET))(this);
		}

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

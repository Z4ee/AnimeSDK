#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Tilemaps/TileAnimationData.h"
#include "unitysdk/UnityEngine/Tilemaps/TileData.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Tilemaps { class ITilemap; }

#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATANOREF_OFFSET UNITYSDK_OFFSET(0x1C551B70)
#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x1C551B60)
#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATANOREF_OFFSET UNITYSDK_OFFSET(0x1C551A90)
#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATA_OFFSET UNITYSDK_OFFSET(0x1C551A80)
#define UNITYENGINE_TILEMAPS_TILEBASE_REFRESHTILE_OFFSET UNITYSDK_OFFSET(0x1C551A40)
#define UNITYENGINE_TILEMAPS_TILEBASE_STARTUP_OFFSET UNITYSDK_OFFSET(0x1C551BD0)
#define UNITYENGINE_TILEMAPS_TILEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5519E0)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TileBase_TypeDefinitionIndex = 84212;

	class TileBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE__CTOR_OFFSET))(this);
		}

		::System::Void RefreshTile(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_REFRESHTILE_OFFSET))(this, position, tilemap);
		}

		::System::Void GetTileData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::Tilemaps::TileData& tileData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::Tilemaps::TileData&))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATA_OFFSET))(this, position, tilemap, tileData);
		}

		::UnityEngine::Tilemaps::TileData GetTileDataNoRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap)
		{
			return ((::UnityEngine::Tilemaps::TileData(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATANOREF_OFFSET))(this, position, tilemap);
		}

		::System::Boolean GetTileAnimationData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::Tilemaps::TileAnimationData& tileAnimationData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::Tilemaps::TileAnimationData&))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATA_OFFSET))(this, position, tilemap, tileAnimationData);
		}

		::UnityEngine::Tilemaps::TileAnimationData GetTileAnimationDataNoRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap)
		{
			return ((::UnityEngine::Tilemaps::TileAnimationData(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATANOREF_OFFSET))(this, position, tilemap);
		}

		::System::Boolean StartUp(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_STARTUP_OFFSET))(this, position, tilemap, go);
		}
	};
}

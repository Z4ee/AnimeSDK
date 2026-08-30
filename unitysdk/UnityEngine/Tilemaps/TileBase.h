#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Tilemaps/TileAnimationData.h"
#include "unitysdk/UnityEngine/Tilemaps/TileData.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Tilemaps { class ITilemap; }

#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATANOREF_OFFSET UNITYSDK_OFFSET(0x1F0112F0)
#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x1F0112E0)
#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATANOREF_OFFSET UNITYSDK_OFFSET(0x1F011190)
#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATA_OFFSET UNITYSDK_OFFSET(0x1F011180)
#define UNITYENGINE_TILEMAPS_TILEBASE_REFRESHTILE_OFFSET UNITYSDK_OFFSET(0x1F011140)
#define UNITYENGINE_TILEMAPS_TILEBASE_STARTUP_OFFSET UNITYSDK_OFFSET(0x1F0113C0)
#define UNITYENGINE_TILEMAPS_TILEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F011130)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TileBase_TypeDefinitionIndex = 5849;

	class TileBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE__CTOR_OFFSET))(this);
		}

		::System::Void RefreshTile(::UnityEngine::Vector3Int a1, ::UnityEngine::Tilemaps::ITilemap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_REFRESHTILE_OFFSET))(this, a1, a2);
		}

		::System::Void GetTileData(::UnityEngine::Vector3Int a1, ::UnityEngine::Tilemaps::ITilemap* a2, ::UnityEngine::Tilemaps::TileData& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::Tilemaps::TileData&))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATA_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Tilemaps::TileData GetTileDataNoRef(::UnityEngine::Vector3Int a1, ::UnityEngine::Tilemaps::ITilemap* a2)
		{
			return ((::UnityEngine::Tilemaps::TileData(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATANOREF_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetTileAnimationData(::UnityEngine::Vector3Int a1, ::UnityEngine::Tilemaps::ITilemap* a2, ::UnityEngine::Tilemaps::TileAnimationData& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::Tilemaps::TileAnimationData&))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATA_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Tilemaps::TileAnimationData GetTileAnimationDataNoRef(::UnityEngine::Vector3Int a1, ::UnityEngine::Tilemaps::ITilemap* a2)
		{
			return ((::UnityEngine::Tilemaps::TileAnimationData(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATANOREF_OFFSET))(this, a1, a2);
		}

		::System::Boolean StartUp(::UnityEngine::Vector3Int a1, ::UnityEngine::Tilemaps::ITilemap* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_STARTUP_OFFSET))(this, a1, a2, a3);
		}
	};
}

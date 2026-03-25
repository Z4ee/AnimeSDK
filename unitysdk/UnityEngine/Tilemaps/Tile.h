#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Tilemaps/TileBase.h"
#include "unitysdk/UnityEngine/Tilemaps/TileData.h"
#include "unitysdk/UnityEngine/Tilemaps/TileFlags.h"
#include "unitysdk/UnityEngine/Tilemaps/Tile_ColliderType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::Tilemaps { class ITilemap; }

#define UNITYENGINE_TILEMAPS_TILE_GETTILEDATA_OFFSET UNITYSDK_OFFSET(0x18AC7650)
#define UNITYENGINE_TILEMAPS_TILE_GET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x18AC7630)
#define UNITYENGINE_TILEMAPS_TILE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x18AC7580)
#define UNITYENGINE_TILEMAPS_TILE_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x18AC7610)
#define UNITYENGINE_TILEMAPS_TILE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x18AC75F0)
#define UNITYENGINE_TILEMAPS_TILE_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x18AC7560)
#define UNITYENGINE_TILEMAPS_TILE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18AC75A0)
#define UNITYENGINE_TILEMAPS_TILE_SET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x18AC7640)
#define UNITYENGINE_TILEMAPS_TILE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x18AC7590)
#define UNITYENGINE_TILEMAPS_TILE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x18AC7620)
#define UNITYENGINE_TILEMAPS_TILE_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x18AC7600)
#define UNITYENGINE_TILEMAPS_TILE_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x18AC7570)
#define UNITYENGINE_TILEMAPS_TILE_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18AC75D0)
#define UNITYENGINE_TILEMAPS_TILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC7710)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int Tile_TypeDefinitionIndex = 5543;

	class Tile : public ::UnityEngine::Tilemaps::TileBase
	{
	public:
		::UnityEngine::Sprite* m_Sprite; // 0x18
		::UnityEngine::Color m_Color; // 0x20
		::UnityEngine::Matrix4x4 m_Transform; // 0x30
		::UnityEngine::GameObject* m_InstancedGameObject; // 0x70
		::UnityEngine::Tilemaps::TileFlags m_Flags; // 0x78
		::UnityEngine::Tilemaps::Tile_ColliderType m_ColliderType; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Sprite* get_sprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_SPRITE_OFFSET))(this);
		}

		::System::Void set_sprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_SPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_COLOR_OFFSET))(this, value);
		}

		::UnityEngine::Matrix4x4 get_transform()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_transform(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_TRANSFORM_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_gameObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_GAMEOBJECT_OFFSET))(this, value);
		}

		::UnityEngine::Tilemaps::TileFlags get_flags()
		{
			return ((::UnityEngine::Tilemaps::TileFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_flags(::UnityEngine::Tilemaps::TileFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Tilemaps::TileFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_FLAGS_OFFSET))(this, value);
		}

		::UnityEngine::Tilemaps::Tile_ColliderType get_colliderType()
		{
			return ((::UnityEngine::Tilemaps::Tile_ColliderType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_COLLIDERTYPE_OFFSET))(this);
		}

		::System::Void set_colliderType(::UnityEngine::Tilemaps::Tile_ColliderType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Tilemaps::Tile_ColliderType))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_COLLIDERTYPE_OFFSET))(this, value);
		}

		::System::Void GetTileData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::Tilemaps::TileData& tileData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::Tilemaps::TileData&))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GETTILEDATA_OFFSET))(this, position, tilemap, tileData);
		}
	};
}

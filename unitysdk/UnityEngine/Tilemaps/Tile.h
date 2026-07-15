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

#define UNITYENGINE_TILEMAPS_TILE_GETTILEDATA_OFFSET UNITYSDK_OFFSET(0x1D301CD0)
#define UNITYENGINE_TILEMAPS_TILE_GET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x1D301CB0)
#define UNITYENGINE_TILEMAPS_TILE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1D301C00)
#define UNITYENGINE_TILEMAPS_TILE_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1D301C90)
#define UNITYENGINE_TILEMAPS_TILE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D301C70)
#define UNITYENGINE_TILEMAPS_TILE_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1D301BE0)
#define UNITYENGINE_TILEMAPS_TILE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D301C20)
#define UNITYENGINE_TILEMAPS_TILE_SET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x1D301CC0)
#define UNITYENGINE_TILEMAPS_TILE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1D301C10)
#define UNITYENGINE_TILEMAPS_TILE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1D301CA0)
#define UNITYENGINE_TILEMAPS_TILE_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D301C80)
#define UNITYENGINE_TILEMAPS_TILE_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x1D301BF0)
#define UNITYENGINE_TILEMAPS_TILE_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D301C50)
#define UNITYENGINE_TILEMAPS_TILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D301D90)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int Tile_TypeDefinitionIndex = 5837;

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

		::System::Void set_sprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_SPRITE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_COLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 get_transform()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_transform(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_TRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_gameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_GAMEOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::Tilemaps::TileFlags get_flags()
		{
			return ((::UnityEngine::Tilemaps::TileFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_flags(::UnityEngine::Tilemaps::TileFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Tilemaps::TileFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_FLAGS_OFFSET))(this, a1);
		}

		::UnityEngine::Tilemaps::Tile_ColliderType get_colliderType()
		{
			return ((::UnityEngine::Tilemaps::Tile_ColliderType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_COLLIDERTYPE_OFFSET))(this);
		}

		::System::Void set_colliderType(::UnityEngine::Tilemaps::Tile_ColliderType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Tilemaps::Tile_ColliderType))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_COLLIDERTYPE_OFFSET))(this, a1);
		}

		::System::Void GetTileData(::UnityEngine::Vector3Int a1, ::UnityEngine::Tilemaps::ITilemap* a2, ::UnityEngine::Tilemaps::TileData& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::Tilemaps::TileData&))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GETTILEDATA_OFFSET))(this, a1, a2, a3);
		}
	};
}

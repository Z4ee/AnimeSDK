#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Tilemaps/TileFlags.h"
#include "unitysdk/UnityEngine/Tilemaps/Tile_ColliderType.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_TILEMAPS_TILEDATA_SET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x3893010)
#define UNITYENGINE_TILEMAPS_TILEDATA_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x3842610)
#define UNITYENGINE_TILEMAPS_TILEDATA_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x3893000)
#define UNITYENGINE_TILEMAPS_TILEDATA_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x60C50)
#define UNITYENGINE_TILEMAPS_TILEDATA_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0xC630)
#define UNITYENGINE_TILEMAPS_TILEDATA_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x3899B60)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TileData_TypeDefinitionIndex = 5838;

	struct alignas(8) TileData
	{
		::UnityEngine::Sprite* m_Sprite; // 0x10
		::UnityEngine::Color m_Color; // 0x18
		::UnityEngine::Matrix4x4 m_Transform; // 0x28
		::UnityEngine::GameObject* m_GameObject; // 0x68
		::UnityEngine::Tilemaps::TileFlags m_Flags; // 0x70
		::UnityEngine::Tilemaps::Tile_ColliderType m_ColliderType; // 0x74

		::System::Void set_sprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_SPRITE_OFFSET))(this, a1);
		}

		::System::Void set_color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_COLOR_OFFSET))(this, a1);
		}

		::System::Void set_transform(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_TRANSFORM_OFFSET))(this, a1);
		}

		::System::Void set_gameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_GAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void set_flags(::UnityEngine::Tilemaps::TileFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Tilemaps::TileFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_FLAGS_OFFSET))(this, a1);
		}

		::System::Void set_colliderType(::UnityEngine::Tilemaps::Tile_ColliderType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Tilemaps::Tile_ColliderType))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_COLLIDERTYPE_OFFSET))(this, a1);
		}
	};
}

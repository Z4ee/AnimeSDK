#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace UnityEngine::Tilemaps { class Tilemap; }

#define UNITYENGINE_TILEMAPS_ITILEMAP_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C551750)
#define UNITYENGINE_TILEMAPS_ITILEMAP_REFRESHTILE_OFFSET UNITYSDK_OFFSET(0x1C551700)
#define UNITYENGINE_TILEMAPS_ITILEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5516F0)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int ITilemap_TypeDefinitionIndex = 84209;

	class ITilemap : public ::System::Object
	{
	public:
		static ::UnityEngine::Tilemaps::ITilemap** StaticGet_s_Instance()
		{
			return (::UnityEngine::Tilemaps::ITilemap**)Il2CppClass::FromTypeDefinitionIndex(ITilemap_TypeDefinitionIndex)->GetStaticField(0x49AF0);
		}
		::UnityEngine::Tilemaps::Tilemap* m_Tilemap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_ITILEMAP__CTOR_OFFSET))(this);
		}

		::System::Void RefreshTile(::UnityEngine::Vector3Int position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_ITILEMAP_REFRESHTILE_OFFSET))(this, position);
		}

		static ::UnityEngine::Tilemaps::ITilemap* CreateInstance()
		{
			return ((::UnityEngine::Tilemaps::ITilemap*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_ITILEMAP_CREATEINSTANCE_OFFSET))();
		}
	};
}

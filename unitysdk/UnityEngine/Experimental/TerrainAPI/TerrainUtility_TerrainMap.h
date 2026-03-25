#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/TerrainAPI/TerrainUtility_TerrainMap_ErrorCode.h"
#include "unitysdk/UnityEngine/Experimental/TerrainAPI/TerrainUtility_TerrainMap_TileCoord.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine::Experimental::TerrainAPI { class TerrainUtility_TerrainMap_TerrainFilter; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_ADDTERRAININTERNAL_OFFSET UNITYSDK_OFFSET(0x18ABC790)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_CREATEFROMPLACEMENT_1_OFFSET UNITYSDK_OFFSET(0x18ABB8A0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_CREATEFROMPLACEMENT_OFFSET UNITYSDK_OFFSET(0x18ABACA0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_GETTERRAIN_OFFSET UNITYSDK_OFFSET(0x18ABB6F0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TRYTOADDTERRAIN_OFFSET UNITYSDK_OFFSET(0x18ABC520)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_VALIDATETERRAIN_OFFSET UNITYSDK_OFFSET(0x18ABC940)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_VALIDATE_OFFSET UNITYSDK_OFFSET(0x18ABC640)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABBF20)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TerrainMap_TypeDefinitionIndex = 5242;

	class TerrainUtility_TerrainMap : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 m_patchSize; // 0x10
		::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode m_errorCode; // 0x1C
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TileCoord, ::UnityEngine::Terrain*>* m_terrainTiles; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Terrain* GetTerrain(::System::Int32 tileX, ::System::Int32 tileZ)
		{
			return ((::UnityEngine::Terrain*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_GETTERRAIN_OFFSET))(this, tileX, tileZ);
		}

		static ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap* CreateFromPlacement(::UnityEngine::Terrain* originTerrain, ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter* filter, ::System::Boolean fullValidation)
		{
			return ((::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap*(*)(::UnityEngine::Terrain*, ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_CREATEFROMPLACEMENT_OFFSET))(originTerrain, filter, fullValidation);
		}

		static ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap* CreateFromPlacement_1(::UnityEngine::Vector2 gridOrigin, ::UnityEngine::Vector2 gridSize, ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter* filter, ::System::Boolean fullValidation)
		{
			return ((::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_CREATEFROMPLACEMENT_1_OFFSET))(gridOrigin, gridSize, filter, fullValidation);
		}

		::System::Void AddTerrainInternal(::System::Int32 x, ::System::Int32 z, ::UnityEngine::Terrain* terrain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_ADDTERRAININTERNAL_OFFSET))(this, x, z, terrain);
		}

		::System::Boolean TryToAddTerrain(::System::Int32 tileX, ::System::Int32 tileZ, ::UnityEngine::Terrain* terrain)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TRYTOADDTERRAIN_OFFSET))(this, tileX, tileZ, terrain);
		}

		::System::Void ValidateTerrain(::System::Int32 tileX, ::System::Int32 tileZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_VALIDATETERRAIN_OFFSET))(this, tileX, tileZ);
		}

		::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode Validate()
		{
			return ((::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_VALIDATE_OFFSET))(this);
		}
	};
}

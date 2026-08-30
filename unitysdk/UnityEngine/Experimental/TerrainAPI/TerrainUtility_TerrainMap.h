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

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_ADDTERRAININTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFC44D0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_CREATEFROMPLACEMENT_1_OFFSET UNITYSDK_OFFSET(0x1EFC3B20)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_CREATEFROMPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1EFC3000)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_GETTERRAIN_OFFSET UNITYSDK_OFFSET(0x1EFC39A0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TRYTOADDTERRAIN_OFFSET UNITYSDK_OFFSET(0x1EFC4240)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_VALIDATETERRAIN_OFFSET UNITYSDK_OFFSET(0x1EFC4680)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1EFC4310)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC4190)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TerrainMap_TypeDefinitionIndex = 5334;

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

		::UnityEngine::Terrain* GetTerrain(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Terrain*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_GETTERRAIN_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap* CreateFromPlacement(::UnityEngine::Terrain* a1, ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap*(*)(::UnityEngine::Terrain*, ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_CREATEFROMPLACEMENT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap* CreateFromPlacement_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter* a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_CREATEFROMPLACEMENT_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void AddTerrainInternal(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Terrain* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_ADDTERRAININTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryToAddTerrain(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Terrain* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_TRYTOADDTERRAIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ValidateTerrain(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_VALIDATETERRAIN_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode Validate()
		{
			return ((::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP_VALIDATE_OFFSET))(this);
		}
	};
}

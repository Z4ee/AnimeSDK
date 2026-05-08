#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::TerrainAPI { class TerrainUtility_TerrainGroups; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_AUTOCONNECT_OFFSET UNITYSDK_OFFSET(0x1C39CC90)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_CLEARCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x1C39C3F0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_COLLECTTERRAINS_OFFSET UNITYSDK_OFFSET(0x1C39C4B0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_HASVALIDTERRAINS_OFFSET UNITYSDK_OFFSET(0x1C39C3A0)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TypeDefinitionIndex = 30931;

	class TerrainUtility : public ::System::Object
	{
	public:
		static ::System::Boolean HasValidTerrains()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_HASVALIDTERRAINS_OFFSET))();
		}

		static ::System::Void ClearConnectivity()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_CLEARCONNECTIVITY_OFFSET))();
		}

		static ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainGroups* CollectTerrains(::System::Boolean onlyAutoConnectedTerrains)
		{
			return ((::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainGroups*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_COLLECTTERRAINS_OFFSET))(onlyAutoConnectedTerrains);
		}

		static ::System::Void AutoConnect()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_AUTOCONNECT_OFFSET))();
		}
	};
}

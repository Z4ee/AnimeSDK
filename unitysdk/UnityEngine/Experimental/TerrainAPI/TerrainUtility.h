#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::TerrainAPI { class TerrainUtility_TerrainGroups; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_AUTOCONNECT_OFFSET UNITYSDK_OFFSET(0x1B3429D0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_CLEARCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x1B342300)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_COLLECTTERRAINS_OFFSET UNITYSDK_OFFSET(0x1B3423B0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_HASVALIDTERRAINS_OFFSET UNITYSDK_OFFSET(0x1B3422B0)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TypeDefinitionIndex = 5328;

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

		static ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainGroups* CollectTerrains(::System::Boolean a1)
		{
			return ((::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainGroups*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_COLLECTTERRAINS_OFFSET))(a1);
		}

		static ::System::Void AutoConnect()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_AUTOCONNECT_OFFSET))();
		}
	};
}
